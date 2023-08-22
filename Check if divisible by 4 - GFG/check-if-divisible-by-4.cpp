//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution {
public:
    int divisibleBy4(string N) {
        int n = N.size();

        if (n == 1) {
            return (N[0] - '0') % 4 == 0 ? 1 : 0;
        }

        int lastTwoDigits = (N[n - 2] - '0') * 10 + (N[n - 1] - '0');
        return lastTwoDigits % 4 == 0 ? 1 : 0;
    }
};



//{ Driver Code Starts.

int32_t main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.divisibleBy4 (s) << endl;
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends