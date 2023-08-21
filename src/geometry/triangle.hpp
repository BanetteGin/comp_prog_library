#ifndef BANETTEGIN_TRIANGLE_HPP_INCLUDED
#define BANETTEGIN_TRIANGLE_HPP_INCLUDED

#include "../basic/equal.hpp"
#include "distance_point_and_point.hpp"
#include "point.hpp"
#include "segment.hpp"

namespace BanetteGin {

template <class T>
struct triangle {
    point<T> point_a, point_b, point_c;
    T length_a, length_b, length_c;
    T angle_a, angle_b, angle_c;
    T area;
    triangle(point<T> point_a_, point<T> point_b_, point<T> point_c_)
        : point_a(point_a_), point_b(point_b_), point_c(point_c_) {
        length_a = distance_point_and_point(point_b, point_c);
        length_b = distance_point_and_point(point_c, point_a);
        length_c = distance_point_and_point(point_a, point_b);
        angle_a = acos((pow(length_b, 2) + pow(length_c, 2) - pow(length_a, 2)) / (2 * length_b * length_c));
        angle_b = acos((pow(length_c, 2) + pow(length_a, 2) - pow(length_b, 2)) / (2 * length_c * length_a));
        angle_c = acos((pow(length_a, 2) + pow(length_b, 2) - pow(length_c, 2)) / (2 * length_a * length_b));
        area = length_b * length_c * sin(angle_a) / 2;
    };
    point<T> centroid() const noexcept {
        return (point_a + point_b + point_c) / 3;
    }
    std::pair<point<T>, T> circumcenter() const noexcept {
        point<T> o = (point_a * sin(2 * angle_a) + point_b * sin(2 * angle_b) + point_c * sin(2 * angle_c)) / (sin(2 * angle_a) + sin(2 * angle_b) + sin(2 * angle_c));
        T r = length_a / sin(angle_a) / 2;
        return std::make_pair(o, r);
    }
    std::pair<point<T>, T> incenter() const noexcept {
        point<T> o = (point_a * length_a + point_b * length_b + point_c * length_c) / (length_a + length_b + length_c);
        T r = area * 2 / (length_a + length_b + length_c);
        return std::make_pair(o, r);
    }
    std::pair<point<T>, T> incenter() const noexcept {
        point<T> o = (point_a * length_a + point_b * length_b + point_c * length_c) / (length_a + length_b + length_c);
        T r = area * 2 / (length_a + length_b + length_c);
        return std::make_pair(o, r);
    }
    point<T> orthocenter() const noexcept {
        return (point_a * tan(angle_a) + point_b * tan(angle_b) + point_c * tan(angle_c)) / (tan(angle_a) + tan(angle_b) + tan(angle_c));
    }
};

}  // namespace BanetteGin

#endif