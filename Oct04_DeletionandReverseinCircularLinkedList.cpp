class Solution {
  public:
    
Node* reverse(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        
        while (curr) {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            if (curr == head) break;
        }
        curr->next = prev;
        
        return prev;
    }

    // Function to delete a node from the circular linked list
    Node* deleteNode(Node* head, int key) {
        if (head->data == key) {
            Node* del = head;
            head = head->next;
            Node* curr = head;
            while (curr->next != del) {
                curr = curr->next;
            }
            curr->next = head;
            delete del;
        }
        else {
            Node* prev = head;
            Node* curr = head->next;
            while (curr != head && curr->data != key) {
                prev = curr;
                curr = curr->next;
            }
            if (curr->data == key) {
                prev->next = curr->next;
                delete curr;
            }
        }
        
        return head;
    }
    
};
