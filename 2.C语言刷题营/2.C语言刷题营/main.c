#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//BC1 -- ʵ������֪
//int main()
//{
//	printf("Practice makes perfect!\n");
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


//BC7 -- С�ɻ�
//int main()
//{
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    \n");
//	return 0;
//}


//BC8 -- ʮ������תʮ����
//int main()
//{
//	printf("%15d\n", 0xABCDEF);
//	return 0;
//}


//BC9 -- printf�����ķ���ֵ
//printf�������ص��ǣ���ӡ����Ļ�ϵ��ַ��ĸ���
//д��1
//int main()
//{
//	int ret = printf("Hello world!");//�����������\n���ַ������͸ı���
//	printf("\n%d\n", ret);
//	return 0;
//}

//д��2
//int main()
//{
//	printf("\n%d\n", printf("Hello world!"));
//	return 0;
//}


//BC10 -- ѧ��������Ϣ�������
//int main()
//{
//	long num = 0;
//	float score1 = 0.0;
//	float score2 = 0.0;
//	float score3 = 0.0;
//	scanf("%d;%f,%f,%f", &num, &score1, &score2, &score3);
//	printf("The each subject of  No. %ld is %.2f, %.2f, %.2f", num, score1, score2, score3);
//	return 0;
//}