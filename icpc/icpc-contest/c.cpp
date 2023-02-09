#include<bits/stdc++.h>
using namespace std ;
#define int long long 
#define endl '\n'
#define fr(i,a,n,k) for(int i=a;i < n;i+=k)
#define rf(i,n,a,k) for(int i=n-1;i>=a;i-=k)
#define pb push_back
#define vi vector<int> 
#define vp vector<pair<int,int>> 
#define vvi vector<vector<int>> 
#define vvp vector<vector<pair<int,int>>>
 
const int MOD = 998244353;
int gcd(int a,int b)
{
  return (a%b==0)? b : gcd(b,a%b);
}
int32_t main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  // freopen("input1.txt","r",stdin); 
  int t;cin>>t;
  fr(test,0,t,1)
  {
    int n,x; cin>>n>>x;
    string s ; cin>>s ;
    vector<int>  v;
    int cnt = 0,tra=  0;
    int ans = 0;
    for(int i=0;i<s.size();++i){
      if(s[i] == '1') {
        ans++;
        v.pb(tra);
        tra = 0;
        continue;
      }
      tra++;
    }
    v.pb(tra);
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();++i){
      if(2*v[i]+1 > x){
        ans += (x-1)/2;
        break;
      }
      else {
        ans += v[i];
        x -= (v[i]*2 + 1);
      }
    }
    cout<<ans<<endl;
  }
}