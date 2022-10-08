#include <iostream>
using namespace std;
#include<string>
#define d 7  //宏常量定义,不能有分号不然报错
const int years = 12;//counst 修饰的常量


int main()
{
	cout << "hello" << endl;
	cout << "一周有" << d << endl;
	cout << "一年共" << years << "个月" << endl;
	//sizeof 用法：计算数据类型所占空间大小
	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;

	//浮点型
	float f = 3.14;//默认double
	float fl = 3.14f;//float型
	cout << "f值为：" << f << endl;

	//字符型
	char s = 'zbx';//单引号里面只能是一个字符,字符型储存的不是字符本身而是字符对应的ASCLL码值
	char v = 'a';//只能是单引号
	cout << (int)v << endl;  //查看ASCLL

	//字符串
	char sd[] = "hjisdhai";//数组型
	string sc = "djadhi";//C++风格,需要引用
	cout << sc << endl;

	//键盘输入
	cout << "请输入：" << endl;
	int a = 0;
	//cin >> a;
	cout <<"a的值为"<< a << endl;

	//运算
	int k = 10;
	int l = 3;
	cout << k + l << endl;
	k++;//后置先运算后+1
	cout << k << endl;
	++k;//先+1后运算
	cout << l << endl;
	cout << k++ *l << endl;

	//逻辑运算符
	int h = 10;
	int ss = 0;
	cout << !h << endl;
	cout << (ss||h) << endl;

	//条件语句
	cout << "请输入分数>>" << endl;
	int num = 0;
	cin >> num;
	if (num > 600)
	{
		cout << "高手" << endl;
	}
	else
	{
		cout << "继续努力" << endl;
	}

	//判断大小
	int arr[] = { 0,5,8 };
	int max = arr[0];
	if (max < arr[1])
	{
		max = arr[1];
	}
	if (max < arr[2])
	{
		max = arr[2];
	}
	cout << "最大值为：" << max << endl;
	system("pause");
	return 0;
}

//单行注释
/*
多行注释
标识符命名规则1.不能是关键字
2.由字母、数字、下划线构成
3.开头智能是字母或下划线
4.区分大小写
*/

