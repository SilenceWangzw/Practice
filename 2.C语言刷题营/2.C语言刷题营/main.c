#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//BC1 -- 实践出真知
//int main()
//{
//	printf("Practice makes perfect!\n");
//	return 0;
//}


//BC2 -- 我是大V
//int main()
//{
//	printf("v   v\n");
//	printf(" v v \n");
//	printf("  v  \n");
//	return 0;
//}


//BC3 -- 有容乃大
//int main()
//{
//	printf("The size of short is %d bytes.\n", sizeof(short));
//	printf("The size of int is %d bytes.\n", sizeof(int));
//	printf("The size of long is %d bytes.\n", sizeof(long));
//	printf("The size of long long is %d bytes.\n", sizeof(long long));
//	return 0;
//}


//BC4 -- 缩短2进制
//请输出十进制整数1234对应的八进制和十六进制
//int main()
//{
//	// %o -- 八进制形式打印     %X -- 十六进制形式打印
//	printf("0%o 0X%X\n", 1234, 1234);//写法1
//	printf("%#o %#X\n", 1234, 1234);//写法2
//	return 0;
//}


//BC5 -- 反向输出4位数
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


//BC6 -- 大小写转换
//A-65  a-97
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF) //EOF -- end of file -- 文件结束标志
//	{
//		printf("%c\n", ch + 32);
//		getchar();//读取\n
//	}
//	return 0;
//}


//BC7 -- 小飞机
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


//BC8 -- 十六进制转十进制
//int main()
//{
//	printf("%15d\n", 0xABCDEF);
//	return 0;
//}


//BC9 -- printf函数的返回值
//printf函数返回的是：打印在屏幕上的字符的个数
//写法1
//int main()
//{
//	int ret = printf("Hello world!");//这里如果加了\n，字符个数就改变了
//	printf("\n%d\n", ret);
//	return 0;
//}

//写法2
//int main()
//{
//	printf("\n%d\n", printf("Hello world!"));
//	return 0;
//}


//BC10 -- 学生基本信息输入输出
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