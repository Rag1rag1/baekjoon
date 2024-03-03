#include <string>
#include <vector>
#include <cctype>
using namespace std;

string solution(string myString) {
    string answer = "";
    for(int i=0; i<myString.length(); i++) {
        if(myString[i] == 'a'||myString[i]=='A') {
            answer.append(1, 'A');
        } else {
            answer.append(1, tolower(myString[i]));
        }
    }
    return answer;
}
