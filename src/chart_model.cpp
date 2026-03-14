#include "chart_model.h"

void ChartModel::addDataPoint(const std::string& label, double value) {
    data_.push_back({label, value});
}

const std::vector<DataPoint>& ChartModel::getData() const {
    return data_;
}