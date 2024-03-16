#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 2;
    for(int i=1;i<=1000;i++)
    {
        int compare=i*i;
        if(n==compare){
            answer=1;
        }
    }
    return answer;
}