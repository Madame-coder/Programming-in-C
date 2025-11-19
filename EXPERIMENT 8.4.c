/* Experiment 5: Variable and Scope of Variable 
5.4. Declare a static local variable inside a function. Observe how its value persists across function 
calls. */ 
#include <stdio.h> 
#include <conio.h> 
void counter() { 
static int count = 0; 
count++; 
printf("Function called %d times\n", count); 
} 
int main() { 
printf("Name - Shivanshi Dubey\nSAP ID - 590029144\nCourse - B.Sc Computer Science\nBatch - B1");  
printf("\n-------------------------------------------------------------------\n");   
counter(); 
counter(); 
counter(); 
getch(); 
return 0; 
}