#include <iostream>
#define ll long long int
using namespace std;
ll gcd(ll number_1,ll number_2){
if(number_2==0)
    return number_1;
gcd(number_2,number_1%number_2);
}
int main()
{
    ll a,b;
    cin>>a>>b;
    ll hcf=gcd(a,b);
    ll lcm=(a*b)/hcf;
    cout<<lcm;
    return 0;
}
