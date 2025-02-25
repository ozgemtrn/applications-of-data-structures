#include <stdio.h>
#include <stdlib.h>
//tek yonlu daıresel baglı lıstede  eleman silme
void bastansil(){
  
  if(ilk==NULL){
    printf("SİLİNECEK ELEMAN YOK ");
  }else{
    temp=ilk;
    while(temp->next=ilk){
      temp=temp->next;
    }
    ilk->next=temp->next;
    free(ilk);
    temp->next=ilk;
    
  }
}

void sondansil(){
  
if(ilk==NULL){
  printf("silinecek eleman yok");
  
}else{
  temp=ilk;
  temp2=ilk;
  while(temp->next!=ilk){
    temp=temp->next;
  }
  while(temp2->next!=temp){
    temp2=temp2->next;
  }
  ilk=temp2->next;
  free(temp);
}
 
  
}
