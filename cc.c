#include <stdio.h>
int main()
{
	int price=0,
	amount=100;
	printf("请输入价格:\n请输入实付款:\n");
	scanf("%d %d",&price,&amount);
	int change=amount-price;
	printf("应找您%d\n",change);
	return 0;
	
}