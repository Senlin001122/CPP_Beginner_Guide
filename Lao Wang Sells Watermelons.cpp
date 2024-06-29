#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int m = 0;
	for (int i = 0; i < n; i++)
	{
		m = 2*m+1;
	}
	cout << m;


}
