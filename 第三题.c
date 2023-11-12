#include<stdio.h>
 int main()
 {
 	int num1,num2,m,n;
 	printf("请输入第一个数组个数:");
 	scanf("%d",&num1);
 	int a[num1];
 	printf("请输入第一个数组:");
 	for (m=0;m<num1;m++)
	{
		scanf("%d",&a[m]);
	}
 	printf("请输入第二个数组个数:");
 	scanf("%d",&num2);
 	int b[num2];
 	printf("请输入第二个数组:");
 	for (m=0;m<num2;m++)
	{
		scanf("%d",&b[m]);
	}
	for(n=0;n<num1+num2;n++)
	{
		if(n<num1)
		{
			printf("%d\t",a[n]);
		}
		else
		{
			printf("%d\t",b[n-num1]);
		}
	}
	return 0;
 }
