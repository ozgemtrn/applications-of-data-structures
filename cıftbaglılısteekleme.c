#include <stdio.h>
#include <stdlib.h>

struct node {
int veri;
struct node *next;
struct node *prev;
//bu bızım dugumumuzun ozellıklerını gosteren temsılcı struct yapısıdır ccıft baglı lıstede
};
struct node *next=NULL;
struct node *start=NULL;
struct node *prev=NULL;
struct node *temp=NULL;
struct node *temp2=NULL;

void basaekle(int sayı){
  struct node *ekle;
  ekle=(struct node *)malloc(sizeof(struct node ));
  ekle->prev=NULL;
  ekle->veri=sayı;
  if(start==NULL){
    start=ekle;
    start->next=NULL;
    start->prev=NULL;
  }else{
    /*ekle=start->prev;
    start=ekle->next;
    ekle->prev=NULL;
    ekle=start;*/
    ekle->next=start;
    start->prev=ekle;
    start=ekle;
  }
}
void sonaekle(int sayı){
  struct node *ekle;
  ekle=(struct node *)malloc(sizeof(struct node ));
  ekle->next=NULL;
  ekle->veri=sayı;
  
  
  if(start==NULL){
    start=ekle;
    start->next=NULL;
    start->prev=NULL;
  }else{
    
    temp=start;
    while(temp->next!=NULL){
      temp=temp->next;
    }
  /*  ekle=temp->next;
    temp=ekle->prev;*/
    temp->next=ekle;
    ekle->prev=temp;
   // temp->next=NULL;
  }
}

 void listele(){
   temp=start;
   if(start==NULL){
     printf("list bos ");
   }else{
   while(temp->next!=NULL)
     {
       printf(" %d ",temp->veri);
       temp=temp->next;
       
     }printf(" %d ",temp->veri);
   }
 }

int main(){
  int sayı=0;
  int sec=0;
  while(1){
    printf("lutfen bır sayı gırınız:");
    scanf("%d",&sayı);
    printf("*\n");
    sonaekle(sayı);
    sec++;
  
  listele();
}
}