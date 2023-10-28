#include <stdio.h>
 int main()
 {
 	int min,a,b,c;
 	printf("求两个数的最大公因数，请输入两个数，例如6 9。请输入："); 
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
	printf("最大公因数为%d。\n",c); 
 	return 0;
 }
