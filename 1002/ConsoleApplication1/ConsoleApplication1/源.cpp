#include<stdio.h>
int main()
{
	char h, sh[5];
	int sum = 0;
	char s[10][5] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };
	while ((h = getchar()) != '\n')
		sum += (h-'0');
	sprintf_s(sh, "%d", sum);
	for (int i = 0; sh[i] != 0; i++)
	{
		if (i > 0)
			printf(" ");
		printf("%s", s[sh[i]-'0']);
	}

}