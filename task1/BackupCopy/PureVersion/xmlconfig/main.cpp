#include "dialog.h"
#include <QApplication>
#include <xmlconfig.h>
#include "QDebug"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    xmlConfig  kl;
    kl.changeXmlValue(SplitServerIp_QString,"192.168.1.168");

    return a.exec();
}
