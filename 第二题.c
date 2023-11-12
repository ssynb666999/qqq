#include<stdio.h>
void add(int*a,int num);
void delete(int*a,int num);
void change(int*a,int num);
 int main()
 {
 	int num,m,s;
 	printf("请输入该数组个数:");
 	scanf("%d",&num);
 	int a[num];
 	printf("请输入该数组:");
 	for (m=0;m<num;m++)
	{
		scanf("%d",&a[m]);
	}
 	printf ("请输入哪种操作（1.增加;2.删除;3修改）:");
 	scanf("%d",&s);
 	switch (s)
 	{
	 case 1:
	 add (a,num);
	 break;
	 case 2:
	 delete (a,num);
	 break;
	 case 3:
	 change (a,num);
	 break;
	}	
 	return 0;
 }
 void add(int*a,int num)
 {
 	int x,y,n,t;
 	printf("请输入您要增加的位置:");
	 scanf("%d",&x);
	printf("请输入您要增加的数值:");
	 scanf("%d",&y);
	 t=a[num];
	 for(n=num;n>x;n--)
	 {
	 	a[n]=a[n-1]	;
	 }
	 a[x]=y;
	 for (n=0;n<num+1;n++)
	{
		if(n!=num+1)
		{
			printf("%d\t",a[n]);
	 	}
		else
		{
			printf("%d\t",t);	
		}
	}
 }
 void delete(int*a,int num)
 {
 	int x,n;
 	printf("请输入您要删除的位置:");
	 scanf("%d",&x);
	 
	 
	 for(n=0;n<x-1;n++)
	 printf("%d\t",a[n]);
	 for(n=x;n<num;n++)
	 printf("%d\t",a[n]);
}

 void change(int*a,int num)
 {
 	int x,y,n;
 	printf("请输入您要修改的位置:");
	 scanf("%d",&x);
	printf("请输入您要修改的数值:");
	 scanf("%d",&y);
	 a[x-1]=y;
	 for(n=0;n<num;n++)
	 {
	 	printf("%d\t",a[n]);
	  } 
 }
