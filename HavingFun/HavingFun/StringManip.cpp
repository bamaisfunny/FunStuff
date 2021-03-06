#include "StringManip.h"
#include<iostream>
#include<string>

#define VERBOSE

StringManip::StringManip()
{
	 char vowels[] = { 'a', 'e', 'i', 'o', 'u' };
	 memcpy(this->vowels, vowels, sizeof(vowels));
}

std::string StringManip::PigLatin(std::string input)
{
#ifdef VERBOSE
	std::cout << "Called" << std::endl;
#endif

	std::string tmp;
	for (int i = 0; i < input.length(); i++)
	{
		for (int j = 0; j < VOWEL_NUM; j++)
		{
			if (input[i] == vowels[j])
			{
				if (i != 0)
				{
					std::string strtmp;
					for (int k = 0; k < i; k++)
					{
						strtmp += input[k];
					}
					for (int n = i; n < input.length(); n++)
					{
						tmp += input[n];
					}
					tmp += strtmp;
					tmp += "ay";
				}
				else
				{
					std::string strtmp = input;
					strtmp += "ay";
					return strtmp;
				}
			}
		}
	}
	return tmp;
}
void StringManip::UnitTest()
{
	std::cout << PigLatin("Hello") << std::endl;
}

