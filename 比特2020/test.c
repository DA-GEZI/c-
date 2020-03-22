#define _CRT_SECURE_NO_WARNINGS   1
#include <stdio.h>
//if else的循环语句
int main()
{
	int input = 0;
	printf("加入比特\n"); 
	printf("你要好好学习吗(1/0)?\n");
    scanf("%d", &input);

	if (input == 1)

		printf("好offer\n");
	return 0;
}
	else
		printf("卖红薯\n");
        return 0;
//while的循环语句
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line<20)
//	{
//		printf("敲代码%d\n",line);
//		line++;
//	}
//	printf("好offer\n");
//	return 0;

//
//数组放一组相同类型的数字
//1-10
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	              //0,1,2,3,4,5,6,7,8,9(数组的下标）
//	int i = 0;    //arr[]里面数字为下标
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//			i++;
//	}
//}
//操作符
//+,-,*,/，%,|，&
//&二进制数一个为0则全为0
//&位与(按二进制)
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a&b;
//	//a=3:011
//	//b=5:101
//	//c=a&b:001(上下对应取值)
//	printf("c=%d\n", c);
//	return 0;
//}
//|位或操作符
//按二进制一个为1则全为1
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
//赋值操作符
//int main()
//{
//	int a = 0;//创建变量初始值
//	a = a + 1;
//	//a += 1;
//	//得到-+，*=，/=
//	//&=，|=，>>=,<<=
//	printf("a=%d\n", a);
//	return 0;
//}
//单目操作符
//int main()
//{
//	//c语言如何表示真假
//	//只有0表示假，非0表示真1，-1
//	//!可以假变真，真变假
//    int a = 10;
//
//    printf("%d\n", !a);
//	return 0;
//}
//sizeof操作数的类型长度(以字节为单位）
//字符以字节为单位
//sizeof计算变量大小时有无()结果一样
//sizeof计算类型(int)必须加()
//如何计算数组元素的个数
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//		//40/4=10计算数组元素个数
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof arr);
//	
//    return 0;
//
//define定义的标识符为常量不可更改
//#define MAX 1000
//int main()
//{
//	int a = MAX;
//	max = 2000;
//	printf("%d\n", a);
//	return 0;
//
//}
//字符串
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c', 0 };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//字符串的结尾处存放一个'\0'
//是字符串的结束标志
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
//	//strlen - string strlen - 计算字符串长度的
//	printf("%d\n", strlen(arr2));//随机值
//	return 0;
//}
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));//3
//	printf("%c\n", '\32');
//	//把8进制的32转换成10进制数后，作为ASCII码值代表的那个字符
//	//32=3*8^1+2*8^0=25对应的ASCII码值
//	//41=4*16^1+1*16^0=65对应的ASCII码值
//	printf("%c\n", '\x41');
//	return 0;
//~a取反操作符
//

//逻辑操作符
//&&两个全满足
//||满足一个即可
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
//if else条件语序
//比较两值较大值
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
//条件操作符=三目操作符
//exp1?exp2:exp3
//exp1正确执行exp2,否则执行exp3
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
////函数调用操作符
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//调用函数()是函数调用符
//	int sum = Add(a, b );
//	printf("sum=%d\n", sum);
//	return 0;
//}
//static的作用
//1：修饰局部变量
//2：修饰全局变量
//3：修饰函数
//修饰局部变量
//void test()
//{
//   static int a = 1;//调用test函数，共循环10次
//	a++;            //每一次循环，a的值为上一步a++的的值
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
//按位与
//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	int c = a&b;//对应全为1则为一，对应一个为0则为0
//	printf("c=%d\n", c);//001
//	return 0;
//}
//按位或
//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	int c = a|b;//对应只要有一个为1则全为1
//	printf("c=%d\n", c);//111
//	return 0;
//}
//^按位异或
//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	int c = a ^ b;//对应相同为0相异为1
//	printf("c=%d\n", c);//110
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	a=a+1//a+=a
//}

//static修饰全局变量

//static修饰的函数只能在自己所在的.c源文件使用
//static修饰函数依然改变了函数的作用域
//extern声明外部函数
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
//	printf("输入两个值\n");
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
//自己创建的类型-自定义类型
//创建一个人书的类型
	/*struct Book b2 = { "知乎", 30.54, "ISBN-100099809" };
	printf("书名:%s\n", b1.name);
	printf("定价:%f\n", b1.price);
	printf("书号:%s\n", b1.id);
	printf("书名:%s\n", b2.name);
	printf("定价:%f\n", b2.price);
	printf("书号:%s\n", b2.id);
	return 0;*/
//}
//正确写法 常量==变量
//int main()
//{
//	int age = 10;
//	if (5 == age)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
////错误写法 变量=常量
////比较常量和变量的值是否相等时，常量放在等号左边
//输出1-100之间的奇数
//产生1-100之间的数
//判断每个数是否为奇数
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("输出为奇数\n");
//	else
//		printf("偶数\n");
//    return 0;
//}
//产生1-100之间的数
//判断每个数是否为奇数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d", i);
//		i = i + 2;
//	}
//		return 0;
//switch case语句
//switch(必须为整形)case必须为整形常变量
//default默认选项，处理不能被case处理的情况
//case语句中无顺序可分
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
//		printf("输入错误\n");
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
//			n++;//无break直接跳转
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
//打印0-9
//while循环中的continue,
//跳过本次循环后面代码
//直接去判断部分，进行下一次循环
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
//打印1000-2000闰年
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
//写代码将三个数按从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入三个数");
//		scanf("%d%d%d", &a, &b, &c);
//    if (a>b && a>c && b>c)
//		printf("%d\n" a, b, c);
//写一个代码打印1-100之间所有3的倍数的数字
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
//比较三个数字的大小
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
//求两数的最大公约数
//int main()
//{
//	int a = 12;
//	int b = 9;
//	int min = (a > b ? a:b);
//	while (1)
//	{
//		if (a%min == 0 && b%min == 0)
//		{
//			printf("请输出最大公约数:%d\n", min);
//            break;
//		}
//		min--;
//	}
//		return 0;
//}
//打印1000-2000闰年
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
////打印n的阶乘
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
//打印3的阶乘
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
//		{              //-6%3 ！=1 b=-11// a=4 -11%3 !=1 b=-16 a=5 -16%3==1 b=-13
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//编写程序数一下 1到 100 的所有整数中出现多少个数字9
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
//求10 个整数中最大值

//int main()
//{
//	char input[20] = { 0 };
//	int ch = 0;
//	printf("请输入密码:>");//123456 ABCDE(\n)
//	scanf("%s", input);//123456 scanf读到空格就不继续下去
//	printf("请确认密码（Y/N):>");
//	//清空缓存区
//	while ((ch = getchar()) != '\n')//依次拿走ABCDE
//	{
//		;//空语句循环清除每一个字符串知道剩下“\n”
//	}
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}
