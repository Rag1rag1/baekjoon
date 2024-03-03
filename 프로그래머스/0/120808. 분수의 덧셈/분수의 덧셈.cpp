#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> result;
    int common = denom1 * denom2;
    int comson = numer1 * denom2 + numer2 * denom1;
    int ggg = gcd(common, comson); 
    result.push_back(comson / ggg);
    result.push_back(common / ggg);
    return result;
}
