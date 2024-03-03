#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int solution(vector<int> array) {
    unordered_map<int, int> freqMap;
    for (int num : array) {
        freqMap[num]++;
    }

    int maxFreq = 0;
    int mode = -1;
    bool multipleModes = false;

    for (auto& entry : freqMap) {
        if (entry.second > maxFreq) {
            maxFreq = entry.second;
            mode = entry.first;
            multipleModes = false;
        } else if (entry.second == maxFreq) {
            multipleModes = true;
        }
    }

    return multipleModes ? -1 : mode;
}
