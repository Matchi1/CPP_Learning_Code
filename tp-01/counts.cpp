#include <iostream>
#include <cstring>
#include <vector>

unsigned int ascii(char letter)
{
	if ('A' <= letter && letter <= 'Z')
	{
		return letter - 'A';
	}
	return letter - 'a';
}

void count_lower(std::vector<unsigned int>& counts, std::string word) {
	for(auto letter : word)
	{
		int index = ascii(letter);
		(counts[index])++;
	}
}

void display_words(const std::vector<std::string>& words)
{
	for (auto word : words)
	{
		std::cout << word << std::endl;
	}
}

void display_lower_occ(const std::vector<unsigned int>& counts)
{
	for (auto i = 0; i < counts.size(); i++)
	{
		if (counts[i] != 0)
		{
			std::cout << (char)(i + 'a') << " : " << counts[i] << std::endl;
		}
	}
}

int main(void)
{
	std::string word;
	std::vector<unsigned int> counts_letter (26);
	std::vector<std::string> words;
	while(word != "QUIT")
	{
		std::cin >> word;
		words.push_back(word);
		count_lower(counts_letter, word);
	}
	display_lower_occ(counts_letter);
	display_words(words);
	return 0;
}
