#include <stdio.h>

int main (void)
{
	int Num = 0;
	
	scanf ("%d",&Num);
	
	int i = 0;			//i控制行 
	int j = 0;			//j控制列 
	for (i = 0; i<Num; i++) 
	{
		for (j=0; j<Num-i-1; j++)
		{
			printf (" ");	
		}
		for (j=0; j<=i; j++)
		{
			printf ("#");
		}
		printf ("\n");
	}
}
