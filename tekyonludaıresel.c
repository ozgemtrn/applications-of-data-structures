#include <stdio.h>
#include <stdlib.h>
struct dugum
{
int veri;
struct dugum *next;
};

struct dugum *ilk=NULL;
struct dugum *temp=NULL;
struct dugum *temp2=NULL;

void basaekle(int sayı){
  struct dugum *eklenecek;
  eklenecek=(struct dugum *)malloc(sizeof(struct dugum));
  eklenecek->veri=sayı;
  temp=ilk;
  if(ilk==NULL){
    ilk=eklenecek;
    ilk=eklenecek->next;
  }else{
    while(temp->next!=ilk){
      temp=temp->next;
      
    }
    eklenecek->next=ilk;
    temp->next=eklenecek;
    ilk=eklenecek;
  }
}

void yazdır(){
  ilk=temp;
  
  if(ilk==NULL){
    printf("bOŞ ");
  }else{
    
  while(temp->next!=ilk){
    printf("%d-> ",temp->veri);
    temp=temp->next;
  }
  printf("%d ",temp->next);
}
}

int main(){
  while(1){
  int sayı;
  int secım;
  printf(" eleman eklemek ıcın-1 \n");
  printf("cıkıs yapmak ıcın-5 \n");
  printf("secımınızı yapın: ");
  scanf("%d ",&secım);
    if(1==secım){
      printf("sayıyı gırınız: ");
      scanf("%d",&sayı);
      basaekle(sayı);
}
  yazdır();
}
  return 0;
}