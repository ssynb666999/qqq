#include<stdio.h>
 int main()
 {
 	int num1,num2,m,n;
 	printf("�������һ���������:");
 	scanf("%d",&num1);
 	int a[num1];
 	printf("�������һ������:");
 	for (m=0;m<num1;m++)
	{
		scanf("%d",&a[m]);
	}
 	printf("������ڶ����������:");
 	scanf("%d",&num2);
 	int b[num2];
 	printf("������ڶ�������:");
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
