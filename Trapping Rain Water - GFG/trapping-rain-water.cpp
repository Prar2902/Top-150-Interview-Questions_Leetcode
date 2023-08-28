//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        //int n = arr.size();
        int left = 0;
        int right = n - 1;
        int l = 0;
        int r = 0;
        long long ans = 0;
        while(left<=right){
            if(arr[left]<=arr[right]){
                l = max(l,arr[left]);
                ans+=l-arr[left];
                left++;
            }
            else if (arr[left]>arr[right]){
                r = max(r,arr[right]);
                ans+=r-arr[right];
                right--;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends