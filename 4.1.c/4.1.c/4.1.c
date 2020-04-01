#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
递归常见错误：栈溢出
栈区：局部变量，形式参数，函数调用
堆区：动态内存分配，malloc,free,calloc,realloc
静态区：全局变量，静态变量
int main()
{
	printf("hehe\n");
	main();
	return 0;
}
接受一个整形，无符号，按照顺序打印每一位
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf ("%d ",n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);//123
	print(num);
	//print(123);
	//print(12)+3;
	//print(1)+2+3;
	//1,2,3
    return 0;
}
共五个学生，第一个学生是10岁
每个学生比上一个学生大两岁
问第五个学生多大
int age(int n)
{
	int c = 0;
	if (n == 1)
		c = 10;
	else
		c = age(n - 1) + 2;
	return c;
}
int main()
{
	int n = 0;
	printf("请输出第五个学生的年龄：%d\n", age(5));
		return 0;
}
编写函数允许创建临时变量，求字符串的长度
int my_strlen(char* str)//存放第一个字符b
{
	int count = 0;//count计数器，计算长度
	while (*str != '\0')   
	{
		count++;
		str++;//地址向后+1指向第二个字符i,直到第4个地址\0跳出
	}
	return count;
}
int main()
{
	char arr[] = "bit";//数组名是首元素的地址-char的地址char*
	int len =my_strlen(arr);
	printf("%d\n", len);
	return 0;
}
编写函数bu允许创建临时变量，求字符串的长度
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
int main()
{
	char arr[] = "bit";//数组名是首元素的地址-char的地址char*
	int len =my_strlen(arr);
	printf("%d\n", len);
	/*my_strlen("bit");
	1 + my_strlen("it");
	1+1 + my_strlen("t");
	1+1+1 + my_strlen("");
	1 + 1 + 1 + 1 + 0;*/
	return 0;
}
求n的阶乘(不考虑溢出)
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret = ret*i;
	}
	printf("ret=%d\n", ret);
	return 0;
}
求n的阶乘(不考虑溢出)
int fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n*fac(n - 1);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fac(n);//n的阶乘
	printf("ret=%d\n", ret);
	return 0;
}
求第n个斐波那契数
前两个数相加为后面的数
1 1 2 3 5 8 13 21 34 55
int fib(int n)
{
	int a = 1;int b = 1;int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);
	return 0;
}