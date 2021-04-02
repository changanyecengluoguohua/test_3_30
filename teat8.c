#include<stdio.h>
int main()
{
	//写一段代码告诉我们当前字节序是什么
	int a = 1;//00 00 00 14
	char* p = (char*)&a;
	if (*p == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}