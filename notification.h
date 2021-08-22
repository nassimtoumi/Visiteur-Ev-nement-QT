#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include <QSystemTrayIcon>
#include<QString>
class Notification
{
public:
    Notification();
    void notification_ajoutVisiteur();
    void notification_ajoutPublicite();
    void notification_supprimerVisiteur();
    void notification_supprimerPublicite();
    void notification_modifierPromotion();
    void notification_modifierPublicite();
    void mail_Publicite();












};

#endif // NOTIFICATION_H
