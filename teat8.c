#include<stdio.h>
int main()
{
	//дһ�δ���������ǵ�ǰ�ֽ�����ʲô
	int a = 1;//00 00 00 14
	char* p = (char*)&a;
	if (*p == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}