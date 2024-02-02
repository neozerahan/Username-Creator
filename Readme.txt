#Title: Username Creator

-------------------------------------

#Description

Username Creator is a small project developed during my journey to learn the C language. This program facilitates the creation of usernames with various checks, including:

1. Maximum Character Limit: Ensures that usernames are created within a specified character limit.
2. Special Character Check: Prohibits the use of special characters in the username.
3. Minimum Character Limit: Detects if the username falls below a specified character limit.
4. Minimum Alphabetical Character Check: Requires a minimum number of alphabets for creating a username.
5. Email Address Concatenation: Appends a custom email address after generating the username.

NOTE: I have deliberatly written functions that can be handled using the default C library i.e string.h, and others. I am doing this to get the hang of the language and to quench my curiousity. 

-------------------------------------

#Project Structure
1. Source:
>> Main.c: Serves as the entry point for the program.
>> Helper.c: Contains all the functions.

2. Header:
>> Define.h: Holds all the definitions. Many program configurations, such as special character ranges, minimum character limits, required minimum alphabets, and username character limits, can be adjusted here.
>> Helper.h: Provides the definitions for all functions.

-------------------------------------

#How to Run the Program:
Open UsernameCreator.exe to execute the program.

-------------------------------------

# MIT License

Copyright (c) [2024] [Zainuddeen Fahadh]

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.