#include<stdio.h>
 int main()
 {
 	int num,m,n,target;
 	printf("�������������:");
 	scanf("%d",&num);
 	int nums[num];
 	printf("����������:");
 	for (m=0;m<num;m++)
	{
		scanf("%d",&nums[m]);
	}
	printf("������target��"); 
	scanf("%d",&target);
	for(m=0;m<num;m++)
	{
		for(n=m+1;n<num;n++)
		{
			if(nums[m]+nums[n]==target)
			{
				printf("���ڣ��������±���%d��%d\t",m+1,n+1);
				
			}
		}
		
	}
 		return 0;
 }
