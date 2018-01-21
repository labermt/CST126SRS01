#include "strtrim.h"
#include "stdafx.h"
#include <cctype>  
#include <cstddef>  
#include <cstring>  


char* strtrim(char passedstring[]) 
{
	char* teststring = passedstring;
	//Sets variables for flag, and test flag
	bool flag = false;
	int i = 0;
	
	if (teststring == nullptr) { return nullptr; } //Stops function should on nullptr
	int **adx = &teststring;
	int strt = 0;
	int fin = 0;
	while (teststring[i] != '\0')  //Loops until end of string
	{
		while (!iscntrl(teststring[i]))
		{
			++i;
		}
		strt = i;
	}

	while (i != 0)  //Loops until beginning of string
	{
		while (!iscntrl(teststring[i]))
		{
			--i;
		}
		fin = i;
	}

	

	return passedstring;
}