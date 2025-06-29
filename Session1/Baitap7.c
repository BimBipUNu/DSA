#include <stdio.h>
int isDulicate1(int a[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                return 1;
            }
        }
    }
    return 0;
    // Độ phức tạp thời gian: O(n^2)
    // Độ phức tạp không gian: O(1)
}

int isDulicate2(int a[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int swapped = 0;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0)
        {
            return 1;
        }
    }
    for (int i = 0; i < size - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            return 1;
        }
        return 0;
    }
    // Không tính của sort
    // Độ phức tạp không gian: O(1);
    // Độ phức tạp thời gian:
    // Tốt nhất: O(n) + O(n) = O(n^2)
    // Trung bình: O(n^2) + O(n) = O(n^2)
    // Xấu nhất: O(n^2) + O(n) = O(n^2)
}
