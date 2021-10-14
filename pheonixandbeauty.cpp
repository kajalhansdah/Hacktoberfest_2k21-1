#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define ull unsigned long long
#define pb push_back
#define pof pop_front
#define ff first
#define ss second
#define mod 1000000007
#define endl "\n" 
//Manish Rai
inline void fast()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main()
{
  fast();
  int tc;
  cin>>tc;
  while(tc--)
  {
    ll n,k,x;
    cin>>n>>k;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
      cin>>x;
      mp[x]++;
    }
    if(mp.size()>k)
    {
      cout<<-1<<endl;
      continue;
    }
    cout<<n*k<<endl;
    for(int j=0;j<n;j++)
    {
      for(auto it:mp)
      {
        cout<<it.ff<<" ";
      }
      for(int i=0;i<k-mp.size();i++)
      {
        cout<<1<<" ";
      }
    }
    cout<<endl;
  }
}
