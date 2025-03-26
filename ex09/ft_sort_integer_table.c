#include <stdio.h>

void ft_sort_integer_table(int *tab, int size) {
    int swapped;
    int i;
    int temp;

    if (!tab || size <= 1)  
        return;

    swapped = 1;  
    while (swapped) {
        swapped = 0;  
        i = 0;
        while (i < size - 1) {
            if (tab[i] > tab[i + 1]) {  
                temp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = temp;
                swapped = 1;  
            }
            i++;
        }
        size--;  
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 3};
    int size = 5;

    ft_sort_integer_table(arr, size);

    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);  

    return 0;
}
