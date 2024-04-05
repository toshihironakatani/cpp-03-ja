#pragma once

class unique_int_ptr {
public:
  unique_int_ptr(int value);
  ~unique_int_ptr();
  int* get() const;
  int* release();

  int& operator*() const;

private:
  int* ptr;
};


template<typename T>
class unique_ptr {
public:
  unique_ptr(T value): ptr(new T(value)) {};
  ~unique_ptr() {
    delete ptr;
  }
  T* get() {
    return ptr;
  }

  T* release() {
    T* ret = ptr;
    ptr = nullptr;
    return ret;
  }

  T& operator*() const {
    return *ptr;
  }

private:
  T* ptr;
};
