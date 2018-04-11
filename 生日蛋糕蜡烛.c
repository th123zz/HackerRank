#include <stdio.h>

#define MAX	100001

int main (void)
{
	long Num = 0;
	long array[MAX];
	
	long Max_Num = 0;
	long flag = 0;
	
	long i = 0;
	
	scanf ("%ld",&Num);
	
	for (i = 0; i<Num; i++)
	{
		scanf ("%ld",&array[i]);
	}
	
	for (i = 0; i<Num; i++)
	{
		if (Max_Num < array[i])
		{
			Max_Num = array[i];
			flag = 0;
		}
		
		if (Max_Num == array[i])
		{
			flag += 1;
		}
	}
	printf ("%d",flag);
	
	return 0;
}









