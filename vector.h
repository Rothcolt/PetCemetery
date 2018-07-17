#ifndef VECTOR_H
#define VECTOR_H

#include "shape.h"

/*! Default vector size. */
const int DFL_SIZE = 20;

/*! Approximates the STL vector. */
template<class Type>
class Vector {

/***************************************************************************************************/

private:

    int size_v;                                 /*! Vector size.         */
    Type* elem;                                 /*! Element pointer.     */
    int space;                                  /*! Size + free space.   */

/***************************************************************************************************/

public:

    /*! Vector class for storing shape objects.
     *  Calls upon shape.h for element type. */

    Vector();                                   /*! Default constructor.       */
    explicit Vector(int s);                     /*! Parameterized constructor. */

    Vector(const Vector&);                      /*! Copy constructor.          */
    Vector(Vector&&);                           /*! Move constructor.          */
    Vector& operator=(const Vector& rhs);       /*! Copy assignment operator.  */
    Vector& operator=(Vector&& rhs);            /*! Move assignment operator.  */
    ~Vector();                                  /*! Default denstructor.       */

    Type& operator[](int n);                    /*! Accessor: Return reference.     */
    const Type& operator[](int n) const;        /*! Accessor: Return reference.     */
    int size() const;                           /*! Accessor: Return current size.  */
    int capacity() const;                       /*! Accessor: Return current space. */

    void resize(int newsize);                   /*! Mutator: Change the size of the vector. */
    void push_back(Type new_elem);              /*! Mutator: Add an element to the vector.  */
    void reserve(int newalloc);                 /*! Mutator: Allocate more space to vector. */

/***************************************************************************************************/

// These functions were unable to be defined outside the header file.

    // Iterator alisases.
    using v_iterator = Type*;                                /* Aliased iterator.       */
    using const_iterator = const Type*;                      /* Aliased const iterator. */

    /** @brief Vector<type>::begin
     * This method will point to the first vector value.
     * @return &elem[0] Reference to beginning array element. */
    v_iterator begin() { return &elem[0]; }

    /** @brief Vector<type>::begin
     * This method will point to the first vector value.
     * @return &elem[0] Reference to beginning array element. */
    const_iterator begin() const { return &elem[0]; }

    /** @brief Vector<type>::end
     * This method will point to one after the last vector value.
     * @return &elem[size_v + 1] Reference to postfinal array element. */
    v_iterator end() { return &elem[size_v + 1]; }

    /** @brief Vector<type>::end
     * This method will point to one after the last vector value.
     * @return &elem[size_v + 1] Reference to postfinal array element. */
    const_iterator end() const { return &elem[size_v + 1]; }

    /** @brief Vector<type>::end
     * This method will insert new element v before p.
     * @return *this Reference to vector. */
    v_iterator insert(v_iterator p, const Type& v) {

        // Add new element to the array.
        p - 1 = v;

        return *this;
    }

    /** @brief Vector<type>::end
     * This method will remove element pointed to by p.
     * @param p Pointer to vector element.
     * @return *this Reference to vector. */
    v_iterator erase(v_iterator p) {

        // Release memory at p.
        delete p;

        return *this;
    }

/***************************************************************************************************/

};

#endif // VECTOR_H
