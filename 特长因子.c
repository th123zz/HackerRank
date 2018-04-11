/**************************
计算N的阶乘    N为1—100的一个整数 

*******************************/

#include <stdio.h>

#define 	MAX_VAL		500

int main (void)
{
	int n = 0;
	int sum[MAX_VAL];
	
	scanf ("%d",&n);
	
	int i = 0;						//控制循环变量 
	
	//初始化数组 
	sum[0] = 1;
	for (i=1; i<MAX_VAL; i++)
	{
		sum[i] = 0;
	}
	
	int j = 0;						//保存数据的位数 
	for (i=1; i<=n; i++)
	{
		int k = 0;
		//每一位都与i相乘，不进位 
		for (k=0; k<=j; k++)
		{	
			sum[k] = sum[k]*i;
		}
		
		//判断是否进位 
		for (k=0; k<=j; k++)
		{	
			if (sum[k] >= 10)
			{
				//如果最高位进位了，那么位数应该加一 
				if (j == k)
				{
					j++;
				}
				sum[k+1] = sum[k+1]+sum[k]/10;
				sum[k] = sum[k]%10;
			}
		}
	}
		
	for (; j>=0; j--)
	{
		printf ("%d",sum[j]);
	}
	
}






