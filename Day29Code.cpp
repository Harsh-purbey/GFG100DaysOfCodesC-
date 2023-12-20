int isLengthEvenOrOdd(struct Node* head)
{
     //Code here
     int count = 0;
     while(head){
         count++;
         head = head->next;
     }
     return count%2;
}