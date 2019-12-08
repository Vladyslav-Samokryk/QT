#ifndef NOTEPAD_H
#define NOTEPAD_H

//! [all]
//! [1]
#include <QMainWindow>
//! [1]

//! [2]
QT_BEGIN_NAMESPACE
namespace Ui {
class Notepad;
}
QT_END_NAMESPACE
//! [2]

//! [3]
class Notepad : public QMainWindow
{
    Q_OBJECT
//! [3]

//! [4]
public:
    explicit Notepad(QWidget *parent = 0);
//! [4]
//! [5]
    ~Notepad();
//! [5]

private slots:
    void newDocument();
    void open();
    void save();
    void saveAs();    
    void copy();
    void cut();
    void paste();
    void undo();
    void redo();
    void about();
    void exit();

//! [6]
    void on_actionNew_triggered();

private:
    Ui::Notepad *ui;
    QString currentFile;
//! [6]
};
//! [all]

#endif // NOTEPAD_H
