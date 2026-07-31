#include <stdio.h>

void main()
 {


    float length, width, area;

    clrscr();

    printf("\n Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("\n Enter the width of the rectangle: ");
    scanf("%f", &width);

    area = length * width;

    printf("\n The Area of the Rectangle is: %.2f\n", area);

    return 0;

    }