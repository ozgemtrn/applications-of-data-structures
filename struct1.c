#include <stdio.h>
#include <stdlib.h>

struct dugum {
  int veri;
  struct dugum *next;
};

struct dugum *ilk;
struct dugum *temp;
struct dugum *temp2;

void aradansil(int aranan)
{ int sayı=1;
  temp =ilk;
  temp2=ilk;
  while(sayı<aranan){
    temp=temp->next;
    sayı++;
  }
 while(temp2->next!=temp){
   temp2=temp2->next;
 }
 temp2->next=temp->next;
 free(temp);
}
void listeyap(int sayı)
{
  struct dugum *yenıdugum;
  yenıdugum=(struct dugum *)malloc(sizeof(struct dugum));
  yenıdugum->veri=sayı;
  yenıdugum->next=NULL;

  if(ilk==NULL)
  {
    ilk=yenıdugum;
  }else{
    yenıdugum->next=ilk;
    ilk=yenıdugum;

  }

}

void yazdır() {
  temp = ilk;
  while (temp->next != NULL) {
    printf(" %d ", temp->veri);
    temp = temp->next;
  }
  printf("%d", temp->veri);
}

int main() 
{
  int x=0;
  while(x<5)
    {
      int sayı;
      printf("sayı:");
      scanf("%d",&sayı);
      listeyap( sayı);
      x++;
    }
  int kac;
  printf("kacıncı elemanı silmek istiyorsun 1,2,3,4,5:");
  scanf("%d",&kac);
  
  yazdır();
  aradansil(kac);
  printf("\n*****\n");
  yazdır();

}