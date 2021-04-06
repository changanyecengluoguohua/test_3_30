#include<stdio.h>
#include<assert.h>
#include<string.h>
struct s
{
	char name[20];
	int age;
};
void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}

	return ret;
}
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 0 };
	struct s arr3[] = { { "idu", 29 }, { "sjdh", 9 } };
	struct s arr4[3] = { 0 };
	//char* dest, const char*src
	my_memcpy(arr4, arr3, sizeof(arr3));
	//	memcpy(arr2, arr1,sizeof(arr1));//可以拷贝任何类型数据
	//strcpy(arr2,arr1);//只能拷贝字符串

	return 0;
}