#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int maxi = v[n-1];
        for(int i=0;i<31;i++){
            for(int j=0;j<n-1;j++){
                if(((maxi>>i)&1)==0 && ((v[j]>>i)&1)!=0){
                    maxi+=(1<<i);
                    v[j]-=(1<<i);
                }
            }
            sort(v.begin(),v.end());
        }
        v.pop_back();
        int mini = v[0];
        for(int i=0;i<31;i++){
            for(int j=1;j<n-1;j++){
                if(((mini>>i)&1)!=0 && ((v[j]>>i)&1)==0){
                    mini-=(1<<i);
                    v[j]+=(1<<i);
                }
            }
            sort(v.begin(),v.end());
        }
        int ans = maxi-mini;
        cout<<ans<<endl;
    }
}
