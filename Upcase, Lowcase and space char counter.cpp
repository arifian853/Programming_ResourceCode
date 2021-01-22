#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
char kalimat [80];
int jum_karakter, jum_huruf_kap,jum_huruf_kcl;
int indeks;
char karakter;

cout<<" Menghitung Jumlah huruf kapitan dan kecil "<<endl;
cout<<" Ketik kalimat yang akan dihitung : ";
cin.getline(kalimat,80);
cout<<endl;

jum_karakter = jum_huruf_kap = jum_huruf_kcl = 0;
indeks = 0;
while (kalimat[indeks] )
{
karakter = kalimat[indeks];
jum_karakter++;
if (karakter >='A' && karakter <= 'Z')
jum_huruf_kap++;
if (karakter >= 'a' && karakter <= 'z')
jum_huruf_kcl++;
indeks++;
}
cout<<"Jumlah Karakter          = "<< jum_karakter <<endl;
cout<<"Jumlah Huruf Kapital     = "<< jum_huruf_kap <<endl;
cout<<"Jumlah Huruf Kecil       = "<< jum_huruf_kcl <<endl;
cout<<endl<<endl<<endl;
getch();
}
