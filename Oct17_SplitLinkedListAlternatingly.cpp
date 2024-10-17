/*
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

class Solution {
  public:
    
    vector<Node*> alternatingSplitList(struct Node* head) {
        
        if (head == NULL || head->next == NULL) {
            return {head, NULL};
        }
        

        struct Node* list1 = head;  
        struct Node* list2 = head->next;    
        struct Node* p = list1;
        struct Node* q = list2;
        
        while (p != NULL && q != NULL) {
            p->next = q->next;  
            p = p->next;        
            if (p != NULL) {    
                q->next = p->next;
                q = q->next;                }
        }
        
        return {list1, list2};
    }
};
