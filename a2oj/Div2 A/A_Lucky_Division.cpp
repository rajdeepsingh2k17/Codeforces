#include <bits/stdc++.h>
using namespace std;
vector<int> lucky = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 777};
int main()
{
 int n;
 cin >> n;
 bool ok = false;
 for (int i = 0; i < lucky.size(); i++)
 {
  if (n % lucky[i] == 0)
  {
   ok = true;
  }
 }
 if (ok)
  cout << "YES";
 else
  cout << "NO";
 return 0;
}