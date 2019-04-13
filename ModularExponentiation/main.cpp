#include <iostream>
#define lint long long
using namespace std;

int main()
{
    lint base,power,mod,result=1;
    cin>>base>>power>>mod;
    while(power>0){
        if(power&1){
            result=result*base;
        }
        power=power>>1;
        base=base*base;
    }
    lint final_result=result%mod;
    cout<<final_result;
    return 0;
}
