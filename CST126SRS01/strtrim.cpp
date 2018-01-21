#include "stdafx.h"
#include <cctype>
#include <cstddef>
#include <cstring>
#include <iostream>
#include "strtrim.h"

using namespace std;

void strtrimbegin(char * str)
{
	const char const * begin = str;
	for (int i = 0; i < strlen(str); i++) {
		//find first non-space char
		if (!isspace(*(begin + i))) { //or use a while loop
			//character found, no more spaces at beginning
			begin += i;

			//move memory to the beginning, removing beginning spaces
			memmove(str, begin, strlen(begin));

			//prevent junk from filling ending memory
			*(str + strlen(begin)) = '\0';
			break;
		}
	}
}

void strtrimend(char * str)
{
	//find position of null char
	char * const nullchar = strchr(str, '\0');
	char * end = nullchar - 1;

	//go backwards and find the last non-space char
	while (isspace(*(end))) {
		end--;
	}

	//replace space with null char
	*(end + 1) = '\0';
}

char* strtrim(char str[])
{
	char * const result = str;

	//if cstring is a null pointer, return nullptr
	if (str == nullptr) {
		return nullptr;
	}

	//if strign is all spaces, replace with null char
	bool allSpaces = true;
	const char * testptr = str;
	while (allSpaces) {
		if (!isspace(*(testptr)) && *(testptr) == '\0') {
			//hit null char, string is all spaces
			*result = '\0';
			allSpaces = false;
		}
		else if (!isspace(*(testptr))) {
			//there are other chars
			allSpaces = false;
		}
		else {
			//space detected, keep going
			testptr++;
		}
	}

	//remove spaces if they exist
	if (strchr(str, ' ') != nullptr) {
		//there are spaces

		//remove beginning spaces
		strtrimbegin(str);

		//remove ending spaces / move null terminator to last position
		strtrimend(str);
	}
	
	return result;
}
