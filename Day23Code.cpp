class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        int n=0;
        struct Node* ptr=head;
        while(ptr)
        {
            ptr=ptr->next;
            n++;
        }
        return n;
    
    }
};