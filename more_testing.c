#include <stdio.h>
#include <math.h>
#define PI 3.14159

void askForUserInput(double *x_1, double *y_1, double *x_2, double *y_2) {
    printf("Enter x_1: ");
    scanf("%lf", x_1);  // Correct: don't use & when passing pointer
    printf("Enter y_1: ");
    scanf("%lf", y_1);
    printf("Enter x_2: ");
    scanf("%lf", x_2);
    printf("Enter y_2: ");
    scanf("%lf", y_2);
}

double calculate_Distance() {
    double x_1, y_1, x_2, y_2;

    askForUserInput(&x_1, &y_1, &x_2, &y_2);

    double distance = sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2));
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}

int main(int argc, char **argv) {
    calculate_Distance();  // Call calculate_Distance here
    return 0;
}
