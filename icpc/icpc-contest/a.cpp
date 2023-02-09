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
 
const int MOD = 1e9 + 7;
int32_t main()
{ 
  ios::sync_with_stdio(0);
  cin.tie(0);
  int d ; cin>>d;
  fr(test,0,d,1)
  {
    int n ; cin>>n;
    string s ; cin>>s;
    vi v(n);
    for(int i=0;i<n;++i) cin>>v[i];
    int maxp = 0,cnt = 0, c = 0,maxp2 = 0;
    for(int i=0;i<n;++i){
      c  = 1;
      if(s[i] == 'B'){
        // cout<<i<<maxp<<endl;
        cnt++;
        int j ;
        for(j=0;j<=maxp;++j){
          maxp2 = max(maxp2,j+v[j]);
          s[j] = 'R';
        }
        // cout<<j<<" ";
        maxp = maxp2;
        i = j-1;
        // cout<<i<<endl;
      }
      else {
        maxp = max(maxp,i+v[i]);
      }
      // cout<<maxp<<endl;
    }
    cout<<cnt<<endl;
  }
    return 0;
}