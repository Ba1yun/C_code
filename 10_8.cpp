#include <iostream>
using namespace std;
#include<string>
#define d 7  //�곣������,�����зֺŲ�Ȼ����
const int years = 12;//counst ���εĳ���


int main()
{
	cout << "hello" << endl;
	cout << "һ����" << d << endl;
	cout << "һ�깲" << years << "����" << endl;
	//sizeof �÷�����������������ռ�ռ��С
	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;

	//������
	float f = 3.14;//Ĭ��double
	float fl = 3.14f;//float��
	cout << "fֵΪ��" << f << endl;

	//�ַ���
	char s = 'zbx';//����������ֻ����һ���ַ�,�ַ��ʹ���Ĳ����ַ���������ַ���Ӧ��ASCLL��ֵ
	char v = 'a';//ֻ���ǵ�����
	cout << (int)v << endl;  //�鿴ASCLL

	//�ַ���
	char sd[] = "hjisdhai";//������
	string sc = "djadhi";//C++���,��Ҫ����
	cout << sc << endl;

	//��������
	cout << "�����룺" << endl;
	int a = 0;
	//cin >> a;
	cout <<"a��ֵΪ"<< a << endl;

	//����
	int k = 10;
	int l = 3;
	cout << k + l << endl;
	k++;//�����������+1
	cout << k << endl;
	++k;//��+1������
	cout << l << endl;
	cout << k++ *l << endl;

	//�߼������
	int h = 10;
	int ss = 0;
	cout << !h << endl;
	cout << (ss||h) << endl;

	//�������
	cout << "���������>>" << endl;
	int num = 0;
	cin >> num;
	if (num > 600)
	{
		cout << "����" << endl;
	}
	else
	{
		cout << "����Ŭ��" << endl;
	}

	//�жϴ�С
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
	cout << "���ֵΪ��" << max << endl;
	system("pause");
	return 0;
}

//����ע��
/*
����ע��
��ʶ����������1.�����ǹؼ���
2.����ĸ�����֡��»��߹���
3.��ͷ��������ĸ���»���
4.���ִ�Сд
*/

