#include <stdio.h>
int main()
{
    int i, fmi, smi;
    int arr[] = {12,66,41,85,96,11,3,19,67, 95};
    fmi =  0;
    smi = -1;
    for(i=1; i<10; i++)
    {
        if (arr[i] >  arr[fmi])
          { smi =  fmi;
           fmi = i; }
        else
        {
            if ((smi == -1) || (arr[i] > arr[smi]))
               smi = i;
        }
    
    }
    printf("%d", smi);
    return 0;
}
