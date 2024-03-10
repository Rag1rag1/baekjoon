#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    string numbers=to_string(n);
    for(char a : numbers)
    {
        answer+=a-'0';
    }
    return answer;
}