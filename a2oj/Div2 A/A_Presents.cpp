#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin >> n;
 vector<int> a(n + 1), b(n + 1);
 for (int i = 1; i < n + 1; i++)
 {
  cin >> a[i];
  b[a[i]] = i;
 }
 for (int i = 1; i < n + 1; i++)
 {
  cout << b[i] << " ";
 }
 return 0;
}