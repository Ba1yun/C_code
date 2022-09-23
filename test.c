//#include<stdio.h>
//
////将输入的整数按数字打印出来，使用递归的思想，该函数是从最高位依次打印，虽然最低位最好打印
//void fun(int x)
//{
//	if (x > 9)
//	{
//		
//		fun(x/10);
//	}
//	printf("%d ", x % 10);
//}
//
//int main()
//{
//	unsigned int sun = 0;
//	scanf_s("%d",&sun);
//	fun(sun);
//
//
//	return 0;
//}

//自定义函数求字符串长度
//有临时变量
//#include<stdio.h>
//#include<string.h>
//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*s != "\0")
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//
//没有临时变量
//#include<stdio.h>
//int len(char*s)
//{
//	if (*s != "\0")
//	{
//		return 1 + len(s + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "limi";
//	int count = 0;
//	count=my_strlen(arr);
//	//count = len(arr);
//	printf("%d\n",count);
//
//	return 0;
//}



//二维数组

#include<stdio.h>
int main()
{
	int arr[3][4] = {{1,2,3},{4,5}};
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++);
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
