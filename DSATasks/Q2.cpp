// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter value of n :";
//     cin >> n;

//     int arr[n];
//     for (int k = 0; k < 3; k++)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             cout << "Enter no. :";
//             cin >> arr[i];
//         }
//         cout << endl;

//         int largest = arr[0];
//         int second = 0;
//         bool found = false;

//         for (int i = 1; i < n; i++)
//         {
//             if (arr[i] > largest)
//             {
//                 second = largest;
//                 largest = arr[i];
//                 found = true;
//             }
//             else if (arr[i] < largest)
//             {
//                 if (!found || arr[i] > second)
//                 {
//                     second = arr[i];
//                     found = true;
//                 }
//             }
//         }

//         if (found)
//             cout << "Second largest number is :" << second << endl
//                  << endl;
//         else
//             cout << -1 << endl;
//     }

//     return 0;
// }

// 2nd method
#include <iostream>
#include <vector>
using namespace std;
void getnum(vector<int> &arr)
{

    for (int i = 0; i < arr.size() - 1; i++)
    {

        for (int j = 0; j < arr.size() - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {

                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int largest = arr[arr.size() - 1];

    for (int i = arr.size() - 2; i >= 0; i--)
    {
        if (arr[i] != largest)
        {
            cout << "2nd greater value is : " << arr[i] << endl;
            return;
        }
    }

    cout << "No second distinct value exists." << endl;
}

int main()
{
    int n;
    cout << "Enter value of n :";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "Enter value array :";
        cin >> arr[i];
    }
    getnum(arr);

    return 0;
}