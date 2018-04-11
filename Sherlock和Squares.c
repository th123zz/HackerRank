#include <stdio.h>
#include <math.h>

int main (void)
{
	int n = 0;
	long num1[2][100];
	
	scanf ("%d",&n);
	
	int i = 0;
	for (i=0; i<n; i++)
	{
		scanf ("%ld",&num1[0][i]);
		scanf ("%ld",&num1[1][i]);
	}
	
	for (i=0; i<n; i++)
	{
		double temp1 = sqrt(num1[0][i]);
		double temp2 = sqrt(num1[1][i]);
		
		int result = (int)temp2 - (int)temp1;
		
		if ( num1[0][i] == pow((int)temp1,2) )
		{
			result++;
		}
		
		printf ("%d\n",result);
	}
	
	return 0;
	
}






