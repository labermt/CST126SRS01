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
		// { "Untrimmed",                                                          "Trimmed"                                                            }, 
		// --------------------------------------------------------------------------------------------------------------------------------------------- 
		{ "Hello, world!",                                                         "Hello, world!"                                                      },
		{ "    whitespace: left",                                                  "whitespace: left"                                                   },
		{ "whitespace: right    ",                                                 "whitespace: right"                                                  },
		{ "    whitespace                                                       ", "whitespace"                                                         },
		{ " \n \t \v \r \f ",                                                      ""                                                                   },
		{ " \t tab \t ",                                                           "tab"                                                                },
		{ " \r crlf \n ",                                                          "crlf"                                                               },
		{ " \f ffvt \v ",                                                          "ffvt"                                                               },
		{ " The  quick   brown\n\t\v\r\ffox   jumps  over the  lazy   dog.  \b  ", "The  quick   brown\n\t\v\r\ffox   jumps  over the  lazy   dog.  \b" },
		{ "Here comes the rain again",                                             "Here comes the rain again"                                          },
		{ "Falling on my head like a memory",                                      "Falling on my head like a memory"                                   },
		{ "Falling on my head like a new emotion",                                 "Falling on my head like a new emotion"                              },
		{ "I want to walk in the open wind",                                       "I want to walk in the open wind"                                    },
		{ "I want to talk like lovers do",                                         "I want to talk like lovers do"                                      },
		{ "I want to dive into your ocean",                                        "I want to dive into your ocean"                                     },
		{ "Is it raining with you?",                                               "Is it raining with you?"                                            },
		{ "     ",                                                                 ""                                                                   },
		{ "",                                                                      ""                                                                   },
		{ nullptr,                                                                 nullptr                                                              }
	};

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
		assert(trimmedStr == nullptr && untrimmedStr == nullptr || strcmp(trimmedStr, resultStr) == 0); // short circuit || 

		delete[] newStr;
	}
	return 0;
}
