#pragma once
#include<string>
#include<vector>
class Cipher
{
public:
	char alphabet[26];
	std::vector<std::string> output;
	Cipher();
	~Cipher();
	std::string Encrypt(std::string text, int key);
	std::string Decrypt(std::string text, int key);
	std::vector<std::string> BruteDecrypt(std::string);
private:
};

