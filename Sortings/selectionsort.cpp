#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
            swap(arr[i], arr[minindex]);
        }
    }
}

void Buuble_sort(vector<int> &v3)
{
    for (int i = 1; i <= v3.size(); i++)
    {
        bool swapped = false;    //if the value remains unchanged the then the array is already sorted;
        for (int j = 0; j < v3.size() - 1; j++)
        {
            if (v3[j] > v3[j + 1])
            {
                swap(v3[j], v3[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

int main()
{
    vector<int> v;
    v.push_back(30);
    v.push_back(23);
    v.push_back(17);
    v.push_back(45);
    v.push_back(12);
    // selection_sort(v);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    cout << endl;

    Buuble_sort(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}