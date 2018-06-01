#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    string kim = "김서방은 ";
    string in = "에 있다";
    
    for (int i = 0; i < seoul.size(); i++)
        if (seoul.at(i) == "Kim")
             answer = kim + to_string(i) + in;

    return answer;
    
}
