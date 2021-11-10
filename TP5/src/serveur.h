/*
 * SPDX-FileCopyrightText: 2021 John Samuel
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* TP5
Piccinali Amandine et Le Corre Sarah
Exercice 5.4
Exercice 5.5
Renvoyer un message du serveur au client.
Effectuer un calcul dans le serveur dont l'opérateur et les nombres ont été envoyé par le client.
*/

#ifndef __SERVER_H__
#define __SERVER_H__

#define PORT 8089

/* accepter la nouvelle connection d'un client et lire les données
 * envoyées par le client. En suite, le serveur envoie un message
 * en retour
 */
int recois_envoie_message(int socketfd);

/* Exercice 5.5
 * Fonction de récupération de l'opérateur de calculs et des numéros
 * Il faut un argument : l'identifiant de la socket.
 */
int recois_numeros_calcule(int socketfd, char* data);


#endif
