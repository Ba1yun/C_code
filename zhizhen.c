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
//�����ṹ������
//struct book
//{
//	char name[20];
//	int price;
//
//};

//
//int main()
//{
//	struct book b1 = { "C���Գ������",55 };
//	/*printf("����:%s\n", b1.name);
//	printf("�۸�:%d\n", b1.price);*/
//
//	//����ָ���ȡ�ṹ����Ϣ
//	//struct book* pb = &b1;//�������pb
//	//printf("%s\n", (*pb).name);
//	//printf("%d\n", (*pb).price);
//
//	//ֱ��ָ��ṹ���ȡ��Ϣ
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
//	//printf("�����룺");
//	scanf_s("%d\n", &input);
//	if (input % 2 == 1)
//		printf("������\n");
//	else
//		printf("��ż��\n");
//
//
//	return 0;
//}
#include <stdio.h>

int main()
{
	int n;
	printf("�����룺");
	scanf_s("%d", &n);
	switch (n%3)
	{
	default:
		printf("�������");
	case 0:
		printf("��3������");
		//break;
	case 1:
		printf("����1");
		//break;
	case 2:
		printf("����2");
		//break;

	}

	return 0;
}