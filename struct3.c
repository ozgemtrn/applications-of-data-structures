#include <stdio.h>
#include <stdlib.h>

struct dugum {
  int veri;
  struct dugum *next;
};

struct dugum *ilk;
struct dugum *temp;

void veritoplamı()
{
  int top=0;
  temp=ilk;
 while(temp->next!=NULL)
   {
     //temp=temp->next;
     top=top+temp->veri;;
     temp=temp->next;
   }
  top+=temp->veri;
  printf("%d",top);
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

void yazdır(){
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
      listeyap(sayı);
      x++;
    }

  yazdır();

  printf("\n***\n");
  veritoplamı();

}