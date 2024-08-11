int findMax(int * data,int len){
    int max = data[0];
    for (int i = 0; i < len; i++)
    {
        if (data[i] > max)
        {
            max = data[i];
        }
        
    }
    return max;
}


