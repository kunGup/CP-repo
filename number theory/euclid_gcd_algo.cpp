#include<bits/stdc++.h>
#define ll long long
using namespace std;

//O(log(max(x,y))) time complex.
int gcd(int x,int y){
    if(y<x)return gcd(y,x);
    if(x==0)return y;

    return gcd(x,y%x);
}
int main(){

}