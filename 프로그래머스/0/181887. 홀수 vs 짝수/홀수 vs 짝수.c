#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int sum1=0,sum2=0;
    for(int i=0;i<num_list_len;i+=2)
    {
        sum1+=num_list[i];
    }
    for( int l=1;l<num_list_len;l+=2)
    {
        sum2+=num_list[l];
    }
    answer=(sum1>=sum2)?sum1:sum2;
    return answer;
}