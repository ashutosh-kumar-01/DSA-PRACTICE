// Linked List Cycle 2 
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         bool flag = false;  // it mean no cycle 
//         while(fast!=NULL && fast->next!=NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//             if(slow == fast){
//                 flag = true;
//                 break;
//             }
//         }        
//         if(flag == false) return NULL; //it means linked list circular nahi hai 
//         else{
//             ListNode* temp = head;
//             while(temp!=slow){
//                 slow = slow->next;
//                 temp = temp->next;
//             }
//             return slow;
//         }
//     }
// };