#include<stdio.h>
int main()
{
#include<stdio.h>
	void test()
	{
		int a = 1;
		a++;
		printf("a=%d\n", a);
	}
	int main()
	{
		int i = 0;
		while (i < 5)
		{
			test();
			i++;
		}
		return 0;
	}
}