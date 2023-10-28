#include <stdio.h>
 int main()
 {
 	int n;
 	for(n=7;n>-1;n--)
	 {
	 char a=0b01000001;
	 a=a>>n;
	 printf("%d",a&0b01000001);
	 }
 	return 0;
 }
