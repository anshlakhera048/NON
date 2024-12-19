#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        bool flag = true;
        vector<int> ans(n);
        if(m<n) flag = false;
        if(m==n){
            vector<int> v(n,1);
            ans = v;
        }
        else{
            if(n%2!=0){
                vector<int> v;
                for(int i=0;i<n-1;i++){
                    v.push_back(1);
                }
                v.push_back(m-n+1);
                ans = v;
            }else{                
                int rem = m-n+2;
                if(rem%2==0){
                    vector<int> v;
                    for(int i=0;i<n-2;i++){
                        v.push_back(1);
                    }
                    v.push_back(rem/2);
                    v.push_back(rem/2);
                    ans = v;
                }else{                
                    flag = false;
                }
            }
        }
        if(!flag)   cout<<"NO\n";
        else{
            cout<<"YES\n";
            for(auto x : ans){
                cout<<x<<" ";
            }cout<<endl;
        }
    }
}
