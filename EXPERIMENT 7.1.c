/*  
Experiment 7.1 
Ramanujan number is the smallest number that can be expressed  
as the sum of two cubes in two different ways.  
Example: 1729 = 1^3 + 12^3 = 9^3 + 10^3  
*/  
#include <stdio.h>  
#include <conio.h>  
int main() {  
  printf("Name - Shivanshi Dubey\nSAP ID - 590029144\nCourse - B.Sc Computer Science\nBatch - B1");  
  printf("\n-------------------------------------------------------------------\n");  
    int limit = 2000;  
    printf("Ramanujan numbers up to %d are:\n", limit);  
    printf("-------------------------------------\n");  
    int a,b,c,d;  
    for (a = 1; a * a * a < limit; a++) {  
        for (b = a + 1; b * b * b < limit; b++) {  
            for (c = a + 1; c * c * c < limit; c++) {  
                for ( d = c + 1; d * d * d < limit; d++) {  
                    if (a * a * a + b * b * b == c * c * c + d * d * d &&  
                        a != c && a != d && b != c && b != d) {  
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",  
                               a * a * a + b * b * b, a, b, c, d);  
                    }  
                }  
            }  
        }  
    }  
  
    getch();  
    return 0;  
} 