#include <iostream>
using namespace std;

class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        if (goal.length() != s.length())
            return false;
        string go = goal + goal;

        //  int index=go.find(s);
        //  if(index==string::npos){
        //     cout<<"not found"<<index;
        //     return false;
        //  }
        //  cout<<index<<endl;

        return !(go.find(s) == string::npos);
    }
};

int main()
{
    Solution atharva;
    cout << atharva.rotateString("abcde", "dea");
    return 0;
}