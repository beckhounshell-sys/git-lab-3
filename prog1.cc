// Don't forget to include the header block
/******************************************************************* 
*  \file <prog1.cc>
*  \brief <Compares the sum and product of two numbers>
*  	
*  Author:      Beckham Hounshell
*  Email:       bh755724@ohio.edu
*  	
*  Lab Section: 108
* 
*  Description: Compares the sum and product of two numbers	
*	
*  Date:        01/28/2025
*
*******************************************************************/

#include<iostream> 
#include<cstdlib>
using namespace std;
const int INT1 = 15;
const int INT2 = 20; 
int main(){
    cout<<"Sum of "<<INT1 <<" and "<<INT2<<" is "<<INT1+INT2<<endl;
    cout<<"Product is "<<INT1*INT2<<endl;
    if(INT1<INT2) cout<<INT2 <<" is bigger";
    else cout<<INT1<<" is bigger"; 
    return (EXIT_SUCCESS);
}