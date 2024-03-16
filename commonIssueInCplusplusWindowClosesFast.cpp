//Addressing general issues when executing a program.
/*When executing a program, the console window blinks and then closes immediately.
*First, add or ensure the following lines are near the top of your program 
*(Visual studio users, make sure these lines appear after the #include"pch.h"
*or before the #include "stdafx.h" if these exist!
*/

#include <iostream>
#include <limits>

//second, add the following code at the end of your main() function (right before the return statement):

std::cin.clear(); // reset any error flags
std::cin.ignore(std::numeric_limits<std::streamsice>::max(),'\n'); //ignore any characters in the input buffer until we find an enter characters
std::cin.get(); // get one more char from the user.
/*
*This will cause your program to wait for the user to press a key before continuing, which will give you time to examine your program’s output before your operating system closes the console window.
*Other solutions, such as the commonly suggested system(“pause”) solution may only work on certain operating systems and should be avoided.
*Older versions of Visual Studio may not pause when the program is run in Start With Debugging (F5) mode. Try running in Start Without Debugging (Ctrl-F5) mode.
*/