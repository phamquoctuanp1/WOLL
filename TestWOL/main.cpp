#include <QCoreApplication>
#include <controller.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Controller control;
    //control.turn_on("b4:2e:99:62:8d:0f");
    control.turn_on("5C:93:A2:D3:6D:02");//5c:93:a2:d3:6d:02
    control.turn_on("F0:76:1C:37:FE:B3");
    control.turn_on("1E:93:A2:D3:6D:02");
    return a.exec();
}
