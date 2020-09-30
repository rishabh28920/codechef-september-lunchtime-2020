#include<bits/stdc++.h>
using namespace std;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL); cout.tie(NULL);}
#define MAX 1000000007
typedef long long int ll;
void solve()
{
   int i,j,n,arr[1001],sum=0;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
       sum+=arr[i];
   }
       if(sum>=0)
        cout<<"YES";
       else
        cout<<"NO";
       cout<<endl;


}

int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
