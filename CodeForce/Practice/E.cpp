#include <iostream>
using namespace std;
int A[100010];
int B[100010];
int sum(int i)
{
    if (i < 0)
        return 0;
    return (A[i] * B[i]) + sum(i - 1);
}
int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }
    int x = sum(N - 1);
    if (x == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
