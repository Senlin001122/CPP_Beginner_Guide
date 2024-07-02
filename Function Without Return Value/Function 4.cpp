#include<iostream>
using namespace std;
void print()
{
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		if (i % 2 == 1)
		{
			cout << "*****";
				cout << endl;
		}
		else
		{
			cout << "#####";
			cout << endl;
		}
	}
}
int main()
{
	print();

}
