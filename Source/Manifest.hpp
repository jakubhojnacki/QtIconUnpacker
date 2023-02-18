#pragma once

#include <QString>

#include "Version.hpp"

class Manifest {
    public:
        Manifest();

    private:
        QString mName { "Icon Unpacker" };
        QString mDescription { "A small utility to bulk-unpack images from ICO files" };
        Version mVersion { 0, 0, 1, 0 };
        QString mAuthor { "Fortah - Jakub Hojnacki <jakubhojnacki@gmail.com>" };
        QString mDate { "February 2023" };
        QString mRepository { "https://github.com/jakubhojnacki/Qt_Icon-Unpacker" };

    public:
        const QString& name() const;
        const QString& description() const;
        const Version& version() const;
        const QString& author() const;
        const QString& date() const;
        const QString& repository() const;
};

