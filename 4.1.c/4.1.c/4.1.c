#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
�ݹ鳣������ջ���
ջ�����ֲ���������ʽ��������������
��������̬�ڴ���䣬malloc,free,calloc,realloc
��̬����ȫ�ֱ�������̬����
int main()
{
	printf("hehe\n");
	main();
	return 0;
}
����һ�����Σ��޷��ţ�����˳���ӡÿһλ
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
�����ѧ������һ��ѧ����10��
ÿ��ѧ������һ��ѧ��������
�ʵ����ѧ�����
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
	printf("����������ѧ�������䣺%d\n", age(5));
		return 0;
}
��д������������ʱ���������ַ����ĳ���
int my_strlen(char* str)//��ŵ�һ���ַ�b
{
	int count = 0;//count�����������㳤��
	while (*str != '\0')   
	{
		count++;
		str++;//��ַ���+1ָ��ڶ����ַ�i,ֱ����4����ַ\0����
	}
	return count;
}
int main()
{
	char arr[] = "bit";//����������Ԫ�صĵ�ַ-char�ĵ�ַchar*
	int len =my_strlen(arr);
	printf("%d\n", len);
	return 0;
}
��д����bu��������ʱ���������ַ����ĳ���
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
int main()
{
	char arr[] = "bit";//����������Ԫ�صĵ�ַ-char�ĵ�ַchar*
	int len =my_strlen(arr);
	printf("%d\n", len);
	/*my_strlen("bit");
	1 + my_strlen("it");
	1+1 + my_strlen("t");
	1+1+1 + my_strlen("");
	1 + 1 + 1 + 1 + 0;*/
	return 0;
}
��n�Ľ׳�(���������)
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
��n�Ľ׳�(���������)
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
	int ret = fac(n);//n�Ľ׳�
	printf("ret=%d\n", ret);
	return 0;
}
���n��쳲�������
ǰ���������Ϊ�������
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