// Assignment: Do-While
// Raghavendra Tiwary

#include <stdio.h>
#define EXIT_SUCCESS 0

int main()
{
    int inp;
    printf("Enter Number:  ");
    scanf("%d",&inp);
    int sum = 0;
    do{
    	sum=sum+inp;
    	if(inp == 0){
    		break;
		}
		printf("Enter Number:  ");
    	scanf("%d",&inp);
		
	}
	while(1);
	printf("Sum is: %d",sum);
    return EXIT_SUCCESS;
}
