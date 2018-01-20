
#include "stdafx.h"
#include "strtrim.h"
#include <ctype.h>
#include <string>

char* strtrim(char str[])
{
	//Pointer to beginning of str
	char* firstChar = &str[0];

	size_t size = sizeof(str);

	//Pointer to end of string
	char* lastChar = &str[size];

	if (str == nullptr || *str == '\0') return str;

	//Does \t take up one char in memory?
	if (isspace(*firstChar)) firstChar++;
	if (isspace(*lastChar)) lastChar--;

	//Lenght of trimmed string, plus one for addition of null char
	int lenghtOfTrimmed = lastChar - firstChar + 1;

	//how do I make this new array without memory leak? I would have to add it to the heap but couldn't get rid of it until later in main.cpp :(





	return 0; //This has to return a pointer to the new string that has been trimmed.

}
