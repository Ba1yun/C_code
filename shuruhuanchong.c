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
	printf("���������룺");
	scanf_s("%s\n", ch);
	while ((ab=getchar())!="\n")
	{
		//ab=getchar();
		;
	}
	printf("�Ƿ�ͨ��");
	ret = getchar();
	if (ret == "Y")
		printf("ͨ��");
	else
		printf("��ͨ��");

	return 0;
}