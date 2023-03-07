class Solution 
{
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        int count = 0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            temp = temp->next;
            count++;
        }
    
        int k = count-n;
        if(k == 0)
        {
            ListNode* todelete = head;
            head = head->next;
            delete todelete;
            return head;
        }
        else
        {
            ListNode* temp2 = head;
            while(k > 1)
            {
                temp2 = temp2->next;
                k--;
            }
            ListNode* todelete = temp2->next;
            temp2->next = temp2->next->next;
            delete todelete;
            return head;
        }
    }
};