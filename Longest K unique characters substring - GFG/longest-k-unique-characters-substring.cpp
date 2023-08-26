//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int longestKSubstr(string s, int k) {
        int n = s.length();
        if (n == 0 || k == 0) {
            return -1;
        }
        
        int maxLength = -1;
        unordered_map<char, int> charFrequency;  // To store character frequencies
        int uniqueCount = 0;  // To keep track of the number of unique characters
        
        int left = 0, right = 0;  // Pointers for the sliding window
        
        while (right < n) {
            charFrequency[s[right]]++;  // Increment frequency of the character at 'right'
            
            if (charFrequency[s[right]] == 1) {
                uniqueCount++;  // Increment unique character count
            }
            
            // Adjust the window if unique character count exceeds 'k'
            while (uniqueCount > k) {
                charFrequency[s[left]]--;  // Decrement frequency of the character at 'left'
                
                if (charFrequency[s[left]] == 0) {
                    uniqueCount--;  // Decrement unique character count
                }
                
                left++;  // Move the left pointer to shrink the window
            }
            
            // Update maxLength if the current window size is larger
            if (uniqueCount == k) {
                maxLength = max(maxLength, right - left + 1);
            }
            
            right++;  // Move the right pointer to expand the window
        }
        
        return maxLength;
    }
};




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends