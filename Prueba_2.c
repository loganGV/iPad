//Primera Practica

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randm_array(int arr[], int n)
{   int i, key, j;
    for (i = 1; i < n; i++)
    {   key = arr[i];
        j = i - 1;  }
    // Desplazar los elementos mayores hacia la derecha
        while (j >= 0 && arr[j] > key)
        {   arr[j + 1] = arr[j];
            j = j - 1;  }
        arr[j + 1] = key;
}