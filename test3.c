int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	for (i = 2; i < n; i++)
	{
		if (n%i == 0)
		{
			printf("不是素数\n");
			break;
		}
		else
		{
			printf("是素数\n");
			break;
		}
	}

	return 0;
}