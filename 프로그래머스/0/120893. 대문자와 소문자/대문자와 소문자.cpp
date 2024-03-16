#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(char a : my_string)
    {
        if(a>='a'&&a<='z')
        {
            answer.push_back(toupper(a));
        }
        else if(a>='A'&&a<='Z')
        {
            answer.push_back(tolower(a));
        }
    }
    
    return answer;
}