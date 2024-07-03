#include<iostream>
using namespace std;
void f(int n,char c)
{
	for(int i=0;i<n;i++)
	{
		for (int j = 0; j < 2 * n - 1-i; j++)
		{
			if (i == j || j == 2 * n - i - 2)
			{
				cout << c;
			}
			else
			{
				cout << " ";

			}

			
		}
		cout << endl;
	}
}
int main()
{
	int n;
	char c;
	cin >> n >>c ;
	f(n, c);

}
