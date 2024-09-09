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
    printf("Point #1 entered: x_1 = %.1f; y_1 = %.1f\n", x_1, y_1);
    printf("Point #2 entered: x_2 = %.1f; y_2 = %.1f\n", x_2, y_2);
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}

double calculate_Perimeter(){
    double x_1, y_1, x_2, y_2;
     
     askForUserInput(&x_1, &y_1, &x_2, &y_2);

     double perimeter = PI * sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2));
     printf("Point #1 entered: x_1 = %.1f; y_1 = %.1f\n", x_1, y_1);
     printf("Point #2 entered: x_2 = %.1f; y_2 = %.1f\n", x_2, y_2);
     printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

     return 4.0;

}

int main(int argc, char **argv) {
    calculate_Distance();  
    calculate_Perimeter();
    return 0;
}
