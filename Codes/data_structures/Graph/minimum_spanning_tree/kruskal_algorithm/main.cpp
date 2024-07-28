#include <gtest/gtest.h>

#include <vector>

#include "kruskal_algorithm.h"

TEST(KruskalAlgorithmTest, BasicTest) {
  int vertexNum = 4;
  Graph g(vertexNum);
  g.addEdge(0, 1, 10);
  g.addEdge(0, 2, 6);
  g.addEdge(0, 3, 5);
  g.addEdge(1, 3, 15);
  g.addEdge(2, 3, 4);

  std::vector<Edge> ans = g.kruskalMST();
  int totalWeight = 0;
  for (const auto& edge : ans) {
    totalWeight += edge.weight;
  }
  ASSERT_EQ(totalWeight, 19);
}