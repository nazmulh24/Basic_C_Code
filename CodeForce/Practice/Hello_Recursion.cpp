#include <iostream>
using namespace std;
int arr[100];
int sum(int i)
{
    if (i < 0)
        return 0;
    return arr[i] + sum(i - 1);
}
int main()
{
    int T;
    cin >> T;
    int l = 0;
    while (T--)
    {

        int N;
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        cout << "Case " << ++l << ": " << sum(N - 1) << endl;
    }
    return 0;
}
