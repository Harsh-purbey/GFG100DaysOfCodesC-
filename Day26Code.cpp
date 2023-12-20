bool isCircular(Node *head)
{
   // Your code here
    if(head==NULL || head->next==NULL)
    {
        return 0;
    }
    Node * slow=head;
    Node * fast=head->next->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        if(slow==fast)
        {
            return 1;
        }
        slow=slow->next;
        fast=fast->next->next;
    }
    return 0;
}