#pragma once

#include "line.hpp"

class LineSegment : public Line
{
public:
    using Line::Line;

    std::ostream& print(std::ostream& os) const override { 
        return os << "Line Segment " << first << " -- " << last;
    }

    ~LineSegment() = default;
};
