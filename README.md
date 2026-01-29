## Laboratory Assignment #3: Program Style, Compilation, and Math with Integers  

**Points**: 100 pts
#### Name:
#### PID:
*Purpose: gain some familiarity with program style, fixing compilation errors in a program and arithmetic operations.*

---
## Fixing Style and Compilation Errors

For information on how to fix the coding style within the provided files, please use this [reference](https://github.com/chelberg/cs2400/blob/master/docs/coding-style.md). Please **make sure** that each **code** file you make edits to follows this coding style
#### Problem 1 (30 points)
1. Compile `prog1.cc` by typing the command `g++ -Wall prog1.cc` while are you are in the `lab3` directory
2. Run the executable by typing `./a.out`
3. Note that the program and output are almost unreadable due to bad formatting. Reformat the program to fix this issue. Please make sure to add introductory header comments (a block including your name and lab # and any general comments you have)
#### Problem 2 (15 points)
1. Compile `prog2.cc` by typing the command `g++ -Wall prog2.cc` while are you are in the `lab3` directory
2. **Answer questions 1 - 3 given below**
### Question 1 (5pts)
The prog2.cc has a compilation error(s). What line(s) of the file does the compilation error(s) occur at? 

> Answer: lines 12, 13, and 14

### Question 2 (5pts)
What does the error message(s) say?

> Answer: 
use of undeclared identifier 'cout'; did you mean 'std::cout'?
use of undeclared identifier 'endl'; did you mean 'std::endl'?

### Question 3 (5pts)
Explain how you fixed the error(s).

> Answer: 
added the line: ' using namespace std; '
this allows the program to use the commands in the std library

3. Use an editor (VS Code, nano, vim) to make the correction
4. Recompile `prog2.cc`
5. Run the executable by typing `./a.out`
6. Use I/O redirection to save the results of this command as follows. The command is shown below. Note that the > causes the output to be redirected to a file called prog2.out
```
./a.out > prog2.out
```
7. Type `more prog2.out` to make sure that the file contains the correct output

#### Problem 3 (15 points)
1. Compile `prog3.cc` by typing the command `g++ -Wall prog3.cc` while are you are in the `lab3` directory
2. **Answer questions 4 & 5 given below**
### Question 4 (5pts)
The prog3.cc has compilation errors. What lines of the file does the compilation error occur at?

> Answer: lines 17 and 19
   
### Question 5 (5pts)
What does the error messages say?

> Answer:
17: use of undeclared identifier 'Num2'; did you mean 'num2'?
19: expected ';' after expression

3. Use an editor (VS Code, nano, vim) to make the correction
4. **Answer question 6**
### Question 6 (5pts)
Explain how you fixed the errors.

> Answer:
corrected 'Num2' to 'num2' on line 17
added a semicolon to the end of line 19
program runs properly

5. Recompile `prog3.cc`
6. Run the executable by typing `./a.out`
7. Use I/O redirection to save the results of this command as follows. The command is shown below. 
```
./a.out > prog3.out
```
7. Type `more prog3.out` to make sure that the file contains the correct output

#### I/O Redirection (10 points)
1. Compile `prog4.cc` by typing the command `g++ -Wall prog4.cc` while are you are in the `lab3` directory
2. Run the program `a.out` by issuing the command `./a.out`
3. Type the following at the Keyboard. Note: Control-D means to press control and d together to generate an EOF signal from the keyboard.
```
10
3
8
Control-D
```
4. **Answer question 7**
### Question 7 (5pts)
What is the output from running the ./a.out from given data?

> Answer:
10 times 2 = 20
3 times 2 = 6
8 times 2 = 16

5. Issue the command `./a.out < input.txt`. Note that `<` is causing input to be redirected to come from a file called input.txt
6. Save the results of this command by issuing the command 
   `./a.out < input.txt > prog4.out`
7. Type `more prog4.out` to make sure that the correct output was produced
8. **Answer question 8**
### Question 8 (5pts)
Write down the output from prog4.out

> Answer:
10 times 2 = 20
3 times 2 = 6
8 times 2 = 16

#### Arithmetic Operations with Integers (30 points)
1. Compile `prog5.cc` by typing the command `g++ -Wall prog5.cc` while are you are in the `lab3` directory
2. Run the program `a.out` by issuing the command `./a.out`
3. **Answer questions 9-13 given below**
### Question 9 (5pts)
9. What is the output of this program?

> Answer:
20 degrees Celsius in Fahrenheit is 52
56 degrees Fahrenheit in Celsius is 0

### Question 10 (5pts)
10. Do the calculation manually and compare with the output from the program. Explain what is happening.

> Answer:

20c = 68f
56f = 13.333c

overflow error
   
### Question 11 (10pts)  
11. Correct the code as the programmer intended.

> Answer:
ctof = 9/5
ftoc = 5/9
   >
ctof = 9.0/5.0
ftoc = 5.0/9.0

this gives the correct output

### Question 12 (5pts)   
12. Include the necessary statements to format the output to one decimal place

> Answer: 
   
#include <iomanip>
cout << fah << std::fixed << std::setprecision(1) << " degrees Fahrenheit in Celsius is " << ftoc << endl;

### Question 13 (5pts)   
13. Include the header documentation (your name, lab#, introduction to the program etc.).

> Answer:
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