/* 4.3 Patterns: 4*/
 #include<stdio.h>
 int main()
 {
   printf("Name - Shivanshi Dubey\nSAP ID - 590029144\nCourse - B.Sc Computer Science\nBatch - B1");
  printf("\n-------------------------------------------------------------------\n");
    printf("The pattern is:\n");
    int i, j;
    for(i=1; i<=5; i++)
     {
        int k=i;
        for(j=1; j<=i; j++)
     {
        printf("%d", k);
        k--;
     }
      printf("\n");
    }
 return 0;
 }