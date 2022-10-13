/*
//水仙花数
#include<iostream>
using namespace std;
int main()
{
	int num = 100;
	do
	{
		int a = num % 10;
		int b = (num / 10) % 10;
		int c = num / 100;
		if (a*a*a + b*b*b + c*c*c == num)
		{
			cout << num << endl;
		}
		num++;
		
	} 
	while (num < 1000);
	system("pause");
	return 0;
}
*/

/*
//for 循环
#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	for (a = 0; a < 10; a++)
	{
		cout << a << endl;
	}
	system("pause");
	return 0;
}
*/

/*
//敲桌子游戏：个位十位是7或者是7的倍数就敲桌子否则就说数字

#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
		{
			cout << "敲桌子" << endl;
		}
		else
			cout << i << endl;
	}

	system("pause");
	return 0;
}
*/

//嵌套循环--打印乘法口诀  按行输出
#include<iostream>
using namespace std;
int main()
{
	int i = 1;
	int j = 1;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << j << "*" << i << "=" <<i*j<<"  ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
