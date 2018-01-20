
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

	if (str == nullptr || *str == '\0')
	{
		// blank
	}
	else
	{
		while (isspace(*scan) && *scan != '\0')
		{
			//posible solution *begin = scan* increment both until \0 then back fill with \0 until non white space
			++scan;
		}
		begin = scan;
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
			while (begin != end)
			{
				int i = 0;
				str[i] = begin[i];
				++i;
				++begin;
			}
			--scan;
			while (isspace(*scan) || *scan == '\0')
			{
				*scan = '\0';
				--scan;
			}
		}
	}
	return str;
}
