
//二维数组
//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = {{1,2,3},{4,5}};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%p ", &arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//自定义求字符串长度
//求长度大小，可以用库函数sizeof()或者strlen()
//#include<stdio.h>

//没有临时变量
//int len(char* s)
//{
//	while (*s != "\0")
//	{
//		s++;
//	}
//	return s;
//}
//int main()
//{
//	char arr[] = "lim";
//	int ret = len(arr);
//	printf("长度为：%d", ret);
//
//	return 0;
//}
//排序
#include<stdio.h>
sort(int brr[],int sz)
{
	//冒泡趟数
	//int szz = sizeof(brr) / sizeof(brr[0]);
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (brr[j] > brr[j + 1])
			{
				int ret = brr[j];
				brr[j] = brr[j + 1];
				brr[j + 1] = ret;

			}
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		//sort(arr,sz);
		printf("%d ", arr[i]);
	}

	return 0;

}