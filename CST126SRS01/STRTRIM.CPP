#include "stdafx.h"
#include "strtrim.h"
#include <cctype>  
#include <cstddef>  
#include <cstring> 

char * strtrim(char str[])
{
	auto result = str;
	if (str != nullptr) {
		const char* begin = str;
		while (iswspace(*begin)) {
			++begin;
		}
		std::size_t len = strlen(begin);
		std::memmove(str, begin, len + 1);

	}
	return result;
}
