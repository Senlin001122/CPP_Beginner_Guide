#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >>d;
    
    {
        if (a >= c && b >= d )
        {
            cout << 1;
       }
        else if(a>=d&&b>=c)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
    
    
}
