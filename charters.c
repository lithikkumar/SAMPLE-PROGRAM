#include<stdio.h>
int main()
{
	char name[50];
	char *ptr;
	
	printf("Enter your name:");
	scanf("%s", name);
	
	ptr=name;
	
	printf("\n characters in your name:\n");
	while(*ptr != '\0')
	{
		printf("%c\n",*ptr);
		ptr++;
	}
return 0;	
	
}
