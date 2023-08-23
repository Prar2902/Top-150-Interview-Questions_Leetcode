//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    // Function to arrange all letters of a string in lexicographical 
    // order using Counting Sort.
    string countSort(string arr) {
        int n = arr.size();

        // Find the maximum and minimum characters in the input string.
        char maxChar = *max_element(arr.begin(), arr.end());
        char minChar = *min_element(arr.begin(), arr.end());

        // Calculate the range of characters.
        int range = maxChar - minChar + 1;

        // Initialize a count array to store the frequency of each character.
        vector<int> count(range, 0);

        // Count the frequency of each character in the input string.
        for (char c : arr) {
            count[c - minChar]++;
        }

        // Update the count array to store the cumulative frequency.
        for (int i = 1; i < range; ++i) {
            count[i] += count[i - 1];
        }

        // Create an output array to store the sorted characters.
        vector<char> output(n);

        // Build the output array based on the count array.
        for (int i = n - 1; i >= 0; --i) {
            output[count[arr[i] - minChar] - 1] = arr[i];
            count[arr[i] - minChar]--;
        }

        // Copy the sorted characters back to the input array.
        for (int i = 0; i < n; ++i) {
            arr[i] = output[i];
        }

        return arr;
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    }
    return 0;
}

// } Driver Code Ends