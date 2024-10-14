class Solution {
  public:
    // Function to count nodes of a linked list.
    int getCount(struct Node* head) {
        int i=0;
           do
            {
                head=head->next;
                i=i+1;
            } while(head!=NULL);
            return i;
       
    }
};
