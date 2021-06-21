#ifndef FLEXLIST_H
#define FLEXLIST_H

#include <QMainWindow>
#include <iostream>
#include <QDateTime>
#include <string>
#include <stdlib.h>

QT_BEGIN_NAMESPACE
namespace Ui { class FlexList; }
QT_END_NAMESPACE

class FlexList : public QMainWindow
{
    Q_OBJECT

public:
    FlexList(QWidget *parent = nullptr);
    ~FlexList();

private slots:


private:
    Ui::FlexList *ui;
    QString generateRandomWords(int numberOfWords, int lengthOfWord);
};
#endif // FLEXLIST_H
