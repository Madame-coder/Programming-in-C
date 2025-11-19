/*Experiment 6: Array 
6.3. WAP to read a list of integers and store it in a single dimensional array. Write a C program to 
f
 ind the frequency of a particular number in a list of integers.*/ 
#include <stdio.h> 
#include <conio.h> 
int main() { 
printf("Name - Shivanshi Dubey\nSAP ID - 590029144\nCourse - B.Sc Computer Science\nBatch - B1");  
printf("\n-------------------------------------------------------------------\n"); 
int n, i, num, count = 0; 
printf("Enter number of elements: "); 
scanf("%d", &n); 
int arr[n]; 
printf("Enter elements:\n"); 
for (i = 0; i < n; i++) scanf("%d", &arr[i]); 
printf("Enter number to find frequency: "); 
scanf("%d", &num); 
for (i = 0; i < n; i++) { 
if (arr[i] == num) count++; 
} 
printf("Frequency of %d: %d\n", num, count); 
getch(); 
return 0; 
}
