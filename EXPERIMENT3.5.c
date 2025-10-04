#include<stdio.h> 
#include<conio.h> 
int main(){ 
int yr, i, day=0, a; 
printf("Name - Shivanshi Dubey\nSAP ID - 590029144\nCourse - B.Sc Computer Science\nBatch - B1"); 
printf("\n-------------------------------------------------------------------\n"); 
printf("Enter the year:"); scanf("%d", &yr); 
 for(i=1; i<yr; i++) 
 { 
     if(((i%4==0) && (i%100!=0)) && (i%400)) 
     { 
      day=day+366; 
  } 
     else 
  { 
   day=day+365; 
  } 
 } 
 a=day%7; 
 switch (a) 
 { 
  case 0: 
   printf("Monday"); 
   break; 
  case 1: 
   printf("Tuesday"); 
   break; 
  case 2: 
   printf("Wednesday"); 
   break; 
  case 3: 
   printf("Thursday"); 
   break; 
  case 4: 
   printf("Friday"); 
   break; 
  case 5: 
   printf("Saturday"); 
   break; 
  default: 
   printf("Sunday");   
              } 
getch(); 
return 0; 
}
