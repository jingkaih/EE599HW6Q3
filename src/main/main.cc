#include <iostream>
#include "src/lib/solution.h"



int main() {
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
    std::vector<int> output = mygraph.DFS(4);
    for(auto x : output)
    std::cout << x <<' ';
    return EXIT_SUCCESS;
}