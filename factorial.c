#include<stdio.h>
void main(){
    int factorial=1,n;
    printf("enter the number :");
    scanf("%d" ,&n);

    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    printf("factorial is %d\n" ,factorial);
    
    }

