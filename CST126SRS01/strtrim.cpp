#include "stdafx.h"    //did the best I can, been working all day. The top part of 
#include <cstring>            // my function should work fine but I couldnt get the bottom portion to work
#include <cassert>
#include "strtrim.h"

#include<cctype>
#include<cstddef>


char * strtrim(char str[])
{
	char * const result = str;

	if (str != nullptr)
	{
		//trim front of string 

		const char * begin = str;
		while (isspace(*begin))
		{
			++begin;
		}
		std::size_t len = strlen(begin);
		memmove(str, begin, len + 1); // dest, src, size_t count


	//trim back of string

		auto nullFind = strrchr(str, ' '); // could not get this part to function properly, fails on the assert
		if (isspace(str[strlen(str)]) && nullFind != nullptr) 
		{
			while (isspace(*nullFind))
			{
				nullFind--;
			}
			len = strlen(begin);
			auto lenBack = strlen(nullFind);
			memmove(str, begin, lenBack - len); 

		}
		return result;
	}
}