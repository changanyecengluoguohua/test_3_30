int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	for (i = 2; i < n; i++)
	{
		if (n%i == 0)
		{
			printf("��������\n");
			break;
		}
		else
		{
			printf("������\n");
			break;
		}
	}

	return 0;
}