#include<stdio.h>

int StringLength(char []); 

int main()
{
	
	char name[100];
	
	printf("Please enter a string: ");
	scanf("%s", name);
	
	printf("Your string has %d characters.", StringLength(name) ); 
	
	return 0;

}


int StringLength(char name[])
{
	
	int i;
	
	for (i=0; name[i] != '\0'; i++);

	return i;
	
}
