#ifndef MENUMODE_H
#define MENUMODE_H

#include "qcanpool/imode.h"

class MenuMode : public IMode
{
    Q_OBJECT
public:
    explicit MenuMode(QWidget *parent = 0);

signals:

public slots:
};

#endif // MENUMODE_H
