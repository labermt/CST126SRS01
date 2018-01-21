#ifndef _STRTRIM_H_
#define _STRTRIM_H_
#include "stdafx.h" // Must be first in this file.
#include <cstring>
#include "strtrim.h"
#include <cctype>
#include <cstddef>

char* strtrim(char str[])
{
	auto reslt = str;
	
	if (str != nullptr)
	{
		//strtriml (str)
		{
			
			const char * begin = str;
				while (isspace(*begin))
			{
				++begin;
			};
			auto len = strlen(begin);
			
			memmove(str, begin, len++);//move the string letters left, does not remove the empty space.
			return str;//Return str so it can be used by strtrimr
		}
		//strtrimr (str)
		const int spccntr = 0;
		{	//Waiting for the end of the string
			while(str != '\0')
			{
				//if the string is not ended check for space.
				if (isspace != 0) 
				{
					spccntr++; //Yes space? add one to the value of spccntr
				}
				else {
					spccntr = 0; //No space? set spccntr to value to 0
				}
			}
			//subtract the chariters from the end using spccntr

			 str.erase( str.length() - spccntr);//found at "http://forums.codeguru.com/showthread.php?408182-remove-last-character-of-string" I am not sure if it is part of the cstring library.
			//return reslt; // Unsure if this is needed or not.
		};
	};
	return reslt;
};
#endif
