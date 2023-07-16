#include<stdio.h>

void main()
{
	int i;
	char a[100];
	
	printf("Enter any name : ");
	scanf("%s",&a);
	
	for(i=0;i<=a[i];i++)
	{
		if(a[i]>=65 && a[i]<=90) 
		
		   printf("%c",a[i]+32);
		   else if (a[i]>=97 && a[i]<=122)
		 
		     printf("%c",a[i]-32);
	}
	
}
