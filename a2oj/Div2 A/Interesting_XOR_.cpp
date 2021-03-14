#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  int c;
  cin >> c;
  int i = 1;
  while (i < c)
  {
   i = i * 2;
  }
  int product = 1;
  for (int j = 1; j < i; j++)
  {
   int k = c ^ j;
   if (k < i)
   {
    product = max(product, j * k);
   }
  }
  cout << product << "\n";
 }
 return 0;
}