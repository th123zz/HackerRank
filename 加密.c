/************************
test github
************************/

#include <stdio.h> 
#include <string.h>
#include <math.h>

int main (void)
{
	
	char Str[81];
	scanf ("%s",Str);
	
	int len = 1;
	while( (len*len < strlen(Str)) \
		&& (len*(len+1) < strlen(Str)) ) 
	{
		len++;
	}
	
	if (strlen(Str) <= len*len)
	{
		int i = 0;
		int j = 0;
		int temp = (len*len-strlen(Str))%len;
		
		for (i=0; i<len; i++)
		{
			if ( i <= (len-temp) )
			{
				for (j=0; j<len; j++)
				{
					printf ("%c",Str[i+3*j]);
				}	
			}
			else
			{
				for (j=0; j<len-1; j++)
				{
					printf ("%c",Str[i+3*j]);
				}
			}
			printf (" ");	
			
			
		}
	}
	else
	{
		int i = 0;
		int j = 0;
		int temp = (len*(len+1)-strlen(Str))%len;
		
//		printf ("%d",temp);
		
		for (i=0; i<len+1; i++)
		{
			if ( i <= (len-temp) )
			{
				for (j=0; j<len; j++)
				{
					printf ("%c",Str[i+(len+1)*j]);
				}	
			}
			else
			{
				for (j=0; j<len-1; j++)
				{
					printf ("%c",Str[i+(len+1)*j]);
				}
			}
			printf (" ");	

		}
	}
}
