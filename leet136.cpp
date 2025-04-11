#include <iostream>
#include <vector>
using namespace std;

// Class to solve the problem of finding the single number in a vector
class Solution {
    public:
        // Function to find the single number in the given vector
        int singleNumber(vector<int>& nums) {  
            int ans = 0; // Initialize the result variable to 0
            for(int i : nums) { // Iterate through each element in the vector
                ans = i ^ ans;  // XOR operation to find the unique element
                // Explanation of the XOR process:
                // For each pair of identical numbers, XOR cancels them out (e.g., a ^ a = 0).
                // The unique number remains as it does not get canceled out.
            }
            return ans; // Return the unique number
        }
};

int main()
{
    Solution s; // Create an instance of the Solution class
    vector<int> nums = {4, 1, 2, 1, 2}; // Input vector containing numbers
    int ans = s.singleNumber(nums); // Call the function to find the single number

    cout << "The unique element is: " << ans << endl; // Output the result
    // Expected output: The unique element is: 4
    
    return 0; // Indicate successful program termination
}
