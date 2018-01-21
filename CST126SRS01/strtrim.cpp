#include "stdafx.h"
#include <cctype>
#include <cstring>
#include "strtrim.h"

char* strtrim(char str[])
{
	if (str != nullptr)
	{
		size_t strsize = strlen(str) + 1;
		bool startFound = false;
		while (!startFound) // Run until the first non-whitespace character
		{
			if (isspace(*str)) // If the character at the start of the string is whitespace
			{
				for (size_t i = 0; i < strsize; i++)
				{
					*(str + i) = *(str + i + 1); // Move each character forward, character by character, effectively erasing the character at str[0] that is just whitespace
				}
				--strsize; // The string size is now effectively one less, so strsize should be updated
			}
			else // If the character is not whitespace
			{
				startFound = true; // Set startFound to true, exiting the while loop
			}
		}

		size_t end = strlen(str); // end will be the position in the string where the null terminator will be without the whitespace on the right. To start, it is set to the end of the string with the whitespace
		while (end > 0 && isspace(*(str + end - 1)))
		{
			--end; // end is decreased more and more until the character in front of it is not whitespace, but will immediately stop at 0 so as to not override unknown memory
		}
		*(str + end) = '\0'; // A null character is set at the position of end, causing the rest of the cString after it -- which is all whitespace -- to be ignored
	}

	return str;
}