//#include <stdio.h>
//
//int main()
//{
//	int ch;
//	ch = getchar();
//	while (ch!="n")
//	{
//		putchar(ch);
//		break;
//	}
//
//	return 0;
//}
#include <stdio.h>

int main()
{
	char ch[20];
	int ab=0;
	char ret;
	printf("请输入密码：");
	scanf_s("%s\n", ch);
	while ((ab=getchar())!="\n")
	{
		//ab=getchar();
		;
	}
	printf("是否通过");
	ret = getchar();
	if (ret == "Y")
		printf("通过");
	else
		printf("不通过");

	return 0;
}