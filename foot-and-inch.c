#include <stdio.h>
int main(){
	printf("请输入您的身高");
	int foot=0,inch=0;
	scanf("%d %d",&foot,&inch);
	printf("身高是%f米\n",(foot+inch/12.0)*0.3048);
	return 0;
	
}