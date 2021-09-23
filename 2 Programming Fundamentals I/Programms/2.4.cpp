// EX: 1 for loop
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         cout << i << " ";
//     }
//     return 0;
// }
// EX: 2 while loop
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i = 1;
//     while (i <= 5)
//     {
//         cout << i << " ";
//         i++;
//     }
//     return 0;
// }
// EX: 3 do...while loop
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i = 1;
//     do
//     {
//         cout << i << " ";
//         i++;
//     } while (i <= 5);

//     return 0;
// }

// Q: 1
// Program to find sum of natural numbers till n.
// ANS:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int sum = 0;
//     for (int counter = 1; counter <= n; counter++)
//     {
//         sum = sum + counter;
//     }
//     cout << sum << endl;
//     return 0;
// }
// Q: 2
//  Program to display multiplication table upto 10.
// ANS:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter a positive integer: ";
//     cin >> n;
//     for (int i = 1; i <= 10; ++i)
//     {
//         cout << n << " * " << i << " = " << n * i << endl;
//     }

//     return 0;
// }
// Q: 3
//  Program to add only positive numbers.
// ANS:
#include <iostream>
using namespace std;
int main()
{
    int number;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> number;
    while (number >= 0)
    {

        sum += number;
        cout << "Enter a number: ";
        cin >> number;
    }
    cout << "\nThe sum is " << sum << endl;

    return 0;
}