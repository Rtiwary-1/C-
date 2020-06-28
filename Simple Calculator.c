#include<stdio.h>
#include<stdlib.h>

int main()
{
	int inp1, inp2;
	printf("Enter first number: ");
	scanf("%d",&inp1);
	printf("Enter second number: ");
	scanf("%d",&inp2);
	int op;
	printf("Enter the operation:\n1. +\n2. -\n3. *\n4. /\n5. % \n");
	scanf("%d",&op);
	int result;
	if(op==1){
		result=inp1+inp2;
		printf("sum of %d and %d is %d",inp1,inp2,result);
	}
	else if(op==2){
		result=inp1-inp2;
		printf("difference of %d and %d is %d",inp1,inp2,result);
	}
	else if(op==3){
		result=inp1*inp2;
		printf("product of %d and %d is %d",inp1,inp2,result);
	}
	else if(op==4){
		result=inp1/inp2;
		printf("division of %d and %d is %d",inp1,inp2,result);
	}
	else if(op==5){
		result=inp1%inp2;
		printf("Modulo of %d and %d is %d",inp1,inp2,result);
	}
}
