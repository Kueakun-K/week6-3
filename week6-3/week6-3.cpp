#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char str[30];
	char* p;
	scanf("%s", str, 29);
	p = str;
	while (*p != '\0')
	{
		if ((*p >= 'a') && (*p <= 'z'))
		{
			printf("%c", *p-'a'+'A');
		}
		p = p + 1;
	}
	return 0;
}