#include <math.h>
#include <stdio.h>
#define PI 3.14159


double calculate_Distance();
//double calculate_Perimeter();
//double calculate_Area();
//double calculate_Width();
//double calculate_Height();


double calculate_Distance(){
   double x_1, y_1, x_2, y_2;

   // User input of which points will be used
   printf("Enter x_1:");
   scanf("%lf", &x_1);
   printf("Enter y_1:");
   scanf("%lf", &y_1);
   printf("Enter x_2:");
   scanf("%lf", &x_2);
   printf("Enter y_2:");
   scanf("%lf", &y_2);

   int main(){
   double result = sqrt(25);
   printf("The square root of 25 is equal to %.2f\n", result);
   return 0;

   }



   //double distance = sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2));

   //printf("Point #1 entered: x_1 = %.2f; y_1 = %.2f\n", x_1, y_1);
   //printf("Point #2 entered: x_2 = %.2f; y_2 = %.2f\n", x_2, y_2);
   //printf("The distance between the two points is %.2f\n", distance);

   //return distance;


}

//int main (int argc, char** argv){
    calculate_Distance();
    //calculate_Perimeter();
    //calculate_Area();
    //calculate_Width();
   //calculate_Height();

    //return 0;
}

