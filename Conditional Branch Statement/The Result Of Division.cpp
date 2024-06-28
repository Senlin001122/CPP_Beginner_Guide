#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
	if (y == 0)
	{
		cout << 0;
	}
	else
	{
		if (x % y == 0)
		{
			cout << 1;
		}
		else
		{
			cout << 2;
		}
	}
}
