#include <bits/stdc++.h>
using namespace std;

#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL); cout.tie(NULL);}
#define MAX 1000000007
typedef long long int ll;

void solve()
{
    ll n,ans,u[100001],v[100001],i;
    cin>>n;
    set<int> s;
    for(i=0;i<n-1;i++)
    {
        cin>>u[i]>>v[i];
        s.insert(v[i]);
    }
    ans=(n-1)-s.size();
    cout<<ans<<endl;
}

int main() {
    send help
	ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
