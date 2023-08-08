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
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.11.4/x64/lib/python3.11/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.11.4/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.11.4/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \                ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n \
    \ File \"/opt/hostedtoolcache/Python/3.11.4/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: constant.hpp:\
    \ line -1: no such header\n"
  code: "#ifndef BANETTEGIN_SEGMENT_TREE_HPP_INCLUDED\n#define BANETTEGIN_SEGMENT_TREE_HPP_INCLUDED\n\
    \n#include <vector>\n\n#include \"constant.hpp\"\n\nnamespace BanetteGin {\n\n\
    template <class T>\nstruct segment_tree {\n    T n;\n    std::vector<T> node;\n\
    \    T ide = LINF;\n\n    segment_tree(std::vector<T> a) {\n        n = 1;\n \
    \       while (n < a.size()) n *= 2;\n        node.resize(2 * n - 1, ide);\n \
    \       for (T i = 0; i < a.size(); i++) node[(n - 1) + i] = a[i];\n        for\
    \ (T i = n - 2; i >= 0; i--) {\n            node[i] = monoid_operation(node[i\
    \ * 2 + 1], node[i * 2 + 2]);\n        }\n    }\n\n    T monoid_operation(T& a,\
    \ T& b) {\n        return min(a, b);\n    }\n\n    void update(T& p, T& x) {\n\
    \        p += n - 1;\n        node[p] = x;\n        while (p > 0) {\n        \
    \    p = (p - 1) / 2;\n            node[p] = monoid_operation(node[2 * p + 1],\
    \ node[2 * p + 2]);\n        }\n    }\n\n    T find(T& l, T& r) {\n        return\
    \ find_sub(l, r, 0, 0, n);\n    }\n\n    T find_sub(T& a, T& b, T& now, T& l,\
    \ T& r) {\n        if (b <= l || r <= a) return ide;\n        if (a <= l && r\
    \ <= b) return node[now];\n        T nl = find_sub(a, b, 2 * now + 1, l, (l +\
    \ r) / 2);\n        T nr = find_sub(a, b, 2 * now + 2, (l + r) / 2, r);\n    \
    \    return monoid_operation(nl, nr);\n    }\n};\n\n}  // namespace BanetteGin\n\
    \n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/data_structure/segment_tree.hpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/data_structure/segment_tree.hpp
layout: document
redirect_from:
- /library/src/data_structure/segment_tree.hpp
- /library/src/data_structure/segment_tree.hpp.html
title: src/data_structure/segment_tree.hpp
---
