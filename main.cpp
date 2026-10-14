#include "numtransdia.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NumTransDia w;
    w.show();
    return QApplication::exec();
}
