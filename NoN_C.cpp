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
        int sum = 2;
        bool flag = true;
        sort(v.begin(),v.end());
        if(n==1){
            if(v[0]!=1) flag= false;
        }else if(n==2){
            if(v[0]!=1 || v[1]!=1)  flag = false;
        }else{
            if(v[0]!=1 || v[1]!=1)  flag = false;
            for(int i=2;i<n;i++){
                if(v[i]>sum )    flag = false;
                sum+=v[i];
            }
        }
        if(flag)    cout<<"YES\n";
        else    cout<<"NO\n";
    }
}
