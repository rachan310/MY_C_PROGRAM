#include <stdio.h>
union A{
    int x;
    char y;};
int main() {
    printf("Sizeof A: %ld\n", sizeof(union A));
}
