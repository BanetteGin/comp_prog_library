#ifndef BANETTEGIN_CLIP_STRING_HPP_INCLUDED
#define BANETTEGIN_CLIP_STRING_HPP_INCLUDED

#include <string>
#include <vector>

#include "../basic/constant.hpp"

namespace BanetteGin {

std::vector<std::string> clip_string(const std::vector<std::string>& s, char target) {
    long long int lefx, rigx, lefy, rigy;
    lefx = lefy = LINF;
    rigx = rigy = -LINF;
    std::vector<std::string> ret;
    for (long long int i = 0; i < s.size(); ++i) {
        for (long long int j = 0; j < s[i].size(); ++j) {
            if (s[i][j] == target) {
                lefx = std::min(lefx, i);
                rigx = std::max(rigx, i);
            }
        }
    }
    for (long long int i = 0; i < s[0].size(); ++i) {
        for (long long int j = 0; j < s.size(); ++j) {
            if (s[j][i] == target) {
                lefy = std::min(lefy, i);
                rigy = std::max(rigy, i);
            }
        }
    }
    for (long long int i = lefx; i <= rigx; ++i) {
        std::string t = "";
        for (long long int j = lefy; j <= rigy; ++j) {
            t.push_back(s[i][j]);
        }
        ret.emplace_back(t);
    }
    return ret;
}

}  // namespace BanetteGin

#endif