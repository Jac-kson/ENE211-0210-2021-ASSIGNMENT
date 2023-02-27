#include <stdio.h>
main()
{
    float length,width,area,perimeter;
    printf("input the length\n");
    scanf("%f",&length);
    printf("input the width\n");
    scanf("%f",&width);
    area=length*width;
    perimeter=2*(length*width);
    printf("the area of the rectangle is%f\n",area);
    printf("the perimeter of the rectangle is %f\n",perimeter);
    return 0;
}
