#include "Struct.h"
namespace wheatman
{
    bool Point::operator < (const Point &other) const {
        if (x != other.x) {
            return x < other.x;
        }
        return y < other.y;
    }
    bool Point::operator == (const Point &other) const
    {
        return x == other.x && y == other.y;
    }
    std::istream& operator >> (std::istream& in, Point& p)
    {
        const std::istream::sentry sentry(in);
        if (!sentry) return in;

        char skip;
        in >> skip >> p.x >> skip >> p.y >> skip;
        return in;
    }
    std::ostream& operator << (std::ostream& out, const Point& p)
    {
        const std::ostream::sentry sentry(out);
        if (!sentry) return out;

        out << '(' << p.x << ':' << p.y << ')';
        return out;
    }
}
