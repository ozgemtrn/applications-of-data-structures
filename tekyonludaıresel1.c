#include <stdio.h>
#include <stdlib.h>
//daıresel tek yonlu baglı lısteye sondan eleman ekle 
void sonaekle(int sayı){
  struct dugum *ekle;
  ekle=(struct )malloc(sizeof(struct dugum));
  ekle->veri=sayı;
  
  if(ilk==NULL){
    ilk=ekle;
    ekle->next=ilk;
  }else{
    temp=ilk;
  while(temp->next!=ilk){
    temp=temp->next;
    }  
    ekle->next=ilk;
    temp->next=ekle;
    
    
  }
}