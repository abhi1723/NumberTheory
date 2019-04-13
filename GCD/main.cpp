#include <iostream>

using namespace std;
int gcd(int number_1,int number_2){
if(number_2==0)
    return number_1;
gcd(number_2,number_1%number_2);
}
int main()
{
    int a,b;
    cin>>a>>b;
    int result=gcd(a,b);
    cout<<result;
    return 0;
}
