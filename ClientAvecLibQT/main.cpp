/*client TCP*/
#include <stdio.h>
#include <conio.h>

#include "Lib_tcp.h"

#define STX 0x02
#define EOT 0x04

int main(void)
{
int Etat;
char IP[]="127.0.0.1";
char LEDSON[6]={STX,'L','2','5','5',EOT};
char LEDSOFF[6]={STX,'L','0','0','0',EOT};
char MES1[8]={STX,'M','1','I','R','I','S',EOT};
char MES2[11]={STX,'M','1','B','O','N','J','O','U','R',EOT};

printf("=>LEDS ALLUMEES\n");
Etat=EnvoyerMessage(IP,5555,LEDSON,6);
getch();
printf("=> LEDS ETEINTES\n");
Etat=EnvoyerMessage(IP,5555,LEDSOFF,6);
getch();
printf("=> Message ligne 1\n");
Etat=EnvoyerMessage(IP,5555,MES1,8);
getch();

printf("=> Message  ligne 2\n");
Etat=EnvoyerMessage(IP,5555,MES2,11);
getch();

return (0);
}

