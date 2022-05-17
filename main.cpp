#include "mdieditor.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MDIEditor w;
    w.show();
    return a.exec();
}
