#include <iostream>
using namespace std;
int main()
{
 int n;
 cin >> n;
 if (n % 2 != 0 || n <= 0)
  cout << "NO";
 else if (n == 2)
  cout << "NO";
 else
 {
  cout << "YES";
 }

 return 0;
}