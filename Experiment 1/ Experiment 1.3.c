/*Experiment 1: Installation, Environment Setup and starting with C language 
3. Write a C program to add two numbers and take a number from the user*/

#include <stdio.h>

int main(){ 
int num1, num2, sum;
printf("Name - Shivanshi Dubey\nSAP ID - 590029144\nCourse - B.Sc Computer Science\nBatch - B1");
printf("\n-------------------------------------------------------------------\n");
printf("Enter first number: ");
scanf("%d", &num1);
printf("Enter second number: ");
scanf("%d", &num2);
sum= num1+num2;
printf("Sum = %d\n", sum);

return 0;
}
