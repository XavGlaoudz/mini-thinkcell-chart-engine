#pragma once

#include <string>
#include <vector>

class ChartModel;

struct BarLayout {
    std::string label;
    double value;
    double x;
    double y;
    double width;
    double height;
};

class LayoutEngine {
public:
    std::vector<BarLayout> computeBarChartLayout(
        const ChartModel& chart,
        double chartWidth,
        double chartHeight
    ) const;
};