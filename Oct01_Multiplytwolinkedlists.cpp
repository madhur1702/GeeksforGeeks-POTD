/* Linked list node structure
struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

/*The method multiplies
two  linked lists l1 and l2
and returns their product*/

/* Multiply contents of two linked lists */
class solution {
  public:
    int MOD = 1e9+7;
    long long linkedListToNumber(Node* l) {
        long long num = 0;
        while (l) {
            num = num * 10 + l->data;  
            l = l->next;
        }
        return num;
    }
    long long multiplyTwoLists(Node *first, Node *second) {
        // code here
        long long num1 = linkedListToNumber(first);
        long long num2 = linkedListToNumber(second);
    
        long long result = (num1 * num2)%MOD;
        
        return result;
        
    }
};
