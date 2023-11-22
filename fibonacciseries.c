#include<stdio.h>
void main(){
    int n ,n1=0 ,n2=1 ,nextTerm;
    printf("enter the number :");
    scanf("%d" ,&n);

    printf("%d,%d," ,n1,n2); 
    for(int i=2;i<n;i++){
        nextTerm=n1+n2;
        n1=n2;
        n2=nextTerm;
        printf("%d," ,nextTerm);
    }
}