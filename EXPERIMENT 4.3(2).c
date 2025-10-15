/* 4.3 Patterns: 2*/
 #include<stdio.h>
 int main()
 {
  printf("Name - Shivanshi Dubey\nSAP ID - 590029144\nCourse - B.Sc Computer Science\nBatch - B1");
  printf("\n-------------------------------------------------------------------\n");
   printf("The pattern is:\n");
   int i, j;
   for(i=1; i<=5; i++)
   {
      for(j=1; j<=i; j++)
      {
        printf("%d", j);
       }
     printf("\n");
    }
 return 0;
 }
 