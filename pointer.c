#include<stdio.h>
int main()
{
	int num;
	int *ptr;
	
	printf("Enter an integer:");
	scanf("%d", &num);
	
	ptr = &num;
	
	printf("\n Value of num =%d\n",num);
	printf("\n Address of num =%d\n",&num);
	printf("\n pointer ptr stores address =%p\n", ptr);
	printf("\n value using pointer (*ptr)=%d\n",*ptr);
	return 0;
	
}
