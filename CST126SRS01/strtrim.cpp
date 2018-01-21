
#include "stdafx.h"
#include "strtrim.h"
#include <ctype.h>
#include <cstring>

char* strtrim(char str[])
{
	if (str != nullptr && *str != '\0')
	{

		//Pointer to beginning of str
		const char* firstChar = str;

		//Pointer to end of string
		char* lastChar = strchr(str, '\0') - 1;


		// Go to last char (nullchar - 1) and go left until you run into your first non-whitespace char
		while (isspace(*lastChar))
		{
			if (firstChar == lastChar) break;
			lastChar--;
		}

		//put a nullchar after the last non-whitespace char
		*(lastChar + 1) = '\0';


		// Size of str (smaller due to the shortening of the end of str
		size_t size = strlen(str);

		// Take off front side whitespace
		while (isspace(*firstChar)) firstChar++;

		// Move the first nonwhitespace charcter to the first element of the string str.
		memmove(str, firstChar, size + 1);
	}

	return str; 

}
