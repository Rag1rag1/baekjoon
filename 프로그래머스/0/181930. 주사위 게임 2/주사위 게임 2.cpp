#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c) {
    int same=0;
    int answer = 0;
    if(a!=b&&b!=c&&c!=a)
    {
        same=0;
    }
    if(a==b&&b==c)
    {
        same=2;
    }
    if((a==b&&b!=c&&c!=a)||(a!=b&&b==c&&c!=a)||(a!=b&&b!=c&&c==a))
    {
        same=1;
    }
    if(same==0)
    {
        answer=a+b+c;
    }
    if(same==1)
    {
        answer=(a+b+c)*(a*a+b*b+c*c);
    }
    if(same==2)
    {
        answer=(a+b+c)*(a*a+b*b+c*c)*(a*a*a+b*b*b+c*c*c);
    }
    return answer;
}