//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution 
{
public:
    // Helper function to perform the first DFS traversal to find SCCs
    void DFS1(int v, vector<int> adj[], vector<bool>& visited, stack<int>& stack) {
        visited[v] = true;
        for (int u : adj[v]) {
            if (!visited[u]) {
                DFS1(u, adj, visited, stack);
            }
        }
        stack.push(v);
    }
    
    // Helper function to perform the second DFS traversal to find SCCs
    void DFS2(int v, vector<int> adj[], vector<bool>& visited) {
        visited[v] = true;
        for (int u : adj[v]) {
            if (!visited[u]) {
                DFS2(u, adj, visited);
            }
        }
    }
    
    int findMotherVertex(int V, vector<int> adj[]) {
        vector<bool> visited(V, false);
        stack<int> stack;
        
        // Perform the first DFS traversal to find SCCs
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                DFS1(i, adj, visited, stack);
            }
        }
        
        // Reset visited array
        fill(visited.begin(), visited.end(), false);
        
        // Pop the top of the stack to get a potential mother vertex
        int potentialMother = stack.top();
        stack.pop();
        
        // Perform the second DFS traversal from the potential mother vertex
        DFS2(potentialMother, adj, visited);
        
        // Check if the potential mother vertex can reach all other vertices
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                return -1; // No mother vertex found
            }
        }
        
        return potentialMother; // Return the potential mother vertex
    }
};



//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends