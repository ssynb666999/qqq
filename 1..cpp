#include <stdio.h>
 int main()
 {
 	int min,a,b,c;
 	printf("�������������������������������������6 9�������룺"); 
 	scanf("%d %d",&a,&b);
 	if(a>b){min=b;}
	 else{min=a;}
	 int n=1;
	for(n=1;n<min;n++){
		if(a%n==0)
		{if(b%n==0)
		{c=n;}
		}
	}
	printf("�������Ϊ%d��\n",c); 
 	return 0;
 }
