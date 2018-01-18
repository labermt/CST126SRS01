
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

	if (str == nullptr || str == '\0')
	{
		return str;
	}
	else
	{
		while (end != '\0')
		{
			if (isspace(*scan))
			{
				std::cout<< scan << std::endl;
			}
		}
	}


}