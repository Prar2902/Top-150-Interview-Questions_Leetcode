//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int isPanagram(string S)
	{
	    unordered_set<char>alphabet;
	    for (char ch = 'a'; ch <= 'z'; ++ch) {
            alphabet.insert(ch);
        }

        for (char ch : S) {
            if ('a' <= ch && ch <= 'z') {
                alphabet.erase(ch);
            } else if ('A' <= ch && ch <= 'Z') {
                alphabet.erase(tolower(ch));
            }
        }

        return alphabet.empty() ? 1 : 0;
    }
};


//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	    Solution ob;

   		cout << ob.isPanagram(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends