#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <map>
#include <set>
#include <stack>
class Graph {
public:
  Graph(std::map<int, std::set<int>> &vertices):v_(vertices) {}
  std::map<int, std::set<int>> v_;
  std::vector<int> DFS(int);

};


#endif