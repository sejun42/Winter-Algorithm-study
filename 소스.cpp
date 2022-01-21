#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	int N = 0;
	scanf("%d", &N);
	for (int n = 0; (3 * (n * (n + 1))+1); n++)
	{
		if (N > (3 * (n * (n + 1)) + 1))
			continue;
		if (N <= (3 * (n * (n + 1)) + 1))
		{
			printf("%d", n+1);
			break;
		}
	}
	return 0;
}