#include <stdio.h>

int  main()
{
/* En-tete de la page */
printf("Content-type: text/html\n\n");
printf("<!DOCTYPE html>");
printf("<html>\n");
printf("<head><title>Test de cgi</title></head>\n");
printf("<body>\n");
printf("Bonjour\n");
printf("</body>\n");
printf("</html>\n");

return 0;
}

