#include <stdio.h>
#include <string.h>

#define 	MAX_VAL		101

int main (void)
{
	int k;
	char String1[MAX_VAL];
	char String2[MAX_VAL];
	
	scanf ("%s",String1);
	scanf ("%s",String2);
	scanf ("%d",&k);
	
	if ( k >= (strlen(String1)+strlen(String2)) )
	{
		printf ("Yes");
	}
	else
	{
		int flag = 0;
		int i = 1;				//i用于存储两个字符串前面有多少位相同 	

		if ( 0 == strcmp(String1, String2) )
		{
			flag = k%2+1;
		}
		else
		{
			while( 0 == strncmp(String1, String2, i) )
			{
				i++;
			}
		
			if ( 	strlen(String1)+strlen(String2)-2*i < k	\
						&& (strlen(String1)+strlen(String2)-2*i-k)%2 == 0)
			{
				flag = 1;
			}
			else
			{
				flag = 0;
			}	
		}

		switch (flag)
		{
			case 0:printf ("No");break;
			case 1:printf ("Yes");break;
			default:break;
		}
	}
	return 0;
}
