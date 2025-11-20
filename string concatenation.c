#include<stdio.h>
#include<string.h>
int main(){
    char rachan[10];
    printf("enter your string\n");
    scanf("%d",&rachan);
    printf("before concat%s\n",rachan);
    strcat(rachan,"sinu");
    printf("after concat%s\n",rachan);
}
