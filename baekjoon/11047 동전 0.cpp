#include <iostream>

using namespace std;

int main()
{
    int n,k,i;
    int answer=0;
    cin>>n>>k;
    int hi[10]={0,};
    for(i=0;i<n;i++)
    {
        cin>>hi[i];
    }

    i--;
    while(k>0)
    {
        answer+=k/hi[i];
        k%=hi[i];
        i--;
    }
    cout<<answer;
    return 0;
}
