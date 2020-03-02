#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(DFSShould, DoDepthFirstSearch) {
  std::map<int, std::set<int>> vertices{
  {0, {1, 2, 5}},
  {1, {0, 2, 3}},
  {2, {0, 1, 3}},
  {3, {1, 2, 4, 6}},
  {4, {3}},
  {5, {0}},
  {6, {3}}
  };
  Graph mygraph(vertices);
  std::vector<int> actual = mygraph.DFS(0);
  std::vector<int> expected = {0,5,2,3,6,4,1};
  EXPECT_EQ(expected, actual);
}