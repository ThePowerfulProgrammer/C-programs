#include <iostream>
#include <vector>
#include <queue>
#include <fstream>

using namespace std;

// Ashish Ramnath
// 11552859

// QUESTION TO AI
/*
Can you create a minimum spanning tree, assuming the path is network cable for a fibre company, such
that the cost is represented as a weight on the edge and implement Prim's algorithm, with a
time complexixty of O(n^2)?
).
*/


struct Edge {
    int destination;
    int weight;
};

class Graph {
private:
    int numVertices;
    std::vector<std::vector<Edge>> adjacencyList;

public:
    Graph(int numVertices);
    void addEdge(int source, int destination, int weight);
    void primMST();
};

Graph::Graph(int numVertices) {
    this->numVertices = numVertices;
    adjacencyList.resize(numVertices);
}

void Graph::addEdge(int source, int destination, int weight) {
    Edge edge;
    edge.destination = destination;
    edge.weight = weight;
    adjacencyList[source].push_back(edge);

    // If the graph is undirected, add the reverse edge as well
    edge.destination = source;
    adjacencyList[destination].push_back(edge);
}

void Graph::primMST() {
    std::vector<int> parent(numVertices, -1);
    std::vector<int> key(numVertices, INT_MAX);
    std::vector<bool> inMST(numVertices, false);

    // Create a min-heap priority queue
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;

    // Start with the first vertex as the root
    int root = 0;
    key[root] = 0;
    pq.push(std::make_pair(0, root));

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        inMST[u] = true;

        for (const Edge& edge : adjacencyList[u]) {
            int v = edge.destination;
            int weight = edge.weight;

            if (!inMST[v] && weight < key[v]) {
                parent[v] = u;
                key[v] = weight;
                pq.push(std::make_pair(key[v], v));
            }
        }
    }

    // Everything below is my CODE
    // ChatGPT has not beaten me in leetcode ;)
    // Print the minimum spanning tree
    /*
    std::cout << "Edge \tWeight\n";
    for (int i = 1; i < numVertices; ++i) {
        std::cout << parent[i] << " - " << i << "\t" << key[i] << std::endl;
    }*/

    // I realise that weight is not needed :-)
    cout << "Minimum Spanning Tree using  Prim's Algorithm: \n" << endl;
    for (int i = 1; i<numVertices;++i)
        {
            cout << parent[i] << " - " << i << "\n" << endl;
        }
}



// Function creates MST and prints out required DATA.
void createMST(string thePath) {
    // Open text file and read data into an array
    // Array will be used to create MST
    std::fstream myFile(thePath + "datatest2.txt", std::ios_base::in);

    // Should check if file exists above actually LOL
    if (myFile.is_open()) {
        int numVertices;

        myFile >> numVertices;
        Graph graph(numVertices);

        int numEdges;
        myFile >> numEdges;

        // Skip the remaining lines until the data starts, line 1 and 2 are essentially fluff data
        std::string line;
        std::getline(myFile, line);

        for (int i = 0; i < numEdges; ++i) {
            int source, destination, weight;
            myFile >> source >> destination >> weight;
            graph.addEdge(source, destination, weight);
        }

        myFile.close();

        // Find the minimum spanning tree
        graph.primMST();
    }
}


int main() {
    // When testing code, ENTER THE FILE PATH AS A PARAMETER TO THE FUNCTION createMST()
    // I assume as long as I use the set path, its right
    createMST("C:\\data\\");
    return 0;
}
