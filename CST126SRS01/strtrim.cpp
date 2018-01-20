
#include "stdafx.h"
#include "strtrim.h"
#include <cctype>  
#include <cstddef>  
#include <cstring> 
#include <iostream>

char* strtrim(char str[])
{
	char* begin = str;
	char* scan = str;
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
				if (isspace(str[0]))
				{
					int i = 0;
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
