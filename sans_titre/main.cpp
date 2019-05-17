/**************************************************************
--------------------------------------------------------------
**************************************************************
req_post.cpp
Programme de d�monstration de r�cup�ration d'une demande CGI en
provenance d'un navigateur en utilisant la m�thode POST.
L'ex�cutable sera renomm� req_post.cgi
--------------------------------------------------------------
**************************************************************
**************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <io.h>


/******************************************************
* lis_requete
* Lecture de l'entr�e standard dans le tampon
* Entr�e : pointeur sur tampon
* sortie : nombre de caract�res lus
********************************************************/
int lis_requete(char* P_Tampon_req)
{
int L_Nb_car; /* Nb carateres lus */
L_Nb_car=atoi(getenv("CONTENT_LENGTH"));
/* Lecture de l'entree standard de descripteur 0
et retour du nbre de caract�res lus */
return(read(0, P_Tampon_req,L_Nb_car));
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


/*************************
* Programme principal
*************************/
int main(int argc, char *argv[])
{
int Nb_carac_lu;
char Tampon[1000];
/* Lecture des donnees */
Nb_carac_lu = lis_requete(Tampon);
Tampon[Nb_carac_lu]='\0';
if (Nb_carac_lu > 0)
        {
        ecris_result(Tampon);
        }
        else
        {
        strcpy(Tampon,"Aucune requete transmise !\n");
        ecris_result(Tampon);
        }
/* Fin du programme */
return 0;
}
