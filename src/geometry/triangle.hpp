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

    vector<point<T>> points(3);
    vector<T> lengths(3);
    vector<T> angles(3);
    T area;
    triangle(point<T> point_a, point<T> point_b, point<T> point_c)
        : points(std::vector<point<T>>(point_a, point_b, point_c)) {
        for(int a=0;a<3;++a){
            int b,c;
            bool added_flag=false;
            for(int i=0;i<3;++i){
                if(a!=i){
                    if(!added_flag) {
                        b=i;
                        added_flag=true;
                    } else c=i;
                }
            }
            lengths[a]=distance_point_and_point(points[b],points[c]);
        }

        for(int a=0;a<3;++a){
            int b,c;
            bool added_flag=false;
            for(int i=0;i<3;++i){
                if(a!=i){
                    if(!added_flag) {
                        b=i;
                        added_flag=true;
                    } else c=i;
                }
            }
            angles[a]=acos((pow(lengths[b], 2) + pow(lengths[c], 2) - pow(lengths[a], 2)) / (2 * lengths[b] * lengths[c]))
        }

        area = length_b * length_c * sin(angle_a) / 2;
    };
    triangle(T length_a, T length_b, T length_c)
        :  lengths(std::vector<T>(length_a,length_b,length_c)){
        length_a = distance_point_and_point(point_b, point_c);
        length_b = distance_point_and_point(point_c, point_a);
        length_c = distance_point_and_point(point_a, point_b);
        angle_a = acos((pow(length_b, 2) + pow(length_c, 2) - pow(length_a, 2)) / (2 * length_b * length_c));
        angle_b = acos((pow(length_c, 2) + pow(length_a, 2) - pow(length_b, 2)) / (2 * length_c * length_a));
        angle_c = acos((pow(length_a, 2) + pow(length_b, 2) - pow(length_c, 2)) / (2 * length_a * length_b));
        area = length_b * length_c * sin(angle_a) / 2;
    };
};

}  // namespace BanetteGin

#endif