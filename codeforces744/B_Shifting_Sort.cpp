#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<vector<int>> sol;
  for (int i = 0; i < n; i++)
  {
   cin >> a[i];
  }
  auto sec = a;
  sort(sec.begin(), sec.end());

  for (int i = 0; i < n; i++)
  {
   if (a[i] == sec[i])
    continue;
   int x = i, y = i;
   while (a[y] != sec[i])
    y++;
   sol.push_back({x + 1, y + 1, y - x});
   int flag = y;
   while (flag > i)
   {
    a[flag] = a[flag - 1];
    flag--;
   }
   a[i] = sec[i];
  }
  cout << sol.size() << endl;
  for (auto x : sol)
  {
   for (auto y : x)
   {
    cout << y << " ";
   }
   cout << endl;
  }
 }
}