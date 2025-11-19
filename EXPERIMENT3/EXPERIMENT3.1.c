
#include<stdio.h>
#include<conio.h>
int main() {
  int a;
  printf("Name - Shivanshi Dubey\nSAP ID - 590029144\nCourse - B.Sc Computer Science\nBatch - B1");
  printf("\n-------------------------------------------------------------------\n");
  
  printf("Enter a number = ");
  scanf("%d", &a);
  
  if (a % 2 ==0 )
    printf("The number is Even");
  else 
    printf("The number is odd");
  
  getch();
  return 0;
}
