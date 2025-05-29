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
    ListNode* insertNode(ListNode* head,int len){
        ListNode* node=new ListNode(head->val);
        ListNode* temp1=head->next;
        ListNode* middlehead=node;
        while(temp1!=NULL){
            ListNode* temp2=new ListNode(temp1->val);
            node->next=temp2;
            temp1=temp1->next;
            node=node->next;
        }
        return middlehead;
    }
    ListNode* middleNode(ListNode* head) {
        int cnt=0;
       if(head==NULL){
            return NULL;
       }
       ListNode* temp=head;
       while(temp!=NULL){
            cnt++;
            temp=temp->next;
       }
       int len=cnt; 
       int mid;
       if(cnt%2==0){
            mid=(cnt/2)+1;
       }else{
            mid=ceil(cnt/2)+1;
       }
       cnt=0;
       temp=head;
       while(temp!=NULL){
        cnt++;
        if(cnt==mid){
            return insertNode(temp,len);
        }
        temp=temp->next;
       }
       return NULL;
    }
};