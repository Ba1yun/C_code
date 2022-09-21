#include <stdio.h>
//二分查找
int main()
{
	int arr[] = {1,2,3,3,4,5,6,7,8,9,10,11};
	int k = 13;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else 
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}

	}
	if (left > right)
		printf("找不到\n");

	return 0;
}




//int main()
//{
//	int b = 1;
//	int i = 1;
//	int n = 0;
//	int ret = 0;
//	int j = 1;
//	printf("请输入n:");
//	scanf_s("%d\n", &n);
//	for (j = 1; j < n + 1; j++)
//	{
//		b = 1;
//		for (i = 1; i < j + 1; i++)
//			b = b*i;
//		ret = ret + b;
//	}
//	
//		
//	printf("n的阶乘为：%d\n", b);
//	printf("n的阶乘为：%d\n", ret );
//
//	return 0;
//}