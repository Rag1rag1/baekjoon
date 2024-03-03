#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    int start = 0;
    while (n_str[start] == '0') {
        start++;
    }
    n_str.erase(0, start);
    return n_str;
}
