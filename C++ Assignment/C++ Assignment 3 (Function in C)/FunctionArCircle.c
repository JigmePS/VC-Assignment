/* 4.Write a function areaofcircle() which accepts radius of float value and return the area of circle. 
Use this function to calculate area of fourcircles having different radii. */
#include<stdio.h>
float areaofcircle(float);
void main()
{
    float r1,r2,r3,r4;
    printf("Radius of 1st Circle = ");
    scanf("%f",&r1);
    printf("Ar of 1st circle = %f\n",areaofcircle(r1));
    printf("\nRadius of 2nd Circle = ");
    scanf("%f",&r2);
    printf("Ar of 2nd circle = %f\n",areaofcircle(r2));
    printf("\nRadius of 3rd Circle = ");
    scanf("%f",&r3);
    printf("Ar of 3rd circle = %f\n",areaofcircle(r3));
    printf("\nRadius of 4th Circle = ");
    scanf("%f",&r4);
    printf("Ar of 4th circle = %f",areaofcircle(r4));
}
float areaofcircle(float r)
{
    float area,pi=3.14;
    area=pi*r*r;
    return area;
}