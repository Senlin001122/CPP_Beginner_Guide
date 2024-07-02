#include<iostream>
using namespace std;
void f(int a)
{
	for(int i=0;;i++)
	{
		a++;
		if (a % 2 == 0)
		{
			cout << a;
			break;
		}
	}
}
int main()
{
	int b;
	cin >> b;
	f(b);

}
