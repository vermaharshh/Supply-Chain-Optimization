#include <iostream>
#include <vector>

#define INT_MAX 10000000

using namespace std;

vector<Node*> nodes;
vector<Edge*> edges;

class Node {
   public:
  Node(char id)
    : id(id), previous(NULL), distanceFromStart(INT_MAX) {
    nodes.push_back(this);
  }

   public:
  char id;
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

///////////////////
void DijkstrasTest() {
//   Node* a = new Node('a');
//   Node* b = new Node('b');
//   Node* c = new Node('c');
//   Node* d = new Node('d');
//   Node* e = new Node('e');
//   Node* f = new Node('f');
//   Node* g = new Node('g');

//   Edge* e1 = new Edge(a, c, 1);
//   Edge* e2 = new Edge(a, d, 2);
//   Edge* e3 = new Edge(b, c, 2);
//   Edge* e4 = new Edge(c, d, 1);
//   Edge* e5 = new Edge(b, f, 3);
//   Edge* e6 = new Edge(c, e, 3);
//   Edge* e7 = new Edge(e, f, 2);
//   Edge* e8 = new Edge(d, g, 1);
//   Edge* e9 = new Edge(g, f, 1);

  
  int number_of_locations, number_of_edges , weight,distanceFromStart;
  char start,name_of_location,location1,location2,route,end;
  
  cout<< "Enter number of locations:-\n ";
  cin>>number_of_locations;
  cout<<"Enter Number of routes:-\n";
  cin>>number_of_edges;
  cout<<"Please be careful when entering the locations and edge values.\n";
  cout<<"________________________________________\n";
  cout<<"Enter the locations below: \n";
  for (int i=0;i<number_of_locations;i++){
      cout<<"Enter the name of the location: \n";
      cin>>name_of_location;
      //Node* const(name_of_location) = new Node(name_of_location);
  };
  cout<<"________________________________________\n";
  cout<<"Enter the routes below: \n";
  for (int i=0;i<number_of_locations;i++){
      cout<<"Enter the name of the route: \n";
      cin>>route;
      cout<<"Enter the start location of route: \n";
      cin>>location1;
      cout<<"Enter the destination location of route: \n";
      cin>>location2;
      cout<<"Enter the distance of route: \n";
      cin>>weight;
      //Edge* const(route) = new Edge(location1, location2, weight);
  };
  cout<<"________________________________________\n";
  cout<<"Enter Start Location:\n";
  cin>>start;
  cout<<"Enter Destination Location";
  cin>>end;
  
  
  
  //a->distanceFromStart = 0;  // set start node
  




}