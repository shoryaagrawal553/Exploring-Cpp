/* An Armstrong number is a number that is equal to the sum of its digits 
    raised to the power of the number of digits.
    Example: 153 = 1^3 + 5^3 + 3^3 = 153 */
 
#include<iostream> 
#include<cmath> 
using namespace std;

// Function to count the number of digits in a number
int count_digit(int num) 
{
    int count = 0; // Variable to store the count of digits
    while(num != 0)
    {
        num = num / 10; // Remove the last digit from the number
        count++; // Increment the count of digits
    }
    return count; // Return the total count of digits
}

// Function to check if a number is an Armstrong number
int check_as(int num) 
{
    int count = count_digit(num); // Get the number of digits
    int ans = 0; // Variable to store the result of the Armstrong number calculation
    int original_num = num; // Store the original number
    while(num != 0)
    {
        int rem = num % 10; // Get the last digit of the number
        num = num / 10; // Remove the last digit from the number
        ans = (pow(rem, count)) + ans; // Add the digit raised to the power of count to the result
    }
    return ans; // Return the calculated Armstrong number
}

int main()
{
    int num; // Variable to store the input number
    cout << "Enter a number: ";
    cin >> num; // Read the input number

    int ans = check_as(num); // Calculate the Armstrong number

    // Check if the calculated result is equal to the input number
    if(ans == num)
    {
        cout << num << " is an Armstrong number ";
    }
    else
    {
        cout << num << " is not an Armstrong number ";
    }

    return 0; // Return 0 to indicate successful execution
}



