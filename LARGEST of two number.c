#include <stdio.h>
int largest(int a,int b,int c){
    if(a>b && a>c)
    return a;
    if(b>a && b>c)
    return b;
    else 
    return c;
}
int main()
{
    int a,b,c;
    printf("Enter any three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("Largest is %d\n",largest(a,b,c));
    return 0;
}
