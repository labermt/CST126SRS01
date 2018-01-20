// main.cpp : Defines the entry point for the console application.
// 

#include "stdafx.h" // Must be first in this file.
#include <cctype>
#include <cstddef>
#include <cstring>
#include <cassert>
#include "strtrim.h"

char* strtrim(char str[])
{
	char* const result = str; 
	// check for null pointers, empty strings, blank strings and very long strings
	// trimming the front of the string
	const char* front = str;
	while (!isspace(*front))
	{
		++front;
	}
	size_t len = strlen(front);
	memmove(str, front, len);

	// trimming th back of the string
	const char* back = str;
	while (!isspace(*back))
	{
		++back;
	}

	
	return result;
}

