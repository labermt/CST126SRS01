
#include "stdafx.h"
#include "strtrim.h"
#include <ctype.h>
#include <string>

char* strtrim(char str[])
{
	if (str == nullptr || *str == '\0') return str;

	//Pointer to beginning of str
	char* firstChar = &str[0];

	size_t size = sizeof(str);

	//Pointer to end of string
	char* lastChar = &str[size];


	//Does \t take up one char in memory?
	// HAVE TO REPEAT THESE!
	if (isspace(*firstChar)) firstChar++;
	if (isspace(*lastChar)) lastChar--;

	//Lenght of trimmed string, plus one for addition of null char
	const int lenghtOfTrimmed = lastChar - firstChar + 1;

	//how do I make this new array without memory leak? I would have to add it to the heap but couldn't get rid of it until later in main.cpp :(
	//char* trimStr[lenghtOfTrimmed] = 





	return 0; //This has to return a pointer to the new string that has been trimmed.

}
