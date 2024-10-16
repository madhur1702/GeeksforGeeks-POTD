

struct Node *insert(struct Node *head, int data) {
 
        Node* new_node=new Node(data);
        if(!head){
            head=new_node;
            return head;
        }
         new_node->npx=head;
        head=new_node;
        return head;
}

vector<int> getList(struct Node *head) {

        vector<int>list;
        while(head){
            list.push_back(head->data);
            head=head->npx;
        }
    
        return list;
    }
