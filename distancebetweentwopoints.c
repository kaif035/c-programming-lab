#include<stdio.h>
#include<math.h>
void main() {
    int x1 , x2 , y1 ,y2;
    printf("enter x1");
    scanf("%d" , &x1);
    printf("\nenter x2");
    scanf("%d" , &x2);
    printf("\nenter y1");
    scanf("%d" , &y1);
    printf("\nenter y2");
    scanf("%d" , &y2);

    float distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("distance between two points is %f" , distance);
}