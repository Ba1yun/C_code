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
//	cout << "��СΪ" << c <<endl;
//	system("pause");
//	return 0;
//}

/*�Ƚϴ�С
#include<iostream>
using namespace std;
int main()
{
	int num1=0;
	int num2=0;
	int num3 = 0;
	int max = 0;
	cout << "������A�Ĵ�С" << endl;
	cin >> num1;
	cout << "������B�Ĵ�С" << endl;
	cin >> num2;
	cout << "������C�Ĵ�С" << endl;
	cin >> num3;
	cout << "A��ֵΪ" << num1 << endl;
	cout << "B��ֵΪ" << num2 << endl;
	cout << "C��ֵΪ" << num3 << endl;
	if (num1 > num2)
	{
		if (num1 > num3)
		{
			cout << "���ֵnum1" << endl;
		}
		else
		{
			cout << "num3���" << endl;
		}
	}
	
	else 
		{
			if (num2 > num3)
			{
				cout << "num2���" << endl;
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
	//��Ŀ����
	//����������������һ����ֵ������������
	int a = 10;
	int b = 20;
	int c = 0;
	c = (a > b ? a : b);
	cout << "c��ֵΪ" << c << endl;
	//��Ŀ�����õ���һ���������ñ����Ǿ���ֵ�ģ����Կ��Զ���Ŀ����õ��ı������и�ֵ
	(a > b ? a : b) = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;
}
*/
//switch���     �ǵ�һ��Ҫ��{}�����ŷ��򱨴�ֻҪ��ѭ����д{}
//����Ӱ���

/*
#include<iostream>
using namespace std;
int main()
{
	int score = 0;
	cout << "����" << endl;
	cin >> score;
	switch (score)  //switchֻ�������Ͳ���������������ж�
	{
	case 10:
		cout << "����" << endl;
		break;
	case 9:
		cout << "�ܺ�" << endl;
		break;
	case 8:
		cout << "��" << endl;
		break;
	case 7:
		cout << "һ��" << endl;
		break;
	default:  //defult�������϶�����������
		cout << "��Ƭ" << endl;
	}
	system("pause");
	return 0;
}
*/

//whileѭ��
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

//��������Ϸ
/*
#include<iostream>
using namespace std;
int main()
{
	int num = 0;
	int a = 0;
	num = rand() % 100 + 1;//rand() % 100���ɵ���0~99��
	cout << "����Ҳ������Ƕ��٣�" << endl;
	cin >> a;
	while (a!=num)
	{
		if (a > num)
		{
			cout << "�´��ˣ��������" << endl;
			cin >> a;
		}
		if (a < num)
		{
			cout << "��С�ˣ��������" << endl;
			cin >> a;
		}
		/*if (a = num)
		{
			cout << "��ϲ�¶���" << endl;
			break;
		}
	}
	cout << "��ϲ�¶���" << endl;
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