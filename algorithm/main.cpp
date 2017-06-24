#include <QCoreApplication>
#include <stdio.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    printf("hello, world\n");

    return a.exec();
}
