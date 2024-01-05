#include <stdio.h>
#include <string.h>
void main()
{
    char str[20],str1[20];
    int res;
    printf("\nEnter the string :- ");
    gets(str);
    printf("\nEnter the other string :- ");
    gets(str1);
    printf("Length of the given string is %d\n",strlen(str));
    printf("Length of the given string is %d\n",strlen(str1));
    printf("Compare string result is :%d\n",strcmp(str,str1));
    printf("Uppercase string is %s\n", strupr(str));
    printf("Copy of string is %s\n", strcpy(str, str1));
    printf("Lowercase string is %s\n", strlwr(str1));
}