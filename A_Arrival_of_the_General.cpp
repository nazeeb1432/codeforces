#include <bits/stdc++.h>
using namespace std;

#define mx 100

int main()
{

    int n, i, j, second = 0, arr[mx];

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    i = 0;
    j = i + 1;

    int maximum = *max_element(arr, arr + n);
    int minimum = *min_element(arr, arr + n);

    while (!(arr[0] == maximum && arr[n - 1] == minimum))
    {

        while (1)
        {
            if (arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
                second++;
            }
            i++;
            j++;
            if (i == n - 1)
                break;
        }
        i=0;
        j=i+1;
    }

    cout << second << endl;
}