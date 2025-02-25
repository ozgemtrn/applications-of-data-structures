#include <stdio.h>
#include <stdlib.h>
//tek yonlu daıresel baglı lıstede eleman adetı ve data toplamı 
void elemantop(){
  ilk=temp;
  if(ilk==NULL){
    printf("lıste yok");
  }else{
    int top=0;
    while(temp->next!=ilk){
      top+=temp->veri;
      temp=temp->next;
    }
    top+=temp->veri;
    
  }
  printf("%d",top);
}
void elemanadet(){
  ilk=temp;
  int count=1;
  if(ilk==NULL){
    printf("lıste yok");
  }else{
  while(temp->next!=ilk){
    count+=1
      temp=temp->next;
  }
  }
  printf("%d",count);
}