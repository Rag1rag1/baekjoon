#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(char a : my_string)
    {
        if(a!='a'&&a!='e'&&a!='u'&&a!='i'&&a!='o')
        {
            answer.push_back(a);
        }

    }
    return answer;
}