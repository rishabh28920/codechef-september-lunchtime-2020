#include<bits/stdc++.h>
using namespace std;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL); cout.tie(NULL);}
#define MAX 1000000007
typedef long long int ll;
void solve()
{
   long int i,j,n,arr[10001],cnt=0;
   cin>>n;
   for(i=1;i<=n;i++)
   {
       cin>>arr[i];
   }
   for(i=1;i<=n;i++)
   {
       if(arr[i]!=i)
        cnt++;
   }
   for(i=1;i<=n;i++)
   {
       if(arr[i]!=i)
       {
           for(j=1;j<=i/2;j++)
           {
               if(__gcd(j,i)==arr[i])
               {
                   cnt--;
                   break;
               }

           }
       }
   }
   if(cnt==0)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;


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
