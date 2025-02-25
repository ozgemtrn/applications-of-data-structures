#include <stdio.h>
#include <stdlib.h>

struct dugum {
  int veri;
  struct dugum *next;
};

struct dugum *ilk;
struct dugum *temp;

void sayısı()
{
  int count=0;
  temp=ilk;
 while(temp->next!=NULL)
   {
     temp=temp->next;
     count++;
   }
  printf("%d",count+1);
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
  sayısı();

}