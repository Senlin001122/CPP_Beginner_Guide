#include<iostream>
using namespace std;
void f(int a,int b)
{
	for(int i=0;i<a;i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << "*";
		}
		cout << endl;
	
	}
}
int main()
{
	int x, y;
	cin >> x >> y;
	f(x,y);

}
