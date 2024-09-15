/*
Name: Muhammad Umar Bin Zahid
File: Problem 2(Week 4)
*/
#include<stdio.h>
int main(){
char operator;	
double num1,num2,result;
printf("Enter 1st number");
scanf("%lf",&num1);
printf("Enter operator:+,-,*,/");
scanf( " %s" ,&operator);
printf("\nEnter second number");
scanf("%lf",&num2);
switch (operator){
case'+':
result = num1+num2 ;
printf(" %.2lf + %.2lf = %.2lf\n",num1,num2, result);
printf("Sum of Given Numbers");
break;
case'-':
result = num1-num2 ;
printf("%.2lf - %.2lf = %.2lf\n",num1,num2, result);
printf("Subtraction of Given Numbers");
break;
case'*':
result = num1*num2 ;
printf("%.2lf * %.2lf = %.2lf\n",num1,num2, result);
printf("Multiplication of Two Numbers");
break;
case'/':
result = num1/num2 ;
printf("%.2lf / %.2lf = %.2lf\n",num1,num2, result);
printf("Division of Two Numbers");
break;

default:
      printf("\nSorry for any inconvience");
}
return 0;
}

