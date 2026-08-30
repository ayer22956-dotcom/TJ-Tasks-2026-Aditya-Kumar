#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n :";
    cin >> n;

    int arr[n];
    for (int k = 0; k < 3; k++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Enter no. :";
            cin >> arr[i];
        }
        cout << endl;

        int largest = arr[0];
        int second = 0;
        bool found = false;

        for (int i = 1; i < n; i++)
        {
            if (arr[i] > largest)
            {
                second = largest;
                largest = arr[i];
                found = true;
            }
            else if (arr[i] < largest)
            {
                if (!found || arr[i] > second)
                {
                    second = arr[i];
                    found = true;
                }
            }
        }

        if (found)
            cout << "Second largest number is :" << second << endl
                 << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}