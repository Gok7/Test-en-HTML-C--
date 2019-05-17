#ifndef LIB_GBF_H
#define LIB_GBF_H

/*Fonction qui envoie au GBF les commandes
P_AdressesIPServeur => adresse IP du serveur
P_PortServeur => Port du serveur TCP utilisé
P_Message => Adresse de la chaîne contenant la commande
P_NombreCaracteres => Nombre de caractères de la commande

La fonction retourne 1 si OK ou 0 si une erreur est détectée.*/

int EnvoyerMessage(char* P_AdressesIPServeur,unsigned short P_PortServeur,
char * P_Message,int P_NombreCaracteres );

#endif // LIB_GBF_H
