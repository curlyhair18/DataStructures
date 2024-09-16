#include <iostream>
using namespace std;

bool checkprime(int n)
{
    int count = 0;
    for (int i = 1; i <= n / 2; i++)
    {

        if (n % i == 0)
        {
            count = count + 1;
        }
        if (count > 2)
            return false;
    }

    return true;
};
int main()
{
    int prime;
    cout << "Enter number to check whether no is prime or not?" << endl;
    cin >> prime;
    cout << checkprime(prime);

    return 0;
}