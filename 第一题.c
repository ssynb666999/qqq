#include<stdio.h>
 int main()
 {
 	int num;
 	printf("�������������:");
 	scanf("%d",&num);
 	int a[num];
 	int m,n;
 	printf("����������:");
	for (m=0;m<num;m++)
	{
		scanf("%d",&a[m]);
	}
	int t;
	for (m=0;m<num;m++)
	{
		for (n=m+1;n<num;n++)
		{
			if(a[m]>a[n])
			{
				t=a[m];
				a[m]=a[n];
				a[n]=t;
			}
			
		}
	}
	for (m=0;m<num;m++)
	{
		printf("%d\t",a[m]);
	}
 	return 0;
 }
