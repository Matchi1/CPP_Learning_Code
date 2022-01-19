#include "polygon.h"

void Polygon::add_vertex(int x, int y)
{
    _vertices.emplace_back(x, y);
}

const Point& Polygon::get_vertex(int index) const{
    return _vertices[index];
}

std::ostream& operator<<(std::ostream& cout, const Polygon& polygon)
{
    for (auto vertex : polygon._vertices)
    {
        cout << "(" << vertex.first << "," << vertex.second << ")";
    }
    return cout;
}
