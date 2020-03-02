#include "solution.h"

std::vector<int> Graph::DFS(int root)
{
  std::vector<bool> visited_ (v_.size(), false);
  int current = root;
  std::stack<int> stk;
  std::vector<int> result;
  stk.push(current);
  visited_[root] = true;//push the root, so that we can successfully go into the loop.

  while(!stk.empty())
  {
    current = stk.top();
    stk.pop();
    result.push_back(current);//visit the top of the stack then explore his adjacent vertices

    for(auto it = v_.at(current).begin(); it != v_.at(current).end(); it++)
    {
      if(visited_[*it] == false)//push the adjacent vertices into stack and mark them as visited
      {
        stk.push(*it);
        visited_[*it] = true;
      }
    }
  }
  return result;
}

