/* Experiment 5: Variable and Scope of Variable 
5.2. Declare a local variable inside a function and try to access it outside the function. Compare 
this with accessing the global variable from within the function.*/ 
#include <stdio.h> 
#include <conio.h> 
int globalVar = 50; 
void testFunction() { 
printf("Name - Shivanshi Dubey\nSAP ID - 590029144\nCourse - B.Sc Computer Science\nBatch - B1");  
printf("\n-------------------------------------------------------------------\n"); 
int localVar = 100; 
printf("Inside testFunction(): globalVar = %d\n", globalVar); 
printf("Inside testFunction(): localVar = %d\n", localVar); 
} 
int main() { 
testFunction(); 
printf("Inside main(): globalVar = %d\n", globalVar); 
getch(); 
return 0; 
}
