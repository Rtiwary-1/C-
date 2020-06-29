// Assignment: Nested if-else
// Raghavendra Tiwary

#include <stdio.h>
#define EXIT_SUCCESS 0

int main()
{
    int grade;
    printf("Enter grade:  ");
    scanf("%d",&grade);
    if(grade>=45){
        if(grade>=60){
            if(grade>=70){
                if(grade>=80){
                    printf("A grade");
                }
                else{
                    printf("B grade");
                }
            }
            else{
                printf("C grade");
            }
        }
        else{
            printf("D grade");
        }
    }
    else{
        printf("FAIL");
    }
    return EXIT_SUCCESS;
}
