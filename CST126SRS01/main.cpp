// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h" // Must be first in this file.
#include <cstring>
#include <cassert>
#include "strtrim.h"

int main()
{
	static const char* strlist[] =
	{
		nullptr,
		"",
		"     ", 
		"Hello, world!",
		"    whitespace    ",
		"whitespace right    ",
		"    whitespace left",
		" \n \t \v \r \f ",
		" \t tab \t ",
		" \r crlf \n ",
		" \f ffvt \v ",
		" The  quick   brown\n\t\v\r\ffox   jumps  over the  lazy   dog.  \b  ",
		"Here comes the rain again",
		"Falling on my head like a memory",
		"Falling on my head like a new emotion",
		"I want to walk in the open wind",
		"I want to talk like lovers do",
		"I want to dive into your ocean",
		"Is it raining with you"
	};

	static const char* strtrimlist[] =
	{
		nullptr,
		"",
		"",
		"Hello, world!",
		"whitespace",
		"whitespace right",
		"whitespace left",
		"",
		"tab",
		"crlf",
		"ffvt",
		"The  quick   brown\n\t\v\r\ffox   jumps  over the  lazy   dog.  \b",
		"Here comes the rain again",
		"Falling on my head like a memory",
		"Falling on my head like a new emotion",
		"I want to walk in the open wind",
		"I want to talk like lovers do",
		"I want to dive into your ocean",
		"Is it raining with you"
	};

	size_t i = 0;
	for (const char* const strelem : strlist)
	{
		char* newstr = nullptr;
		if (strelem != nullptr)
		{
			newstr = new char[strlen(strelem) + 1];
			if (newstr != nullptr)
			{
				strcpy(newstr, strelem);
			}
		}
		const char* const trimmedString = strtrim(newstr);
		assert(trimmedString == newstr);
		assert(strtrimlist[i]==nullptr && trimmedString==nullptr || strcmp(trimmedString, strtrimlist[i]) == 0); // short circuit ||
		++i;
		delete[] newstr;
	}
	return 0;
}
