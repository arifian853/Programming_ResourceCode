#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

int main()
{
    int i = 0;
    char input[50];
    char kalimat[100];
    char c;
    int n,p;

    cout<<"Masukkan kata: ";
    scanf("%s",&input);

    while(input[i])
    {
        c=input[i];
        putchar(toupper(c));
        i++;
    }
	}
