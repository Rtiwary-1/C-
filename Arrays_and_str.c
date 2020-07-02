// Assignment: Structures
// Raghavendra Tiwary

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define EXIT_SUCCESS 0

struct employee{
	char name[30];
	int salary;
	int ID;
	int exp;
};

int main()
{
    struct employee emp[5];
    int i;
    for(i=0;i<5;i++){
    	printf("Enter the %dst employee's' name, employee ID, salary and experience: -",i+1);
    	fflush(stdin);
    	scanf("%s%d%d%d",&emp[i].name,&emp[i].ID,&emp[i].salary,&emp[i].exp);
	}
	
	int j;
	for(j=0;j<5;j++){
		printf("For %dst employee:\n",j+1);
		printf("Employee name: - %s \nEmployee ID: - %d \nSalary: - Rs. %d \nExperience: - %d years\n",emp[j].name,emp[j].ID,emp[j].salary,emp[j].exp);
	}
    return EXIT_SUCCESS;
}
