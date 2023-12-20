class Solution
{
    public:
    void display(Node *head)
    {

     //make a temp to travese the list

      struct Node *temp;
      temp=head;           //give temp is head to point in 1st node 
      while(temp!=NULL)
      {
          cout<<temp->data<<" ";
          temp=temp->next;
          
      }
    }
};

