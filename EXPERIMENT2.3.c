
#include<stdio.h>
#include <conio.h>
#include<math.h>
int main()

{ 
  printf("Name - Shivanshi Dubey\nSAP ID - 590029144\nCourse - B.Sc Computer Science\nBatch - B1");
  printf("\n-------------------------------------------------------------------\n");
  float principal,rate,time,CI;
  printf("Enter the principal");
  scanf("%f",&principal);
  printf("Enter the rate = ");
  scanf("%f",&rate);
  printf("Enter the time = ");
  scanf("%f",&time);

    CI = principal * pow((1 + rate / 100), time) - principal;
	printf("the compound intrest is = %f", CI);
	getch();
	return 0;
}