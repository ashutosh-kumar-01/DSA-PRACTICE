// Reverse Linked list 
// iterative approach
// class Solution {
// public:
//     ListNode* getNodeAt(ListNode* head, int idx){
//         ListNode* temp = head;
//         for(int i=1;i<=idx;i++){
//             temp = temp->next;
//         }
//         return temp;
//     }
//     ListNode* reverseList(ListNode* head) {
//         int n = 0;
//         ListNode* temp = head;
//         while(temp!=NULL){
//             temp = temp->next;
//             n++;
//         }      
//         int i = 0;
//         int j = n-1;
//         while(i<j){
//             ListNode* left = getNodeAt(head,i);
//             ListNode* right = getNodeAt(head,j);
//             int t = left->val;
//             left->val = right->val;
//             right->val = t;
//             i++;
//             j--;
//         }
//         return head;
//     }
// };

// ---------------------------------------------------------------------------------------------
// iterative approch good way 
// 0(n); time complexity and 0(1) space complexity
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* Next = NULL;  // isko ham head pr b rakh sakte hai 
//         while(curr!=NULL){
//             Next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = Next;
//         }
//         return prev;
//     }
// };

// -------------------------------------------------------------------------------------------------------
// recursive way 
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if(head==NULL || head->next==NULL) return head;
//         ListNode* newHead = reverseList(head->next);
//         head->next->next = head;
//         head->next = NULL;
//         return newHead;
//     }
// };