#ifndef BANETTEGIN_TRIANGLE_HPP_INCLUDED
#define BANETTEGIN_TRIANGLE_HPP_INCLUDED

#include "../basic/equal.hpp"
#include "distance_point_and_point.hpp"
#include "point.hpp"
#include "segment.hpp"

namespace BanetteGin {

template <class T>
struct triangle {
    point<T> points[3];
    T lengths[3];
    T angles[3];
    T area;
    triangle(point<T> point_a, point<T> point_b, point<T> point_c)
        : points{point_a, point_b, point_c} {
        for (int a = 0; a < 3; ++a) {
            int b, c;
            bool added_flag = false;
            for (int i = 0; i < 3; ++i) {
                if (a != i) {
                    if (!added_flag) {
                        b = i;
                        added_flag = true;
                    } else
                        c = i;
                }
            }
            lengths[a] = distance_point_and_point(points[b], points[c]);
        }

        for (int a = 0; a < 3; ++a) {
            int b, c;
            bool added_flag = false;
            for (int i = 0; i < 3; ++i) {
                if (a != i) {
                    if (!added_flag) {
                        b = i;
                        added_flag = true;
                    } else
                        c = i;
                }
            }
            angles[a] = acos((pow(lengths[b], 2) + pow(lengths[c], 2) - pow(lengths[a], 2)) / (2 * lengths[b] * lengths[c]));
        }

        area = lengths[1] * lengths[2] * sin(angles[0]) / 2;
    };
    triangle(T length_a, T length_b, T length_c)
        : lengths{length_a, length_b, length_c} {
        for (int a = 0; a < 3; ++a) {
            int b, c;
            bool added_flag = false;
            for (int i = 0; i < 3; ++i) {
                if (a != i) {
                    if (!added_flag) {
                        b = i;
                        added_flag = true;
                    } else
                        c = i;
                }
            }
            angles[a] = acos((pow(lengths[b], 2) + pow(lengths[c], 2) - pow(lengths[a], 2)) / (2 * lengths[b] * lengths[c]));
        }

        points[0] = point(0, 0);
        points[1] = point(0, lengths[1]);
        points[2] = point(lengths[2] * cos(angles[0]), lengths[2] * sin(angles[0]));

        area = lengths[1] * lengths[2] * sin(angles[0]) / 2;
    };
};

}  // namespace BanetteGin

#endif