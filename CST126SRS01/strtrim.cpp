// strtrim.cpp

#include "stdafx.h"
#include <cctype>
#include <cstddef>
#include <cstring>
#include "strtrim.h"

char* strtrim(char str[])
{
	if (str != nullptr)
	{
		const char* begin{ str };
		while (std::isspace(*begin))
		{
			++begin;
		}

		auto end{ begin };
		auto scout{ begin };
		while (*scout != '\0')
		{
			if (!std::isspace(*scout++))
			{
				end = scout;
			}
		}

		const auto /* std::ptrdiff_t */ length{ end - begin };
		if (begin != str)
		{
			std::memmove(str, begin, length);
		}

		str[length] = '\0';
	}

	return str;
}
