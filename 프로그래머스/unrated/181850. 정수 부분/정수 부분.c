#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(double flo) {
    int answer = (int)flo;
    return answer;
}
int main(void)
{
    double a;
    scanf("%f",&a);
    printf("%d",solution(a));
    return 0;
}