#include<iostream>
using namespace std;
int f(int a)
{
	a = 2 * a;
	return a;
}
int main()
{
	int b;
	cin >> b ;
	cout << f(b);

}
