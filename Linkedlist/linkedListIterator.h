#ifndef LINKEDLISTITERATOR_H
#define LINKEDLISTITERATOR_H

template <class Type>
struct nodeType
{
    int info; // data
    nodeType<Type> *link; // pointer to next info
};

template <class Type>
class linkedListIterator
{
    public:
        linkedListIterator();
        // ctor
        // postCondition: current = nullptr;

        linkedListIterator(nodeType<Type> *ptr);
        // ctor with 1 param
        // postCondition: current = ptr;

        Type operator*();
        // overload derefrencing operator
        // postCondition: returns info at node

        linkedListIterator<Type> operator++();
        // overload pre increment operator
        // postCondition: advanced to next node

        bool operator==(const linkedListIterator<Type>& right) const;
        // overload == operator
        // postCondtion: Returns true if left == right

        bool operator !=(const linkedListIterator<Type> &right) const;
        // overload !=
        // postCondtion: return true if left != right



    protected:

    private:
        nodeType<Type> *current;
};

#endif // LINKEDLISTITERATOR_H
