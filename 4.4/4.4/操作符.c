#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
移位操作符
>>-右移操作符：两种：a:算数:右边丢弃，左边补原符号位b:逻辑：右边丢去，左边补0
<<-左移操作符
移动是二进制
整数：内存中存储这个整数时，存储的是补码
整数：正整数：原码，反码，补码相同
      负整数：直接写的二进制序列就是原码，原码的符号位不变，
      其他按位取反得反码，反码+1得到补码
int main()
{
	int a = 14;
	//14是正整数-4个字节-32bit位  842
	//00000000000000000000000000001110=14 最高位0是正数
	// 0000000000000000000000000000111=7（0）最左边丢弃到最右边
	//                             421
	int b = a >> 1;
    printf("b=%d\n", b);
    return 0;
}
int main()
{
	int a = -1;
	//10000000000000000000000000000001-原码
	//11111111111111111111111111111110-反码
	//11111111111111111111111111111111-补码
	int b = a >> 1;
	printf("b=%d\n", b);
	return 0;
}
int main()
{
	int a = 5;
	int b = a << 1;  //     401
	// 000000000000000000000101
	//000000000000000000000101(0)左边丢去，规定右边全部补0
	//                     802
	printf("b=%d\n", b);
	return 0;
}
位操作符
int main()
{
	int a = 3;
	int b = 5;
	int c = a | b;
   //3=011.000000000000000000000011
   //5=101.000000000000000000000101
   //c=111.000000000000000000000111
printf("c=%d\n", c);
return 0;
}
int main()
{
	int a = 3;
	int b = 5;
	int c = a | b;
	//3=011.000000000000000000000011
	//5=101.000000000000000000000101
	//c=111.000000000000000000000111
	printf("c=%d\n", c);
	return 0;
}
int main()
{
	int a = 3;
	int b = 5;
	//3=011.000000000000000000000011
	//5=101.000000000000000000000101
	//c=110.000000000000000000000110
	int c = a^b;
	printf("c=%d\n", c);
	return 0;
}
不能
int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	//把a,b两数交换
	a = c;
	a = b;
	b = c;
	printf("%d\n", a, b);
	return 0;
}
不创建临时变量
int main()
{
	int a = 3;
	int b = 5;
	a = a^b;
	b = a^b;
	a = a^b;
	printf("%d\n", a, b);
    return 0;
}
求一个整数存在内存中的二进制中1的个数
int main()
{
	int num = 10;
	int count = 0;
	while (num)
	{
		if (num % 2 == 1)
			count++;
		num = num / 2;
	}
	printf("二进制中1的个数=%d\n", count);
	return 0;
}
int main()
{
	int a = 10;
	short s = 5;
	//sizeof里面的数不参与运算
	printf("%d\n", sizeof(s = a + 3));
	printf("%d\n", s);
	return 0;
}
int main()
{
	int a = 0;
	printf("%d\n", ~a);//~a取反
	//00000000000000000000000000000000-补码
	//11111111111111111111111111111111-补码
	//11111111111111111111111111111110-反码
	//10000000000000000000000000000001-原码
	//return 0;
}
int main()
{
	int a = 13;
	a= a | (1 << 4);
	printf("%d\n", a);
	a&=~(1 << 4);
	printf("%d\n", a);
	//00000000000000000000000000001101
	//00000000000000000000000000010000   |    1<<4后面全补0
	//00000000000000000000000000011101  
	//11111111111111111111111111101111  ~(1 << 4)  &
	//00000000000000000000000000001101
	return 0;
}
void test1(int arr[])
{
	printf("%d\n", sizeof(arr));
}
void test2(char ch[])//指针在32平台时候都为四个字节
{
	printf("%d\n", sizeof(ch));
}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(ch));
	test1(arr);
	test2(ch);
	return 0;
}
int main()
{
	int flag = 3;
	//假
	/*if (flag)
	{
		printf("hehe\n");
	}*/
	//真
	if (!flag)
	{
		printf("hehe\n");
	}
	return 0;
}
int main()
{
	int a = 3;
	int b = 5;
	int c = a&&b;
	printf("%d\n", c);//1
	int t = a || b;
	printf("%d\n", t);//1
	int d = 0;
	int e = 5;
	int f = d&&e;
	printf("%d\n", f);//0
	int g = d || e;
	printf("%d\n", g);//1
	return 0;
}
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
	//        0      2      3      4
	return 0;
}
int main()
{
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
	//        2      3      3      5      
	return 0;
}
int main()
{
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	i = a++ || ++b || d++;//||关系左边为真后面全不看
	                      //&&关系左边为假后面全不看
	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
	//        2      2      3      4     
	return 0;
}
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ || ++b || d++;
	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
	//        1      3      3      4
	return 0;
}

int main()
{
	char a = 3;//截断
	//00000000000000000000000000000011
	//00000011-a
	char b = 127;
	//00000000000000000000000001111111
	//01111111-b
	char c = a + b;
	//00000000000000000000000000000011
	//00000000000000000000000001111111
	//00000000000000000000000010000010=a+b 二进1 三进一余1
	//10000010-c
	//11111111111111111111111110000010-补码，100000010最高位为1则补1
	//11111111111111111111111110000001-原码=补码-1
	//10000000000000000000000001111110--原码取反，符号位(最高位)不变其他位取反
	//-126
	printf("%d\n", c);//十进制的有符号整形
	return 0;
}