#include "Int.hpp"

Int::Int() {
}

Int::Int(const int pValue) : mValue { pValue } {
}

Int::Int(const Int& pInt) : mValue { pInt.value() } {
}

int Int::value() const { return this->mValue; }
void Int::setValue(const int pValue) { this->mValue = pValue; }

bool Int::compareTo(const int pValue) const {
    if (this->value() > pValue)
        return 1;
    else if (this->value() < pValue)
        return -1;
    else
        return 0;
}

bool Int::compareTo(const Int& pInt) const {
    return this->compareTo(pInt.value());
}
