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
thetime = localtime(&ltime); /*Retourne un pointeur sur une structure 
de type tm contenant la date et l'heure locale*/
/* En tête HTML*/
printf("Content-type: text/html\n\n");
printf("<!DOCTYPE html>");
printf("<html>\n");
printf("<head><title>Test de cgi</title></head>\n");
printf("<body>\n");
 /* Affichage des informations variables de la page */
strftime(str, 100, "%#x", thetime);  /*formatage de la chaîne str pour afficher la date 
(voir doc de strftime)*/
printf("Date '%s'\n",str);
printf("<BR>");
strftime(str, 100, "%H:%M:%S", thetime); /*formatage de la chaîne str pour afficher l'heure */
printf("Heure '%s'\n",str);
                     /*Fin de la page */
printf("</body>\n");
printf("</html>\n");
return (0);
}
