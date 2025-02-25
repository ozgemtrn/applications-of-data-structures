#include <stdio.h>
#include <stdlib.h>

struct node {
int veri;
struct node *next;
struct node *prev;
};

struct node *head;
struct node *temp;
struct node *temp2;

void sondansıl(){
  
    if(head==NULL){
      printf("liste bos");
      
    }else{
    
    temp=head;
    while(temp->next!=NULL){
      temp=temp->next;
    }
    while(temp2->next!=NULL){
      temp2=temp2->next;
    }
    temp2->next=NULL;
    free(temp);
     }
  
}

elemman topsayı(){
  int toplam=0;
  int count=0;
  temp=head;
  
  if(head==NULL){
    printf("liste bos");
  }else{
    
  while(temp->next!=NULL){
    toplam+=temp->veri;
    count++;
    temp=temp->next;
  }
  
  printf("liste boyutu:%d",count+1);
  printf("liste toplamı:%d",toplam);
    
  }
}