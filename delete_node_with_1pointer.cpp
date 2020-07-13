Delete without head pointer in linked list

void deleteNode(Node *node)
{
   Node* temp= node->next;
   node->data= temp->data;
   node->next=temp->next;
   free(temp);
   
  
}

OR
//Beauty of having control over pointers
void delete(node* n)
{

*m=*(m->next);

}
