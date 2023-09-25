#ifndef BANETTEGIN_RUN_LENGTH_ENCORDING_HPP_INCLUDED
#define BANETTEGIN_RUN_LENGTH_ENCORDING_HPP_INCLUDED

#include <string>
#include <vector>

namespace BanetteGin {

std::vector<std::pair<char, long long int> > run_length_encording(const std::string& s) {
    std::vector<std::pair<char, long long int> > ret;
    for (int i = 0; i < s.size();) {
        int j = i + 1;
        for (; j < s.size() && s[i] == s[j]; j++) {
        }
        ret.emplace_back(std::make_pair(s[i], j - i));
        i = j;
    }
    return ret;
}

}  // namespace BanetteGin

#endif