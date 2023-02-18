#pragma once

class Version {
    public:
        Version();
        Version(const int pMajor, const int pMinor);
        Version(const int pMajor, const int pMinor, const int pHotfix);
        Version(const int pMajor, const int pMinor, const int pHotfix, const int pBuild);

    private:
        int mMajor { 0 };
        int mMinor { 0 };
        int mHotfix { 0 };
        int mBuild { 0 };

    public:
        int major() const;
        int minor() const;
        int hotfix() const;
        int build() const;

    public:
        void setMajor(const int pMajor);
        void setMinor(const int pMinor);
        void setHotfix(const int pHotfix);
        void setBuild(const int pBuild);

    public:
        bool operator == (const Version& pVersion) const;
        bool operator != (const Version& pVersion) const;
        bool operator < (const Version& pVersion) const;
        bool operator <= (const Version& pVersion) const;
        bool operator > (const Version& pVersion) const;
        bool operator >= (const Version& pVersion) const;

    public:
        int compare(const Version& pVersion) const;
};

