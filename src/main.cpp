#include <iostream>

#include "chart_model.h"
#include "layout_engine.h"

int main() {
    ChartModel chart;

    chart.addDataPoint("A", 10.0);
    chart.addDataPoint("B", 25.0);
    chart.addDataPoint("C", 15.0);

    LayoutEngine layoutEngine;
    const auto bars = layoutEngine.computeBarChartLayout(chart, 300.0, 200.0);

    std::cout << "Bar chart layout:" << std::endl;

    for (const auto& bar : bars) {
        std::cout
            << bar.label
            << " | value=" << bar.value
            << " | x=" << bar.x
            << " | y=" << bar.y
            << " | width=" << bar.width
            << " | height=" << bar.height
            << std::endl;
    }

    return 0;
}
