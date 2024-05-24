#include <cstddef>

namespace AS {
    template<typename T>
    class vector {
    private:
        std::size_t capacity;
        T* arr;
        std::size_t size;
    public:
        vector();
        vector(const vector&) = delete;
        vector operator = (const vector&) = delete;
        ~vector();

        void add(const T&);
        void remove(const T&);
        std::size_t get_size();
        bool has_item(const T&);
    };
}