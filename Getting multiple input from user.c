#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the three numbers:  ");
    scanf("%d%d%d",&a,&b,&c);
    int result = a+b+c;
    printf("The sum of %d and %d and %d is %d",a,b,c,result);
    return 0;
}
