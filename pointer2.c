#include<stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	int a = &arr[9] - &arr[0];  //指针加减指针返回的是两个指针之间的元素个数，，但必须是针对同一空间的元素比如同一数组
//	printf("%d\n", a);
//
//	return 0;
//}
//计算字符串长度
//int len(char* s)
//{
//	char* p = s;
//	char* a = s;
//	while (*a!="\0")
//	{
//		a++;
//	}
//	return a - p;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int t = len(arr);
//	printf("%d\n", t);
//	return 0;
//}
 //结构体,struct结构体关键字，stu结构体标签

//typedef struct stu
//	//结构体成员
//{
//	char name[2];
//	int age;
//	char table[10];
//	char sex[5];
//}stu;   //stu是结构体类型 如果要引用结构体那么不用struct stu s1,直接stu s1

struct  stu
{
	//结构体成员
	char name[5];
	int age;
	char table[10];
	char sex[5];
};//s1   s2下边就不需要在定义s1的类型
int main()
{
	struct stu s1 = { "张三",10,"123123123","男" };
	struct stu s2; //果不想用前面的struct stu定义s2的类型那么可以使用typedef或者在第二种下面添加全局变量明
	printf("%d\n", s1.age);
	return 0;
}