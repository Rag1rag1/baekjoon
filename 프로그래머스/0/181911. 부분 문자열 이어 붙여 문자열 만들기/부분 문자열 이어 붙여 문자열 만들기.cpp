#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    int a=0;
    for(int a=0;a<my_strings.size();a++)
    {
        for(int i=parts[a][0];i<=parts[a][1];i++)
        {
            answer.push_back(my_strings[a][i]);
        }
    }
    return answer;
}