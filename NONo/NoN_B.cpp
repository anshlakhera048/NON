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
        int ans;
        int prod = 0;
        if(n%2==0){
            for(int i=0;i<n;i++){
                prod^=v[i];
            }
            if(prod==0) ans = 0;
            else    ans = -1;
        }else{
            for(int i=0;i<n;i++){
                prod^=v[i];
            }
            ans = prod;
        }
        cout<<ans<<endl;
        
    }
}
