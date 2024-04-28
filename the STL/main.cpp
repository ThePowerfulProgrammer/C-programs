// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <iterator>
#include <algorithm>
#include <set>
#include <functional>

using namespace std;

int sum(int x, int y) 
{
    return x + y;
}

template<typename T>
T sum(T x, T y) 
{
    return x + y;
}


template <typename T>
class Node 
{
    public:
        T data; // the data in the node
        Node<T> *next; // ptr to the next node
        
        Node(T info): data(info), next(nullptr) {};
};

// the linked list 
template <class T>
class LinkedList 
{
    private:
        Node<T> *head;
        Node<T> *tail;
        
    public:
        LinkedList() : head(nullptr), tail(nullptr) {};
        
        void add(T info) 
        {
            if (head==nullptr) 
            {
                head = new Node<T>(info);
                tail = head;
            }
            else 
            {
                Node<T> *temp = new Node<T>(info);
                tail->next = temp;
                tail = temp;
            }
        }
        
        // print method 
        void printList() 
        {
            Node<T> *current =  head;
            while (current != nullptr) 
            {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
};


bool even(const int& value) { return (value % 2) == 0; }

int main() {
    // Write C++ code here
    std::cout << "C++ templates and their power" << std::endl;
    
    // non-template
    std::cout << sum(1,2) << std::endl;
    std::cout << sum(1.5, 1.5) << std::endl;

    // template functions
    std::cout << sum<int>(2,4) << std::endl;
    std::cout << sum<float>(2.5, 3.5) << std::endl;
    std::cout << sum<string>("hello ", "world") << std::endl;
    
    LinkedList<int> myList;
    myList.add(32);
    myList.add(42);
    myList.add(17);

    myList.printList();  // Output: 32 42 17

    LinkedList<string> myStringList;
    myStringList.add("Hello ");
    myStringList.add("World");

    myStringList.printList();

    cout << endl;

    string stringList[2] = {"Hello", "world"};
    cout << stringList[0] << " " << stringList[1] << endl; 

    vector<int> numbers = {1,2,3,4,5};
    vector<int>::iterator numbersIterator;
    for (numbersIterator = numbers.begin(); numbersIterator != numbers.end(); ++numbersIterator) 
    {
        cout << *numbersIterator << endl;
    }
    cout << endl << endl;


    deque<int> Deck; // default ctor
    deque<int> yugiDeck({10,20,30,40,50}); // ctor with params

    deque<int>::iterator DeckIterator;
    for (DeckIterator = yugiDeck.begin(); DeckIterator != yugiDeck.end(); ++DeckIterator) 
    {
        cout << *DeckIterator << endl;
    }

    deque<int> copyDeck = yugiDeck;
    for (DeckIterator = copyDeck.begin(); DeckIterator != copyDeck.end(); ++DeckIterator) 
    {
        cout << *DeckIterator << endl;
    }

    vector<int> swappedVector({18,21,69,100,420});

    numbers.swap(swappedVector);
    
    for (numbersIterator = numbers.begin(); numbersIterator != numbers.end(); ++numbersIterator) 
    {
        cout << *numbersIterator << endl;
    }
    cout << endl << endl;

    if (numbers != swappedVector) 
    {
        cout << "true" << endl;
    } 


    deque<int> intDeck = {13,75,28,35};
    ostream_iterator<int> screen(cout, " ");
    copy(numbers.begin(), numbers.end(), screen);
    cout << endl;

    list<int> List1({1,2,3});
    list<int> List2({4,5,6});

    List1.remove_if(even);
    for (int i: List1) 
    {
        cout << "pos " << i << endl;
    }    


    cout << "Now let us consider associative containers " << endl;
    // Let us now talk about assoiciate containers
    set<int> mySet; // default ctor , mySet is empty
    set<int, greater<int>> anotherSet; // overload ctor, now comparison is via greater 


    mySet.insert(16);
    mySet.insert(12);
    mySet.insert(1);

    copy(mySet.begin(), mySet.end(), screen);
    cout << endl;

    anotherSet.insert(1);
    anotherSet.insert(2);
    anotherSet.insert(4);
    anotherSet.insert(15);
    anotherSet.insert(100);

    cout << "anotherSet implementing a greater sorting algorithm " << endl;
    copy(anotherSet.begin(), anotherSet.end(), screen);
    cout << endl;
    // algorithims 

    vector<int> nums({1,2,3,4,5,6,7,8,8,9,10,11,12,13,14});
    
    vector<int>::iterator it = adjacent_find(nums.begin(),nums.end());

    if (it != nums.end()) 
    {
        cout << "pos of first identical element: " << *it << endl;
    }

    return 0;
}