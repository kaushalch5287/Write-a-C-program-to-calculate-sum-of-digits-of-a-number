/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
 int num, sum=0;
 printf("Enter any number to find sum of its digit: ");
 scanf("%d", &num);
 while(num!=0)
 {
 sum += num % 10;
 num = num / 10;
 }
 printf("Sum of digits = %d", sum);
 return 0;
}
