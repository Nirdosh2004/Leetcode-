
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        //by iterative method 
        if(head == NULL || head->next == NULL ){
            return head;
        }
        ListNode* temp = head;
        while(temp->next != NULL){
            if(temp -> val == temp-> next -> val){
                ListNode* del = temp -> next;
                temp -> next = del -> next ;
                delete del;  
            }
            else{
                temp = temp -> next;
            }
        }
        return head;
    }
};
