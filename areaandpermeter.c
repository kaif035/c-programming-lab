#include<stdio.h>
#include<math.h>
void main() {
    float side;
    printf("enter side");
    scanf("%f" , &side);
    float length , breadth;
    printf("enter length");
    scanf("%f" , &length);
    printf("enter breadth");
    scanf("%f" , &breadth);
    float radius;
    printf("enter radius");
    scanf("%f" , &radius);

    printf("area of square is %f\n" , side * side);
    printf("perimeter of square is %f\n" , 4*side);

    
    printf("area of rectangle is %f\n" , length * breadth );
    printf("perimeter of rectangle is %f\n" , 2*(length + breadth));

    printf("area of circle is %f\n" , 3.14*radius*radius);
    printf("perimeter of circle is %f" , 2*3.14*radius);   
}