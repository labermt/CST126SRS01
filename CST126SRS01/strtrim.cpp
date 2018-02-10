#include "stdafx.h" // Must be first in this file.
#include <cstring>
#include <cassert>
#include <cctype>
#include <iostream>
#include "strtrim.h"


char* strtrim(char str[])
{
	char* begin = str;

	if (str != nullptr && *str != '\0')
	{
		while (isspace(*begin))
		{
			++begin;
		}

		char* charFirst = begin;
		char* foundChar = begin;

		while (*foundChar != '\0')
		{
			++foundChar;
		}

		char* foundcNull = foundChar - 1;
		char* cpFcNull = foundChar;

		//while (isspace(*foundcNull)) // Dead code. 
		//{
		//	if (foundcNull == str)
		//		foundcNull - 1;
		//		break;
		//	foundcNull--;
		//}
		size_t size = strlen(str);

		memmove(foundcNull + 1, cpFcNull, size); // Memory violation. Reading beyond the end of the string. 
		memmove(str, charFirst, size + 1);

		// TODO: Remove scaffolding: std::cout << str;

	}
	return str;
}

