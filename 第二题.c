#include<stdio.h>
void add(int*a,int num);
void delete(int*a,int num);
void change(int*a,int num);
 int main()
 {
 	int num,m,s;
 	printf("��������������:");
 	scanf("%d",&num);
 	int a[num];
 	printf("�����������:");
 	for (m=0;m<num;m++)
	{
		scanf("%d",&a[m]);
	}
 	printf ("���������ֲ�����1.����;2.ɾ��;3�޸ģ�:");
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
 	printf("��������Ҫ���ӵ�λ��:");
	 scanf("%d",&x);
	printf("��������Ҫ���ӵ���ֵ:");
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
 	printf("��������Ҫɾ����λ��:");
	 scanf("%d",&x);
	 
	 
	 for(n=0;n<x-1;n++)
	 printf("%d\t",a[n]);
	 for(n=x;n<num;n++)
	 printf("%d\t",a[n]);
}

 void change(int*a,int num)
 {
 	int x,y,n;
 	printf("��������Ҫ�޸ĵ�λ��:");
	 scanf("%d",&x);
	printf("��������Ҫ�޸ĵ���ֵ:");
	 scanf("%d",&y);
	 a[x-1]=y;
	 for(n=0;n<num;n++)
	 {
	 	printf("%d\t",a[n]);
	  } 
 }
