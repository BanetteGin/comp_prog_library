---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"src/data_structure/hold_ends.hpp\"\n\n\n\n#include <vector>\n\
    \nnamespace BanetteGin {\n\ntemplate <class T>\nstruct hold_ends {\n    T k;\n\
    \    std::multiset<T> high_end, high_other;\n    std::multiset<T> low_end, low_other;\n\
    \    T all_sum = 0, high_sum = 0, low_sum = 0;\n\n    hold_ends(T k_)\n      \
    \  : k(k_) {\n    }\n    void normalize() {\n        while (high_end.size() <\
    \ k && !high_other.empty()) {\n            high_sum += *high_other.rbegin();\n\
    \            high_end.insert(*high_other.rbegin());\n            high_other.erase(high_other.find(*high_other.rbegin()));\n\
    \        }\n        while (high_end.size() > k) {\n            high_sum -= *high_end.begin();\n\
    \            high_other.insert(*high_end.begin());\n            high_end.erase(high_end.begin());\n\
    \        }\n        while (low_end.size() < k && !low_other.empty()) {\n     \
    \       low_sum += *low_other.begin();\n            low_end.insert(*low_other.begin());\n\
    \            low_other.erase(low_other.begin());\n        }\n        while (low_end.size()\
    \ > k) {\n            low_sum -= *low_end.rbegin();\n            low_other.insert(*low_end.rbegin());\n\
    \            low_end.erase(low_end.find(*low_end.rbegin()));\n        }\n    \
    \    return;\n    }\n    void insert(T x) {\n        all_sum += x;\n        high_sum\
    \ += x;\n        low_sum += x;\n        high_end.insert(x);\n        low_end.insert(x);\n\
    \        normalize();\n    }\n    void erase(T x) {\n        all_sum -= x;\n \
    \       if (high_end.find(x) != high_end.end()) {\n            high_sum -= x;\n\
    \            high_end.erase(high_end.find(x));\n        } else if (high_other.find(x)\
    \ != high_other.end()) {\n            high_other.erase(high_other.find(x));\n\
    \        }\n        if (low_end.find(x) != low_end.end()) {\n            low_sum\
    \ -= x;\n            low_end.erase(low_end.find(x));\n        } else if (low_other.find(x)\
    \ != low_other.end()) {\n            low_other.erase(low_other.find(x));\n   \
    \     }\n        normalize();\n    }\n    std::vector<T> high_array() {\n    \
    \    std::vector<T> ret;\n        for (auto itr = high_end.begin(); itr != high_end.end();\
    \ itr++)\n            ret.emplace_back(*itr);\n        return ret;\n    }\n  \
    \  std::vector<T> low_array() {\n        std::vector<T> ret;\n        for (auto\
    \ itr = low_end.begin(); itr != low_end.end(); itr++)\n            ret.emplace_back(*itr);\n\
    \        return ret;\n    }\n};\n\n}  // namespace BanetteGin\n\n\n"
  code: "#ifndef BANETTEGIN_HOLD_ENDS_HPP_INCLUDED\n#define BANETTEGIN_HOLD_ENDS_HPP_INCLUDED\n\
    \n#include <vector>\n\nnamespace BanetteGin {\n\ntemplate <class T>\nstruct hold_ends\
    \ {\n    T k;\n    std::multiset<T> high_end, high_other;\n    std::multiset<T>\
    \ low_end, low_other;\n    T all_sum = 0, high_sum = 0, low_sum = 0;\n\n    hold_ends(T\
    \ k_)\n        : k(k_) {\n    }\n    void normalize() {\n        while (high_end.size()\
    \ < k && !high_other.empty()) {\n            high_sum += *high_other.rbegin();\n\
    \            high_end.insert(*high_other.rbegin());\n            high_other.erase(high_other.find(*high_other.rbegin()));\n\
    \        }\n        while (high_end.size() > k) {\n            high_sum -= *high_end.begin();\n\
    \            high_other.insert(*high_end.begin());\n            high_end.erase(high_end.begin());\n\
    \        }\n        while (low_end.size() < k && !low_other.empty()) {\n     \
    \       low_sum += *low_other.begin();\n            low_end.insert(*low_other.begin());\n\
    \            low_other.erase(low_other.begin());\n        }\n        while (low_end.size()\
    \ > k) {\n            low_sum -= *low_end.rbegin();\n            low_other.insert(*low_end.rbegin());\n\
    \            low_end.erase(low_end.find(*low_end.rbegin()));\n        }\n    \
    \    return;\n    }\n    void insert(T x) {\n        all_sum += x;\n        high_sum\
    \ += x;\n        low_sum += x;\n        high_end.insert(x);\n        low_end.insert(x);\n\
    \        normalize();\n    }\n    void erase(T x) {\n        all_sum -= x;\n \
    \       if (high_end.find(x) != high_end.end()) {\n            high_sum -= x;\n\
    \            high_end.erase(high_end.find(x));\n        } else if (high_other.find(x)\
    \ != high_other.end()) {\n            high_other.erase(high_other.find(x));\n\
    \        }\n        if (low_end.find(x) != low_end.end()) {\n            low_sum\
    \ -= x;\n            low_end.erase(low_end.find(x));\n        } else if (low_other.find(x)\
    \ != low_other.end()) {\n            low_other.erase(low_other.find(x));\n   \
    \     }\n        normalize();\n    }\n    std::vector<T> high_array() {\n    \
    \    std::vector<T> ret;\n        for (auto itr = high_end.begin(); itr != high_end.end();\
    \ itr++)\n            ret.emplace_back(*itr);\n        return ret;\n    }\n  \
    \  std::vector<T> low_array() {\n        std::vector<T> ret;\n        for (auto\
    \ itr = low_end.begin(); itr != low_end.end(); itr++)\n            ret.emplace_back(*itr);\n\
    \        return ret;\n    }\n};\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/data_structure/hold_ends.hpp
  requiredBy: []
  timestamp: '2023-08-08 12:20:54+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/data_structure/hold_ends.hpp
layout: document
redirect_from:
- /library/src/data_structure/hold_ends.hpp
- /library/src/data_structure/hold_ends.hpp.html
title: src/data_structure/hold_ends.hpp
---
