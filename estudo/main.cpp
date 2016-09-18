#include<windows.h>
#include<conio.h>
#include<stdio.h>
#include <iostream>

using namespace std;

void mgotoxy(int x,int y)
{	COORD p={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),p);
}

int main()
{
//Criação das paredes:
int x,d=2,cx[300]={1,2},cy[300]={7,7},t=1; //cx e cy precisam ser arrays para que o rastro da cobra possa ser apagado
    char tecla='a';
 for(x=0;x<18;x++)
   {
       mgotoxy(0,x);
       printf("%c",219);
   }
 for(x=0;x<26;x++)
   {
       mgotoxy(x,0);
	   printf("%c",219);
   }
  for(x=0;x<18;x++)
   {
       mgotoxy(26,x);
	   printf("%c",219);
   }
  for(x=0;x<27;x++)
   {
       mgotoxy(x,18);
	   printf("%c",219);
   }
//Termina Criação

/*Movimento de caractere 1:
  for(x=2;x<26;x++)
   {
      mgotoxy(x-1,8); //Essa e a linha seguinte servem para "Apagar" o rastro que o caractere andante deixa. Teste comentar essas duas linhas para ver o que acontece
	  printf(" ");
	  mgotoxy(x,8);
	  printf("%c",1);
	  Sleep(500);
   }
*/

//Movimento de caractere2 :

while(tecla!='s')
    {   while(tecla!='s'&&!(tecla=kbhit()))
        {   if(d==0)cx--;
            if(d==1)cy--;
            if(d==2)cx++;
            if(d==3)cy++;
            mgotoxy(cx,cy);
            printf("%c",219);
            Sleep(500);
            if(cy==0||cy==18||cx==0||cx==26)tecla='s';
        }
        if(tecla!='s')tecla=getch();
        if(tecla=='a')d=0;
        if(tecla=='w')d=1;
        if(tecla=='d')d=2;
        if(tecla=='x')d=3;
        if(cy==0||cy==18||cx==0||cx==26)tecla='s';
    }
    getch();
}
