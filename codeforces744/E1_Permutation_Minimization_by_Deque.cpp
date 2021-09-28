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
  for (int i = 0; i < n; i++)
  {
   cin >> a[i];
  }
  deque<int> ans;
  ans.push_back(a[0]);
  for (int i = 1; i < n; i++)
  {
   if (a[i] <= ans.front())
   {
    ans.push_front(a[i]);
   }
   else
    ans.push_back(a[i]);
  }
  for (int x : ans)
  {
   cout << x << " ";
  }
  cout << endl;
 }
}