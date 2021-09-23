// EX: 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int age;
//     cin >> age;

//     if (age >= 18)
//     {
//         cout << "You can vote.";
//     }
//     else
//     {
//         cout << "Not eligible for voting.";
//     }

//     return 0;
// }

// EX: 2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x, y;
//     cin >> x >> y;
//     if (x == y)
//     {
//         cout << "Both the numbers are equal";
//     }
//     else if (x > y)
//     {
//         cout << "X is greater than Y";
//     }
//     else
//     {
//         cout << "Y is greater than X";
//     }
//     return 0;
// }

// EX: 3

// #include <iostream>
// using namespace std;
// int main()
// {
//     int x, y;
//     cin >> x >> y;
//     if (x == y)
//     {
//         cout << "Both the numbers are equal";
//     }
//     else
//     {
//         if (x > y)
//         {
//             cout << "X is greater than Y";
//         }
//         else
//         {
//             cout << "Y is greater than X";
//         }
//     }
//     return 0;
// }

// Q: 1
//  Program to check if a number is even or odd.
// ANS:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     if (n % 2 == 0)
//     {
//         cout << "Even" << endl;
//     }
//     else
//     {
//         cout << "Odd" << endl;
//     }

//     return 0;
// }

// Q: 2
//  Program to find maximum, minimum among two numbers.
// ANS:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n1, n2;
//     cin >> n1 >> n2;
//     int max, min;
//     if (n1 > n2)
//     {
//         max = n1;
//         min = n2;
//     }
//     else
//     {
//         max = n2;
//         min = n1;
//     }
//     cout << "Max= " << max << endl;
//     cout << "Min= " << min << endl;

//     return 0;
// }

// Q: 3
//  Program to find the maximum among three numbers.
// ANS:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cin >> a >> b >> c;
//     if (a > b)
//     {
//         if (a > c)
//         {
//             cout << a << endl;
//         }
//         else
//         {
//             cout << c << endl;
//         }
//     }
//     else
//     {
//         if (b > c)
//         {
//             cout << b << endl;
//         }
//         else
//         {
//             cout << c << endl;
//         }
//     }
//     return 0;
// }

// Q: 4
//  Program to check if a triangle is scalene, isosceles or equilateral.
// ANS:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int sidea, sideb, sidec;
//     cout << "Input three sides of triangle: \n ";
//     cin >> sidea >> sideb >> sidec;
//     if (sidea == sideb && sideb == sidec)
//     {
//         cout << "This is an equilateral triangle. \n ";
//     }
//     else if (sidea == sideb || sidea == sidec || sideb == sidec)
//     {
//         cout << "This is an isosceles triangle. \n ";
//     }
//     else
//     {
//         cout << "This is a scalene triangle. \n ";
//     }
//     return 0;
// }

// Q: 5
//  Program to check if an alphabet is a vowel or a consonant.
// ANS:
#include <iostream>
using namespace std;
int main()
{
    char c;
    int isLowercaseVowel, isUppercaseVowel;
    cout << "Enter an alphabet: ";
    cin >> c;
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (isLowercaseVowel || isUppercaseVowel)
        cout << c << " is a vowel.";
    else
        cout << c << " is a consonant.";
    return 0;
}

