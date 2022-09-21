//#include <stdio.h>
//
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	printf("%d\n", sizeof(n));
//	printf("%p\n", &n);
//	printf("%d\n", p);
//	*p = 20;
//	printf("%d\n", n);
//
//	return 0;
//}
//#include <stdio.h>
//创建结构体类型
//struct book
//{
//	char name[20];
//	int price;
//
//};

//
//int main()
//{
//	struct book b1 = { "C语言程序设计",55 };
//	/*printf("书名:%s\n", b1.name);
//	printf("价格:%d\n", b1.price);*/
//
//	//利用指针读取结构体信息
//	//struct book* pb = &b1;//定义变量pb
//	//printf("%s\n", (*pb).name);
//	//printf("%d\n", (*pb).price);
//
//	//直接指向结构体读取信息
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int input ;
//	//printf("请输入：");
//	scanf_s("%d\n", &input);
//	if (input % 2 == 1)
//		printf("是奇数\n");
//	else
//		printf("是偶数\n");
//
//
//	return 0;
//}
#include <stdio.h>

int main()
{
	int n;
	printf("请输入：");
	scanf_s("%d", &n);
	switch (n%3)
	{
	default:
		printf("输入错误！");
	case 0:
		printf("是3的整数");
		//break;
	case 1:
		printf("余数1");
		//break;
	case 2:
		printf("余数2");
		//break;

	}

	return 0;
}