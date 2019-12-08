#include "notepad.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication Editor(argc, argv);
    Notepad Edit;
    Edit.show();

    return Editor.exec();
}
