#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//һ�������
//1.���"Hello Nowcoder!"����ʼ��ı��֮�ðɡ�
//int main()
//{
//	printf("Hello Nowcoder!\n");
//	return 0;
//}


//2.KiKiѧ����printf����Ļ�����Ϣ���������һ��С�ɻ����������д����������С�ɻ���
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




//������������
//1.����һ��������������������
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	return 0;
//}


//2.����һ������������������������������λС����
//int main()
//{
//	float f = 0.0;
//	scanf("%f", &f);
//	printf("%.3f", f);
//	return 0;
//}


//3.����һ���ַ����������ַ���
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	printf("%c\n", ch);
//	return 0;
//}


//4.ţţ�Ӽ�����������������������������Ļ����ʾ�ڶ���������
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	scanf("%d%d%d", &num1, &num2, &num3);
//	printf("%d\n", num2);
//	return 0;
//}


//5.ţţ�����ü��̶���һ���ַ���Ȼ������Ļ����ʾ������ַ���ɵ� 3*3 �ľ��Ρ�
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//6.ţţ�����ü��̶���һ���ַ���Ȼ������Ļ����ʾһ��������ַ����ĶԽ��߳�5���ַ�����б���õ�����
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	printf("  %c  \n", ch);
//	printf(" %c%c%c \n", ch,ch,ch);
//	printf("%c%c%c%c%c\n", ch,ch,ch,ch,ch);
//	printf(" %c%c%c \n", ch,ch,ch);
//	printf("  %c  \n", ch);
//	return 0;
//}


//7.BoBo����һ�������KiKi������һ���ַ���������ַ���Ӧ��ASCII�롣
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	printf("%d", ch);
//	return 0;
//}


//8.��������ת��Ϊ�������ͣ�Ҫ����������
//int main()
//{
//	float f = 0.0;
//	scanf("%f", &f);
//	printf("%.0f", f);
//	return 0;
//}


//9.����3�Ƴɼ���Ȼ������Ƴɼ�������ɼ�Ϊ������ʽ��
//int main()
//{
//	int score1 = 0;
//	int score2 = 0;
//	int score3 = 0;
//	scanf("%d%d%d", &score1, &score2, &score3);
//	printf("score1=%d,score2=%d,score3=%d\n", score1, score2, score3);
//	return 0;
//}


//10.��������һ��ѧ����ѧ�ţ��Լ�3�ƣ�C���ԣ���ѧ��Ӣ��ɼ�������Ļ�������ѧ����ѧ�ţ�3�Ƴɼ�
//int main()
//{
//	long num = 0;
//	float score1 = 0.0;
//	float score2 = 0.0;
//	float score3 = 0.0;
//	scanf("%ld;%f,%f,%f", &num, &score1, &score2, &score3);
//	printf("The each subject score of No. %ld is %.2f, %.2f, %.2f.\n", num, score1, score2, score3);
//	return 0;
//}


//11.����һ���˵ĳ������ڣ����������գ������������е��ꡢ�¡��շֱ������
//int main()
//{
//	int n = 0;
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//	return 0;
//}
//ע��ͨ��scanf������%m��ʽ���ƿ���ָ���������printf������%0��ʽ���Ʒ��������ֵʱָ�����治ʹ�õĿ�λ���Զ���0��


//12.����������������Χ-231~231-1�������������������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("a=%d,b=%d", &a, &b);
//	int tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}


//13.ʵ����ĸ�Ĵ�Сдת�����������������
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		getchar();
//		if (ch >= 'A' && ch <= 'Z')
//		{
//			ch = ch + 32;
//		}
//		else if (ch >= 'a' && ch <= 'z')
//		{
//			ch = ch - 32;
//		}
//		putchar(ch);
//		printf("\n");
//	}
//	return 0;
//}




//���������ʽ��
//1.BoBoд��һ��ʮ����������ABCDEF������KiKi��Ӧ��ʮ���������Ƕ��١�
//int main()
//{
//	int num = 0xABCDEF;
//	printf("%15d\n", num);
//	return 0;
//}


//2.�����ʮ��������1234��Ӧ�İ˽��ƺ�ʮ�����ơ�
//int main()
//{
//	int num = 1234;
//	printf("0%o 0X%X\n", num, num);
//	return 0;
//}


//3.ţţ�Ӽ��̶���һ���ַ���һ��������һ�������ȸ���������˳��������ǣ����ÿո�ָ������������� 6 λС����
//int main()
//{
//	char ch = 0;
//	int num = 0;
//	float f = 0.0;
//	scanf("%c%d%f", &ch, &num, &f);
//	printf("%c %d %.6f\n", ch, num, f);
//	return 0;
//}


//4.���� 3 ��������ţţ�����Ժ���������ռ 8 ���ո�Ŀ�ȿ��Ҷ��������
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	scanf("%d%d%d", &num1, &num2, &num3);
//	printf("%d%8d%8d\n", num1, num2, num3);
//	return 0;
//}


//5.����һ��ʮ��������a����һ���˽�����b�����a+b��ʮ���ƽ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%X%o", &a, &b);
//	printf("%d\n", a + b);
//	return 0;
//}