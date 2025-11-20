#include <stdio.h>
#include <string.h>

int main() {
    char string[100]; 
    char str[100];
    printf("Enter the name\n");
   scanf("%s",&string);//USE SCANF TO EMERGE THE LINES TOGETHER
    printf("Enter the 2nd name\n");
    scanf("%s",&str);
    strcat(string, str);
   printf("Emerged string: %s\n", string);
   
}
