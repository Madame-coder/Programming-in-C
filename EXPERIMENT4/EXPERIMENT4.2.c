#include <stdio.h> 

int main() { 

int num; 

// Ask the user for input 
printf("Name - Shivanshi Dubey\nSAP ID - 590029144\nCourse - B.Sc Computer Science\nBatch - B1"); 
printf("\n-------------------------------------------------------------------\n"); 
printf("Enter a number to print its multiplication table: "); 

scanf("%d", &num); 

// Print the table from 1 to 10 

printf("\nMultiplication Table of %d:\n", num); 

for (int i = 1; i <= 10; i++) { 

printf("%d * %d = %d\n", num, i, num * i); 

} 

return 0; 

}
