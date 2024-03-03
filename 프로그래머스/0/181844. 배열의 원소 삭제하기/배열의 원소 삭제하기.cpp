#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    bool safe = true;
    for(int i : arr)
    {
        for(int d : delete_list)
        {
            if(i==d)
            {
                safe = false;
            }
        }
        if(safe)
        {
            answer.push_back(i);
        }
        safe= true;
    }
    return answer;
}