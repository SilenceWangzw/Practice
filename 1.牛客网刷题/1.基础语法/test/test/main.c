#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//һ�������
//BC1 -- Hello Nowcoder
//int main()
//{
//	printf("Hello Nowcoder!\n");
//
//	return 0;
//}


//BC2 -- С�ɻ�
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




//������������
//BC3 -- ţţѧ˵��֮-����
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d\n", i);
//	return 0;
//}


//BC4 -- ţţѧ˵��֮-������
//int main()
//{
//	double f = 0.0;
//	scanf("%lf", &f);
//	printf("%.3lf\n", f);
//	return 0;
//}


//BC5 -- ţţѧ˵��֮-�ַ�
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	printf("%c\n", ch);
//	return 0;
//}


//BC6 -- ţţ�ĵڶ�������
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	scanf("%d%d%d", &num1, &num2, &num3);
//	printf("%d\n", num2);
//	return 0;
//}


//BC7 -- ţţ���ַ�����
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


//BC8 -- ţţ���ַ�����
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


//BC9 -- �ַ�תASCII��
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	printf("%d\n", ch);
//	return 0;
//}


//BC10 -- ʵ����������
//int main()
//{
//	double f = 0.0;
//	scanf("%lf", &f);
//	printf("%.0f", f);
//	return 0;
//}


//BC11 -- �ɼ��������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("score1=%d,score2=%d,score3=%d\n", a, b, c);
//	return 0;
//}


//BC12 -- ѧ��������Ϣ�������
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


//BC13 -- ���������������
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year=%d\nmonth=%d\ndate=%d\n", year, month, date);
//	return 0;
//}


//BC14 -- ���ո�ʽ���벢�������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("a=%d,b=%d", &a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}


//BC15 -- ��Сдת��
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




//���������ʽ��
//BC16 -- ʮ������תʮ����
//int main() {
//    int a = 0;
//    printf("%15d", 0xABCDEF);
//    return 0;
//}


//BC17 -- ���̶�����
//int main() {
//    int a = 1234;
//    printf("0%o 0X%X", a, a);
//    return 0;
//}


//BC18 -- ţţ�Ŀո�ָ�
//int main()
//{
//    char ch;
//    int n;
//    float m;
//    scanf("%c%d%f", &ch, &n, &m);
//    printf("%c %d %f", ch, n, m);
//    return 0;
//}


//BC19 -- ţţ�Ķ���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("%-8d%-8d%-8d\n", a, b, c);
//	return 0;
//}


//BC20 -- ����A+B
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%X%o", &a, &b);
//	printf("%d\n", a + b);
//	return 0;
//}




//�ġ����������
//BC21 -- ţţѧ�ӷ�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", a + b);
//	return 0;
//}


//BC22 -- ţţѧ����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", a / b);
//	return 0;
//}


//BC23 -- ţţѧȡ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", a % b);
//	return 0;
//}


//BC24 -- �������ĸ�λ����
//int main()
//{
//	double d = 0.0;
//	scanf("%lf", &d);
//	printf("%d\n", (int)d % 10);
//	return 0;
//}




//�塢����
//BC25 -- ţţ���ӰƱ
//int main()
//{
//	int price = 100;
//	int x = 0;
//	scanf("%d", &x);
//	printf("%d\n", x * price);
//	return 0;
//}


//BC26 -- �������������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d %d\n", a / b, a % b);
//	return 0;
//}


//BC27 -- �����ĸ�λ
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", a % 10);
//	return 0;
//}


//BC28 -- ������ʮλ
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", a / 10 % 10);
//	return 0;
//}


//BC29 -- ��ѧ��
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


//BC30 -- ʱ��ת��
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


//BC31 -- 2��n�˷�����
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", 2 << n - 1);
//	return 0;
//}


//BC32 -- ���ܻ������
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	long long ret = age * 3.156e7;
//	printf("%lld\n", ret);
//	return 0;
//}


//BC 33 -- ͳ�Ƴɼ�
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    float arr[100] = { 0 };
//    float max = 0.0;
//    float min = 100.0;
//    float sum = 0.0;
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%f", &arr[i]);
//        sum += arr[i];
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//        if (arr[i] < min)
//        {
//            min = arr[i];
//        }
//    }
//    printf("%.2f %.2f %.2f\n", max, min, sum / 5);
//    return 0;
//}




//������֧����
//BC50 -- ���������
//int main() {
//    int input = 0;
//    scanf("%d", &input);
//    if (input >= 140)
//    {
//        printf("Genius");
//    }
//}


//BC51 -- �������
//int main() {
//    int score = 0;
//    while (scanf("%d", &score) != EOF)
//    {
//        if (score >= 60)
//        {
//            printf("Pass\n");
//        }
//        else {
//            printf("Fail\n");
//        }
//    }
//    return 0;
//}


//BC52 -- �ж�������ż��
//int main() {
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        if (a % 2 == 0)
//        {
//            printf("Even\n");
//        }
//        else {
//            printf("Odd\n");
//        }
//    }
//    return 0;
//}


//BC53 -- �ж���Ԫ�����Ǹ���
//int main() {
//    char a = 0;
//    while ((scanf("%c", &a)) != EOF)
//    {
//        getchar();
//        if ((a == 'A') || (a == 'E') || (a == 'I') || (a == 'O') || (a == 'U') || (a == 'a') || (a == 'e') || (a == 'i') || (a == 'o') || (a == 'u'))
//        {
//            printf("Vowel\n");
//        }
//        else {
//            printf("Consonant\n");
//        }
//    }
//    return 0;
//}


//BC54 -- ţţ���ж���
//int main() {
//    int x = 0;
//    int l = 0;
//    int r = 0;
//    scanf("%d%d%d", &x, &l, &r);
//    if (x <= r && x >= l)
//    {
//        printf("true\n");
//    }
//    else {
//        printf("false\n");
//    }
//    return 0;
//}


//BC55 -- �ж�����
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//    {
//        printf("yes\n");
//    }
//    else {
//        printf("no\n");
//    }
//}


//BC56 -- �ж���ĸ��Сд
//int main() {
//    char a = 0;
//    scanf("%c", &a);
//    if (((int)a >= 65 && (int)a <= 90) || ((int)a >= 97 && (int)a <= 122))
//    {
//        printf("YES\n");
//    }
//    else {
//        printf("NO\n");
//    }
//    return 0;
//}


//BC57 -- �ļ�
//int main() {
//    int year = 0;
//    int month = 0;
//    scanf("%4d%2d", &year, &month);
//    if (month >= 3 && month <= 5)
//    {
//        printf("spring\n");
//    }
//    else if (month >= 6 && month <= 8)
//    {
//        printf("summer\n");
//    }
//    else if (month >= 9 && month <= 11)
//    {
//        printf("autumn\n");
//    }
//    else if (month >= 12 && month <= 2)
//    {
//        printf("winter\n");
//    }
//    return 0;
//}


//BC58 -- ��������
//int main() {
//    double BMI = 0.0;
//    double high = 0.0;
//    double weight = 0.0;
//    scanf("%lf%lf", &weight, &high);
//    BMI = weight / (high * high);
//    if (BMI >= 18.5 && BMI <= 23.9)
//    {
//        printf("Normal\n");
//    }
//    else {
//        printf("Abnormal\n");
//    }
//
//    return 0;
//}


//BC59 -- С�����������
//int main() {
//    int arr[4] = { 0 };
//    int max = 0;
//    scanf("%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3]);
//
//    for (int i = 0; i < 4; i++)
//    {
//        if (arr[i] > max)
//            max = arr[i];
//    }
//    printf("%d\n", max);
//    return 0;
//}


//BC60 -- �ж��ǲ�����ĸ
//int main() {
//    char a;
//    while (scanf("%c", &a) != EOF) {
//        getchar();
//        if (((int)a >= 65 && (int)a <= 90) || ((int)a >= 97 && (int)a <= 122)) {
//            printf("%c is an alphabet.\n", a);
//        }
//        else {
//            printf("%c is not an alphabet.\n", a);
//        }
//    }
//    return 0;
//}


//BC61 -- ţţ�Ķ����߳�
//int main() {
//    int n = 0;
//    int flag = 1;
//    scanf("%d", &n);
//    int arr[3] = { 2,3,7 };
//    for (int i = 0; i < 3; i++)
//    {
//        if (n % arr[i] == 0)
//        {
//            printf("%d ", arr[i]);
//            flag = 0;
//        }
//    }
//    if (flag)
//    {
//        printf("n");
//    }
//    return 0;
//}


//BC62 -- ͳ��������������
//int main() {
//    int positive = 0;
//    int negative = 0;
//    signed int arr[10] = { 0 };
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//
//    for (int j = 0; j < 10; j++)
//    {
//        if (arr[j] > 0)
//        {
//            positive++;
//        }
//        else if (arr[j] < 0)
//        {
//            negative++;
//        }
//    }
//    printf("positive:%d\n", positive);
//    printf("negative:%d\n", negative);
//    return 0;
//}


//BC63 -- ����
//int main() {
//    double price = 0.0;
//    int month = 0;
//    int day = 0;
//    int flag = 0;
//
//    scanf("%lf %d %d %d", &price, &month, &day, &flag);
//    if (month == 11 && day == 11)
//    {
//        if (flag == 1)
//        {
//            price = (price * 0.7) - 50.0;
//        }
//        else {
//            price = price * 0.7;
//        }
//    }
//    if (month == 12 && day == 12)
//    {
//        if (flag == 1)
//        {
//            price = (price * 0.8) - 50.0;
//        }
//        else {
//            price = price * 0.8;
//        }
//    }
//
//    if (price < 0)
//    {
//        price = 0;
//    }
//
//    printf("%.2lf\n", price);
//    return 0;
//}