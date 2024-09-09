#include <stdio.h>
#include <math.h>
#define PI 3.14159

double calculate_Distance();
// double calculate_Perimeter();
// double calculate_Area();
// double calculate_Width();
// double calculate_Height();

int main(int argc, char** argv) {
    calculate_Distance();
    // calculate_Perimeter();
    // calculate_Area();
    // calculate_Width();
    // calculate_Height();

    return 0;
}

double calculate_Distance() {
    double x_1, y_1, x_2, y_2;

    // User input of which points will be used
    printf("Enter x_1: ");
    scanf("%lf", &x_1);
    printf("Enter y_1: ");
    scanf("%lf", &y_1);
    printf("Enter x_2: ");
    scanf("%lf", &x_2);
    printf("Enter y_2: ");
    scanf("%lf", &y_2);

    double distance_without_sqrt = pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2);
    double distance = sqrt(distance_without_sqrt);
    printf("The distance between the two points is equal to %.2lf\n", distance);

    return distance;
}
