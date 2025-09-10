#include <stdio.h>
#include <stdlib.h>

int main()
{
    int * arr = NULL, cap = 0, len = 0, x;
    while (scanf_s("%d", &x) == 1)
    {
        if (len == cap)
        {
            cap = cap ? cap * 2 : 4;
            int * tmp = (int*)realloc(arr, cap * sizeof(int));
            if (!tmp)
            {
                perror("realloc");
                free(arr);
                return 1;
            }
            arr = tmp;
        }
        arr[len++] = x;
    }
    if (len)
    {
        int max = arr[0];
        for (int i = 1; i < len; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
            
        }
        printf("Max = %d from %d inputs\n", max, len);
    }
    free(arr);

    return 0;
}