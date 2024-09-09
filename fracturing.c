#include <stdio.h>
#include <math.h>
#define PI 3.14159



void askForUserInput(double *x_1, double *y_1, double *x_2, double *y_2) {
    
    printf("Enter x_1: ");
    scanf("%lf", x_1);  
    printf("Enter y_1: ");
    scanf("%lf", y_1);
    printf("Enter x_2: ");
    scanf("%lf", x_2);
    printf("Enter y_2: ");
    scanf("%lf", y_2);
}



// Need to write a function that uses user input to generate 2 points and from there find the distance between the two points.
// To find the distance between two points we use the distance formula = √(x_2-x_1)^2 + (y_2-y_1)^2
double calculate_Distance(){
    double x_1, y_1, x_2, y_2;
    
     askForUserInput(&x_1, &y_1, &x_2, &y_2);

    double distance = sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2));
    printf("Point #1 entered: x_1 = %.1f; y_1 = %.1f\n", x_1, y_1);
    printf("Point #2 entered: x_2 = %.1f; y_2 = %.1f\n", x_2, y_2);
    printf("The distance between the two points is %.2f\n", distance); 
}

// Perimeter of a circle is the same thing as the circumference of a circle
// So the formula for the circumference of a circle = π * diameter
// We have the diamter already from calcualting the distance so all that is left to do is multiply it by π
double calculate_Perimeter(){
    double x_1, y_1, x_2, y_2;
     
     askForUserInput(&x_1, &y_1, &x_2, &y_2);

     double perimeter = PI * sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2));
     printf("Point #1 entered: x_1 = %.1f; y_1 = %.1f\n", x_1, y_1);
     printf("Point #2 entered: x_2 = %.1f; y_2 = %.1f\n", x_2, y_2);
     printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

     return 4.0;

}


//double calculate_Area(){
    //double x_1, y_1, x_2, y_2;
     //printf("Enter x_1:");
     //scanf("%lf", &x_1);
     //printf("Enter y_1:");
     //scanf("%lf", &y_1);
     //printf("Enter x_2:");
     //scanf("%lf", &x_2);
     //printf("Enter y_2:");
    // scanf("%lf", &y_2);

     //double area = 



int main (int argc, char **argv){
    calculate_Distance();
    calculate_Perimeter();
    //calculate_Area();
    //calculate_Width();
    //calculate_Height();


    return 0;
}