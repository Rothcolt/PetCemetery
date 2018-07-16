#include "vector.h"


/*! Default constructor.
 *
 * No parameters used.
 */
template<class Type>
Vector<Type>::Vector() {

    // Declare base elements.
    elem = new Type[DFL_SIZE];
    size_v = 0;
    space = DFL_SIZE - size_v;

    return;
}


/*! Parameterized constructor.
 *
 * int s: Size of the new vector.
 */
template<class Type>
Vector<Type>::Vector(int s) {

    // Declare base elements.
    elem = new Type[s];
    size_v = 0;
    space = s - size_v;

    return;
}


/*! Copy constructor.
 *
 * Vector& source: The vector object being copied.
 */
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


/*! Move constructor.
 *
 * Vector&& source: The vector object being copied.
 */
template<class Type>
Vector<Type>::Vector(Vector<Type>&& source)
    : size_v { source.size_v }, elem { source.elem }, space { source.space } {

    // Release/reset source elements.
    source.size_v = 0;
    source.elem = NULL;
    source.space = 0;

    return;
}


/*! Copy assignment operator.
 *
 * Vector& rhs: The vector to the right of the operator.
 */
template<class Type>
Vector<Type>& Vector<Type>::operator=(const Vector& rhs) {

    // Create temporary copy (copy constructor).
    Vector temp(rhs);

    // Copy static elements.
    size_v = temp.size_v;
    space = temp.space;

    // Swap pointed-to data members.
    elem = temp.elem;

    // Release temporary vector.
    delete[] temp.elem;
    temp.size_v = 0;
    temp.space = 0;

    return *this;
}


/*! Move assignment operator.
 *
 * Vector& rhs: The vector to the right of the operator.
 */
template<class Type>
Vector<Type>& Vector<Type>::operator=(Vector&& rhs) {

    // LHS and RHS can't be equal.
    if (this != rhs) {
        delete[] elem;

        // Assign members.
        elem = rhs.elem;
        size_v = rhs.size_v;
        space = rhs.space;

        // Release RHS.
        rhs.size_v = 0;
        rhs.space = 0;
        delete[] rhs.elem;
    }

    return *this;
}


/*! Default destructor.
 *
 * No parameters used.
 */
template<class Type>
Vector<Type>::~Vector() {

    delete[] elem;

    return;
}


/*! Accessor: Return reference.
 *
 * int n: Index of the element being returned.
 */
template<class Type>
Type& Vector<Type>::operator[](int n) {

    return *this->elem[n];
}


/*! Accessor: Return reference.
 *
 * int n: Index of the element being returned.
 */
template<class Type>
const Type& Vector<Type>::operator[](int n) const {

    return *this->elem[n];
}


/*! Accessor: Return current size.
 *
 * No parameters used.
 */
template<class Type>
int Vector<Type>::size() const {

    return size;
}


/*! Accessor: Return current space.
 *
 * No parameters used.
 */
template<class Type>
int Vector<Type>::capacity() const {

    return space;
}


/*! Mutator: Change the size of the vector.
 *
 * int newsize: New size of the vector.
 */
template<class Type>
void Vector<Type>::resize(int newsize)  {

    size = newsize;

    return;
}


/*! Mutator: Add an element to the vector.
 *
 * Type new_elem: Element to be pushed to vector.
 */
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


/*! Mutator: Allocate more space to vector.
 *
 * int newalloc: Space to be "appended" to vector.
 */
template<class Type>
void Vector<Type>::reserve(int newalloc) {

    // Increase space to "reserve" memory.
    space = space + newalloc;

    return;
}


//! Templated iterator.
/* template<class Type>
using Vector<Type>::iterator = Type*; */


//! Constant iterator.
/* template<class Type>
using Vector<Type>::const_iterator = const Type*; */


    //! Points to first element.
/* template<class Type>
Vector<Type>::iterator begin() {

    return;
} */


    //! Points to first element.
/* template<class Type>
Vector<Type>::const_iterator begin() const {
    return;
} */


//! Points to one element beyond last.
/* template<class Type>
Vector<Type>::iterator end() {
    return;
} */


//! Points to one element beyond last.
/* template<class Type>
Vector<Type>::const_iterator end() const {
    return;
} */


//! Insert new element v before p.
/* template<class Type>
Vector<Type>::iterator insert(iterator p, const Type& v) {
    return;
} */


//! Remove element pointed to by p.
/* template<class Type>
Vector<Type>::iterator erase(iterator p) {
    return;
} */
