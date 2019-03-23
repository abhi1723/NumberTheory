#include <iostream>

using namespace std;
bool isPrime(int n){
int c=0;
for(int i=2;i*i<=n;i++){
    if(n%i==0)
        c++;
}
if(c==0)
    return true;
else
    return false;
}
int main()
{
    int n;
    cin>>n;
    bool isPrimeNumber;
    if(n==1)
        isPrimeNumber=false;
    else{
        isPrimeNumber=isPrime(n);
    }
    if(isPrimeNumber)
        cout<<"Prime";
    else
        cout<<"Not Prime";
    return 0;
}
