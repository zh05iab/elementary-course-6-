#define _CRT_SECURE_NO_WARINGS 1
#include<stdio.h>
int main()
{//while�� do while ѭ��
 //whileΪѭ���ṹ����ͬ��һ���˳��ṹ��while�����ֻҪ���������ͻ������ⲿ����һֱִ��
 //�÷�����
 /*while (���ʽ)
	{
	����� 
	}*/
 //�����߼��������жϱ��ʽֵ�Ƿ�Ϊ��1����Ϊ��1����ִ�д���飬���������ѭ����ִ��
	int i = 1;
	int sum = 0;
	while (i <= 100)
	{
		sum += i;
		i++;
	}
	printf("%d\n", sum);
 //do while��while��࣬������ִ�д���飬���ж��������ʽ�Ƿ�Ϊ��1���������Ƿ����ִ��
 //Ҳ����˵do while ����ִ��һ�δ����
	do
	{
		printf("ֵ��%d\n",i);
	} while (i>101);
	return 0;
}