#include "stdafx.h" // Must be first in this file.
#include <cstring>
#include <cassert>
#include "strtrim.h"
#include <cstdio>
#include <ctype.h>
#include <iostream>


char* strtrim(char str[])
{
	char a[] = { "            Hello World          " };
	char* begin = a;


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
	
	char* foundcNull = foundChar; 
	char* cpFcNull = foundChar;

	while (!isspace(*foundcNull))
	{
		--foundcNull; 
	}
	
	while (isspace(*foundcNull))
	{
		foundcNull--;
	}
			size_t size = strlen(a); 
			memmove(foundcNull, cpFcNull, size);
			memmove(a, charFirst, size + 1);

			std::cout << a;
		
	return str;
}

