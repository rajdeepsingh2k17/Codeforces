#include <bits/stdc++.h>
using namespace std;
#define int long long int
bool primes[1000001];
void pre()
{
 memset(primes, true, sizeof(primes));
 primes[1] = 0;
 for (int i = 2; i * i < 1000001; i++)
 {
  if (primes[i] == 1)
  {
   for (int j = i * i; j < 1000001; j += i)
   {
    primes[j] = 0;
   }
  }
 }
}
signed main()
{
 pre();
 int n;
 cin >> n;
 vector<int> v(n);
 for (int i = 0; i < n; i++)
  cin >> v[i];
 for (int i = 0; i < n; i++)
 {
  int t = sqrt(v[i]);
  if (primes[t] == 1 && t * t == v[i])
   cout << "YES\n";
  else
   cout << "NO\n";
 }
 return 0;
}
