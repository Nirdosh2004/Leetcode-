/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
   
   
public:
 int getLength(ListNode* head ){
        int len = 0;
        while(head!=NULL){
            len++;
            head = head->next;
        }
        return len;
    }
    ListNode* middleNode(ListNode* head) {
        int length = getLength(head);
        int mid = (length/2);
        int count = 0;
      ListNode* temp = head;
      while(count<mid){
          temp = temp->next;
          count++;
      }
      return temp;
        
    }
};
