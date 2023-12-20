struct Node* deleteNode(struct Node *head, int index)
    {
    struct Node *temp = head;
    struct Node *prev;
    int i = 1;
    if(i == index){
        head = temp->next;
        head->prev = NULL;
        return head;
    }
    while(i < index){
        prev = temp;
        temp = temp->next;
        i++;
    }
    if(temp->next == NULL){
        prev->next = NULL;
    }else{
        prev->next = temp->next;
        temp->next->prev = prev;
    }
    return head;
    }