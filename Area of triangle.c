/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
   double a,b,c,s,area;
   printf("enter sides of a triangle:\n");
   scanf("%lf %lf %lf", &a,&b,&c);
   
   s=(a+b+c)/2;
   area= sqrt(s*(s-a)*(s-b)*(s-c));
   printf("area of triangle=%.2lf\n",area);
    return 0;
}



