#include "vector.h"


//! Default constructor.
template<class Type>
Vector<Type>::Vector() {

    // Declare base elements.
    elem = new Type[DFL_SIZE];
    size_v = 0;
    space = DFL_SIZE - size_v;

    return;
}

//! Parameterized constructor.
template<class Type>
Vector<Type>::Vector(int s) {

    // Declare base elements.
    elem = new Type[s];
    size_v = 0;
    space = s - size_v;

    return;
}

//! Copy constructor.
template<class Type>
Vector<Type>::Vector(const Vector<Type>& source)
    : size_v { source.size_v }, elem { new Type[source.size_v] }, space { source.space } {

    // Copy non-dynamic elements.
    size_v = source.size_v;
    space = source.space;

    // Copy all elements individually.
    for (int i = 0; i < size_v; i++) {
        elem[i] = source.elem[i];
    }

    return;
}

//! Move constructor.
template<class Type>
Vector<Type>::Vector(Vector<Type>&& source)
    : size_v { source.size_v }, elem { source.elem }, space { source.space } {

    // Release/reset source elements.
    source.size_v = 0;
    source.elem = NULL;
    source.space = 0;

    return;
}

    //! Copy assignment operator.
    template<class Type>
    Vector<Type>& Vector<Type>::operator=(const Vector& rhs) {
        return;
    }

    //! Move assignment operator.
    template<class Type>
    Vector<Type>& Vector<Type>::operator=(Vector&& rhs) {
        return;
    }

//! Default destructor.
template<class Type>
Vector<Type>::~Vector() {
    delete[] elem;

    return;
}

    //! Accessor: Return reference.
    template<class Type>
    Type& Vector<Type>::operator[] (int n) {
        return elem[n];
    }

    //! Accessor: Return reference.
    template<class Type>
    const Type& Vector<Type>::operator[] (int n) {
        return elem[n];
    }

//! Accessor: Return current size.
template<class Type>
int Vector<Type>::size() const {
    return size;
}

//! Accessor: Return current space.
template<class Type>
int Vector<Type>::capacity() const {
    return space;
}

//! Mutator: Change the size of the vector.
template<class Type>
void Vector<Type>::resize(int newsize)  {
    size = newsize;

    return;
}

//! Mutator: Add an element to the vector.
template<class Type>
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
template<class Type>
void Vector<Type>::reserve(int newalloc) {
    space = space + newalloc;

    return;
}

    //! Templated iterator.
    template<class Type>
    using Vector<Type>::iterator = Type*;

    //! Constant iterator.
    template<class Type>
    using Vector<Type>::const_iterator = const Type*;

    //! Points to first element.
    template<class Type>
    Vector<Type>::iterator begin() {
        return;
    }

    //! Points to first element.
    template<class Type>
    Vector<Type>::const_iterator begin() const {
        return;
    }

    //! Points to one element beyond last.
    template<class Type>
    Vector<Type>::iterator end() {
        return;
    }

    //! Points to one element beyond last.
    template<class Type>
    Vector<Type>::const_iterator end() const {
        return;
    }

    //! Insert new element v before p.
    template<class Type>
    Vector<Type>::iterator insert(iterator p, const Type& v) {
        return;
    }

    //! Remove element pointed to by p.
    template<class Type>
    Vector<Type>::iterator erase(iterator p) {
        return;
    }
