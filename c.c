
//��ά����
//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = {{1,2,3},{4,5}};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%p ", &arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//�Զ������ַ�������
//�󳤶ȴ�С�������ÿ⺯��sizeof()����strlen()
//#include<stdio.h>

//û����ʱ����
//int len(char* s)
//{
//	while (*s != "\0")
//	{
//		s++;
//	}
//	return s;
//}
//int main()
//{
//	char arr[] = "lim";
//	int ret = len(arr);
//	printf("����Ϊ��%d", ret);
//
//	return 0;
//}
//����
#include<stdio.h>
sort(int brr[],int sz)
{
	//ð������
	//int szz = sizeof(brr) / sizeof(brr[0]);
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (brr[j] > brr[j + 1])
			{
				int ret = brr[j];
				brr[j] = brr[j + 1];
				brr[j + 1] = ret;

			}
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		//sort(arr,sz);
		printf("%d ", arr[i]);
	}

	return 0;

}