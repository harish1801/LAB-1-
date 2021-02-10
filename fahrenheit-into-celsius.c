/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void main()
{
    float celsius,fahrenheit;
    
    printf("Enter temperature in Fahrenheit:");
    scanf("%f",&fahrenheit);
 
    celsius=(fahrenheit - 32)*5/9;
    printf("Celsius = %f",celsius); 
}



