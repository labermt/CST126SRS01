#include "stdafx.h" // Must be first in this file.
#include <cstring>
#include <cassert>
#include "strtrim.h"
#include <cstdio>
#include <ctype.h>
#include <iostream>


char* strtrim(char str[])
{

	char* begin = str;

	if (str != nullptr && *str != '\0')
	{

		while (isspace(*begin))
		{
			++begin;
		}
		//std::cout << begin;
		char* charFirst = begin;
		char* foundChar = begin;

		while (*foundChar != '\0')
		{
			++foundChar;

		}

		char* foundcNull = foundChar - 1;
		char* cpFcNull = foundChar;

		
		while (isspace(*foundcNull))
		{
			if (foundcNull == str)
				foundcNull - 1; 
				break;
			foundcNull--;
			
		}
		size_t size = strlen(str);

		memmove(foundcNull + 1, cpFcNull, size);
		memmove(str, charFirst, size + 1);

		std::cout << str;

	}
	return str;
}

