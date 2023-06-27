#include <stdio.h>

 
 void main()
{
  	char str[100];
  	int a;
  	
  	int f[300]={0}; 
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	
  	for(a=0;str[a] !='\0';a++)
  	{
  		f[str[a]]++;
	}
  		
  	for(a=0; a<300;a++)
  	{
		if(f[a] != 0)
		{
			printf("%c Comes %d Times \n", a, f[a]);
		}
	}
}
