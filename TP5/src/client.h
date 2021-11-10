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

#ifndef __CLIENT_H__
#define __CLIENT_H__

/*
 * port d'ordinateur pour envoyer et recevoir des messages
 */
#define PORT 8089

/* 
 * Fonction d'envoi et de réception de messages
 * Il faut un argument : l'identifiant de la socket
 */
int envoie_recois_message(int socketfd);

/* Exercice 5.5
 * Fonction d'envoi de l'opérateur de calculs et des numéros
 * Il faut un argument : l'identifiant de la socket.
 */
int envoie_operateur_numeros(int socketfd, char* op,char* num1,char* num2);

#endif
