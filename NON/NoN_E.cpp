#include <bits/stdc++.h>
using namespace std;
 
bool compare(string s1, string s2){
    int n = s1.size();
    for(int i=0;i<n;i++){
        if(s1[i]!=s2[i])    return false;
    }
    return true;
}
 
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        map<int,int> time;
        map<int,string> skill;
        for(int i=0;i<n;i++){
            int m;cin>>m;
            string s;cin>>s;
            time[i]=m;
            skill[i]=s;
        }
        vector<int> task1;
        vector<int> task2;
        vector<int> task3;
        string t1 = "01";
        string t2 = "10";
        string t3 = "11";
        for(int i=0;i<n;i++){
            if(compare(skill[i],t1)){
                task1.push_back(time[i]);
            }else if(compare(skill[i],t2)){
                task2.push_back(time[i]);
            }else if(compare(skill[i],t3)){
                task3.push_back(time[i]);
            }
        }    
        int min_time = 0;
        if(task1.size()!=0) sort(task1.begin(),task1.end());
        if(task2.size()!=0) sort(task2.begin(),task2.end());
        if(task3.size()!=0) sort(task3.begin(),task3.end());
        if(task3.size()==0){
            if(task1.size()==0 || task2.size()==0)  min_time = -1;
            else{
                min_time = task1[0]+task2[0];
            }
        }else{
            if(task1.size()==0 || task2.size()==0)  min_time = task3[0];
            else{
                min_time = min(task3[0],(task1[0]+task2[0]));
            }
        }
 
        cout<<min_time<<endl;
        
    }
}
