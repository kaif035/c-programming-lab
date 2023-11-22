#include<stdio.h>
void main(){
    int n ,LastDigit ,sum=0 ,temp;
    printf("Enter the number:");
    scanf("%d" ,&n);
    temp=n;

    while(n>0){
        LastDigit=n%10;
        sum=sum+(LastDigit*LastDigit*LastDigit);
        n=n/10;
    }
    if(temp==sum){
        printf("This number is an armstrong number");
    }
    else{
        printf("This number is not an armstrong number");
    }
}