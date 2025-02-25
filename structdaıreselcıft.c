#include <stdio.h>
#include <stdlib.h>

struct node {
int veri;
struct node *next;
struct node *prev;
};
//cıft daıresel baglı lıstede eleman ekleme 
struct node *temp;
struct node *head;
struct node *temp2;

void basaekleme(int sayı){
  struct node *ekle;
  ekle=(struct node *)malloc(sizeof(struct node));
  ekle->veri=sayı;
  if(head==NULL){
    head=ekle;
    head->next=head;
    head->prev=head;
    
  }else{
    temp=head;
    while(temp->next!=head){
      temp=temp->next;
    }
    temp->next=ekle;
    head->prev=ekle;
    ekle->prev=temp;
    ekle->next=head;


    head=ekle;
  }
}


void sonaekleme(int sayı){
  struct node *ekle;
  ekle=(struct node *)malloc(sizeof(struct node));
  ekle->veri=sayı;
  if(head==NULL){
    head=ekle;
    head->next=head;
    head->prev=head;

  }else{
    temp=head;
    while(temp->next!=head){
      temp=temp->next;
    }
    temp->next=ekle;
    head->prev=ekle;
    ekle->prev=temp;
    ekle->next=head;
    
  }
}


