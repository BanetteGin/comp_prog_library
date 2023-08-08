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
  code: "#ifndef BANETTEGIN_LINE_HPP_INCLUDED\n#define BANETTEGIN_LINE_HPP_INCLUDED\n\
    \n#include \"equal.hpp\"\n#include \"point.hpp\"\n\nnamespace BanetteGin {\n\n\
    template <class T>\nstruct line {\n    T a, b, c;\n    line(point<T> p_, point<T>\
    \ q_)\n        : a(q_.y - p_.y), b(p_.x - q_.x), c(-p_.x * q_.y + q_.x * p_.y)\
    \ {\n        if (!equal(a, 0)) {\n            a = 1;\n            b /= a;\n  \
    \          c /= a;\n        } else if (!equal(b, 0)) {\n            b = 1;\n \
    \           c /= b;\n        }\n    }\n    line(point<T> p_, T m_)\n        :\
    \ a(m_), b(-1), c(p_.y - m_ * p_.x) {\n        if (!equal(a, 0)) {\n         \
    \   b /= a;\n            c /= a;\n            a = 1;\n        } else if (!equal(b,\
    \ 0)) {\n            c /= b;\n            b = 1;\n        }\n    }\n    line(T\
    \ a_, T b_, T c_)\n        : a(a_), b(b_), c(c_) {\n        if (!equal(a, 0))\
    \ {\n            b /= a;\n            c /= a;\n            a = 1;\n        } else\
    \ if (!equal(b, 0)) {\n            c /= b;\n            b = 1;\n        }\n  \
    \  }\n\n    bool operator==(const line& l) const noexcept {\n        return equal(this->a,\
    \ l.a) && equal(this->b, l.b) && equal(this->c, l.c);\n    }\n    bool operator!=(const\
    \ line& l) const noexcept {\n        return !equal(this->a, l.a) || !equal(this->b,\
    \ l.b) || !equal(this->c, l.c);\n    }\n};\n\n}  // namespace BanetteGin\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: src/geometry/line.hpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/geometry/line.hpp
layout: document
redirect_from:
- /library/src/geometry/line.hpp
- /library/src/geometry/line.hpp.html
title: src/geometry/line.hpp
---
