
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
	//char* end = nullptr;

	if (str == nullptr || *str == '\0')
	{
		// blank
	}
	else
	{
		while (isspace(*scan) && *scan != '\0')
		{
			//*scan = '\0';
			++scan;
		}

		begin = scan;

		while (*scan != '\0')
		{
			++scan;
		}

		if (scan == begin)
		{
		 // intentionally blank
		}
		else
		{
			--scan;
			while (isspace(*scan) || *scan == '\0')
			{	
				*scan = '\0';
				--scan;
			}
		}
		str = begin;
	}
	return str;
}
