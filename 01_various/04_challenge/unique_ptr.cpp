#include "unique_ptr.hpp"


unique_int_ptr::unique_int_ptr(int value) : ptr(new int(value)) {}

unique_int_ptr::~unique_int_ptr() {
  delete ptr;
}

int* unique_int_ptr::get() const {
  return ptr;
}

int*  unique_int_ptr::release() {
  int* ret = ptr;
  ptr = nullptr;
  return ret;
}

int& unique_int_ptr::operator*() const {
    return *ptr;
  }
