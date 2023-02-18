#include "MainModel.hpp"

MainModel::MainModel() {
}

const QString& MainModel::input() const {
    return this->mInput;
}

const QString& MainModel::destination() const {
    return this->mOutput;
}

const QString& MainModel::distribution() const {
    return this->mDistribution;
}

void MainModel::setInput(const QString& pInput, bool pNoSignal) {
    this->mInput = pInput;
    if (!pNoSignal)
        emit this->inputChanged(this->mInput);
}

void MainModel::setOutput(const QString& pOutput, bool pNoSignal) {
    this->mOutput = pOutput;
    if (!pNoSignal)
        emit this->outputChanged(this->mOutput);
}

void MainModel::setDistribution(const QString& pDistribution, bool pNoSignal) {
    this->mDistribution = pDistribution;
    if (!pNoSignal)
        emit this->distributionChanged(this->distribution());
}
