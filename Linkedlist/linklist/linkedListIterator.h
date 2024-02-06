#ifndef LINKEDLISTITERATOR_H
#define LINKEDLISTITERATOR_H

template <class Type>
struct nodeType
{
    Type info; // data
    nodeType<Type> *link;  // address in memory
};

template <class Type>
class linkedListIterator
{
    public:
        linkedListIterator();
        linkedListIterator(nodeType<Type> *ptr);
        Type operator*();
        linkedListIterator<Type> operator++();
        bool operator ==(const linkedListIterator<Type> &right) const;
        bool operator !=(const linkedListIterator<Type> & right) const;
    protected:
        int count;
        nodeType<Type> *first;
        nodeType<Type> *last;

    private:
        nodeType<Type> *current;
};

#endif // LINKEDLISTITERATOR_H
