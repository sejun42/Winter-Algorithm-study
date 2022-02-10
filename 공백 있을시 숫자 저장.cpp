#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], * s;
    int num[100], i, cnt = 0;

    gets_s(str);

    for (s = strtok(str, " "); s; s = strtok(NULL, " "), cnt++) // strtok 에 구분자 지정
        if (sscanf(s, "%d", &num[cnt]) < 1)
            break;

    for (i = 0; i < cnt; i++)
        printf("%d\n", num[i]);
}
