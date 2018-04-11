/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) \
{
	
	int *num = (int*) malloc (sizeof (2*int));
	for(int i = 0; i<numsSize; i++)
	{
		for (int j = i; j<numsSize; j++)
		{
			if (target == (nums[i]+nums[j]))
			{
				num[0] = i;
				num[1] = j;
			}
		}
	} 
	return num;  
}
