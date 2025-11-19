#include <stdio.h>
int main()
{
    int a,sum=0;
    printf("Enter the number of elements a\n");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the array elemnts\n");
    for(int i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("Sum is %d\n", sum);
}
