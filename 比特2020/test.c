#define _CRT_SECURE_NO_WARNINGS   1
#include <stdio.h>
//if else��ѭ�����
int main()
{
	int input = 0;
	printf("�������\n"); 
	printf("��Ҫ�ú�ѧϰ��(1/0)?\n");
    scanf("%d", &input);

	if (input == 1)

		printf("��offer\n");
	return 0;
}
	else
		printf("������\n");
        return 0;
//while��ѭ�����
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while (line<20)
//	{
//		printf("�ô���%d\n",line);
//		line++;
//	}
//	printf("��offer\n");
//	return 0;

//
//�����һ����ͬ���͵�����
//1-10
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	              //0,1,2,3,4,5,6,7,8,9(������±꣩
//	int i = 0;    //arr[]��������Ϊ�±�
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//			i++;
//	}
//}
//������
//+,-,*,/��%,|��&
//&��������һ��Ϊ0��ȫΪ0
//&λ��(��������)
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a&b;
//	//a=3:011
//	//b=5:101
//	//c=a&b:001(���¶�Ӧȡֵ)
//	printf("c=%d\n", c);
//	return 0;
//}
//|λ�������
//��������һ��Ϊ1��ȫΪ1
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a|b;
//	//a=3:011
//	//b=5:101
//	//c=a|b:111
//	printf("c=%d\n", c);
//	return 0;
//}
//��ֵ������
//int main()
//{
//	int a = 0;//����������ʼֵ
//	a = a + 1;
//	//a += 1;
//	//�õ�-+��*=��/=
//	//&=��|=��>>=,<<=
//	printf("a=%d\n", a);
//	return 0;
//}
//��Ŀ������
//int main()
//{
//	//c������α�ʾ���
//	//ֻ��0��ʾ�٣���0��ʾ��1��-1
//	//!���Լٱ��棬����
//    int a = 10;
//
//    printf("%d\n", !a);
//	return 0;
//}
//sizeof�����������ͳ���(���ֽ�Ϊ��λ��
//�ַ����ֽ�Ϊ��λ
//sizeof���������Сʱ����()���һ��
//sizeof��������(int)�����()
//��μ�������Ԫ�صĸ���
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//		//40/4=10��������Ԫ�ظ���
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof arr);
//	
//    return 0;
//
//define����ı�ʶ��Ϊ�������ɸ���
//#define MAX 1000
//int main()
//{
//	int a = MAX;
//	max = 2000;
//	printf("%d\n", a);
//	return 0;
//
//}
//�ַ���
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c', 0 };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//�ַ����Ľ�β�����һ��'\0'
//���ַ����Ľ�����־
//

//#include  <stdio.h>
//int max(int a, int b)
//{
//	if (a > b)
//	{
//		 printf("%d\n",a);  
//	}
//	else
//	{
//		printf("%d\n", a);  
//	}
//}
//int main()
//{
//	int a, b;
//	printf("Please input a and b:\n");
//	scanf("%d%d", &a, &b);
//	printf("max = %d\n", max(a, b));
//}
//int main()
//{
//	char arr1[] = { "abc" };
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", strlen(arr1));
//	//strlen - string strlen - �����ַ������ȵ�
//	printf("%d\n", strlen(arr2));//���ֵ
//	return 0;
//}
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));//3
//	printf("%c\n", '\32');
//	//��8���Ƶ�32ת����10����������ΪASCII��ֵ������Ǹ��ַ�
//	//32=3*8^1+2*8^0=25��Ӧ��ASCII��ֵ
//	//41=4*16^1+1*16^0=65��Ӧ��ASCII��ֵ
//	printf("%c\n", '\x41');
//	return 0;
//~aȡ��������
//

//�߼�������
//&&����ȫ����
//||����һ������
//int main()
//{
//	int a = 0;
//	int b = 5;
//	if (a || b)
//		printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	int a = 3;	
//	int b = 5;
//    if (a||b)
//        printf("hehe\n");
//	return 0;
//}
//if else��������
//�Ƚ���ֵ�ϴ�ֵ
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	int max = 0;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	printf("%d\n", max);
//	return 0;
//}
//����������=��Ŀ������
//exp1?exp2:exp3
//exp1��ȷִ��exp2,����ִ��exp3
//#define  Max(x,y) (x > y ? x : y);
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max =0;
//	scanf("%d%d", &a, &b);
//	max = Max( a,b);
//    printf("max=%d\n", max);
//	return 0;
//}
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////�������ò�����
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//���ú���()�Ǻ������÷�
//	int sum = Add(a, b );
//	printf("sum=%d\n", sum);
//	return 0;
//}
//static������
//1�����ξֲ�����
//2������ȫ�ֱ���
//3�����κ���
//���ξֲ�����
//void test()
//{
//   static int a = 1;//����test��������ѭ��10��
//	a++;            //ÿһ��ѭ����a��ֵΪ��һ��a++�ĵ�ֵ
//	printf("%d", a);
//}
//int main()
//{
//	int i = 0;
//	while (i<10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//��λ��
//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	int c = a&b;//��ӦȫΪ1��Ϊһ����Ӧһ��Ϊ0��Ϊ0
//	printf("c=%d\n", c);//001
//	return 0;
//}
//��λ��
//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	int c = a|b;//��ӦֻҪ��һ��Ϊ1��ȫΪ1
//	printf("c=%d\n", c);//111
//	return 0;
//}
//^��λ���
//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	int c = a ^ b;//��Ӧ��ͬΪ0����Ϊ1
//	printf("c=%d\n", c);//110
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	a=a+1//a+=a
//}

//static����ȫ�ֱ���

//static���εĺ���ֻ�����Լ����ڵ�.cԴ�ļ�ʹ��
//static���κ�����Ȼ�ı��˺�����������
//extern�����ⲿ����
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//	return (x > y ? x : y);
//}
//int Max(int x,int  y)
//{
//	if (x > y)
//		printf("Max=%d", x);
//	else
//		printf("Max=%d", y);
//int main()
//{
//	int a =0;
//	int b = 0;
//	int max = 0;
//	scanf("%d%d", a, b);
//	/*max = (a, b);*/
//	if (a > b)
//		max = a;
//	else
//        max = b;
//	max = (a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int sum = a+b;
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return zb;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum =Add(a, b);
//	printf("sum=%d\n",sum);
//	return 0;
//}
//int Max(int x,int y)
//{
//	return(x > y ? x : y); 
//}
//int main()
//{
//	int Max = ( x,  y);
//	int a;
//	int b;
//	int c
//	scanf("%d%d", &a, &b);
//	c = max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//int Max(int x, int y)
//{
//	int z =Max (x, y);
//	return z;
//}
//int main()
//{
//	int a;
//	int b;
//	int max = Max(a, b);
//	printf("��������ֵ\n");
//	scanf("%d%d", &a, &b);
//	printf("max=%d\n",max);
//	return 0;
//
//}
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//		scanf("%d%d", &a, &b);
//		max = Max(a, b);
//		printf("max=%d\n", max);
//		return 0;
//}
//�Լ�����������-�Զ�������
//����һ�����������
	/*struct Book b2 = { "֪��", 30.54, "ISBN-100099809" };
	printf("����:%s\n", b1.name);
	printf("����:%f\n", b1.price);
	printf("���:%s\n", b1.id);
	printf("����:%s\n", b2.name);
	printf("����:%f\n", b2.price);
	printf("���:%s\n", b2.id);
	return 0;*/
//}
//��ȷд�� ����==����
//int main()
//{
//	int age = 10;
//	if (5 == age)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
////����д�� ����=����
////�Ƚϳ����ͱ�����ֵ�Ƿ����ʱ���������ڵȺ����
//���1-100֮�������
//����1-100֮�����
//�ж�ÿ�����Ƿ�Ϊ����
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("���Ϊ����\n");
//	else
//		printf("ż��\n");
//    return 0;
//}
//����1-100֮�����
//�ж�ÿ�����Ƿ�Ϊ����
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d", i);
//		i = i + 2;
//	}
//		return 0;
//switch case���
//switch(����Ϊ����)case����Ϊ���γ�����
//defaultĬ��ѡ������ܱ�case��������
//case�������˳��ɷ�
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("�������\n");
//		return 0;
//	case 8:
//		printf("weekend\n");
//		break;
//	}
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;//3
//	case 2:
//		n++;//2
//	case 3:
//		switch (n)//2
//		{
//		case 1:
//			n++;//��breakֱ����ת
//		case 2:
//			m++;//4
//			n++;//3
//			break;
//		}
//	case 4:
//		m++;//5
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}
//��ӡ0-9
//whileѭ���е�continue,
//��������ѭ���������
//ֱ��ȥ�жϲ��֣�������һ��ѭ��
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		if (i == 5)
//
//		continue;
//
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}int i = 0;
//int main()
//{
//	int i = 0;
//for (i = 0; i<10; i++)
//{
//	if (i = 5)
//		printf("%d ", i);
//}
//return 0;
//int main() 
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2) 
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}
//��ӡ1000-2000����
//{
//int main()
//{
//	int year = 1000;
//	for (year = 1000; year <= 2000;)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d\n", year);
//		}
//		year++;
//	}
//	return 0;
//}
//д���뽫���������Ӵ�С���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("������������");
//		scanf("%d%d%d", &a, &b, &c);
//    if (a>b && a>c && b>c)
//		printf("%d\n" a, b, c);
//дһ�������ӡ1-100֮������3�ı���������
//int main()
//{
//	int a = 0;
//	while ( a <= 100)
//	{
//		if (a % 3 == 0)
//			printf("%d\n",a);
//		a++;
//	}
//	return 0;
//
//}
//�Ƚ��������ֵĴ�С
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a,&b,&c);
//	if (b > a)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (c > a)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (c > b)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//�����������Լ��
//int main()
//{
//	int a = 12;
//	int b = 9;
//	int min = (a > b ? a:b);
//	while (1)
//	{
//		if (a%min == 0 && b%min == 0)
//		{
//			printf("��������Լ��:%d\n", min);
//            break;
//		}
//		min--;
//	}
//		return 0;
//}
//��ӡ1000-2000����
//int main()
//{
//	int year = 1000;
//	int count = 0;
//	while (year <= 2000)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d", year);
//			count++;
//		}
//		else if (year % 400==0)
//		{
//			printf("%d", year);
//			count++;
//		}
//		year++;
//	}
//	printf("%d", count);
//	 return 0;
////��ӡn�Ľ׳�
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	scanf("%d", &n);
//	while(i <= n)
//	{
//		ret = ret*i;
//		i++;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//��ӡ3�Ľ׳�
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)     //n=1 i=1 ret=1*1  sum=1*1
//	{   
//		ret = 1;                 //n=2 ret=1 i=2 ret=1*2 sum=1*1+1*2
//		for (i = 1; i <= n; i++) //n=3 ret=1 i=3 ret=1*2*3  sum=1*1+1*2+1*2*3
//		{                        //n=4 ret=1 i=4 ret=1*2*3*4sum=1*1+1*2+1*2*3+1*2*3*4
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)//1%3 !=0 b=-4 a=2//-4%3==1 b=-1 -1%3 !=0 b=-6 a=3
//		{              //-6%3 ��=1 b=-11// a=4 -11%3 !=1 b=-16 a=5 -16%3==1 b=-13
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//int main()
//{
//	int a = 0;
//	int count = 0;
//	for (a = 1; a < 100; a++)
//	{
//		if (a % 10 == 9)
//		{
//			count++;
//			printf("a=%d\n", a);
//		}
//		if (a / 10 == 9)
//		{
//			count++;
//			printf("a=%d\n", a);
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
//��10 �����������ֵ

//int main()
//{
//	char input[20] = { 0 };
//	int ch = 0;
//	printf("����������:>");//123456 ABCDE(\n)
//	scanf("%s", input);//123456 scanf�����ո�Ͳ�������ȥ
//	printf("��ȷ�����루Y/N):>");
//	//��ջ�����
//	while ((ch = getchar()) != '\n')//��������ABCDE
//	{
//		;//�����ѭ�����ÿһ���ַ���֪��ʣ�¡�\n��
//	}
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}
