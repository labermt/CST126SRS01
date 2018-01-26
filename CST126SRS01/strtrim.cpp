#include "strtrim.h"
#include "stdafx.h"
#include <cctype>  
#include <cstddef>  
#include <cstring>  


char* strtrim(char passedstring[]) 
{
	char* teststring = passedstring;

	//Sets variables for flag, and test flag
	
	if (teststring == nullptr) { return nullptr; } //Stops function should on nullptr

	int startPoint = 0;
	int endPoint = 0;
	bool startFlag = false;

	//size_t strLength = strlen(teststring);

	while (teststring[endPoint] != '\0') //Loops until end of cString, will set start point at first character
	{
		if (!isspace(teststring[endPoint]) && startFlag == false)
		{ 
			startPoint = endPoint;
			startFlag = true;
		}

		endPoint++;
	}

	if (startFlag == false)  //Test to see if blank
	{
		startPoint = endPoint;
	}
		
	if (endPoint > 0)
	{
		--endPoint;

		while (endPoint > 0 && isspace(teststring[endPoint]))  //Loops from end until it finds a character
		{
			--endPoint;
		}
	}

	teststring += startPoint;

	//strcpy(teststring, teststring + (endPoint - startPoint));
	
	passedstring = teststring;
	
	return passedstring;
}