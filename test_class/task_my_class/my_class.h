#pragma once

namespace my_class_namespace {
    template<typename T>
    class MyClass;

    typedef MyClass<char> its_char;
    typedef MyClass<int> its_int;
    typedef MyClass<float> its_float;

    template<typename T>
    class MyClass {
    private:
        T value_;

    public:
        MyClass()
            : value_(0) {
        }

        explicit MyClass(T value)
            : value_(value) {
        }

        T value() const { return value_; }
    };
}
