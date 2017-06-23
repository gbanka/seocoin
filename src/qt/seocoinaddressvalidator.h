#ifndef SEOCOINADDRESSVALIDATOR_H
#define SEOCOINADDRESSVALIDATOR_H

#include <QRegExpValidator>

/** Base48 entry widget validator.
   Corrects near-miss characters and refuses characters that are no part of base48.
 */
class FreicoinAddressValidator : public QValidator
{
    Q_OBJECT
public:
    explicit FreicoinAddressValidator(QObject *parent = 0);

    State validate(QString &input, int &pos) const;

    static const int MaxAddressLength = 35;
signals:

public slots:

};

#endif // SEOCOINADDRESSVALIDATOR_H
