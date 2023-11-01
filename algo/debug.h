#include <bits/stdc++.h>
using namespace std;

template <typename k, typename v>
ostream &operator<<(ostream &os, const pair<k, v> &p);
template <typename t> ostream &operator<<(ostream &os, const vector<t> &vec);
template <typename k, typename v>
ostream &operator<<(ostream &os, const map<k, v> &m);
template <typename k, typename v>
ostream &operator<<(ostream &os, const unordered_map<k, v> &m);
template <typename t> ostream &operator<<(ostream &os, const set<t> &s);
template <typename t>
ostream &operator<<(ostream &os, const unordered_set<t> &s);

template <typename k, typename v>
ostream &operator<<(ostream &os, const pair<k, v> &p) {
  os << "(" << p.first << ", " << p.second << ")";
  return os;
}

template <typename t> ostream &operator<<(ostream &os, const vector<t> &vec) {
  os << "[";
  for (size_t i = 0; i < vec.size(); ++i) {
    if (i > 0)
      os << ", ";
    os << vec[i];
  }
  os << "]";
  return os;
}

template <typename t>
ostream &operator<<(ostream &os, const vector<vector<t>> &vec) {
  os << "[\n";
  for (size_t i = 0; i < vec.size(); ++i) {
    os << "  " << vec[i];
    if (i > 0)
      os << ", ";
    os << '\n';
  }
  os << "]";
  return os;
}

template <typename k, typename v>
ostream &operator<<(ostream &os, const map<k, v> &m) {
  os << "{";
  for (const auto &p : m) {
    os << p.first << ": " << p.second << ", ";
  }
  os << "}";
  return os;
}

template <typename k, typename v>
ostream &operator<<(ostream &os, const unordered_map<k, v> &m) {
  os << "{";
  for (const auto &p : m) {
    os << p.first << ": " << p.second << ", ";
  }
  os << "}";
  return os;
}

template <typename t> ostream &operator<<(ostream &os, const set<t> &s) {
  int i = 0;
  os << "{";
  for (const auto &e : s) {
    if (i > 0)
      os << ", ";
    os << e;
    i++;
  }
  os << "}";
  return os;
}

template <typename t>
ostream &operator<<(ostream &os, const unordered_set<t> &s) {
  int i = 0;
  os << "{";
  for (const auto &e : s) {
    if (i > 0)
      os << ", ";
    os << e;
    i++;
  }
  os << "}";
  return os;
}

template <typename... Ts>
void debug_out(const std::string_view names, const Ts &...ts) {
  size_t start = 0;

  const auto print_single = [&names](size_t start, const auto &value) {
    const auto end = names.find(',', start + 1);
    std::cerr << names.substr(start, end - start) << " = " << value << '\n';

    return end + 2;
  };

  ((start = print_single(start, ts)), ...);
}

#define dbg(...) debug_out(#__VA_ARGS__, __VA_ARGS__)
