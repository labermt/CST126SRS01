#include "stdafx.h"
#include <cstring>
#include <cassert>
#include <locale>
#include "strtrim.h"


char* strtrim(char str[])
{
	char* const result = str;

	if (str != nullptr)
	{
		bool checker = false;
		for (int i = 0; str[i] != '\0'; ++i) 
		{
			if (!isspace(str[i]))
				checker = true;
		} //checking to see if entire string is just spaces
		if (checker == false || str[0] == '\0')	
		{
			str[0] = '\0';
			return result;
		} //if lest check was true, immidate null, making all spaces after it pointless

		
		if (isspace(str[0])) //is there any space out front? If so start trimming
		{
			int i = 0;
			while (isspace(str[i]))
			{
				++i;
			} //figures out where the first none space character is
			for (int x = 0; str[x] != '\0'; ++x, ++i)
			{
				str[x] = str[i];
			} //copies first character to the front, thereby eleminateing anything in the front
		}

		int y = 0;
		int x = 0;
		while (str[y] != '\0')
		{
			if (!isspace(str[y]))
			{
				x = y;
			}
			++y;
		} //figures out the end character of the string
		str[x + 1] = '\0'; //set the string after last character to null character
	}
	return result;
}