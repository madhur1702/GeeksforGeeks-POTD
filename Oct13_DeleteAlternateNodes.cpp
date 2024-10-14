class Solution {
  public:
    void deleteAlt(struct Node *head) {
        // Code here
    for(struct Node *p=head;p&&p->next;p=p->next)
    {
     p->next=p->next->next;   
    }
    }
    
};
