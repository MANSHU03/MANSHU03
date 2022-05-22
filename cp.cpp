#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int va(int n)
{
  n=n/2;
  n+=10;
  return n;
}
int la(int n)
{
  n=n-10;
  return n;
}
int solve()
{
 ll int n,a,b;
 cin>>n>>a>>b;
while(a!=0 && b!=0)
{
  if(n<=0)
  {
    cout<<"YES"<<endl;
    return 0;
  }
  ll int c=va(n);
  ll int d=la(n);
  if(c<d && a>=0)
  {
    n=n/2;
  n+=10;
  a--;
  }
  if(c>=d && b>=0){n=n-10;
  b--;}
  

}
if(n<=0)
  {
    cout<<"YES"<<endl;
    return 0;
  }

cout<<"NO"<<endl;
    return 0;
}

int main() {
  ll int t;
  cin>>t;
  while(t--)
  {
    solve();
  }

}
