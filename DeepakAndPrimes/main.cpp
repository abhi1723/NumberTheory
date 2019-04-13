#include <iostream>
#define ll long long int
using namespace std;
ll prime(ll num){
    ll n=5000;
ll p[n]={0};
p[2]=1;
for(ll i=3;i<n;i+=2)
    p[i]=1;
for(ll i=3;i<n;i+=2){
        if(p[i]){
            for(ll j=i*i;j<n;j+=(2*i)){
                p[j]=0;
            }

        }
}
ll c=0;
for(ll i=0;i<n;i++){
    if(p[i]==1)
        c++;
    if(c==num)
        return i;
}
}
int main()
{
    ll n;
    cin>>n;
    int nThPrimeNumber=prime(n);
    cout<<nThPrimeNumber;
    return 0;
}
