#include<stdio.h>
#include<conio.h>
#include<string.h>

struct name{
    int id;
    char name[10];
    char add[40];
};

int main(){

 struct name n;

 n.id =20;
 printf("Enter your name: ");
 gets(n.name);
 
 printf("Your id is %d\n",n.id);
 printf("Your name is %c\n",puts(n.name));
}
