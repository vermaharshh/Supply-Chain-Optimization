// Dijkstra's Algorithm in C++

#include <iostream>
#include <vector>

#define INT_MAX 10000000

using namespace std;

void DijkstrasTest();



class Node;
class Edge;

vector<Node*> nodes;
vector<Edge*> edges;

class Node {
   public:
  Node(string id)
    : id(id), previous(NULL), distanceFromStart(INT_MAX) {
    nodes.push_back(this);
  }

   public:
  string id;
  Node* previous;
  int distanceFromStart;
};

class Edge {
   public:
  Edge(Node* node1, Node* node2, int distance)
    : node1(node1), node2(node2), distance(distance) {
    edges.push_back(this);
  }
  bool Connects(Node* node1, Node* node2) {
    return (
      (node1  == this->node1 &&
       node2 == this->node2) ||
      (node1 == this->node2 &&
       node2 == this->node1));
  }

   public:
  Node* node1;
  Node* node2;
  int distance;
};



int main() {
    int number_of_locations;
    string name_of_location;
    
    cin>>name_of_location;
    cout<<name_of_location;
    Node* Factory=new Node("FActory");
    
    cout<<Factory->id;

};