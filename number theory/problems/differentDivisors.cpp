#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;
vector<int> primes(N+1,1);
vector<int> pr;
void sieve(){
    //this implem. has time complex. of O(Nlog(logN))
    primes[1]=0;
    for(int i=2;i*i<=N;i++){
        if(primes[i]){
            pr.push_back(i);
            for(int j=i*i;j<=N;j+=i){
                primes[j]=0;
            }
        }
    }
}
int main(){
    sieve();
    int t;
    cin>>t;
    while (t--)
    {
        int d;
        cin>>d;
        int p = *upper_bound(pr.begin(),pr.end(),d);
        int q = *upper_bound(pr.begin(),pr.end(),p+d-1);
        int pq = p*1ll*q;
        cout<<pq<<endl;
    }
    
}