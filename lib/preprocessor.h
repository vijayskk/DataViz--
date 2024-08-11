#include <iostream>

int findmin(int * data,int len);

void processData(int * data,int len,int * target,int * clampoffset){
    for (int i = 0; i < len; i++)
    {
        target[i] = data[i];
    }
    int min = findmin(target,len);
    
    if (min < 0)
    {
        for (int i = 0; i < len; i++)
        {
            target[i] += -min;
        }
        *clampoffset = -min;
    }
    
    
}

int findmin(int * data,int len){
    int min = data[0];
    for (int i = 0; i < len; i++)
    {
        if (data[i] < min)
        {
            min = data[i];
        }
    }
    return min;
}