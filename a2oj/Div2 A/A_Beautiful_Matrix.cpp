#include <bits/stdc++.h>
using namespace std;
vector<int> freq(1001);
#define ll long long int

int main()
{
 int a[6][6], x, y;
 for (int i = 1; i < 6; i++)
 {
  for (int j = 1; j < 6; j++)
  {
   cin >> a[i][j];
  }
 }
 for (int i = 1; i < 6; i++)
 {
  for (int j = 1; j < 6; j++)
  {
   if (a[i][j] == 1)
   {
    x = i;
    y = j;
   }
  }
 }
 // cout << x << y;
 cout << abs(3 - x) + abs(3 - y);

 return 0;
}