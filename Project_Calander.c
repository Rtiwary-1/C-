#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define LEAP_YEAR ((Year%4==0 && Year%100 != 0)||Year%400==0)
#define TRUE 1
#define CH '-'
#define MAX_NO 91

int MonthDay[] = {31,28,31,30,31,30,31,31,30,31,30,31};
char *Day[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
char *MonthName[]={"January","February","March","April","May","June","July",
        "August","September","October","November","Decembeer"};
char *MonthName1[]={"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP",
            "OCT","NOV","DEC"};
      
int getZeller(int Month,int Year)
{
    int Day = 1, ZMonth, ZYear, Zeller;
    if(Month < 3)
        ZMonth = Month+10;
    else
        ZMonth = Month-2;
    if(ZMonth > 10)
        ZYear = Year-1;
    else
        ZYear = Year;
    Zeller = ((int)((13*ZMonth-1)/5)+Day+ZYear%100+
            (int)((ZYear%100)/4)-2*(int)(ZYear/100)+
            (int)(ZYear/400)+77)%7;
    return Zeller;
}


void printchar(char c)
{
    int i;
    printf("\n\t");
    for(i=1;i<=51;i++)
        printf("%c",c);
    printf("\n");
}


int main() 
{
	//printf("\033[0m");
	//clrscr();
	printf("\n\tThis program shows calendar of \n");
	printf("\n\ta given month. Enter month, year...format is mm-yyyy.\n");
	int Month, Year, Zeller,i,j,day,l;
	while(TRUE)
	{
		
    	fflush(stdin);
    	printf("\n\n\tEnter mm-yyyy: ");
    	scanf("%d-%d", &Month, &Year);
    	if(Year < 0)
    	{
        	printf("\nInvalid year value...");
        	continue;
    	}
    	if(Year < 100)
    	    Year += 1900;
    	if(Year < 1582 || Year > 4902)
    	{
    	    printf("\nInvalid year value...");
    	    continue;
    	}
    	if(Month < 1 || Month > 12)
    	{
    	    printf("\nInvalid month value...");
    	    continue;
    	}
    	break;
	}
	do
	{
    	/* calculating day of 1st date of given month */
    	Zeller = getZeller(Month,Year);
    	//clrscr();
    	printf("\n\n\t\t\t");
	
    	/* printing the corresponding month name */
    	
    	printf("%s %d\n",MonthName[Month-1],Year);
    	//textbackground("BLACK");
	
    	/* adjusting February in case of Leap Year */
    	MonthDay[1] = LEAP_YEAR ? 29 : 28;
	
    	/* giving output */
    	printchar(CH);
	
    	
    	printf("\t");printf("SUN");
    	
    	printf("     MON     TUE     WED     THU     FRI    SAT");
    	
	
    	printchar(CH);
	
    	
    	for(i = 1; i <= Zeller; i++)
    	    printf("\t -");
    	j = Zeller;
    	
    	for(i = 1; i <= MonthDay[Month-1]; i++)
    	{
    	    if(j++ % 7 == 0)
    	    {
    	        printf("\n\t");
    	        
    	        printf("%2d",i);
    	        
    	    }
    	    else
    	        printf("      %2d",i);
    	}
    	printf("\n\t%d",Zeller);

    	printchar(CH);
    	printf("\n\tDO you wish to continue? press 1 for yes, 0 for no!  ");
    	scanf("%d",l);
	}while(l!= 0);
	return 0;
}
