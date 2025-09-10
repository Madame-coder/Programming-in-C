#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    printf("Name - Shivanshi Dubey\nSAP ID - 590029144\nCourse - B.Sc Computer Science\nBatch - B1");
    printf("\n--------------------------------------------------\n");

    // Input length and width
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // Output results
    printf("Area of Rectangle = %.2f\n", area);
    printf("Perimeter of Rectangle = %.2f\n", perimeter);

    printf("--------------------------------------------------\n");

    return 0;
}
