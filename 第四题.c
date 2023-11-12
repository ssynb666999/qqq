#include<stdio.h>
 int main()
 {
 	int num,m,n,target;
 	printf("请输入数组个数:");
 	scanf("%d",&num);
 	int nums[num];
 	printf("请输入数组:");
 	for (m=0;m<num;m++)
	{
		scanf("%d",&nums[m]);
	}
	printf("请输入target："); 
	scanf("%d",&target);
	for(m=0;m<num;m++)
	{
		for(n=m+1;n<num;n++)
		{
			if(nums[m]+nums[n]==target)
			{
				printf("存在，这两个下标是%d和%d\t",m+1,n+1);
				
			}
		}
		
	}
 		return 0;
 }
