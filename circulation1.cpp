//#include<iostream>
//using namespace std;
//
//int main()
//{
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int c = 1;
//	cout << "大小为" << c <<endl;
//	system("pause");
//	return 0;
//}

/*比较大小
#include<iostream>
using namespace std;
int main()
{
	int num1=0;
	int num2=0;
	int num3 = 0;
	int max = 0;
	cout << "请输入A的大小" << endl;
	cin >> num1;
	cout << "请输入B的大小" << endl;
	cin >> num2;
	cout << "请输入C的大小" << endl;
	cin >> num3;
	cout << "A的值为" << num1 << endl;
	cout << "B的值为" << num2 << endl;
	cout << "C的值为" << num3 << endl;
	if (num1 > num2)
	{
		if (num1 > num3)
		{
			cout << "最大值num1" << endl;
		}
		else
		{
			cout << "num3最大" << endl;
		}
	}
	
	else 
		{
			if (num2 > num3)
			{
				cout << "num2最大" << endl;
			}
		}
	
	system("pause");
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	//三目运算
	//将两个数当中最大的一个赋值给第三个变量
	int a = 10;
	int b = 20;
	int c = 0;
	c = (a > b ? a : b);
	cout << "c的值为" << c << endl;
	//三目运算获得的是一个变量（该变量是具有值的）所以可以对三目运算得到的变量进行赋值
	(a > b ? a : b) = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;
}
*/
//switch语句     记得一定要有{}大括号否则报错，只要是循环都写{}
//给电影打分

/*
#include<iostream>
using namespace std;
int main()
{
	int score = 0;
	cout << "请打分" << endl;
	cin >> score;
	switch (score)  //switch只能是整型不能升级区间或者判断
	{
	case 10:
		cout << "经典" << endl;
		break;
	case 9:
		cout << "很好" << endl;
		break;
	case 8:
		cout << "好" << endl;
		break;
	case 7:
		cout << "一般" << endl;
		break;
	default:  //defult就是以上都不满足的情况
		cout << "烂片" << endl;
	}
	system("pause");
	return 0;
}
*/

//while循环
/*
#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	while (a < 10)
	{
		cout << a << endl;
		a++;
	}
	system("pause");
	return 0;
}
*/

//猜数字游戏
/*
#include<iostream>
using namespace std;
int main()
{
	int num = 0;
	int a = 0;
	num = rand() % 100 + 1;//rand() % 100生成的是0~99数
	cout << "请玩家猜数字是多少：" << endl;
	cin >> a;
	while (a!=num)
	{
		if (a > num)
		{
			cout << "猜大了，请继续猜" << endl;
			cin >> a;
		}
		if (a < num)
		{
			cout << "猜小了，请继续猜" << endl;
			cin >> a;
		}
		/*if (a = num)
		{
			cout << "恭喜猜对了" << endl;
			break;
		}
	}
	cout << "恭喜猜对了" << endl;
	system("spause");
	return 0;

}
*/
#include<iostream>
using namespace std;
int main()
{
	int num = 0;
	do
	{
		cout << num << endl;
		num++;
	} while (num < 10);
	system("pause");
	return 0;
}