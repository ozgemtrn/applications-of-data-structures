#include <stdio.h>
#include <stdlib.h>

struct node{
int veri;
struct node *next;
struct node *prev;
};
/*cıft baglı lıstede bastan ve sonndan eleman sılme  */
struct node *temp;
struct node *temp2;
struct node *start;

void bastansil(){
  
  if(start==NULL){
    printf("listebos");
    
  }else{
    if(start->next==NULL){
    free(start);
    start=NULL;
    }else{
      temp=start->next;
      free(start);
      start=temp;
      temp->prev=NULL;
      
    }
  }
}

void olustur(int sayı){
  struct node *ekle;
  ekle=(struct node *)malloc(sizeof(struct node));
  ekle->veri=sayı;
  if(start==NULL){
    start=ekle;
    ekle->next=NULL;
    ekle->prev=NULL;
  }else{
    temp=start;
    while(temp->next!=NULL){
      temp=temp->next;
    }
    temp->next=ekle;
    ekle->prev=temp;
    ekle->next=NULL;
    
  }
  
}

void listele(){
  temp=start;
  if(start==NULL){
   printf("liste bos");
 }else{
    
    while(temp->next!=NULL){
      printf("%d\n ",temp->veri);
      temp=temp->next;
    }printf(" %d \n",temp->veri);
    printf("******************");
 }
}
int main(){
  int sayı;
  int sec=0;
  int sil;
while(sec<4){
  printf("lutfen sayı gırınız:");
  scanf("%d",&sayı);
  olustur(sayı);
  listele();
  sec++;
}
  bastansil();
  listele();
}