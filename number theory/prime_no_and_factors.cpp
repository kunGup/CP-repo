#include<bits/stdc++.h>
#define ll long long
using namespace std;

//primality test
//O(sqrt(x)) time complex.
//in 2nd if checking whether a factor is not taken twice for e.g. 6 factor of 36(x) will only be taken once 
bool primeTest(ll x){
    int cnt=0;
    for(int i=1;i*i<=x;i++){
        if(x%i==0){
            cnt+=2;
            if(i*i==x)
            cnt--;
        }
    }
    if(cnt==2)
    return true;
    else
    return false;
}


//O(sqrt(x))
//2nd will do same as above
void printAllFactors(int x){
    for(int i=1;i*i<=x;i++){
        if(x%i==0){
            cout<<i<<" ";
            if(i!=x/i)
            cout<<x/i<<" ";
        }
    }
}

//get prime factorization of a number
void primeFac(int x){
    for(int i=2;i+i<=x;i++){
        while(x%i==0){
            cout<<i<<" ";
            x=x/i;
        }
    }
    if(x!=1)cout<<x;
}

int main(){

}