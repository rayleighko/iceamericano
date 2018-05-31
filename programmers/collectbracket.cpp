#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = false;
    int j = 0;
    
    for (int i = 0; i < s.length(); i++)
        if(j >= 0)
            if (s.at(i) == '(') 
                j++;
            else 
                j--;
    
    if (j == 0) answer = true;
    
    return answer;
}
