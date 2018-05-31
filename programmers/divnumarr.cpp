#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    vector<int> sorting;
    
    for (int i = 0; i < arr.size(); i++)
        if (arr.at(i) % divisor == 0) {
            answer.push_back(arr.at(i));
            sort(answer.begin(), answer.end());
        }
    
    if (answer.empty())
        answer.push_back(-1);
        return answer;
}
