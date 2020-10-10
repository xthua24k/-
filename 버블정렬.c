#include <stdio.h>
//버블정렬 : 옆에 있는 값과 비교해서 더 작은 값을 앞으로 보내면 어떨까 ?
int main()
{
    int array[10] = {1, 10, 5, 8, 7, 6, 3, 4, 2, 9};
    int i, j, temp;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
            printf("%d ", array[i]);
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
    //O(N^2)
}
