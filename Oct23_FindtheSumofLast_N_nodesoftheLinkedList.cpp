class Solution {
  public:
    /*Structure of the node of the linled list is as

    struct Node {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }
    };
    */
    // your task is to complete this function
    // function should return sum of last n nodes
    int sumOfLastN_Nodes(struct Node* head, int n) {
        // Code here
       Node* fast=head,*temp=head;
        int sum=0;
        while(n>0){
            n--;
            fast=fast->next;
        }
        if(fast==NULL){
            while(temp!=NULL){
                sum+=temp->data;
                temp=temp->next;
            }
            return sum;
        }
        while(fast){
            temp=temp->next;
            fast=fast->next;
        }
        
          while(temp!=NULL){
                sum+=temp->data;
                temp=temp->next;
            }
            
        return sum;
    }

};
