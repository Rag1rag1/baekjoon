#include <string>

using namespace std;

string solution(string my_string) {
    string reversed_string = ""; 
    for (int i = my_string.length() - 1; i >= 0; i--) {
        reversed_string += my_string[i]; 
    }
    
    return reversed_string;
}
