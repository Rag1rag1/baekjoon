#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    array.push_back(height);
    sort(array.begin(),array.end());
    for(int i=0;i<array.size();i++)
    {
        if(array[i]==height)
        {
            answer=array.size()-i-1;
        }
    }
    return answer;
}