#include "vector.h"


/** @brief Vector<Type>::Vector
 * Generates a new vector object. */
template<class Type>
Vector<Type>::Vector() {

    // Declare base elements.
    elem = new Type[DFL_SIZE];
    size_v = 0;
    space = DFL_SIZE - size_v;

    return;
}



/** @brief Vector<Type>::Vector
 * Generates a new vector object, with parameters. */
template<class Type>
Vector<Type>::Vector(int s) {

    // Declare base elements.
    elem = new Type[s];
    size_v = 0;
    space = s - size_v;

    return;
}


/** @brief Vector<Type>::Vector
 * Copy constructor for the vector class object.
 *
 * @param source Vector object to be copied. */
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



/** @brief Vector<Type>::Vector
 * Move constructor for the vector class object.
 *
 * @param source Vector object to be copied. */
template<class Type>
Vector<Type>::Vector(Vector<Type>&& source)
    : size_v { source.size_v }, elem { source.elem }, space { source.space } {

    // Release/reset source elements.
    source.size_v = 0;
    source.elem = NULL;
    source.space = 0;

    return;
}


/** @brief Vector<Type>::operator=
 * Copy assignment operator for the vector class object.
 *
 * @param rhs Vector object to the right of the operator.
 * @return *this A pointer to the newly-modified object. */
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


/** @brief Vector<Type>::operator=
 * Move assignment operator for the vector class object.
 *
 * @param rhs Vector object to the right of the operator.
 * @return *this A pointer to the newly-modified object. */
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


/** @brief Vector<Type>::operator=
 * Default destructor for the vector class object. */
template<class Type>
Vector<Type>::~Vector() {

    delete[] elem;

    return;
}


/** @brief Vector<type>::operator[]
 * This method will return a reference to an indexed array element.
 *
 * @param n Index of the array element to be returned.
 *
 * @return *this->elem[n] Reference to indexed array element. */
template<class Type>
Type& Vector<Type>::operator[](int n) {

    return *this->elem[n];
}


/** @brief Vector<type>::operator[]
 * This method will return a value from an indexed array element.
 *
 * @param n Index of the array element to be returned.
 *
 * @return *this->elem[n] Value of indexed array element. */
template<class Type>
const Type& Vector<Type>::operator[](int n) const {

    return this->elem[n];
}


/** @brief Vector<type>::size
 * This method will return the size of the vector array.
 *
 * @return size Array size. */
template<class Type>
int Vector<Type>::size() const {

    return size;
}


/** @brief Vector<type>::space
 * This method will return the remaining space in the vector array.
 *
 * @return space Remaining space. */
template<class Type>
int Vector<Type>::capacity() const {

    return space;
}


/** @brief Vector<type>::newsize
 * This method will modify the remaining space in the vector.
 *
 * @param newsize New vector size. */
template<class Type>
void Vector<Type>::resize(int newsize)  {

    size = newsize;

    return;
}


/** @brief Vector<type>::push_back
 * This method will add a new element to the vector.
 *
 * @param new_elem Element to be added. */
template<class Type>
void Vector<Type>::push_back(Type new_elem) {

    // ERROR: No more room in vector.
    if (space == 0) {
        return;
    }

    // Add new element to the array.
    elem[size_v] = new_elem;
    size_v++;
    space--;

    return;
}


/** @brief Vector<type>::reserve
 * This method will allocate space to the vector object.
 *
 * @param newalloc Space to be reserved. */
template<class Type>
void Vector<Type>::reserve(int newalloc) {

    // Increase space to "reserve" memory.
    space = space + newalloc;

    return;
}


//! Aliased iterator.
/* template<class Type>
using Vector<Type>::iterator = Type*; */


//! Aliased iterator.
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
