#pragma once
#include <cstddef>

namespace AS {
    template<typename T>
    class Vector {
    private:
        std::size_t capacity;
        T* arr;
        std::size_t size;
    public:
        Vector();
        Vector(const Vector&) = delete;
        Vector operator = (const Vector&) = delete;
        ~Vector();

        void add(const T&);
        void remove(const T&);
        std::size_t get_size();
        bool has_item(const T&);
    };
}