//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// Node Class
class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(NULL) {}
};

// Linked List Class
class LinkedList {
public:
    Node* head;
    Node* tail;

    LinkedList() : head(NULL), tail(NULL) {}

    // creates a new node with given value and appends it at the end of the linked list
    void insert(int val) {
        if (head == NULL) {
            head = new Node(val);
            tail = head;
        } else {
            tail->next = new Node(val);
            tail = tail->next;
        }
    }
};


// } Driver Code Ends
//User function Template for C++

class Solution {
    string toString(Node *h) {
        string ans = "";
        while(h) {
            ans.push_back(h->data+'0');
            h = h->next;
        }
        
        return ans;
    }
    
    void rev(string &s) {
        reverse(s.begin(), s.end());
    }
    
    string subtract(string &n1, string &n2) {
        int carry = 0;
        rev(n1);
        rev(n2);
        
        string ans = "";
        int i = 0;
        while(i<n2.size()) {
            int num1 = (n1[i]-'0')+carry;
            int num2 = n2[i]-'0';
            
            if(num1 >= num2) {
                ans.push_back((num1-num2)+'0');
                carry = 0;
            }
            else {
                num1 = 10+num1;
                carry = -1;
                ans.push_back((num1-num2)+'0');
            }
            i++;
        }
        
        while(i < n1.size()) {
            int num = n1[i]-'0'+carry;
            if(num >= 0) {
                ans.push_back(num+'0');
                carry = 0;
            }
            else {
                num += 10;
                ans.push_back(num+'0');
                carry = -1;
            }
            i++;
        }
        
        while(ans.back() == '0') ans.pop_back();
        rev(ans);
        
        return ans;
    }
    
    Node* toLL(string &s){
        int i = 0;
        Node* h = new Node(s[i++]-'0');
        Node* l = h;
        while(i < s.size()) {
            Node *nn = new Node(s[i++]-'0');
            l->next = nn;
            l = nn;
        }
        
        return h;
    }
    
    Node* removeZero(Node *h) {
        while(h && h->data==0) h=h->next;
        return h;
    }
    
public:
    Node* subLinkedList(Node* head1, Node* head2) {
        head1 = removeZero(head1);
        head2 = removeZero(head2);
        
        if(!head1 && !head2) return new Node(0);
        if(!head1) return head2;
        if(!head2) return head1;
        
        string n1 = toString(head1);
        string n2 = toString(head2);
        if(n1 == n2) return new Node(0);
        
        if(n2.size() > n1.size()) swap(n1,n2);
        if(n2.size() == n1.size() && n2>n1) swap(n1,n2);
        
        string sub = subtract(n1,n2);

        return toLL(sub);
    }
};

//{ Driver Code Starts.

// prints the elements of linked list starting with head
void printList(Node* n) {
    while (n) {
        cout << n->data;
        n = n->next;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        LinkedList LL1;
        string l1,l2;
        cin>>l1;
        for (int j = 0; j < n; ++j) {
            int x=(l1[j]-'0');
            LL1.insert(x);
        }

        int m;
        cin >> m;
        LinkedList LL2;
        cin>>l2;
        for (int j = 0; j < m; ++j) {
            int x=(l2[j]-'0');
            LL2.insert(x);
        }

        Solution ob;
        Node* res = ob.subLinkedList(LL1.head, LL2.head);
        printList(res);
    }

    return 0;
}

// } Driver Code Ends