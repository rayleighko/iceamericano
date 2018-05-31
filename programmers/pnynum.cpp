#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int j = 0;
    for (int i = 0; i < s.size(); i++)
        if (s.at(i) == 'p' || s.at(i) == 'P')
            j++;    
        else if (s.at(i) == 'y' || s.at(i) == 'Y')
            j--;
        else
            continue;
    
    if (j == 0)
        return true;
    else 
        return false;
}
