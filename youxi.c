//#include<stdio.h>

//void manu()
//{
//	printf("#####################\n");
//	printf("### 1>��Ϸ 0>�˳�####\n");
//	printf("#####################\n");
//}
//void game()
//{
//	int guss = 0;
//	guss = scanf_s("%d\n", guss);
//	if (guss>)
//}
//
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		manu();
//		printf("������>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} 
//	while (input);
//	{
//
//	}
//	return 0;
//}

#include<stdio.h>
#include<string.h>
int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");//ϵͳ�ػ�ָ��
again:
	printf("���ĵ��Լ�����60���ڹػ�����ȡ���ػ�\n������>���ǳ���");
	scanf_s("%s",input);
	if (strcmp(input, "���ǳ���") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}

	return 0;
}