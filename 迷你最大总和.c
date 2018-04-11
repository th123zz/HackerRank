#include <stdio.h>

int main (void)
{
	long Sum = 0;
	long Min_Num = 0;
	long Max_Num = 0;
	
	long Array[5];
	
	int i = 0;
	for (i=0; i<5; i++)
	{
		scanf ("%ld",&Array[i]);
	}
	
	Min_Num = Array[0];
	Max_Num = Array[0];
	
	for (i=0; i<5; i++)
	{
		Sum += Array[i];
		
		if (Min_Num > Array[i])
		{
			Min_Num = Array[i];
		}
		
		if (Max_Num < Array[i])
		{
			Max_Num = Array[i];
		}
	}
	
	printf ("%ld %ld",(Sum-Max_Num),(Sum-Min_Num));
}







 
