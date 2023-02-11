#pragma once

#include <QObject>

class Int : public QObject {
    Q_OBJECT

    public: Int();
    public: Int(const int pValue);
    public: Int(const Int& pInt);

    private: int mValue { 0 };
    public: int value() const;
    public: void setValue(const int pValue);

    public: bool compareTo(const int pValue) const;
    public: bool compareTo(const Int& pInt) const;
};

