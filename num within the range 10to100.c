#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 10 && num <= 100) {
        printf("The number %d is within the range 10 to 100.\n", num);
    } else {
        printf("The number %d is NOT within the range 10 to 100.\n", num);
    }
}
