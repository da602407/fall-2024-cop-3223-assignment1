#include <stdio.h>
#include <math.h> // The math library thing gave me such a stresfful time
#define PI 3.14159


// Making this took a while. From the pdf it was made clear that there was way to make a function that simplifies the user input part of the assignment
// I knew that I had to use void and make a variable that can then be inserted into future functions.
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

     return 2.0;

}

// Area of a circle is = π * r^2
// Thats all good in theory but now that means I have to find the radius. Which is just diamter/2 but this has to be included in my function
double calculate_Area(){
    double x_1, y_1, x_2, y_2;

     askForUserInput(&x_1, &y_1, &x_2, &y_2);
     
     // I couldnt load the whole eqation into double area so I sperated it into two
     double radius = sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2)) / 2;
     double area = PI * pow(radius, 2);
     printf("Point #1 entered: x_1 = %.1f; y_1 = %.1f\n", x_1, y_1);
     printf("Point #2 entered: x_2 = %.1f; y_2 = %.1f\n", x_2, y_2);
     printf("The area of the city encompassed by your request is %.2f\n", area);

     return 4.0; // looked intimadting at first but once i seperated it into two variables one for finding the radius and the other for the area, it worked. SO HAPPY!

}
// Kind of confused on this one because the width of a circle is just the diameter, right?
// Width of a circle is = 2 * r.  AND   Diamter= 2 * r
// So I don't know if you are trying to trick me but i feel like I can just use the distance formula again
double calculate_Width(){
    double x_1, y_1, x_2, y_2;
     
     askForUserInput(&x_1, &y_1, &x_2, &y_2);
     
     double width = sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2));
     printf("Point #1 entered: x_1 = %.1f; y_1 = %.1f\n", x_1, y_1);
     printf("Point #2 entered: x_2 = %.1f; y_2 = %.1f\n", x_2, y_2);
     printf("The width of the city encompassed by your request is %.2f\n", width);

     return 1.0; // if this is a trick then its a 5.0

}
// I hope this is correct because I thought the height of a circle would just be the diameter.
// But when I consulted with my good buddy ChatGPT it said that Height = y_2 - y_1
// So I hope that works and is the correct height formula you are looking for in this assignment


double calculate_Height(){
    double x_1, y_1, x_2, y_2;
    
     askForUserInput(&x_1, &y_1, &x_2, &y_2);

     double height = y_2 - y_1;
     printf("Point #1 entered: x_1 = %.1f; y_1 = %.1f\n", x_1, y_1);
     printf("Point #2 entered: x_2 = %.1f; y_2 = %.1f\n", x_2, y_2);
     printf("The height of the city encompassed by your request is %.2f\n", height);

     return 5.0;

}

int main (int argc, char **argv){
    calculate_Distance();
    calculate_Perimeter();
    calculate_Area();
    calculate_Width();
    calculate_Height();

    return 0;
    
}