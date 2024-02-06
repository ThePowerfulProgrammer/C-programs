#include "linkedListIterator.h"

template <class Type>
linkedListIterator<Type>::linkedListIterator()
{
    current = nullptr;
}

template <class Type>
linkedListIterator<Type>::linkedListIterator(nodeType<Type> *ptr)
{
    current = ptr;
}


