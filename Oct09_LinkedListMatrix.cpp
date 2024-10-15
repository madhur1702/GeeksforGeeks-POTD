class Solution {
  public:
    Node* constructLinkedMatrix(vector<vector<int>>& mat) {
        // code Here
        int n = mat.size();
        struct Node* head = new Node(mat[0][0]);
        
        if(n==1) return head;
        struct Node* curr=head;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){

                struct Node* curr_right = j==n-1 ? NULL : new Node(mat[i][j+1]);
                struct Node* curr_down = i==n-1 ? NULL : new Node(mat[i+1][j]);
                
                curr->right = curr_right;
                curr->down = curr_down;
                
                struct Node* first_down;
                if(j==0) first_down = curr_down;
                if(j==n-1) curr = first_down;
                else curr = curr_right;
            }
        }
        return head;
    }
};
