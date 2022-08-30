#define _CRT_SECURE_NO_WARINGS 1
#include<stdio.h>
int main()
{//while和 do while 循环
 //while为循环结构，不同于一般的顺序结构，while中语句只要满足条件就会无视外部代码一直执行
 //用法如下
 /*while (表达式)
	{
	代码块 
	}*/
 //运行逻辑：首先判断表达式值是否为“1”，为“1”就执行代码块，否则就跳出循环不执行
	int i = 1;
	int sum = 0;
	while (i <= 100)
	{
		sum += i;
		i++;
	}
	printf("%d\n", sum);
 //do while和while差不多，但是先执行代码块，再判断条件表达式是否为“1”来决定是否继续执行
 //也就是说do while 至少执行一次代码块
	do
	{
		printf("值是%d\n",i);
	} while (i>101);
	return 0;
}