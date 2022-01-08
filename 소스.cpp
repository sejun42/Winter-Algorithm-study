#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char s[100];
	char arr[27] = "abcdefghijklmnopqrstuvwxyz";

	cin >> s;

	for (int i = 0; i <= 27; i++)
	{
		for (int j = 0; j <= 5; j++)
		{
			if (s[j] != arr[i])
				continue;

			else if (s[j] == arr[i])
			{
				cout << j;
			}

			else if (i == 26)
			{
				printf("-1");
				continue;
			}
				

		}
	}

	
	return 0;
}