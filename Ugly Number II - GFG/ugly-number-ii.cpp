//{ Driver Code Starts
//Initial Template for C++

// {Driver code starts
#include<bits/stdc++.h>
using namespace std;

//}Driver code ends


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int uglyNumber(int n) {
        if (n <= 0) {
            return 0;
        }

        int uglyNumbers[n];
        uglyNumbers[0] = 1;
        int idx2 = 0, idx3 = 0, idx5 = 0;

        for (int i = 1; i < n; ++i) {
            int nextUgly = std::min({uglyNumbers[idx2] * 2, uglyNumbers[idx3] * 3, uglyNumbers[idx5] * 5});
            uglyNumbers[i] = nextUgly;

            if (nextUgly == uglyNumbers[idx2] * 2) {
                ++idx2;
            }
            if (nextUgly == uglyNumbers[idx3] * 3) {
                ++idx3;
            }
            if (nextUgly == uglyNumbers[idx5] * 5) {
                ++idx5;
            }
        }

        return uglyNumbers[n - 1];
    }
};




//{ Driver Code Starts.

//{Driver code starts
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        int res;
        res=ob.uglyNumber(n);
        
        cout<<res;
        cout<<"\n";    
    }
}



// } Driver Code Ends