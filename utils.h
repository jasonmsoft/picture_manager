#ifndef UTILS_H
#define UTILS_H
#include <QString>
#include "const.h"

class Utils
{
public:
enum LOG_OPTS{LOG_CONSOLE, LOG_FILE};
public:
    Utils();
    static void log(LOG_OPTS opt, char *fmt, ...);
    static void showWarning(QString msg);
};


#define LOG_CON Utils::LOG_CONSOLE
#define LOG_FILE Utils::LOG_FILE

#endif // UTILS_H
