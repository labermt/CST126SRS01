//Class ID: Spearow
#include "stdafx.h"
#include "strtrim.h"
#include <cctype>  
#include <cstddef>
#include <cstring>

char * strtrim(char str[])
{
	char* const result = str;

	if (str != nullptr)
	{
		size_t spaces = 0; 
		size_t last_pos = 0; 
		size_t count_lspace = 0;
		size_t null_pos = 0; 
		size_t length = 0;
		size_t first_pos = 0; 

		//1. Working with the first of the string 
		//a. Check how many spaces in the first of the string
		while (str[spaces] == ' ' || str[spaces] == '\t'
				|| str[spaces] == '\n' || str[spaces] == '\v'
				|| str[spaces] == '\r' || str[spaces] == '\f')
			spaces++;
			
		//b. Check if the first of the string contain space
		if (spaces != 0)
		{
			// Delete spaces of the first of the string
			while (str[first_pos] != '\0')
			{
				str[first_pos] = str[spaces];
				first_pos++;
				spaces++;
			}
		}
		//2. Working with the last of the string 
		length = strlen(str);
		last_pos = length - 1;

		//2.1 Check if any space in the last of the string
		//loop to find the position of the last character( not space): l
		while (str[last_pos] == ' ' || str[last_pos] == '\t' 
				|| str[last_pos] == '\n' || str[last_pos] == '\v' 
				|| str[last_pos] == '\r' || str[last_pos] == '\f')
		{
			last_pos--;
			count_lspace++;
		}

		//2.2 Set null char to the last of the string
		if (count_lspace > 0)
		{
			null_pos = last_pos + 1;
			str[null_pos] = '\0';
		}
	}

	return result;
}
