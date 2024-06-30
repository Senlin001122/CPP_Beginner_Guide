#include<iostream>
using namespace std;
int main()
{
	int n, x = 1;
	cin >> n;

	for (int l = 1; l <= n; l++)
	{
		cout << "*";
	}
	cout << endl;
	for (int i = 1; i <= n / 2 - 1; i++)
	{
		for (int j = 1; j <= x; j++)
		{
			cout << " ";
		}
		cout << "*";
		for (int k = 1; k <= n - (2 * i + 2); k++)
		{
			cout << " ";
		}
		cout << "*";
		x++;
		cout << endl;
	}

	for (int i = 1; i <= n / 2; i++)
	{
		cout << " ";
	}
	cout << "*" << endl;

	for (int a = 1; a <= n / 2 - 1; a++)
	{
		for (int b = 1; b <= n - (n - n / 2) - a; b++)
		{
			cout << " ";
		}
		cout << "*";
		for (int c = 1; c <= n - ((n + 1) - a * 2); c++)
		{
			cout << " ";
		}
		cout << "*";
		cout << endl;
	}
	for (int l = 1; l <= n; l++)
	{
		cout << "*";
	}
	cout << endl;
	return 0;
}
