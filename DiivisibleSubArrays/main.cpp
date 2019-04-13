#include <iostream>
#define lint long long
using namespace std;

int main()
{
    //lint A[1000];
    lint t;
    cin>>t;
    lint vb=(-7%5);
    vb=(vb+5)%5;
    cout<<vb;

    lint results[t];
    for(int j=1;j<=t;j++){
        lint cumulative_sum_array[1000]={0};
        lint A[1000]={0};
        lint no;
        cin>>no;
        for(lint i=0;i<no;i++){
            cin>>A[i];
        }
        lint n=sizeof(A)/sizeof(int);
        lint sum=0;
        cumulative_sum_array[0]=1;
        for(lint i=0;i<no;i++){
            sum+=A[i];
            sum%=no;
            sum=(sum+no)%no;
            //cout<<sum<<endl;
            lint rem=sum%no;
            cumulative_sum_array[rem]++;
        }
        lint ans=0;
        for(lint i=0;i<no;i++){
                lint num=cumulative_sum_array[i];
                //cout<<num<<endl;
                ans=ans+((num*(num-1))/2);
        }
        results[j-1]=ans;
    }
    for(int i=0;i<t;i++)
        cout<<results[i]<<endl;
    return 0;
}
