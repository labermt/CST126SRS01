#include "stdafx.h"    //got help from my brother as well as cplusplus website explaining all the cctypes

#include "strtrim.h"

#include <cctype>
#include <cstddef>
#include <cstring>

#define MAX_STR_LEN 100

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
		const char* beginBack = str;
		std::size_t strLen = strlen(str);
		char* nullFind = strrchr(str, ' ');
		char lastChar = str[strLen - 1];

		if (nullFind != nullptr) {
			if (isspace(lastChar)) {
				while (isspace(*nullFind)) {
					nullFind--;
				}

				std::size_t lenNull = strlen(nullFind);
				const int newStrSize = strLen - lenNull + 1;
				char newStr[MAX_STR_LEN];

				strncpy(newStr, beginBack, newStrSize); //this needs a size for strcpy so dont know how to get strings that are more than a set size
				newStr[newStrSize] = '\0';
				memmove(str, newStr, newStrSize + 1);
			}
		}

	}


	return result;
}