#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    int smallest;
    vector<int> S;
    string arr;
    int j = 1;
    
    while(n)
    {
        S.push_back(n % 10);
        n /= 10;
    }
    
    sort(S.begin(), S.end());
    
    for (int i = 0; i < S.size(); i++)
    {
        answer += S.at(i) * j;
        j *= 10;
    }
    
    return answer;
}
