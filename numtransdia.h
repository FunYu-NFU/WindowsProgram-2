#ifndef NUMTRANSDIA_H
#define NUMTRANSDIA_H

#include <QDialog>

class QLineEdit;

class NumTransDia : public QDialog
{
    Q_OBJECT

public:
    explicit NumTransDia(QWidget *parent = nullptr);
    ~NumTransDia() override;
private:
    QLineEdit* decEdit;
    QLineEdit* hexEdit;
    QLineEdit* binEdit;
private slots:
    void decChanged(const QString&);
    void hexChanged(const QString&);
    void binChanged(const QString&);
};
#endif // NUMTRANSDIA_H
