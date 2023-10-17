#include<stdio.h>
void main(){
    int c;
    float radius;
    printf("select 1 to calculate area of circle\nselect 2 to calculate perimeter of circle");
    scanf("%d" ,&c);
    switch(c){
        case 1:
        printf("enter the radius of the circle");
        scanf("%f" ,&radius);
        printf("the area of circle is %f" ,3.14*radius*radius);
        break;
        case 2:
        printf("enter the radius of circle");
        scanf("%f" ,&radius);
        printf("the perimetrer of circle is %f" ,2*3.14*radius);
        break;
        default:
        printf("Your input is wrong");
        break;
    }
}