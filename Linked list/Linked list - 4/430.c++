// Flatten a multilevel doubly linked list 
// class Solution {
// public:
//     Node* flatten(Node* head) {
//         Node* temp = head;
//         while(temp!=NULL){
//             Node* a = temp->next;
//             if(temp->child!=NULL){
//                 Node* a = temp->next;
//                 Node* c = temp->child;
//                 temp->child = NULL; // v imp
//                 c = flatten(c);
//                 temp->next = c;
//                 c->prev = temp;
//                 while(c->next!=NULL){
//                     c = c->next;
//                 }
//                 c->next = a;
//                 if(a) a->prev = c;
//             }
//             temp = a;
//         }
//         return head;
//     }
// };