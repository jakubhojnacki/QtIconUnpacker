#pragma once

#include <QObject>
#include <QString>

class MainModel : public QObject {
    Q_OBJECT

    public:
        MainModel(QObject* pParent = nullptr);

    private:
        QString mInput { "" };
        QString mOutput { "" };
        QString mDistribution { "" };

    public:
        const QString& input() const;
        const QString& output() const;
        const QString& distribution() const;

    public:
        void setInput(const QString& pInput, bool pNoSignal = true);
        void setOutput(const QString& pOutput, bool pNoSignal = true);
        void setDistribution(const QString& pDistribution, bool pNoSignal = true);

    signals:
        void inputChanged(const QString& pInput);
        void outputChanged(const QString& pOutput);
        void distributionChanged(const QString& pDistribution);
};

