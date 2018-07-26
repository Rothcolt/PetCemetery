#ifndef VECTOR_H
#define VECTOR_H

#include <assert.h>
#include "shape.h"

/* Default vector size. */
const int DFL_SIZE = 20;

/* Approximates the STL vector. */
template<class Type>
class Vector {

    /***************************************************************************************************/

private:

    int size_v;                                 /* Vector size.         */
    Type* elem;                                 /* Element pointer.     */
    int space;                                  /* Size + free space.   */

    /***************************************************************************************************/

public:

    /* Vector class for storing shape objects.
     * Calls upon shape.h for element type. */

    /** @brief Vector<Type>::Vector
     * Generates a new vector object. */
    Vector()
    {
        // Declare base elements.
        elem = new Type[DFL_SIZE];
        size_v = 0;
        space = DFL_SIZE - size_v;

        for(int i = 0; i < DFL_SIZE; i++)
        {
            elem[i] = Type();
        }
    }

    /** @brief Vector<Type>::Vector
     * Generates a new vector object, with parameters. */
    explicit Vector(int s)
    {
        // Declare base elements.
        elem = new Type[s];
        size_v = 0;
        space = s - size_v;

        for(int i =0; i < DFL_SIZE; i++)
        {
            elem[i] = Type();
        }
    }

    /** @brief Vector<Type>::Vector
     * Copy constructor for the vector class object.
     *
     * @param source Vector object to be copied. */
    Vector(const Vector<Type>& source)
        : size_v { source.size_v }, elem { new Type[source.size_v] }, space { source.space }
    {
        // Copy non-dynamic elements.
        size_v = source.size_v;
        space = source.space;

        // Copy all elements individually.
        for (int i = 0; i < size_v; i++)
        {
            elem[i] = source.elem[i];
        }
    }

    /** @brief Vector<Type>::Vector
     * Move constructor for the vector class object.
     *
     * @param source Vector object to be copied. */
    Vector(Vector<Type>&& source)
        : size_v { source.size_v }, elem { source.elem }, space { source.space }
    {
        // Release/reset source elements.
        source.size_v = 0;
        source.elem = NULL;
        source.space = 0;
    }

    /** @brief Vector<Type>::operator=
     * Copy assignment operator for the vector class object.
     *
     * @param rhs Vector object to the right of the operator.
     * @return *this A pointer to the newly-modified object. */
    Vector<Type>& operator=(const Vector& rhs)
    {
     if(elem != NULL)
        {
            delete[] elem;
        }

        elem = new Type[DFL_SIZE];
        space = rhs.space;
        size_v = rhs.size_v;

        for(int i = 0; i < DFL_SIZE; i++)
        {
            elem[i] = rhs.elem[i];
        }

        return *this;
    }

    /** @brief Vector<Type>::operator=
     * Move assignment operator for the vector class object.
     *
     * @param rhs Vector object to the right of the operator.
     * @return *this A pointer to the newly-modified object. */
    Vector<Type>& operator=(Vector&& rhs)
    {
        if(elem != NULL)
        {
            delete[] elem;
        }

        // Assign members.
        elem = rhs.elem;
        size_v = rhs.size_v;
        space = rhs.space;

        // Release RHS.
        rhs.elem = nullptr;
        rhs.size_v = 0;
        rhs.space = 0;

        return *this;
    }

    /** @brief Vector<Type>::operator=
     * Default destructor for the vector class object. */
    ~Vector()
    {
        if(elem != nullptr)
        {
            delete[] elem;
            elem = nullptr;
        }
    }

    /** @brief Vector<type>::operator[]
     * This method will return a reference to an indexed array element.
     *
     * @param n Index of the array element to be returned.
     *
     * @return *this->elem[n] Reference to indexed array element. */
    Type& operator[](int n)
    {
        // assert(n < size_v);
        return elem[n];
    }

    /** @brief Vector<type>::operator[]
     * This method will return a value from an indexed array element.
     *
     * @param n Index of the array element to be returned.
     *
     * @return *this->elem[n] Value of indexed array element. */
    const Type& operator[](int n) const
    {
        // assert(n < size_v);
        return elem[n];
    }

    /** @brief Vector<type>::size
     * This method will return the size of the vector array.
     *
     * @return size Array size. */
    int size() const
    {
        return size_v;
    }

    /** @brief Vector<type>::space
     * This method will return the remaining space in the vector array.
     *
     * @return space Remaining space. */
    int capacity() const
    {
        return space;
    }

    /** @brief Vector<type>::newsize
     * This method will modify the remaining space in the vector.
     *
     * @param newsize New vector size. */
    void resize(int newSize)
    {
        Type* temp = elem;
        elem = new Type[newSize];
        space = newSize;

        if(newSize > size_v)
        {
            size_v = newSize;
        }

        for(int i  = 0; i < space; i++)
        {
            elem[i] = temp[i];
        }

        delete[] temp;
    }

    /** @brief Vector<type>::push_back
     * This method will add a new element to the vector.
     *
     * @param new_elem Element to be added. */
    void push_back(Type& new_elem)
    {
        if(size_v + 1 > space)
        {
            Type* temp = elem;
            elem = new Type[space * 2];

            for(int i = 0; i < space; i++)
            {
                elem[i] = temp[i];
            }

            delete[] temp;

            space *= 2;
        }

        elem[size_v] = new_elem;
        size_v++;
    }

    /** @brief Vector<type>::reserve
     * This method will allocate space to the vector object.
     *
     * @param newalloc Space to be reserved. */
    void reserve(int size)
    {
        // Increase space to "reserve" memory.
        if(size > space)
        {
            Type* temp = elem;
            elem = new Type[size_v];

            for(int i = 0; i < space; i++)
            {
                elem[i] = temp[i];
            }

            delete[] temp;
        }
    }

    /***************************************************************************************************/

    // These functions were unable to be defined outside the header file.

    // Iterator alisases.
    using v_iterator = Type*;                                /* Aliased iterator.       */
    using const_iterator = const Type*;                      /* Aliased const iterator. */

    /** @brief Vector<type>::begin
     * This method will point to the first vector value.
     * @return &elem[0] Reference to beginning array element. */
    v_iterator begin()
    {
        return &elem[0];
    }

    /** @brief Vector<type>::begin
     * This method will point to the first vector value.
     * @return &elem[0] Reference to beginning array element. */
    const_iterator begin() const
    {
        return &elem[0];
    }

    /** @brief Vector<type>::end
     * This method will point to one after the last vector value.
     * @return &elem[size_v + 1] Reference to postfinal array element. */
    v_iterator end()
    {
        return &elem[size_v];
    }

    /** @brief Vector<type>::end
     * This method will point to one after the last vector value.
     * @return &elem[size_v + 1] Reference to postfinal array element. */
    const_iterator end() const
    {
        return &elem[size_v];
    }

    /** @brief Vector<type>::end
     * This method will insert new element v before p.
     * @return *this Reference to vector. */
    v_iterator insert(v_iterator p, const Type& v)
    {
        // Add new element to the array.
        p - 1 = v;

        return *this;
    }

    /** @brief Vector<type>::end
     * This method will remove element pointed to by p.
     * @param p Pointer to vector element.
     * @return *this Reference to vector. */
    v_iterator erase(v_iterator p)
    {
        // Release memory at p.
        delete p;

        return *this;
    }

    /***************************************************************************************************/

};

#endif // VECTOR_H
