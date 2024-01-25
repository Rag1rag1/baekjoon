#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int a, int b) {
    int answer = 0;
    int ta=a;
    int tb=b;
    int aten=1,bten =1;
    while(ta>=10)
    {
        ta/=10;
        aten++;
    }
    while(tb>=10)
    {
        tb/=10;
        bten++;
    }
    if(a*pow(10,bten)+b>b*pow(10,aten)+a)
    {
        answer=a*pow(10,bten)+b;
    }
    else answer= b*pow(10,aten)+a;
    
    return answer;
}