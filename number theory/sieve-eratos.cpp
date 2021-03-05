#include<bits/stdc++.h>
using namespace std;
const int N = 100;
vector<int> primes(N+1,1);
void sieve(){
    //this implem. has time complex. of O(Nlog(logN))
    primes[1]=0;
    for(int i=2;i*i<=N;i++){
        if(primes[i]){
            for(int j=i*i;j<=N;j+=i){
                primes[j]=0;
            }
        }
    }
}
int main(){
    sieve();
    for(int i=2;i<=N;i++){
        if(primes[i])
        cout<<i<<"\n";
    }
}