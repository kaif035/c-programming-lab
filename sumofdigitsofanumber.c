#include<stdio.h>
void main(){
    int n;
    printf("enter the number :");
    scanf("%d" ,&n);

    int sum=0;
    int lastDigit;
    while(n!=0){
        lastDigit=n%10;
        sum=sum+lastDigit;
        n=n/10;
        }
    printf("sum of the digits of given number is %d" ,sum);
    
}