/**************************
����N�Ľ׳�    NΪ1��100��һ������ 

*******************************/

#include <stdio.h>

#define 	MAX_VAL		500

int main (void)
{
	int n = 0;
	int sum[MAX_VAL];
	
	scanf ("%d",&n);
	
	int i = 0;						//����ѭ������ 
	
	//��ʼ������ 
	sum[0] = 1;
	for (i=1; i<MAX_VAL; i++)
	{
		sum[i] = 0;
	}
	
	int j = 0;						//�������ݵ�λ�� 
	for (i=1; i<=n; i++)
	{
		int k = 0;
		//ÿһλ����i��ˣ�����λ 
		for (k=0; k<=j; k++)
		{	
			sum[k] = sum[k]*i;
		}
		
		//�ж��Ƿ��λ 
		for (k=0; k<=j; k++)
		{	
			if (sum[k] >= 10)
			{
				//������λ��λ�ˣ���ôλ��Ӧ�ü�һ 
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






