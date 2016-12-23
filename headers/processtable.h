#ifndef PROCESSTABLE_H
#define PROCESSTABLE_H

#include <QtWidgets>
#include <QtGui>
#include <iostream>
#include <fstream>
using namespace std;
class ProcessTable : public QWidget
{
    Q_OBJECT
public:
    explicit ProcessTable(QWidget *parent = 0);
private:
    QTableWidget * table;
    QHBoxLayout* hlayout;
    QPushButton* button;
    QVBoxLayout* layout;
public slots:
    void update();
    void kill();
};

#endif // PROCESSTABLE_H
