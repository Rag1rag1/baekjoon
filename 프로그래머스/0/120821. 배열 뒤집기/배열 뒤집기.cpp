#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    for(int n=num_list.size()-1;n>=0;n--)
    {
        answer.push_back(num_list[n]);
    }
    return answer;
}