#include <stdio.h>
#include <iostream>

using namespace std;

int  main()
{

printf("Content-type: text/html\n\n");//le cgi doit demarrer sa réponse avec cette ligne avant le ode html
printf("<!DOCTYPE html>");
printf("<html>\n");
printf("<head><title>Test de cgi</title></head>\n");
printf("<body>\n");
printf("Je suis ton père, el padre\n");
printf("</body>\n");
printf("</html>\n");
return 0;
}


