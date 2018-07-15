#include "vector.h"


//! Default constructor.
Vector<Type>::Vector() {
    elem = new Type[DFL_SIZE];
    size_v = 0;
    space = DFL_SIZE - size_v;

    return;
}

//! Parameterized constructor.
explicit Vector<Type>::Vector(int s) {
    elem = new Type[s];
    size_v = 0;
    space = s - size_v;

    return;
}

    //! Copy constructor.
    Vector<Type>::Vector(const vector& source)
        : size_v { source.size_v }, elem { new Type[source.size_v] }, space { source.space } {

        size_v = source.size_v;

        return;
    }

//! Move constructor.
Vector<Type>::Vector(vector&& source)
: size_v { source.size_v }, elem { source.elem }, space { source.space } {

    source.size_v = 0;
    source.elem = NULL;
    source.space = 0;

    return;
}

    //! Copy assignment operator.
    Vector<Type>::Vector& operator=() {
        return;
    }

    //! Move assignment operator.
    Vector<Type>::Vector& operator=() {
        return;
    }

//! Default destructor.
Vector<Type>::~Vector() {
    delete[] elem;

    return;
}

    //! Accessor: Return reference.
    Type& Vector<Type>::operator[] (int n) {
        return elem[n];
    }

    //! Accessor: Return reference.
    const Vector<Type>::Type& operator[] (int n) {
        return elem[n];
    }

//! Accessor: Return current size.
int Vector<Type>::size() const {
    return size;
}

//! Accessor: Return current space.
int Vector<Type>::capacity() const {
    return space;
}

//! Mutator: Change the size of the vector.
void Vector<Type>::resize(int newsize)  {
    size = newsize;

    return;
}

//! Mutator: Add an element to the vector.
void Vector<Type>::push_back(Type new_elem) {

    // ERROR: No more room in vector.
    if (space == 0) {
        return;
    }

    // Add new element to the array.
    elem[size] = new_elem;
    size_v++;
    space--;

    return;
}

//! Mutator: Allocate more space to vector.
void Vector<Type>::reserve(int newalloc) {
    space = space + newalloc;

    return;
}

    //! Templated iterator.
    using Vector<Type>::iterator = Type*;

    //! Constant iterator.
    using Vector<Type>::const_iterator = const Type*;

    //! Points to first element.
    Vector<Type>::iterator begin() {
        return;
    }

    //! Points to first element.
    Vector<Type>::const_iterator begin() const {
        return;
    }

    //! Points to one element beyond last.
    Vector<Type>::iterator end() {
        return;
    }

    //! Points to one element beyond last.
    Vector<Type>::const_iterator end() const {
        return;
    }

    //! Insert new element v before p.
    Vector<Type>::iterator insert(iterator p, const T& v) {
        return;
    }

    //! Remove element pointed to by p.
    Vector<Type>::iterator erase(iterator p) {
        return;
    }
