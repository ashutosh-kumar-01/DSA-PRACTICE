// Reverse Nodes in Even Length Groups
// class Solution {
// public:
//     ListNode* reverse(ListNode* head, int k){
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         while(k--){
//             ListNode* next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }

//     ListNode* reverseEvenLengthGroups(ListNode* head) {
//         ListNode* dummy = new ListNode(0);
//         dummy->next = head;
        
//         ListNode* prev = dummy;
//         ListNode* curr = head;
        
//         int group = 1;
        
//         while(curr){
//             ListNode* temp = curr;
//             int count = 0;

//             // count nodes in current group
//             while(temp && count < group){
//                 temp = temp->next;
//                 count++;
//             }

//             if(count % 2 == 0){
//                 ListNode* nextGroup = temp;
//                 ListNode* newHead = reverse(curr, count);
                
//                 prev->next = newHead;
//                 curr->next = nextGroup;

//                 prev = curr;
//                 curr = nextGroup;
//             }
//             else{
//                 for(int i = 0; i < count; i++){
//                     prev = curr;
//                     curr = curr->next;
//                 }
//             }

//             group++;
//         }

//         return dummy->next;
//     }
// };