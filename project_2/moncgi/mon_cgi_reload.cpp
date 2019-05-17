#include <stdio.h>
#include <sys/timeb.h>
#include <time.h>
#include <locale.h>

int  main()
{
time_t ltime;
struct tm *thetime;
char str[100];

setlocale(LC_ALL, "French"); /*configure les paramètres locaux : ici en Français*/
time(&ltime);	/*Lecture de l'heure système dans la structure ltime */

thetime = localtime(&ltime); /*Retourne un pointeur sur une structure de type tm contenant la
                                                                         date et l'heure locale*/


/* En tête HTML (A COMPLETER) */
printf("Content-type: text/html\n\n");
printf("<!DOCTYPE html>");
printf("<html>\n");
printf("<head><script language=\"javascript\" type=\"text/javascript\" defer=\"true\"></script>");
printf("<title>Test de cgi</title></head>\n");
printf("<body>\n");

 /* Affichage des informations variables de la page */
strftime(str, 100, "%#x", thetime);  /*formatage de la chaîne str pour afficher la date (voir doc 						de strftime)*/
printf("Date '%s'\n",str);

printf("<BR>");
strftime(str, 100, "%H:%M:%S", thetime); /*formatage de la chaîne str pour afficher l'heure (voir doc de 						strftime)*/
printf("Heure '%s'\n",str);
printf("<script>setTimeout(\"document.location.reload(true)\",1000);</script>");
printf("</body>\n");
printf("</html>\n");
                                /*Fin de la page (A COMPLETER)*/
return (0);
}
