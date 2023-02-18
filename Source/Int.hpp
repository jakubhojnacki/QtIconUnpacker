#pragma once

class Int {
    public:
        Int();
        Int(const int pValue);
        Int(const Int& pInt);

    private:
        int mValue { 0 };

    public:
        int value() const;
        void setValue(const int pValue);
        bool compareTo(const int pValue) const;
        bool compareTo(const Int& pInt) const;
};

