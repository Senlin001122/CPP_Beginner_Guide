#include<iostream>
using namespace std;
int f(int a)
{
	int c = 0;
	for (int i = 1; i <= a; i++)
	{
		c += i;
	}
	return c;
}
int main()
{
	int b;
	cin >> b ;
	cout << f(b);

}
