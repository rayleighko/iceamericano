#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    for (int i = 1; i <= arr.size(); i++)
        if(arr[i-1] != arr[i])
            answer.push_back(arr.at(i-1));

    return answer;
}
