#ifndef STRINGMANIP_H
#define StringManip_h
#include<iostream>
#include<string>

#define VOWEL_NUM 5

class StringManip
{
protected:
	char vowels[5];
	std::string output;

public: 
	StringManip();
	std::string PigLatin(std::string input);
	void UnitTest();
};


#endif // !STRINGMANIP_H
