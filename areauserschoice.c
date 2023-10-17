#include<stdio.h>
#include<math.h>
void main(){
    int x ,y;
    float a ,b ,r;
    printf("whose area and perimeter do you want to find\npress 1 for square\npress 2 for rectangle\npress 3 for circle");
    scanf("%d" ,&x);
    if (x==1){
        printf("select 1 for area\nselect 2 for perimeter");
        scanf("%d" ,&y);
        if(y==1){
            printf("enter the side of square=" ,a);
            scanf("%f" ,&a);
            printf("area of square is %f" ,a*a);
        }
        else if(y==2){
            printf("enter the side of the square=" ,a);
            scanf("%f" ,&a);
            printf("perimeter of square is %f" ,4*a);
        }
        else{
            printf("Your input is wrong");
        }
    }
    else if(x==2){
        printf("select 1 for area\nselect 2 for perimeter");
        scanf("%d" ,&y);
        if(y==1){
            printf("enter the length of rectangle=" ,a);
            scanf("%f" ,&a);
            printf("enter the breadth of rectangle=" ,b);
            scanf("%f" ,&b);
            printf("area of rectangle is %f" ,a*b);
        }
        else if(y==2){
            printf("enter the length of rectangle=" ,a);
            scanf("%f" ,&a);
            printf("enter the breadth of rectangle=" ,&b);
            scanf("%f" ,&b);
            printf("perimeter of rectangle is %f" ,2*(a+b));
        }
        else{
            printf("Your input is wrong");
        }
    }
    else if(x==3){
        printf("select 1 for area\nselect 2 for perimeter");
        scanf("%d" ,&y);
        if(y==1){
            printf("enter the radius of circle=" ,r);
            scanf("%f" ,&r);
            printf("area of circle is %f" ,3.14*r*r);
        }
        else if(y==2){
            printf("enter the radius of circle=" ,r);
            scanf("%f" ,&r);
            printf("perimeter of circle is %f" ,2*3.14*r);
        }
        else{
            printf("Your input is wrong");
        }
    }
    else{
        printf("Your input is wrong");
    }
}