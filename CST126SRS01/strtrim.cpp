
#include "stdafx.h"
#include "strtrim.h"
#include <cctype>  
#include <cstddef>  
#include <cstring> 
#include <iostream>

char* strtrim(char str[])
{
	auto* begin = str;
	auto* scan = str;
	char* end = nullptr;

	// checks for null ptr or end of string as first character and exits
	if (str == nullptr || *str == '\0')
	{
		// short circut
	}
	else
	{
		// scans string looking for the first non white space character or the end of string
		while (isspace(*scan) && *scan != '\0')
		{
			++scan;
		}

		begin = scan;
		
		// scans string for the end if it hasnt found it
		while (*scan != '\0')
		{
			++scan;
		}

		end = scan;

		// if string is nothing but white space set end of string to 0 index
		if (begin == end)
		{
			str[0] = '\0';
		}
		else
		{
			--scan;
			// if start of string is not white space and end is not white space exit
			if (!isspace(str[0]) && !isspace(*scan))
			{
				//short circut
			}
			else
			{
				// if the start of the string is white space move non white space characters 
				// and replace with white spaces
				if (isspace(str[0]))
				{
					auto i = 0;
					while (begin != end)
					{
						str[i] = *begin;
						*begin = '\x20';
						++i;
						++begin;
					}
				}
				else
				{
					//intentionally blank
				}
				// check for spaces at the end of the string and remove them 
				while (isspace(*scan) || *scan == '\0')
				{
					*scan = '\0';
					--scan;
				}
			}
		}
	}
	return str;
}
