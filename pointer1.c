#include<stdio.h>

//int main()
//{
//	int a = 2;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%d\n", pa);
//	printf("%d\n", pc);  //字符类型也能存放地址但是会有警告准确来说地址是int型
//	printf("%p\n", pa);  //打印地址
//	*pa = 0;  //那么改动了原始值pa地址的空间值大小改为0，int 型指针能访问4个字节
//	*pc = 0;//智能访问一个字节也就说只能访问1个字节
//	
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };//数组每一个元素一个字节
//	int* p = &arr;
//	int j = 0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		*(p + i) = 1;
//	for (j=0;j<10;j++)
//		printf("%d\n", arr[j]);
//	
//
//	return 0;
//}

int* test()
{
	int a = 0;
	return &a;
	
}
int main()
{
	int* p = test();
	*p = 20;//当跳出函数的时候a的空间就被销毁所以虽然得到了函数内部a的地址但是出了函数那么原来的地址就不在是存放着a，20存放在野地址当中
	
	return 0;
}