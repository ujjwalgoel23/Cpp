#include<stdio.h>
#include<conio.h>
int main(){
 char string_name[10]="helloworld";
 printf("%c",*(&string_name[0]+7));

}