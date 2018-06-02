#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int n) {
    string answer = "";
    int i = 1;
    string melon1 = "수";
    string melon2 = "박";
    
    while (i <= n)
    {
        if ( i % 2 == 0)
            answer += melon2;
        else
            answer += melon1;
        i++;
    }
    return answer;
}
