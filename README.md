# CST126SRS01
strtrim

Class ID: Hippopotus

SRS ID:  CST126SRS01 

Unresolved Issues:  
	Error codes 
C1083: File was locked or not reading by the compiler and I could not troubleshoot. Code remains untested.
2xC2228: Unsure how to use formula, ran out of time.

Notes:   
Spent most of the day working on this. You're right, it becomes alot easier when you only think about one part at a time.
---

Purpose:  

* Learn to modify strings using pointers. 
* Learn how work with heap allocated memory. 
* Learn to meet a specification. 

Instructions:  

Write a strtrim function using the provided interface that trims the whitespace off the front and back of any null terminated cstring. 
Must work on all strings including but not limited to nullptr, empty strings, and blank strings. 

The function must work with heap allocated strings. 

The return must be identical to the input parameter. 

Be sure your function passes the provided test cases. 

Your strtrim function may only use methods found in the following headers:

#include \<cctype\>  
#include \<cstddef\>

