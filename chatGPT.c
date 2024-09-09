#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function Prototypes
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

// Main function
int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

// Function to calculate distance between two points
double calculateDistance() {
    double x1, y1, x2, y2;
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}

// Function to calculate the perimeter of the circle
double calculatePerimeter() {
    double radius = calculateDistance() / 2.0;
    double perimeter = 2 * PI * radius;
    printf("Point #1 entered: x1 = -; y1 = -\n");
    printf("Point #2 entered: x2 = -; y2 = -\n");
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    
    return 3.0; // Sample difficulty rating; replace with actual difficulty
}

// Function to calculate the area of the circle
double calculateArea() {
    double radius = calculateDistance() / 2.0;
    double area = PI * pow(radius, 2);
    printf("Point #1 entered: x1 = -; y1 = -\n");
    printf("Point #2 entered: x2 = -; y2 = -\n");
    printf("The area of the city encompassed by your request is %.2f\n", area);
    
    return 3.0; // Sample difficulty rating; replace with actual difficulty
}

// Function to calculate the width (diameter) of the circle
double calculateWidth() {
    double diameter = calculateDistance();
    printf("Point #1 entered: x1 = -; y1 = -\n");
    printf("Point #2 entered: x2 = -; y2 = -\n");
    printf("The width of the city encompassed by your request is %.2f\n", diameter);
    
    return 2.0; // Sample difficulty rating; replace with actual difficulty
}

// Function to calculate the height (diameter) of the circle
double calculateHeight() {
    double diameter = calculateDistance();
    printf("Point #1 entered: x1 = -; y1 = -\n");
    printf("Point #2 entered: x2 = -; y2 = -\n");
    printf("The height of the city encompassed by your request is %.2f\n", diameter);
    
    return 2.0; // Sample difficulty rating; replace with actual difficulty
}
