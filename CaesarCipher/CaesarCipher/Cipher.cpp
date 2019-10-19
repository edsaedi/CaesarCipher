#include "Cipher.h"

Cipher::Cipher()
{
	int start = 97;
	for (int i = 0; i < 26; i++)
	{
		alphabet[i] = (char)(start + i);
	}
}

Cipher::~Cipher()
{

}

//std::string Cipher::Encrypt(std::string text, int key)
//{
//	std::string output = "";
//	for (int i = 0; i < text.size(); i++)
//	{
//		char current = text.at(i);
//
//		int pos = -1;
//		for (int j = 0; j < 26; j++)
//		{
//			if (alphabet[j] == current)
//			{
//				pos = j;
//				break;
//
//			}
//		}
//
//
//		if (pos == -1)
//		{
//			output += current;
//		}
//		else
//		{
//			output += alphabet[(pos + key) % 26];
//		}
//
//
//		/*int index = (int)(text[i]);
//		if (index < 26)
//		{
//			text[i] = alphabet[index];
//		}*/
//	}
//	return output;
//}

std::string Cipher::Encrypt(std::string text, int key)
{
	std::string output = "";

	for (int i = 0; i < text.size(); i++)
	{
		char current = text[i];
		int position = -1;
		for (int j = 0; j < 26; j++)
		{
			if (current == alphabet[j])
			{
				position = j;
				break;
			}
		}

		if (position == -1)
		{
			output += current;
		}
		else
		{
			output += alphabet[(position + key) % 26];
		}
	}

	return output;
}

std::string Cipher::Decrypt(std::string text, int key)
{
	std::string output = "";

	for (int i = 0; i < text.size(); i++)
	{
		char current = text[i];
		int position = -1;
		for (int j = 0; j < 26; j++)
		{
			if (current == alphabet[j])
			{
				position = j;
				break;
			}
		}

		if (position == -1)
		{
			output += current;
		}
		else
		{

			int index = position - key;
			if (index < 0)
			{
				index *= -1;
				index = 26 - index;
			}
			output += alphabet[index % 26];
		}
	}
	return output;
}

std::vector<std::string> Cipher::BruteDecrypt(std::string text)
{
	output.clear();
	for (int i = 1; i < 26; i++)
	{
		//output.push_back(Encrypt(text, i));
		output.push_back(Decrypt(text, 26 - i));
	}

	return output;
}