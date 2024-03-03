#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    for(int i =0;i<numLog.size()-1;i++)
    {
        if(numLog[i+1]==numLog[i]+1)
        {
            answer.append(1,'w');
        }
        if(numLog[i+1]==numLog[i]-1)
        {
            answer.append(1,'s');
        }
        if(numLog[i+1]==numLog[i]+10)
        {
            answer.append(1,'d');
        }
        if(numLog[i+1]==numLog[i]-10)
        {
            answer.append(1,'a');
        }
        
    }
    return answer;
}