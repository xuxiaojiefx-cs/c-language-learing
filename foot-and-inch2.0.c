#include <stdio.h>
int main()
{
	double foot=0.0,inch=0.0;
	printf("请输入您的身高");
	scanf("%lf %lf",&foot,&inch);
	printf("您的身高是%f\n",(foot+inch/12)*0.3048);
	return 0;
}