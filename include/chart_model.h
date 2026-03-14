#pragma once

#include <string>
#include <vector>

struct DataPoint {
    std::string label;
    double value;
};

class ChartModel {
public:
    void addDataPoint(const std::string& label, double value);
    const std::vector<DataPoint>& getData() const;

private:
    std::vector<DataPoint> data_;
};