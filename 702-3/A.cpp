#include <bits/stdc++.h>
using namespace std;
// #define int long long
int solve(int a, int b)
{
 int c = 0;
 while (a < b)
 {
  a = a * 2;
  c++;
 }
 return c - 1;
}
int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
   cin >> v[i];
  int count = 0;
  for (int i = 0; i < n - 1; i++)
  {
   if (max(v[i], v[i + 1]) > 2 * min(v[i], v[i + 1]))
   {
    count += solve(min(v[i], v[i + 1]), max(v[i], v[i + 1]));
   }
  }
  cout << count << "\n";
 }
 return 0;
}
