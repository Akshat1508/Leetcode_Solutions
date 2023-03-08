class Solution {
public:
    ListNode* rotateRight(ListNode* &head, int k)
{
    if(head==NULL)
    {
        return head;
    }
    if(head->next==NULL)
    {
        return head;
    }
    
    int count = 0;
    ListNode* temp = head;
    while(temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    int knew = k % count;
    if(knew == 0)
    {
        return head;
    }
    int c = count - knew - 1;
    ListNode* temp2 = head;
    ListNode* newhead = head;
    while(c--)
    {
        newhead = newhead->next;
        temp2 = temp2->next;
    }
    newhead = newhead->next;
    ListNode* temp3 = newhead;
    while(temp3->next!=NULL)
    {
        temp3 = temp3->next;
    }
    temp2->next = NULL;
    temp3->next = head;
    
    return newhead;
}
};