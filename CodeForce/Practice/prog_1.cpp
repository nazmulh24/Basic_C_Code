#include <iostream>
using namespace std;
int arr[100];
long long super_digit(long long n)
{

}
int sum(int i)
{
    string n;
    int k;
    cin >> n >> k;
    long long sum = 0;
    for (int i = 0; i < n.size(); i++)
    {
        sum += (n[i] - '0');
    }
    sum *= k;
    cout << super_digit(sum) << "\n";
}
int main()
{
    
}