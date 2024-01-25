#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
   int plen=p.size();
   int tlen=t.size();
    int count=0;
    vector<string> hi(10000);
    for(int i=0;i<tlen-plen+1;i++)
    {
        hi[i]=(t.substr(i,plen));
        
    }
    for(int i=0;i<tlen-plen+1;i++){
    if(hi[i]<=p)
    {
        count++;
    }
    }
    return count;
}
    