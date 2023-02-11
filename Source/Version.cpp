#include "Int.hpp"
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
    int result { (Int { this->major() }).compareTo(pVersion.major()) };
    if (result == 0)
        result = (Int { this->minor() }).compareTo(pVersion.minor());
    if (result == 0)
        result = (Int { this->hotfix() }).compareTo(pVersion.hotfix());
    if (result == 0)
        result = (Int { this->build() }).compareTo(pVersion.build());
    return result;
}
