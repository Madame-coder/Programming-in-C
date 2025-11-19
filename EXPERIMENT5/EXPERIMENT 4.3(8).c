/* 4.3 Patterns: 8*/
 #include <stdio.h>
 int main()
 {
    printf("Name - Shivanshi Dubey\nSAP ID - 590029144\nCourse - B.Sc Computer Science\nBatch - B1");
  printf("\n-------------------------------------------------------------------\n");
   printf("The pattern is:\n");
   int i, j, k;
    for (i = 1; i <= 5; i++) {
        for (j = 5; j > i; j--) printf(" ");
        for (k = 1; k <= i; k++) printf("%d ", k);
        for (k = i - 1; k >= 1; k--) printf("%d ", k);
        printf("\n");
    }
    for (i = 4; i >= 1; i--) {
        for (j = 5; j > i; j--) printf(" ");
        for (k = 1; k <= i; k++) printf("%d ", k);
        for (k = i - 1; k >= 1; k--) printf("%d ", k);
        printf("\n");
    }
    return 0;
 }
