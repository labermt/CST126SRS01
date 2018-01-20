
#include "stdafx.h"
#include "strtrim.h"
#include <ctype.h>
#include <string>

char* strtrim(char str[])
{
	char* const result = str;

	if (str == nullptr || *str == '\0') return str;

	//Pointer to beginning of str
	const char* firstChar = str;

	const size_t size = strlen(str) + 1;

	//Pointer to end of string
	char* lastChar = &str[size - 1];

	while (isspace(*firstChar)) firstChar++;

	memmove(str, firstChar, size);

	while (isspace(*lastChar)) lastChar--;

	*(lastChar + 1) = '\0';


	return str; //This has to return a pointer to the new string that has been trimmed.

}
