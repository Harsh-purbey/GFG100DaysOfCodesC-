int GetNth(struct node* head, int index){
    struct node *tmp = head;
    for(int i = 0; i < index-1; i++, tmp = tmp->next);
    return tmp->data;
}