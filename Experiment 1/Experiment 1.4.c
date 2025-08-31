/*Experiment 1: Installation, Environment Setup and starting with C language 
4. Write a C program to perform four arithmetic operations on two variables*/

#include <stdio.h>

int main()
{ 
int num1, num2;
int sum, sub, mul;
float div;   // division kept float so decimal values can be shown
printf("Name - Shivanshi Dubey\nSAP ID - 590029144\nCourse - B.Sc Computer Science\nBatch - B1");
printf("\n-------------------------------------------------------------------\n");
printf("Enter first number: ");
scanf("%d", &num1);
printf("Enter second number: ");
scanf("%d", &num2);
//operations
sum =num1 + num2;
sub =num1 - num2;
mul =num1 * num2;
div =(float)num1 / num2; 
printf("\nResults of Arithmetic Operations:\n");
printf("Sum = %d\n", sum);
printf("Subtraction = %d\n", sub);
printf("Multiplication = %d\n", mul);
printf("Division = %.2f\n", div);

return 0;
}
