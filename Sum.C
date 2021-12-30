#include <stdio.h>
int Sum of digits (int);  /*function declaration*/
int main()
{
int num,result;
Printf("Entet an integer number");
Scanf("%d",& num);    /*function call*/
result = Sum of digits (num);
Printf ("Sum=%d",result);
return 0;
}
int Sum of digits (int num)  /*function definition*/
{
if (num==0)  /*base condition*/
return 0;
else
return ((num % 10)+Sum of digits(num/10)); /*recursive function call */
