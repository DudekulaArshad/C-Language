#include<stdio.h>
#include<string.h>
int main (){
    char str1[20],str2[10];
    int x;
    printf("Enter first string ");
    get(str1);
    printf("\n Enter second string ");
    get(str2);
    x=strcmp(str1,str2);
    if(x==0){
        printf("\n Strings are equal");
    }
    else if(x>0){