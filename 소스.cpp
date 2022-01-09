#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
#include<vector>

using namespace std;

int main()
{
	char* s = new char;
	char arr[27] = "abcdefghijklmnopqrstuvwxyz";

	cin >> s;
	delete[] s;
	for (int i = 0; i <= 27; i++)
	{
		for (int j = 0; j <= sizeof(s); j++)
		{
			if (arr[i] == s[j])
			{
				cout << j;
				cout << " ";
			}

			else if (arr[i] != s[j])
				continue;

			else if (i == 26)
			{
				printf("-1 ");
			}
				
			continue;
		}
	}

	
	
	return 0;
}