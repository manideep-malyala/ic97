#include <stdio.h>
int main()
{
    int i;
    int n = 6;
    int index = 2;
    int arr[] = {12,15,2,17,19,21};
    
    for(i = index; i < n-1; i++ )
    {
        arr[index] = arr[index+1];
    }
    
    n-=1;
    for(i = 0; i <n ; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    return 0;
    
    
}
