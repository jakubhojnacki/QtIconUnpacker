#pragma once

#include <QObject>
#include <QString>

#include "Version.hpp"

class Manifest : public QObject {
    Q_OBJECT

    public: Manifest();

    private: QString mName { "Icon Unpacker" };
    public: const QString& name() const;

    private: QString mDescription { "A small utility to bulk-unpack images from ICO files" };
    public: const QString& description() const;

    private: Version mVersion { 0, 0, 1, 0 };
    public: const Version& version() const;

    private: QString mAuthor { "Fortah - Jakub Hojnacki <jakubhojnacki@gmail.com>" };
    public: const QString& author() const;

    private: QString mDate { "February 2023" };
    public: const QString& date() const;

    private: QString mRepository { "https://github.com/jakubhojnacki/Qt_Icon-Unpacker" };
    public: const QString& repository() const;
};

