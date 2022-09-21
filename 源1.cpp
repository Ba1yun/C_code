#include<stdio.h>
int main(void) 
{
	int x, y;
	puts("请输入两个参数");
	printf("第一个数："); scanf("%d", &x);
	printf("第二个数："); scanf("%d", &y);
	printf("他们的和是：%d\n", x + y);
	return 0;
}