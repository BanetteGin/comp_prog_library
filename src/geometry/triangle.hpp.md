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
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: equal.hpp: line\
    \ -1: no such header\n"
  code: "#ifndef BANETTEGIN_TRIANGLE_HPP_INCLUDED\n#define BANETTEGIN_TRIANGLE_HPP_INCLUDED\n\
    \n#include \"equal.hpp\"\n#include \"point.hpp\"\n#include \"segment.hpp\"\n\n\
    namespace BanetteGin {\n\ntemplate <class T>\nstruct triangle {\n    point<T>\
    \ point_a, point_b, point_c;\n    T length_a, length_b, length_c;\n    T angle_a,\
    \ angle_b, angle_c;\n    triangle(point<T> point_a_, point<T> point_b_, point<T>\
    \ point_c_)\n        : point_a(point_a_), point_b(point_b_), point_c(point_c_)\
    \ {\n        length_a = segment(point_b, point_c).length();\n        length_b\
    \ = segment(point_c, point_a).length();\n        length_c = segment(point_a, point_b).length();\n\
    \        angle_a = acos((pow(length_b, 2) + pow(length_c, 2) - pow(length_a, 2))\
    \ / (2 * length_b * length_c));\n        angle_b = acos((pow(length_c, 2) + pow(length_a,\
    \ 2) - pow(length_b, 2)) / (2 * length_c * length_a));\n        angle_c = acos((pow(length_a,\
    \ 2) + pow(length_b, 2) - pow(length_c, 2)) / (2 * length_a * length_b));\n  \
    \  };\n    std::pair<point<T>, T> circumcenter() const noexcept {\n        point<T>\
    \ o = (point_a * sin(2 * angle_a) + point_b * sin(2 * angle_b) + point_c * sin(2\
    \ * angle_c)) / (sin(2 * angle_a) + sin(2 * angle_b) + sin(2 * angle_c));\n  \
    \      T r = length_a / sin(angle_a) / 2;\n        return std::make_pair(o, r);\n\
    \    }\n};\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/geometry/triangle.hpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/geometry/triangle.hpp
layout: document
redirect_from:
- /library/src/geometry/triangle.hpp
- /library/src/geometry/triangle.hpp.html
title: src/geometry/triangle.hpp
---
