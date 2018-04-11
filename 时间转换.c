#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main (void)
{
	char str1[20];
	char str2[9];
	
	gets(str1);
	
	if (NULL != strstr(str1,"AM"))
	{
		int sum = 10*(str1[0]-48)+(str1[1]-48);
		
		
		if (sum >= 12)
		{
			sum = sum-12;
		}
		str1[0] = sum/10+48;
		str1[1] = sum%10+48;
		
		strncpy (str2,str1,8);
		str2[8] = '\0';
		puts(str2);
	}
	if (NULL != strstr(str1,"PM"))
	{
		int sum = 10*(str1[0]-48)+(str1[1]-48);
		
		if (sum < 12)
		{
			sum = sum+12;
		}
		
		if (sum >= 24)
		{
			sum = sum-24;
		}
		
		str1[0] = sum/10+48;
		str1[1] = sum%10+48;
		
		strncpy (str2,str1,8);
		str2[8] = '\0';
		puts (str2);
	}
	
	return 0;
}







