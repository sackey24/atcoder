#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,x;
  cin >> n >> x;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    if(x & (1<<i)) ans += a[i];
  }
  cout << ans << endl; 
}