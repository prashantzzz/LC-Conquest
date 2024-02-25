class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int n=0;
        ListNode* temp=head;
        vector<int>arr;
        while(temp!=NULL){
            arr.push_back(temp->val);
            n++;
            temp=temp->next;
        }
        for(int i=k; i<n+1; i+=k){
            //cout<<i-k<<" "<<i-1<<"; ";
            reverse(arr.begin()+i-k,arr.begin()+i); //from i-k to i-1
        }
        temp=head; int i=0;
        while(temp!=NULL){
            temp->val=arr[i];
            temp=temp->next;
            i++;
        }
        return head;
    }
};
