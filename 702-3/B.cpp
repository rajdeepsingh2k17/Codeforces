#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios::sync_with_stdio(false);
 int t;
 cin >> t;
 while (t--)
 {
  int n;
  cin >> n;
  vector<int> v(n);
  vector<int> a(3, 0);
  for (int i = 0; i < n; i++)
  {
   cin >> v[i];
   a[v[i] % 3]++;
  }
  int q = n / 3, moves = 0;
  for (int i = 0; i < 9; i++)
  {
   if (a[i % 3] > q)
   {
    int dif = a[i % 3] - q;
    moves += dif;
    a[i % 3] -= dif;
    a[(i + 1) % 3] += dif;
   }
  }
  cout << moves << "\n";
 }
 return 0;
}
