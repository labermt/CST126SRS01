#include "stdafx.h"
#include "strtrim.h"
#include <cctype>  
#include <cstddef>  
#include <cstring> 

char * strtrim(char str[])
{
	auto result = str;
	if (str != nullptr && str!= "") {

		const char* begin = str;
		while (iswspace(*begin)) {
			++begin;
		}

		std::size_t len = strlen(begin);
		std::memmove(str, begin, len + 1);
		
		char* end = str;
		end += len -1;
		 if (end != &str[0] && iswspace(*end)) {
			 while (iswspace(*end)) {
				 --end;
			 }
			 end += 1;
			 *end = '\0';
		 }
	}//If not null pointer
	return result;
}// strtrim function
