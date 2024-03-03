#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int a, int b) {
    int answer = 0;
    int evennum=0;
    if(a%2==0)
    {
        evennum++;
    }
    if(b%2==0)
    {
        evennum++;
    }
    if(evennum==0)
    {
        answer=a*a+b*b;
    }
    else if(evennum==1)
    {
        answer=2*(a+b);
    }
    else if(evennum==2)
    {
        answer=max(a-b,b-a);
    }
    return answer;
}