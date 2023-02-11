#pragma once

#include <QObject>

class Version : public QObject {
    Q_OBJECT

    public: Version();
    public: Version(const int pMajor, const int pMinor);
    public: Version(const int pMajor, const int pMinor, const int pHotfix);
    public: Version(const int pMajor, const int pMinor, const int pHotfix, const int pBuild);

    private: int mMajor { 0 };
    public: int major() const;
    public: void setMajor(const int pMajor);

    private: int mMinor { 0 };
    public: int minor() const;
    public: void setMinor(const int pMinor);

    private: int mHotfix { 0 };
    public: int hotfix() const;
    public: void setHotfix(const int pHotfix);

    private: int mBuild { 0 };
    public: int build() const;
    public: void setBuild(const int pBuild);

    public: bool operator == (const Version& pVersion) const;
    public: bool operator != (const Version& pVersion) const;
    public: bool operator < (const Version& pVersion) const;
    public: bool operator <= (const Version& pVersion) const;
    public: bool operator > (const Version& pVersion) const;
    public: bool operator >= (const Version& pVersion) const;

    public: int compare(const Version& pVersion) const;
};

