
#include "stdafx.h"
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
		return str;
	}
	else
	{
		while (isspace(*scan) && *scan != '\0')
		{
			++scan;
		}

		begin = scan;

		while (*scan != '\0')
		{
			++scan;
		}
		--scan;
		if (scan < begin)
		{
			str[0] = *begin;
			return str;
		}
		else
		{
			while (isspace(*scan) && scan >= begin)
			{
				--scan;
			}
			end = scan;
			*end = '\0';
		}
		return begin;
	}
}
