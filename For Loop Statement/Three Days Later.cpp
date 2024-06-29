#include <iostream>
using namespace std;
int main()
{
 int a, b, c, x, y, z;
 cin >> a >> b >> c;
 int tag = ( a % 400 == 0 || a % 4 == 0 && a % 100 != 0)  && a % 3200 != 0;
 if (a > 0 && b > 0 && b <= 12 && c > 0 && c <= 31)
 {
  if (b == 4 || b == 6 || b == 9 || b == 11)
  {
   if (c > 27 && c <= 30)
   {
    x = a;
    y = b + 1;
    z = c - 27;
    cout << x << " " << y << " " << z;
   }
   else if (c <= 27)
   {
    x = a;
    y = b;
    z = c + 3;
    cout << x << " " << y << " " << z;
   }
  }
   
  if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10) 
  {
   if (c > 28 && c <= 31)
   {
    x = a;
    y = b + 1;
    z = c - 28;
    cout << x << " " << y << " " << z;
   }
   else if (c <= 28)
   {
    x = a;
    y = b;
    z = c + 3;
    cout << x << " " << y << " " << z;
   }
  }
  if (b == 12) {
   if (c > 28 && c <= 31)
   {
    x = a + 1;
    y = b - 11;
    z = c - 28;
    cout << x << " " << y << " " << z;
   }
   else if (c <= 28)
   {
    x = a;
    y = b;
    z = c + 3;
    cout << x << " " << y << " " << z;
   }
  }
  
  
  if (b == 2)
  {
   if (c > 0 && c <= 28 + tag&&c>25)
   {
    if (tag == 0) 
    {
     x = a;
     y = b + 1;
     z = c - (25 + tag);
     cout << x << " " << y << " " << z;
    }
    else if (tag == 1) 
    {
     x = a;
     y = b;
     z = c + 3;
     cout << x << " " << y << " " << z;
    }
   }
   else if (c>0&&c<=25)
   {
    x = a;
    y = b;
    z = c + 3;
    cout << x << " " << y << " " << z;
   }
  }
   
  
 }
 return 0;
}
