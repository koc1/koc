#include<stdio.h>
int main()
{
	int age;
	scanf("%d",&age);
	if(age>18)
		printf("你已经成年了\n");
	else
		printf("你还需要再等等\n");
	return 0;
}