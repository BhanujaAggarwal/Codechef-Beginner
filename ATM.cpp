#include <bits/stdc++.h>
using namespace std;
int
main ()
{
  int x;
  float y;
  cin >> x >> y;
  float z=x;
  if (z<= y - 0.50)
    {
      if (x % 5 == 0)
	{
	  cout << fixed << setprecision (2) << y - x - 0.50;
	}
      else
	cout << fixed << setprecision (2) << y;
    }
  else
    cout << fixed << setprecision (2) << y;
  return 0;
}
 
