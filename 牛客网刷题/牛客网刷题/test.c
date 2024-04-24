#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//一、简单输出
//1.输出"Hello Nowcoder!"。开始你的编程之旅吧。
//int main()
//{
//	printf("Hello Nowcoder!\n");
//	return 0;
//}


//2.KiKi学会了printf在屏幕输出信息，他想输出一架小飞机。请帮他编写程序输出这架小飞机。
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




//二、基本类型
//1.输入一个整数，输出这个整数。
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	return 0;
//}


//2.输入一个浮点数，输出这个浮点数（保留三位小数）
//int main()
//{
//	float f = 0.0;
//	scanf("%f", &f);
//	printf("%.3f", f);
//	return 0;
//}


//3.输入一个字符，输出这个字符。
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	printf("%c\n", ch);
//	return 0;
//}


//4.牛牛从键盘上输入三个整数，并尝试在屏幕上显示第二个整数。
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	scanf("%d%d%d", &num1, &num2, &num3);
//	printf("%d\n", num2);
//	return 0;
//}


//5.牛牛尝试用键盘读入一个字符，然后在屏幕上显示用这个字符组成的 3*3 的矩形。
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


//6.牛牛尝试用键盘读入一个字符，然后在屏幕上显示一个用这个字符填充的对角线长5个字符，倾斜放置的菱形
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


//7.BoBo出了一个问题给KiKi，输入一个字符，输出该字符相应的ASCII码。
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	printf("%d", ch);
//	return 0;
//}


//8.将浮点数转换为整数类型，要求四舍五入
//int main()
//{
//	float f = 0.0;
//	scanf("%f", &f);
//	printf("%.0f", f);
//	return 0;
//}


//9.输入3科成绩，然后把三科成绩输出，成绩为整数形式。
//int main()
//{
//	int score1 = 0;
//	int score2 = 0;
//	int score3 = 0;
//	scanf("%d%d%d", &score1, &score2, &score3);
//	printf("score1=%d,score2=%d,score3=%d\n", score1, score2, score3);
//	return 0;
//}


//10.依次输入一个学生的学号，以及3科（C语言，数学，英语）成绩，在屏幕上输出该学生的学号，3科成绩
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


//11.输入一个人的出生日期（包括年月日），将该生日中的年、月、日分别输出。
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
//注：通过scanf函数的%m格式控制可以指定输入域宽，printf函数的%0格式控制符，输出数值时指定左面不使用的空位置自动填0。


//12.输入两个整数，范围-231~231-1，交换两个数并输出。
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


//13.实现字母的大小写转换。多组输入输出。
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




//三、输出格式化
//1.BoBo写了一个十六进制整数ABCDEF，他问KiKi对应的十进制整数是多少。
//int main()
//{
//	int num = 0xABCDEF;
//	printf("%15d\n", num);
//	return 0;
//}


//2.请输出十进制整数1234对应的八进制和十六进制。
//int main()
//{
//	int num = 1234;
//	printf("0%o 0X%X\n", num, num);
//	return 0;
//}


//3.牛牛从键盘读入一个字符，一个整数，一个单精度浮点数，按顺序输出它们，并用空格分隔，浮点数保留 6 位小数。
//int main()
//{
//	char ch = 0;
//	int num = 0;
//	float f = 0.0;
//	scanf("%c%d%f", &ch, &num, &f);
//	printf("%c %d %.6f\n", ch, num, f);
//	return 0;
//}


//4.读入 3 个整数，牛牛尝试以后两个数字占 8 个空格的宽度靠右对齐输出。
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	scanf("%d%d%d", &num1, &num2, &num3);
//	printf("%d%8d%8d\n", num1, num2, num3);
//	return 0;
//}


//5.输入一个十六进制数a，和一个八进制数b，输出a+b的十进制结果
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%X%o", &a, &b);
//	printf("%d\n", a + b);
//	return 0;
//}