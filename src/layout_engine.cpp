#include "layout_engine.h"
#include "chart_model.h"

#include <algorithm>

std::vector<BarLayout> LayoutEngine::computeBarChartLayout(
    const ChartModel& chart,
    double chartWidth,
    double chartHeight
) const {
    std::vector<BarLayout> bars;
    const auto& data = chart.getData();

    if (data.empty()) {
        return bars;
    }

    double maxValue = 0.0;
    for (const auto& point : data) {
        maxValue = std::max(maxValue, point.value);
    }

    if (maxValue <= 0.0) {
        return bars;
    }

    const double barSpacing = 10.0;
    const double totalSpacing = barSpacing * (data.size() - 1);
    const double barWidth = (chartWidth - totalSpacing) / data.size();

    double currentX = 0.0;

    for (const auto& point : data) {
        const double normalizedHeight = point.value / maxValue;
        const double barHeight = normalizedHeight * chartHeight;
        const double barY = chartHeight - barHeight;

        bars.push_back({
            point.label,
            point.value,
            currentX,
            barY,
            barWidth,
            barHeight
        });

        currentX += barWidth + barSpacing;
    }

    return bars;
}