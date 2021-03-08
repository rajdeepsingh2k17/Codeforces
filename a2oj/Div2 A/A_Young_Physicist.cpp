#include <bits/stdc++.h>
using namespace std;
vector<int> freq(1001);
#define ll long long int

int main()
{
 int n;
 cin >> n;
 vector<int> x(n);
 vector<int> y(n);
 vector<int> z(n);
 for (int i = 0; i < n; i++)
 {
  cin >> x[i] >> y[i] >> z[i];
 }
 int s1 = 0, s2 = 0, s3 = 0;
 for (int i = 0; i < n; i++)
 {
  s1 += x[i];
  s2 += y[i];
  s3 += z[i];
 }
 if (s1 == 0 && s2 == 0 && s3 == 0)
  cout << "YES";
 else
 {
  cout << "NO";
 }
 return 0;
}