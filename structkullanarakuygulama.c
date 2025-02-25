#include <stdio.h>
#include <stdlib.h>
struct dugum 
{
  int veri;
  struct dugum *next;
};

struct dugum *ilk=NULL;
struct dugum *temp;
struct dugum *temp2;

void menu(){
  printf("\n********MENU*********\n");
  printf("1-basa eleman ekle\n ");
  printf("2-sona eleman ekle\n");
  printf("3-bastan eleman sil\n");
  printf("4-sondan eleman sil\n");
  printf("5-eleman adeti\n");
  printf("6-eleman toplamı\n");
  printf("7-listele\n");
  printf("8-çıkış\n");
  
}
void basa_ekle(int x)
{
  struct dugum *eklenecek;
  eklenecek=(struct dugum *)malloc(sizeof(struct dugum));
  eklenecek->veri=x;
  
  temp=ilk;
  if (ilk==NULL){
    ilk=eklenecek;
    ilk->next=NULL;
  }else{
    
    eklenecek->next=ilk;
    ilk=eklenecek;  
  }
}

void sona_ekle(int x)
{
  struct dugum  *eklenecek;
  eklenecek=(struct dugum *)malloc(sizeof(struct dugum));
  eklenecek->veri=x;
  temp=ilk;
  if(temp==NULL){
    ilk=eklenecek;
  }else{
    while(temp->next!=NULL){
      temp=temp->next;
      }
    temp->next=eklenecek;
    eklenecek->next=NULL;
  }
}

void bas_sil(){
  if (ilk==NULL){
    printf("\nliste bos\n");
  }
  else{
  ilk=ilk->next;
  temp=ilk;
  free(temp);
  }
}

void son_sil(){
  temp=ilk;
    temp2=ilk;
  if(ilk!=NULL)
  {
    while(temp->next!=NULL){
      temp=temp->next;
    }
    while(temp2->next!=temp){
      temp2=temp2->next;
      printf("*");
    }
  }else{
    printf("liste bos");
  }
    temp2->next=NULL;
    free(temp);
  }

void elemansayı(){
  int sayac=0;
  if(ilk==NULL){
    printf("liste bos");
  }else{
    temp=ilk;
    while(temp->next!=NULL){
      temp=temp->next;
      sayac++;
    }
    printf("%d tane eleman var",sayac+1);
  }
}

void elemantop(){
  int top=0;
  if(ilk==NULL){
    printf("liste bos");
  }else{
    temp=ilk;
    while(temp->next!=NULL){
      top+=temp->veri;
      temp=temp->next;
    }
    printf("Toplamı:%d",top+temp->veri);
  }
}

void listele(){
  temp=ilk;
  if(ilk==NULL){
    printf("liste bos");
  }else{
  while(temp->next!=NULL){
    printf(" %d ",temp->veri);
    temp=temp->next;
  }
  printf(" %d ",temp->veri);
}
}

int main()
{
  int sayı=0;
  int secım=0;
  while(sayı!=8)
  {
    int veri;
    menu();
    printf("\nlutfen  secımınızı yapınız\n");
    scanf("%d",&secım);
    switch (secım){
      case 1:
        printf("eklenecek sayıyı giriniz\n");
        scanf("%d",&veri);
        basa_ekle(veri);
        break;
      case 2:
        printf("eklenecek sayıyı giriniz\n");
        scanf("%d",&veri);
        sona_ekle(veri);
        break;
      case 3:
        bas_sil();
        break;
      case 4:
        son_sil();
        break;
      case 5:
        elemansayı();
        break;
      case 6:
        elemantop();
        break;  
      case 7:
        listele();
        break;
      case 8:
        printf("\nçıkıs yapılıyor\n");
        sayı=8;
        break;
      default:
        printf("\nhatalı giriş\n");
    }
  }
}