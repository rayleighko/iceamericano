#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    string week[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
    
    switch(a) {
        case 2:
            b += 31;
            break;
        case 3:
            b += 60;
            break;
        case 4:
            b += 91;
            break;
        case 5:
            b += 121;
            break;
        case 6:
            b += 152;
            break;
        case 7:
            b += 182;
            break;
        case 8:
            b += 213;
            break;
        case 9:
            b += 244;
            break;
        case 10:
            b += 274;
            break;
        case 11:
            b += 305;
            break;
        case 12:
            b += 335;
            break;
    }
    
    b = (b + 4) % 7;
    
    answer = week[b];
    
    return answer;
}
