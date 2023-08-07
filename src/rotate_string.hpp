#ifndef BANETTEGIN_ROTATE_STRING_HPP_INCLUDED
#define BANETTEGIN_ROTATE_STRING_HPP_INCLUDED

#include <string>
#include <vector>

namespace BanetteGin {

std::vector<std::string> rotate_string(std::vector<std::string> s) {
    std::vector<std::string> ret;
    for (long long int i = 0; i < s[0].size(); ++i) {
        std::string t = "";
        for (long long int j = 0; j < s.size(); ++j) {
            t.push_back(s[j][s[0].size() - 1 - i]);
        }
        ret.emplace_back(t);
    }
    return ret;
}

}  // namespace BanetteGin

#endif