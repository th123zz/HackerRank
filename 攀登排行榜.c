#include <stdio.h>

#define 	MAX_ARRAY	2000

int main (void)
{
	long n = 0;
	long m = 0;
	long Rank = 1;
	
	long Scores[MAX_ARRAY];
	long Alice[MAX_ARRAY];
	
	long i = 0;
	scanf ("%ld",&n);
	for (i=0; i<n; i++)
	{
		scanf ("%ld",&Scores[i]); 
	}
	
	long j = 0;
	scanf ("%ld",&m);
	for (j=0; j<m; j++)
	{
		scanf ("%ld",&Alice[j]);
	}
	
	for (i=0; i<m; i++)
	{
		Rank = 1;
		for (j=0; j<n; j++)
		{
			if (Alice[i] >= Scores[j])
			{
				break;
			}
			else
			{
				if (Scores[j] == Scores[j-1])
				{
					continue;
				}
				else
				{
					Rank++;
				}
			}
		} 
		printf ("%ld\n",Rank);
	}
	return 0;
}









