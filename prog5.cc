/******************************************************************* 
*  \file <prog5.cc>
*  \brief <Converts celcius into farenheit>
*  	
*  Author:      Beckham Hounshell
*  Email:       bh755724@ohio.edu
*  	
*  Lab Section: 108
* 
*  Description: Takes a number of degrees in farenheit and outputs the equivalent in celcius,
takes a number of degrees in celcius and outputs the equivalent in farenheit.
*	
*  Date:        01/28/2025
*
*******************************************************************/

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
   double ctof;  // equivalent Celsius temperature
   double ftoc;  // equivalent Fahrenheit temperature.
 
   int fah = 56;  //declare and initialize at the same time
   int cel = 20;

   ctof = 9.0/5  * cel + 32;
   ftoc = 5.0/9 * (fah - 32);

   cout << cel << " degrees Celsius in Fahrenheit is " << ctof << endl;
   cout << fah << std::fixed << std::setprecision(1) << " degrees Fahrenheit in Celsius is " << ftoc << endl;

   return (EXIT_SUCCESS);
}