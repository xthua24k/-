#include <stdio.h>

int main()
{
    int data[10] = {1, 5, 3, 2, 6, 10, 7, 8, 9, 4};
    int i, j, min, index, temp;
    for (i = 0; i < 10; i++)
    {
        min = -1;
        for (j = i; j < 10; j++)
        {
            if (min < data[j])
            {
                min = data[j];
                index = j;
            }
        }
        temp = data[i];
        data[i] = data[index];
        data[index] = temp;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", data[i]);
    }

    return 0;
    //O(N^2)
}
