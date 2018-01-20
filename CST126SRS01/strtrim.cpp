
#include "stdafx.h"
#include "strtrim.h"
#include <ctype.h>
#include <cstring>

char* strtrim(char str[])
{
	if (str == nullptr || *str == '\0') return str;

	//Pointer to beginning of str
	const char* firstChar = str;

	//Pointer to end of string
	char* lastChar = strchr(str, '\0') - 1;

	size_t size = strlen(str);

	while (isspace(*lastChar))
	{
		if (firstChar == lastChar) break;
		lastChar--;
	}
	*(lastChar + 1) = '\0';

	size = strlen(str);

	while (isspace(*firstChar)) firstChar++;

	memmove(str, firstChar, size + 1);


	return str; //This has to return a pointer to the new string that has been trimmed.

}
