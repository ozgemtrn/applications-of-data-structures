#include <stdio.h>
#include <stdlib.h>

struct node {
int veri;
struct node *next;
struct node *prev;
};
//cıft daıresel baglı lıstede eleman silme
struct node *temp;
struct node *head;
struct node *temp2;

void bastansilme(){
  if(head==NULL){
    printf("liste bos");
  }else{
    temp=head;
    temp2=head->next;
    
    while(temp->next!=head){
      temp=temp->next;
    }
    
    
    temp->next=temp2;
    temp2->prev=temp;
    free(head);
    temp2=head;
    
  }
}


void sondansilme(){
  if(head==NULL){
    printf("liste bos");
  }else{
    temp=head;
    temp2=head;

    while(temp->next!=head){
      temp=temp->next;
    }
   temp2=temp->prev;

    temp2->next=head;
    head->prev=temp2;
    free(temp);
   

  }
}
