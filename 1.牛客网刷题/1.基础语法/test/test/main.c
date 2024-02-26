#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//一、简单输出
//BC1 -- Hello Nowcoder
//int main()
//{
//	printf("Hello Nowcoder!\n");
//
//	return 0;
//}


//BC2 -- 小飞机
//int main()
//{
//    printf("     **     \n");
//    printf("     **     \n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *    \n");
//	return 0;
//}




//二、基本类型
//BC3 -- 牛牛学说话之-整数
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d\n", i);
//	return 0;
//}


//BC4 -- 牛牛学说话之-浮点数
//int main()
//{
//	double f = 0.0;
//	scanf("%lf", &f);
//	printf("%.3lf\n", f);
//	return 0;
//}


//BC5 -- 牛牛学说话之-字符
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	printf("%c\n", ch);
//	return 0;
//}


//BC6 -- 牛牛的第二个整数
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	scanf("%d%d%d", &num1, &num2, &num3);
//	printf("%d\n", num2);
//	return 0;
//}


//BC7 -- 牛牛的字符矩形
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//BC8 -- 牛牛的字符菱形
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


//BC9 -- 字符转ASCII码
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	printf("%d\n", ch);
//	return 0;
//}


//BC10 -- 实现四舍五入
//int main()
//{
//	double f = 0.0;
//	scanf("%lf", &f);
//	printf("%.0f", f);
//	return 0;
//}


//BC11 -- 成绩输入输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("score1=%d,score2=%d,score3=%d\n", a, b, c);
//	return 0;
//}


//BC12 -- 学生基本信息输入输出
//int main()
//{
//	unsigned int a = 0;
//	double b = 0.0;
//	double c = 0.0;
//	double d = 0.0;
//	scanf("%u;%lf,%lf,%lf", &a, &b, &c, &d);
//	printf("The each subject score of No. %u is %.2lf, %.2lf, %.2lf.\n", a, b, c, d);
//	return 0;
//}


//BC13 -- 出生日期输入输出
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year=%d\nmonth=%d\ndate=%d\n", year, month, date);
//	return 0;
//}


//BC14 -- 按照格式输入并交换输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("a=%d,b=%d", &a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}


//BC15 -- 大小写转换
//int main()
//{
//    char ch;
//    while ((ch = getchar()) != EOF) {
//        getchar();
//        putchar(ch + 32);
//        printf("\n");
//    }
//    return 0;
//}




//三、输出格式化
//BC16 -- 十六进制转十进制
//int main() {
//    int a = 0;
//    printf("%15d", 0xABCDEF);
//    return 0;
//}


//BC17 -- 缩短二进制
//int main() {
//    int a = 1234;
//    printf("0%o 0X%X", a, a);
//    return 0;
//}


//BC18 -- 牛牛的空格分隔
//int main()
//{
//    char ch;
//    int n;
//    float m;
//    scanf("%c%d%f", &ch, &n, &m);
//    printf("%c %d %f", ch, n, m);
//    return 0;
//}


//BC19 -- 牛牛的对齐
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("%-8d%-8d%-8d\n", a, b, c);
//	return 0;
//}


//BC20 -- 进制A+B
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%X%o", &a, &b);
//	printf("%d\n", a + b);
//	return 0;
//}




//四、基本运算符
//BC21 -- 牛牛学加法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", a + b);
//	return 0;
//}


//BC22 -- 牛牛学除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", a / b);
//	return 0;
//}


//BC23 -- 牛牛学取余
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", a % b);
//	return 0;
//}


//BC24 -- 浮点数的个位数字
//int main()
//{
//	double d = 0.0;
//	scanf("%lf", &d);
//	printf("%d\n", (int)d % 10);
//	return 0;
//}




//五、运算
//BC25 -- 牛牛买电影票
//int main()
//{
//	int price = 100;
//	int x = 0;
//	scanf("%d", &x);
//	printf("%d\n", x * price);
//	return 0;
//}


//BC26 -- 计算带余数除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d %d\n", a / b, a % b);
//	return 0;
//}


//BC27 -- 整数的个位
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", a % 10);
//	return 0;
//}


//BC28 -- 整数的十位
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", a / 10 % 10);
//	return 0;
//}


//BC29 -- 开学？
//int main()
//{
//	int x = 0;
//	int n = 0;
//	scanf("%d%d", &x, &n);
//	x = x + n;
//	while (x > 7)
//	{
//		x = x - 7;
//	}
//	printf("%d\n", x);
//	return 0;
//}


//BC30 -- 时间转换
//int main()
//{
//	int second = 0;
//	scanf("%d", &second);
//	int h = second / 3600;
//	int m = second % 3600 / 60;
//	int s = second % 60;
//	printf("%d %d %d\n", h, m, s);
//	
//	return 0;
//}


//BC31 -- 2的n此方计算
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", 2 << n - 1);
//	return 0;
//}


//BC32 -- 你能活多少秒
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	long long ret = age * 3.156e7;
//	printf("%lld\n", ret);
//	return 0;
//}
