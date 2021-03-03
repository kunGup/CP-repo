//codeforces 152C
#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
int main(){
    int n,m;
    cin>>n>>m;
    unordered_set<char> s[m];
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        for(int j=0;j<m;j++){
            s[j].insert(str[j]);
        }
    }
    int ans=1;
    for(int i=0;i<m;i++){
        ans=(ans*s[i].size())%M;
    }

    cout<<ans<<endl;
}