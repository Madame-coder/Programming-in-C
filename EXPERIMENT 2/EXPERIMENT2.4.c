#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, x1, x2;

    printf("Name - Shivanshi Dubey\nSAP ID - 590029144\nCourse - B.Sc Computer Science\nBatch - B1\n");
    printf("--------------------------------------------------\n");

    printf("Enter values of a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = (b*b) - (4*a*c);

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Root1 = %.2f\n", x1);
        printf("Root2 = %.2f\n", x2);
    }
    else if (discriminant == 0) {
        x1 = -b / (2*a);
        printf("Root1 = Root2 = %.2f\n", x1);
    }
    else {
        printf("No real roots (discriminant < 0)\n");
    }

    return 0;
}
