#include<stdio.h>
int main()
{
	int num=10;
	char ch = 'a';
	double d = 101.345;
	char s[20];
	printf("\n%d \n %f", num, d);
	scanf("%d",&num);
	//fflush(stdin)
	scanf(" %c", &ch);
	printf("\n %d%c,num");
	return 0;

}