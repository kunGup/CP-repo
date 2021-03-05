#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;
int numOfDivs[N+1]={0};
int ans[N+1]={0};
int main(){
    for(int i=1;i<=N;i++){
        for(int j=i;j<=N;j+=i){
            numOfDivs[j]++;
            ans[j]++;
        }
    }

    for(int i=1;i<=N;i++){
        for(int j=i;j<=N;j+=i){
            if(numOfDivs[j/i]==4){
                ans[j]=min(ans[j],ans[i]);
            }
        }
    }

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>ans[n];
    }
}