# CST126SRS01
strtrim

Class ID: Persian

SRS ID:  CST126SRS01 

Unresolved Issues:  None that I know of so far.  

Notes:  I agree with having one "return" per function. 

---

Purpose:  

* Learn to modify strings using pointers. 
* Learn how work with heap allocated memory. 
* Learn to meet a specification. 

Instructions:  

Write a strtrim function using the provided interface (see: strtrim.h) that trims the whitespace off the front and back of any null terminated cstring. 

Your function must work on all cstrings including but not limited to nullptr, empty strings, blank strings and very long strings. 

The function must work on heap allocated strings passed in as a parameter. 

The return must be identical to the input parameter. 

Be sure your function passes the provided test cases. Additional tests may be run beyond these, so consider this a minimal set of test cases. 

Your strtrim function may only use methods found in the following headers:

#include \<cctype\>  
#include \<cstddef\>  
#include \<cstring\>  

Pay very close attention to the updated book Errata for page 435.

https://docs.google.com/document/d/1KNhD0fjdxFiV8JO5YAvgfpAUMy_8HKVxy9AcS4FJGiA/edit?usp=sharing

Your code must not have undefined behavior. 

Your code must be const correct (as indicated in the Class Policy for all SRS's). 

The file strtrim.cpp is not included. This is intentional. You are to create this file in Visual Studio and place your function definition (implementation) in it. Your strtrim.cpp should also #include "strtrim.h" to help confirm you have the correct function signature. 

Be sure to #include "stdafx.h" in strtrim.cpp as required by Visual Studio. For student unfamiliar with how Visual Studio processes pre-compiled headers, see main.cpp in CST000SRS00 for an example. 

Grades will be based on accuracy of output and meeting both explicit and implied requirements. Performance of your code will not impact your grade. 

**BONUS TEAM CHALLENGE:**

Students who complete this assignment before the end of lab on the due date are eligible for a bonus of 1 additional forgiven quiz. To claim this prize, you must perform the following:

- Notify the instructor during lab that you have completed the SRS.
- Team members must not make any additional Pull Requests. 
- Join the team of other students who have also completed the SRS and accepted the challenge. 
- There will be only 1 team. 
- Work with the team to compare your solutions and agree on the fastest possible implementation. 
- Have the team's solution outperform the instructor's solution for number of test cases run over 1 minute. 
- A solution that fails to meet the test cases will be disqualified. 
- The challenge will built as a 64 bit program running the Release configuration. 

We will run the challenge during lecture when we go over the assignment and determine if your team has won the prize. Therefore the team must bring their solution to the following week's lecture to be eligible. 

small change again