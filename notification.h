#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include <QSystemTrayIcon>
#include<QString>
class Notification
{
public:
    Notification();
    void notification_ajoutVisiteur();
    void notification_ajoutEvenement();
    void notification_supprimerVisiteur();
    void notification_supprimerEvenement();
    void notification_modifierVisiteur();
    void notification_modifierEvenement();
    void mail_Publicite();












};

#endif // NOTIFICATION_H
