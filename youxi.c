//#include<stdio.h>

//void manu()
//{
//	printf("#####################\n");
//	printf("### 1>游戏 0>退出####\n");
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
//		printf("请输入>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误\n");
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
	system("shutdown -s -t 60");//系统关机指令
again:
	printf("您的电脑即将在60秒内关机，若取消关机\n请输入>我是超人");
	scanf_s("%s",input);
	if (strcmp(input, "我是超人") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}

	return 0;
}