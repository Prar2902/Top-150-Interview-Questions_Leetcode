//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int findSum(int A[], int N)
    {
        int max = INT_MIN; // Initialize max to the smallest possible integer value
        int min = INT_MAX; // Initialize min to the largest possible integer value
        
        for (int i = 0; i < N; ++i)
        {
            if (A[i] > max)
            {
                max = A[i]; // Update max if current element is greater than the current max
            }
            
            if (A[i] < min)
            {
                min = A[i]; // Update min if current element is smaller than the current min
            }
        }
        
        int sum = max + min;
        return sum;
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
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends