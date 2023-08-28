//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution
{
public:
    Node *reverse(Node *head) {
        Node *prev = nullptr;
        Node *curr = head;
        while (curr) {
            Node *nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
    
    Node *compute(Node *head)
    {
        if (!head || !head->next) {
            return head;
        }

        head = reverse(head); // Reverse the linked list for easier removal

        Node *current = head;
        Node *maxNode = head;

        while (current && current->next) {
            if (current->next->data < maxNode->data) {
                current->next = current->next->next; // Remove the current node
            } else {
                current = current->next; // Move to the next node
                maxNode = current; // Update the maxNode
            }
        }

        head = reverse(head); // Reverse the linked list again to get the original order
        return head;
    }
};

   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends