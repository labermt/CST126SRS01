// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h" // Must be first in this file.
#include <cstring>
#include <cassert>
#include "strtrim.h"

int main()
{
	/* static */ const char* const strList[][2]
	{
		//{ "Untrimmed",                                                             "Trimmed"                                                            }, 
		//-------------------------------------------------------------------------------------------------------------------------------------------------- 
		{ "Hello, world!",                                                         "Hello, world!" },
		{ "    whitespace: left",                                                  "whitespace: left" },
		{ "whitespace: right    ",                                                 "whitespace: right" },
		{ "    whitespace                                                       ", "whitespace" },
		{ " \n \t \v \r \f ",                                                      "" },
		{ " \t tab \t ",                                                           "tab" },
		{ " \r crlf \n ",                                                          "crlf" },
		{ " \f ffvt \v ",                                                          "ffvt" },
		{ " The  quick   brown\n\t\v\r\ffox   jumps  over the  lazy   dog.  \b  ", "The  quick   brown\n\t\v\r\ffox   jumps  over the  lazy   dog.  \b" },
		{ "     ",                                                                 "" },
		{ "",                                                                      "" },
		{ nullptr,                                                                 nullptr }
	};

	unsigned count{};

	for (const auto strPair : strList)
	{
		const auto untrimmedStr{ strPair[0] };
		const auto trimmedStr{ strPair[1] };

		char* newStr{ nullptr };

		if (untrimmedStr != nullptr)
		{
			newStr = new char[strlen(untrimmedStr) + 1];
			if (newStr != nullptr)
			{
				strcpy(newStr, untrimmedStr);
			}
		}

		const auto resultStr = strtrim(newStr);

		assert(resultStr == newStr);
		const auto passed = (trimmedStr == nullptr && untrimmedStr == nullptr || strcmp(trimmedStr, resultStr) == 0); // short circuit || 
		if (passed)
		{
			++count;
		}

		delete[] newStr;
	}
	assert(count == 12);
	return 0;
}
