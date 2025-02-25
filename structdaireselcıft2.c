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

void toplamıvekac(){
  temp=head;
  int top=0;
  int say=0;
  if(head==NULL){
    printf("liste bos");
    
  }else{
    while(temp->next!=head){
      top+=temp->veri;
      temp=temp->next;
      say++;
    }
  }
  say++;
  printf("toplam:%d ",top);
  printf("sayısı %d",say);
}