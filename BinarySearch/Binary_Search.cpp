#include <iostream>
#include <vector>
using namespace std;

bool BinarySearch(int target, vector<int> v1)
{
    int s = 0;
    int e = v1.size() - 1;
    int mid = (s + e) / 2;
    while (s < e)
    {
        if (target == v1[mid])
            return true;
        else
        {
            if (target < v1[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        mid = (s + e) / 2;
    }

    return false;
}

// With Rec
bool RecBS(vector<int> v1, int s, int e, int target)
{
    if (s > e)
        return false;
    int mid = (s + e) / 2;
    if (v1[mid] == target)
        return true;

    if (target > v1[mid])
    {
        return RecBS(v1, s, mid - 1, target);
    }
    else
        return RecBS(v1, mid + 1, e, target);
}


int main()
{
    vector<int> v2;
    v2.push_back(10);
    v2.push_back(20);
    v2.push_back(30);
    v2.push_back(40);
    v2.push_back(50);

    cout << RecBS(v2,0,v2.size(),30) << endl;
    return 0;
}