#include <bits/stdc++.h>
using namespace std;
signed main()
{
 int a, b, c;
 cin >> a >> b >> c;
 int mx = INT_MIN;
 mx = max((a + b) * c, max(a + b * c, max(a * (b + c), max(a * b * c, a + b + c))));
 cout << mx;
 return 0;
}