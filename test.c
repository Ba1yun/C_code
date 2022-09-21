//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf_s("%d%d%d", &a,&b,&c);
//	if (a < b)
//	{
//		a = b;
//		t = a;
//		
//	}
//	if (a < c)
//	{
//		a = c;
//		c = a;
//	}
//	if (b < c)
//	{
//		b = c;
//		c = b;
//	}
//	printf("%d,%d,%d", a, b, c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				//printf("%d", i);
//				break;
//			}
//		}
//		if (i == j)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 0,1,5,9,7,12,19,20 };
//	int sz = (sizeof(arr)) / sizeof(arr[0]);
//	int max = arr[0];//不能令max=0，只能是数组当中的其中一个数
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//
//	printf("最大值为：%d\n", max);
//
//	return 0;
//}
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 1;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i*j);//%2d是保留两位向右对齐若是一位则空格对齐，%-2d是向左对齐

		}
		printf("\n");
	}
	return 0;
}
