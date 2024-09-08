#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int c, int d) {
    int answer = 0;
    int arr[4]={a,b,c,d};
    for(int i=0;i<3;i++)
        for(int j=i+1;j<4;j++)
        {
            if(arr[j]>arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    if(arr[0]==arr[3])
    {answer=1111*arr[0];}
    
    else if(arr[0]!=arr[1]&&arr[1]!=arr[2]&&arr[2]!=arr[3]) {
        answer=arr[3];
    }
    else if(arr[0]==arr[2]&&arr[2]!=arr[3]) {
        answer=(10*arr[0]+arr[3])*(10*arr[0]+arr[3]);
    }
    else if(arr[0]!=arr[1]&&arr[1]==arr[3]) {
        answer=(10*arr[1]+arr[0])*(10*arr[1]+arr[0]);
    }
    else if(arr[0]==arr[1]&&arr[2]==arr[3]&&arr[0]!=arr[3])
    {
        answer=(arr[0]+arr[3])*(arr[0]-arr[3]);
    }
    else if(arr[0]==arr[1])
    {
        answer=arr[2]*arr[3];
    }
    else if(arr[1]==arr[2])
    {
        answer=arr[0]*arr[3];
    }
    else if(arr[2]==arr[3])
    {
        answer=arr[0]*arr[1];
    }
    else {
        answer=arr[1]*arr[2];
    }
    return answer;
}