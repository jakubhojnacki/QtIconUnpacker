#include "Version.hpp"

Version::Version() {
}

Version::Version(const int pMajor, const int pMinor) : mMajor { pMajor }, mMinor { pMinor } {
}

Version::Version(const int pMajor, const int pMinor, const int pHotfix) : Version(pMajor, pMinor) {
    this->mHotfix = pHotfix;
}
Version::Version(const int pMajor, const int pMinor, const int pHotfix, const int pBuild) : Version(pMajor, pMinor, pHotfix) {
    this->mBuild = pBuild;
}

int Version::major() const { return this->mMajor; }
void Version::setMajor(const int pMajor) { this->mMajor = pMajor; }

int Version::minor() const { return this->mMinor; }
void Version::setMinor(const int pMinor) { this->mMinor = pMinor; }

int Version::hotfix() const { return this->mHotfix; }
void Version::setHotfix(const int pHotfix) { this->mHotfix = pHotfix; }

int Version::build() const { return this->mBuild; }
void Version::setBuild(const int pBuild) { this->mBuild = pBuild; }


bool Version::operator == (const Version& pVersion) const {
    return (this->compare(pVersion) == 0);
}

bool Version::operator != (const Version& pVersion) const {
    return (this->compare(pVersion) != 0);
}

bool Version::operator < (const Version& pVersion) const {
    return (this->compare(pVersion) < 0);
}

bool Version::operator <= (const Version& pVersion) const {
    return (this->compare(pVersion) <= 0);
}

bool Version::operator > (const Version& pVersion) const {
    return (this->compare(pVersion) > 0);
}

bool Version::operator >= (const Version& pVersion) const {
    return (this->compare(pVersion) >= 0);
}

int Version::compare(const Version& pVersion) const {
    int result = Version::compare(this->major(), pVersion.major());
    if (result == 0)
        result = Version::compare(this->minor(), pVersion.minor());
    if (result == 0)
        result = Version::compare(this->hotfix(), pVersion.hotfix());
    if (result == 0)
        result = Version::compare(this->build(), pVersion.build());
    return result;
}

int Version::compare(const int pValue1, const int pValue2) {
    if (pValue1 > pValue2)
        return 1;
    else if (pValue1 < pValue2)
        return -1;
    else
        return 0;
}
