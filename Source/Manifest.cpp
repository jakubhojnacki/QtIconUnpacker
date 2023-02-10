#include "Manifest.hpp"

Manifest::Manifest() {
}

const QString& Manifest::name() const { return this->mName; }

const QString& Manifest::description() const { return this->mDescription; }

const Version& Manifest::version() const { return this->mVersion; }

const QString& Manifest::author() const { return this->mAuthor; }

const QString& Manifest::date() const { return this->mDate; }

const QString& Manifest::repository() const { return this->mRepository; }
