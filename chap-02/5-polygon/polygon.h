#pragma once

#include <utility>
#include <vector>
#include <ostream>

using Point = std::pair<int, int>;

class Polygon
{
    friend std::ostream& operator<<(std::ostream& stream, const Polygon& polygon);
public:
    void add_vertex(int x, int y);
    const Point& get_vertex(int index) const;

private:
    std::vector<Point> _vertices;
};
