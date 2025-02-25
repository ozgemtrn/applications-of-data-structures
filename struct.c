#include <stdio.h>
#include <stdlib.h>

struct dugum {
  int veri;
  struct dugum *next;
};

struct dugum *ilk;
struct dugum *temp;
struct dugum *temp2;
void sonasil()
{
  temp=ilk;
  temp2=ilk;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  while(temp2->next!=temp){
    temp2=temp2->next;
  }
  temp2->next=NULL;
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
  while(x<3)
    {
      int sayı;
      printf("sayı:");
      scanf("%d",&sayı);
      listeyap( sayı);
      x++;
    }
  
  yazdır();
  sonasil();
  printf("\n***********\n");
  yazdır();
  
}