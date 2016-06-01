#include "utils.h"
#include <QDebug>
#include <QMessageBox>

Utils::Utils()
{

}

void Utils::log(LOG_OPTS opt, char *fmt, ...)
{
    if(opt == LOG_CONSOLE)
    {
        char buffer[512] = {0};
         va_list ap;
         va_start(ap, fmt);
         vsprintf(buffer, fmt, ap);
         qDebug(buffer);
         va_end(ap);
    }
    else
    {

    }
}

void Utils::showWarning(QString msg)
{
    QMessageBox::information(NULL, QString::fromLocal8Bit(MSG_BOX_TIP), msg,
    QMessageBox::Yes, QMessageBox::Yes);
}

