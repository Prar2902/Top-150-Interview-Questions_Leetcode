/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* sortList(Node *head){
    int Zerocount = 0;
    int Onecount = 0;
    int twocount = 0;

    // Now traverse the linked list to find the number of times 0,1,2 has occured.
    Node* temp = head;
    while(temp != NULL)
    {
        if(temp ->data == 0)
            Zerocount++;
        else if(temp -> data == 1)
            Onecount++;
        else if(temp -> data == 2)
            twocount++;

        temp = temp->next;
    }

    // In here we are sorting the elements based on the order 0,1,2
    temp = head;
    while(temp != NULL)
    {
        if(Zerocount != 0){
            temp ->data =0;
            Zerocount--;
        }
        else if (Onecount != 0)
        {
            temp -> data = 1;
            Onecount--;
        }
        else if(twocount != 0)
        {
            temp -> data = 2;
            twocount--;
        }
        temp = temp->next;
    }
    return head;
}
