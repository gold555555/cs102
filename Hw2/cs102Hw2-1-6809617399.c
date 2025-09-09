#include <stdio.h>
    int main (){
        float a , b ,x ;
        printf("Enter the height of the mother (centimeters): ");
        scanf("%f",&a);
        printf("Enter the height of the father (centimeters): ");
        scanf("%f",&b);
        x = (a+b)/2.00;
        printf("The possible height of the child is between %.2f to %.2f centimeters.",x-13.5,x+13.5);

    }