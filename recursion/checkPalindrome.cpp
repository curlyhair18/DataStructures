#include <iostream>
using namespace std;

bool Palindrome(string str)
{
    int n = str.size();
    for (int i = 0; i <= n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
            return false;
    }
    return true;
}
// Recursion

bool patrecur(string a, int index)
{

    if (a[index] != a[a.size() - index - 1])
    {
        return false;
    }
    if (index >= a.size() / 2)
        return true;

    return patrecur(a, index + 1);
}
//reverse a string

void Reverse(string s){
    int n = s.size();
    for(int i =0; i<=n/2; i++){
        swap(s[i],s[n-1-i]);
        
    }
    cout<<s;
}
// Reverse String Recurrsion;

void ReverseRec(string b,  int index2)

{
  if(index2>=b.size()/2){
    return;
  }  
  swap(b[index2],b[b.size()-1-index2]);
  ReverseRec(b,index2+1);
    
  
}
int main()
{
    cout << patrecur("ATHATHA",0) << endl;
    cout << patrecur("ATHAHTA",0) << endl;
    cout << Palindrome("ABCCBD") << endl;
    cout << Palindrome("ATHAHTA") << endl;
    Reverse("atharva");
    string s = "vaibhavGuruji";
    ReverseRec(s,0);
    cout<<s;

    return 0;
}