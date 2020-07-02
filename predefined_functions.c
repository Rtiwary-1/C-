// Assignment: Predefined functions
// Raghavendra Tiwary

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define EXIT_SUCCESS 0


int main()
{
    char s[17]="I am Progressing";
    char t[17]="I Am progressing";
    printf("%s\n%s\n",s,t);
    int a=strcmp(s,t);
    printf("%d\n",a);
    char v[17];
	strcpy(v,s);
	printf("%s\n",v);
	strrev(s);
	printf("%s\n",s);
	int n=strlen(s);
	printf("%d\n",n);
	strupr(s);
	printf("%s\n",s);
	strlwr(s);
	printf("%s\n",s);
	int q=12;
	int re=3;
	int qw=pow(q,re);
	printf("%d\n",qw);
	int qwe = 16;
	int as=sqrt(qwe);
	printf("%d\n",as);
	float qa = 16.056;
	float qas = ceil(qa);
	printf("%0.1f\n",qas);
	float zx = floor(qa);
	printf("%0.1f\n",zx);
	int p=rand();
	printf("%d\n",p);
    return EXIT_SUCCESS;
}
