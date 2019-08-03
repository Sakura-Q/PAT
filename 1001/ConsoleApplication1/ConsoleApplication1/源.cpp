# include<iostream>
using namespace std;
int main()
{
	int n=0;
	int flag = 0;
	//scanf_s("%d", &n);
	cin >> n;
		while (n>1)
		{
			if (n % 2 == 0)
			{
				n = n / 2;
				flag++;
			}
			else
			{
				n = (3 * n + 1) / 2;
				flag++;
			}
		}
		cout << flag;
	return 0;

}