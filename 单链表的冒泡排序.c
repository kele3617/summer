
void Swap(LinkNodeType* a, LinkNodeType* b){

      LinkNodeType tmp = *a;

      *a = *b;

      *b = tmp;

  }

  void LinkListBubbleSort(LinkNode* head){

      LinkNode* count = head;

      LinkNode* tail = NULL;

      for(; count != NULL; count = count -> next){

          LinkNode* cur = head;

          for(; cur ->next != tail; cur = cur -> next){

              if(cur -> data > cur -> next -> data){

              Swap(&cur->data, &cur->next->data);

          }



      }

      tail = cur;

      }

  }