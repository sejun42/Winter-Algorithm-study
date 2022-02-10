#include <iostream>
#include <string>

using namespace std;

char str[40];
int num = 0;
int list[100];
int cnt = 0, i;

int main()
{
	gets_s(str, 40);
	for (int i = 0; cnt < 40 && str[i]; i++)
	{
		if (str[i] != ' ')
		{
			num = num * 10 + str[i] - '0';
		}
		else
		{
			if (num > 0)
			{
				list[cnt++] = num;
				num = 0;
			}
		}
	}

	cout << num;
	return 0;
}