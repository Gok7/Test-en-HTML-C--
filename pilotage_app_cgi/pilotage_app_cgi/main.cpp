/*************************************************************
--------------------------------------------------------------
**************************************************************

Programme de d�monstration de r�cup�ration d'une demande CGI en
provenance d'un navigateur en utilisant la m�thode GET.
L'ex�cutable sera renomm�
***************************************************************
------------------------------------------------------------
**************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/******************************************************
* lis_requete
* Lecture de la variable QUERY_STRING dans le tampon
* Entr�e : pointeur sur tampon
* sortie : nombre de caract�res lus
********************************************************/
int lis_requete(char* P_Tampon_req)
{
strcpy(P_Tampon_req,getenv("QUERY_STRING"));
return (strlen(P_Tampon_req));
}
/*************************************************************
* ecris_result (g�n�ration de la page HTML)
* Cette page affiche le contenu de la variable Tampon_res
* Entr�e : pointeur sur la cha�ne � afficher
**************************************************************/
void ecris_result(char* P_Tampon_res)
{
/* En-tete de la page */
printf("Content-type: text/html\n\n");
printf("<html>\n");
printf("<head><title>Test de requ�te</title></head>\n");
printf("<body>\n");
printf("affichage de la requ�te envoy�e : \n");
printf("%s\n",P_Tampon_res);
printf("</body>\n");
printf("</html>\n");
}

void Extraction(){

    char string[50], term[3], *ptr;
    strcpy(string,"one,two,three;");
    strcpy(term,",;");
    ptr = strtok(string, term);
    while(ptr!=0) {
       puts(ptr);
       ptr = strtok(0, term);
       }
}









int main(int argc, char *argv[])
{
int Nb_carac_lu;
char Tampon[1000];
/* Lecture des donnees */
Nb_carac_lu = lis_requete(Tampon);

Extraction();
if (Nb_carac_lu > 0)
        {
        ecris_result(Tampon);
        }
        else
        {
        strcpy(Tampon,"Aucune requete transmise !\n");
        ecris_result(Tampon);
        }

return 0;
}







