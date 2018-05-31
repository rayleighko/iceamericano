#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(char* s) {
    int answer = 0;
    int len;
    
    for (len = 0; s[len]; len++);

    for (int i = 0; i < len; i++)
    {
        int j = 0;
        while (i >= j && i + j <= len && s[i + j] == s[i - j])
            j++;
        
        if (j * 2 - 1 > answer)
            answer = j * 2 - 1;
    }
    
    return answer;
}
