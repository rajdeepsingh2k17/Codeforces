#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin >> n;
 vector<int> v(n);
 int sum = 0, count = 0;
 double half = 0;
 for (int i = 0; i < n; i++)
 {
  cin >> v[i];
  sum += v[i];
 }
 if (sum % 2 == 0)
  half = double(sum) / 2;
 else
  half = (double(sum) / 2);
 sum = 0;
 sort(v.begin(), v.end());
 for (int i = n - 1; i >= 0; i--)
 {
  sum += v[i];
  count++;
  if (sum > half)
   break;
 }
 cout << count;
 return 0;
}