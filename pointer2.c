#include<stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	int a = &arr[9] - &arr[0];  //ָ��Ӽ�ָ�뷵�ص�������ָ��֮���Ԫ�ظ������������������ͬһ�ռ��Ԫ�ر���ͬһ����
//	printf("%d\n", a);
//
//	return 0;
//}
//�����ַ�������
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
 //�ṹ��,struct�ṹ��ؼ��֣�stu�ṹ���ǩ

//typedef struct stu
//	//�ṹ���Ա
//{
//	char name[2];
//	int age;
//	char table[10];
//	char sex[5];
//}stu;   //stu�ǽṹ������ ���Ҫ���ýṹ����ô����struct stu s1,ֱ��stu s1

struct  stu
{
	//�ṹ���Ա
	char name[5];
	int age;
	char table[10];
	char sex[5];
};//s1   s2�±߾Ͳ���Ҫ�ڶ���s1������
int main()
{
	struct stu s1 = { "����",10,"123123123","��" };
	struct stu s2; //��������ǰ���struct stu����s2��������ô����ʹ��typedef�����ڵڶ����������ȫ�ֱ�����
	printf("%d\n", s1.age);
	return 0;
}