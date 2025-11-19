/*Experiment 8: Variable and Scope of Variable 
5.1. Declare a global variable outside all functions and use it inside various functions to understand 
its accessibility. */ 
#include <stdio.h> 
#include <conio.h> 
int globalVar = 100; 
void display() { 
printf("Name - Shivanshi Dubey\nSAP ID - 590029144\nCourse - B.Sc Computer Science\nBatch - B1");  
printf("\n-------------------------------------------------------------------\n");  
printf("Inside display(): globalVar = %d\n", globalVar); 
} 
void modify() { 
globalVar += 50; 
printf("Inside modify(): globalVar = %d\n", globalVar); 
} 
int main() { 
printf("Inside main(): globalVar = %d\n", globalVar); 
display(); 
modify(); 
printf("After modify(): globalVar = %d\n", globalVar); 
getch(); 
return 0; 
}