#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
char a[30];
int b,c,d=0;
 printf("=====Program Jumlah Spasi Pada Kalimat=====");
 printf("\n\nKetikan Kalimat Maks 30 Karakter:\n\n");
 gets(a);
 b=strlen(a);
  for(c=0;c<=b;c++)
  if(a[c]==' ')
  {
  d=d+1;
  }
  printf("\n\nJumlah Spasi=%d\n\n",d);
 getch();
}

