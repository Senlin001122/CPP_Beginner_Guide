#include<iostream>
using namespace std;
int main()
{
	int m;
	cin >> m ;
	if (m % 4 == 0)
	{
		if (m%100==0&&m % 400 !=0 || m % 3200 == 0)
		{
			cout << "no";
		}
		else
		{
			cout << "yes";
		}
	}


	
	else {
		cout << "no";
	}
}
