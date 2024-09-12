#include <iostream>
#include <vector>
using namespace std;

void MergeArray(int *arr, int start, int end)
{

    int mid = (start + end) / 2;
    // calculating lenght for the arrays
    int len1 = mid - start + 1;
    int len2 = end - mid;

    // making copy of array of size len1 and len2
    int *arr1 = new int(len1);
    int *arr2 = new int(len2);

    int mainindex = start;
    // copying values form arr(whose interator is maindex), to arr1 till mid
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[mainindex];
        mainindex = mainindex + 1;
    }

    // copying values form arr(whose interator is maindex), to arr1 till mid
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = arr[mainindex];
        mainindex += 1;
    }

    mainindex = start;

    int i = 0;
    int j = 0;

    while (i < len1 && j < len2)
    {
        if (arr1[i] < arr2[j])
        {
            arr[mainindex] = arr1[i];
            i++;
            mainindex++;
        }
        else
        {
            arr[mainindex] = arr2[j];
            j++;
            mainindex++;
        }
    }
    while (i < len1)
    {
        arr[mainindex] = arr1[i];
        mainindex++;
        i++;
    }
    while (j < len2)
    {
        arr[mainindex] = arr2[j];
        mainindex++;
        j++;
    }
};
void MergeSort(int *arr, int start, int end)
{
    if (start >= end)
        return;

    int mid = (start + end) / 2;
    // Sorting left Side of array
    MergeSort(arr, start, mid);
    // Sorting right Side of array
    MergeSort(arr, mid + 1, end);

    MergeArray(arr, start, end);
};
int main()
{
    // int*arr=new int(10);
    int arr[] = {56, 78, 9, 34, 65, 29, 0, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    MergeSort(arr, 0, n - 1);

    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
