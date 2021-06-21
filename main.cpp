#include "flexlist.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    FlexList widget;
    widget.show();
    return app.exec();
}
