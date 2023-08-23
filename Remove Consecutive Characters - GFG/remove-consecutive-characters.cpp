//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends

class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        int n = S.length();
        string result = "";
        for(int i = 0 ; i<n;++i){
            if(i<n-1 && S[i]== S[i+1]){
                continue;
            }
            else {
            result = result+S[i];
            }
        }
        return result;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




// } Driver Code Ends