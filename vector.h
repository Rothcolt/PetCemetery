#ifndef VECTOR_H
#define VECTOR_H

#include "shape.h"

/*! Default vector size. */
const int DFL_SIZE = 20;

/*! Approximates the STL vector. */
template<class Type>
class Vector {

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

    Type& operator[] (int n);                   /*! Accessor: Return reference.     */
    const Type& operator[] (int n);             /*! Accessor: Return reference.     */
    int size() const;                           /*! Accessor: Return current size.  */
    int capacity() const;                       /*! Accessor: Return current space. */

    void resize(int newsize);                   /*! Mutator: Change the size of the vector. */
    void push_back(double d);                   /*! Mutator: Add an element to the vector.  */
    void reserve(int newalloc);                 /*! Mutator: Allocate more space to vector. */

    using iterator = Type*;                     /*! Templated iterator. */
    using const_iterator = const Type*;         /*! Constant iterator.  */

    iterator begin();                           /*! Points to first element. */
    const_iterator begin() const;               /*! Points to first element. */

    iterator end();                             /*! Points to one element beyond last. */
    const_iterator end() const;                 /*! Points to one element beyond last. */

    iterator insert(iterator p, const Type& v); /*! Insert new element v before p.  */
    iterator erase(iterator p);                 /*! Remove element pointed to by p. */


private:

    int size_v;                                 /*! Vector size.         */
    Type* elem;                                 /*! Element pointer.     */
    int space;                                  /*! Size + free space.   */

};

#endif // VECTOR_H
