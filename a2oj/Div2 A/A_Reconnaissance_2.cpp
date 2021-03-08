#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin >> n;
 vector<int> a(n);
 for (int i = 0; i < n; i++)
  cin >> a[i];

 int first = 0, last = n - 1, ans;
 if (a[last] > a[first])
  ans = a[last] - a[first];
 else
  ans = a[first] - a[last];
 for (int i = 0; i < n - 1; i++)
 {
  if (a[i + 1] - a[i] < ans && a[i + 1] >= a[i])
  {
   first = i, last = i + 1, ans = a[i + 1] - a[i];
  }
  else if (a[i] - a[i + 1] < ans && a[i] >= a[i + 1])
  {
   last = i, first = i + 1, ans = a[i] - a[i + 1];
  }
 }
 cout << first + 1 << " " << last + 1;
 return 0;
}