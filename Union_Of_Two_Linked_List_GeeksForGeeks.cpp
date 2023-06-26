//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};


// } Driver Code Ends
/*
// structure of the node is as follows

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

*/
class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        // code here
        vector<int> vec;
        while(head1 != nullptr){
            vec.push_back(head1 -> data);
            head1 = head1 -> next;
        }
        while(head2 != nullptr){
            vec.push_back(head2 -> data);
            head2 = head2 -> next;
        }
        sort(vec.begin(), vec.end());
        for(int i = 0; i < vec.size() - 1; i++){
            if(vec[i] == vec[i + 1]){
                vec.erase(vec.begin() + i + 1);
                i--;
            }
        }
        struct Node *root = nullptr, *temp = nullptr;
        for(int i = 0; i < vec.size(); i++){
            Node *newNode = new Node(vec[i]);
            if(root == nullptr){
                root = newNode;
                temp = newNode;
            }
            else{
                temp -> next = newNode;
                temp = newNode;
            }
        }
        return root;
    }
};


struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution obj;
        Node* head = obj.makeUnion(first,second);
        printList(head);
    }
    return 0;
}