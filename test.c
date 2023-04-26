#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    printf("The sum of %d and %d is ", x, y);
    printf("%d", x+y);
    return 0;
}
