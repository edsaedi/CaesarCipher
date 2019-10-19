#include<iostream>;
#include"Cipher.h";
#include<string>;
#include <vector>
int main()
{
	/*std::string text;
	int key;
	std::cout << "Enter in a text to decipher." << std::endl;
	std::cin >> text;
	std::cout << "Enter in a key" << std::endl;
	std::cin >> key;
	Cipher cipher;
	std::string text2 = cipher.Encrypt(text, key);
	std::cout << text2;

	std::cout << cipher.Decrypt(text2, key);*/

	std::string text;
	std::cout << "Enter in a text to brute decript." << std::endl;
	/*std::cin >> text;*/
	std::getline(std::cin, text);

	Cipher cipher;
	auto combos = cipher.BruteDecrypt(text);
	for (int i = 0; i < combos.size(); i++)
	{
		std::cout << combos[i] << std::endl;
	}

	/*std::vector<int> numbers;

	numbers.push_back(5);
	numbers.push_back(10);
	numbers.pop_back();*/


	return 0;
}