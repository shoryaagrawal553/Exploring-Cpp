// palindrome number
// A palindrome number is a number that remains the same when its digits are reversed. For example, 121, 12321, and 45654 are palindrome numbers.
// a -ve no. can't be a palindrome no. -121 == 121- (when reversed)

#include <iostream>
using namespace std;

int main()
{
    int n, rem, rev = 0, orig;

    // Prompt the user to enter a number
    cout << "enter a number ";
    cin >> n;

    // Store the original number
    orig = n;

    // Check if the number is negative
    if (n < 0)
    {
        // If the number is negative, it cannot be a palindrome
        cout << orig << " is not a palindrome";
        return 0;
    }

    // Reverse the digits of the number
    while (n != 0)
    {
        rem = n %  ▋
