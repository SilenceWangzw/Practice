#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//BC1 -- ʵ������֪
//int main()
//{
//	printf("Practice makess perfect!\n");
//	return 0;
//}


//BC2 -- ���Ǵ�V
//int main()
//{
//	printf("v   v\n");
//	printf(" v v \n");
//	printf("  v  \n");
//	return 0;
//}


//BC3 -- �����˴�
//int main()
//{
//	printf("The size of short is %d bytes.\n", sizeof(short));
//	printf("The size of int is %d bytes.\n", sizeof(int));
//	printf("The size of long is %d bytes.\n", sizeof(long));
//	printf("The size of long long is %d bytes.\n", sizeof(long long));
//	return 0;
//}


//BC4 -- ����2����
//�����ʮ��������1234��Ӧ�İ˽��ƺ�ʮ������
//int main()
//{
//	// %o -- �˽�����ʽ��ӡ     %X -- ʮ��������ʽ��ӡ
//	printf("0%o 0X%X\n", 1234, 1234);//д��1
//	printf("%#o %#X\n", 1234, 1234);//д��2
//	return 0;
//}


//BC5 -- �������4λ��
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d", n % 10);
//		n = n / 10;
//	}
//	return 0;
//}


//BC6 -- ��Сдת��
//A-65  a-97
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF) //EOF -- end of file -- �ļ�������־
//	{
//		printf("%c\n", ch + 32);
//		getchar();//��ȡ\n
//	}
//	return 0;
//}