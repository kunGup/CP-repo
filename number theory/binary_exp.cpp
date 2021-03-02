#include<bits/stdc++.h>
#define ll long long
#define mod (int)1e9+7
using namespace std;

//__gcd(x,y) can be used instead
//O(logy) time complex. instead of O(y) for (x^y) 
int binaryExpo(int x,int y){
    if(y==0) return 1;

    int temp = binaryExpo(x,y/2);

    temp = temp*temp%mod;

    if(y%2==1) temp = x*temp%mod;

    return temp;
}
int main(){

}