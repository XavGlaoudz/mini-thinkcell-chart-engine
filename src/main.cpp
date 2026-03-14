#include <iostream>
#include "chart_model.h"

int main() {
    ChartModel chart;

    chart.addDataPoint("A", 10.0);
    chart.addDataPoint("B", 25.0);
    chart.addDataPoint("C", 15.0);

    std::cout << "Chart data:" << std::endl;

    for (const auto& point : chart.getData()) {
        std::cout << point.label << " : " << point.value << std::endl;
    }

    return 0;
}