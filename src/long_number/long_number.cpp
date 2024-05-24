#include "long_number.hpp"

#include <iostream>

using AS::LongNumber;

LongNumber::LongNumber() {
    // TODO
}

LongNumber::LongNumber(int length, int sign) {
    // TODO
}

LongNumber::LongNumber(const char* const str) {
    length = get_length(str);
    if(str[0] == MINUS) {
        sign = -1;
        length--;
    } else {
        sign = 1;
    }
    numbers = new int[length];
    for (int i = 0; i < length; ++i) {
        numbers[i] = str[i] - ZERO;
    }
}

LongNumber::LongNumber(const LongNumber& x) {
    // TODO
}

LongNumber::LongNumber(AS::LongNumber &&x) {
    // TODO
}

LongNumber::~LongNumber() {
    length = 0;
    delete[] numbers;
    numbers = nullptr;

}



LongNumber& LongNumber::operator = (const char* const str) {
    // TODO
}

LongNumber& LongNumber::operator = (const LongNumber& x) {
    // TODO
}

LongNumber& LongNumber::operator = (LongNumber&& x) {
    // TODO
}

bool LongNumber::operator == (const LongNumber& x) const {
    return 0;
}

bool LongNumber::operator != (const LongNumber& x) const {
    return 0;
}

bool LongNumber::operator > (const LongNumber& x) const {
    return 0;
}

bool LongNumber::operator < (const LongNumber& x) const {
    return 0;
}

LongNumber LongNumber::operator + (const LongNumber& x) const{
    return LongNumber();
}

LongNumber LongNumber::operator - (const LongNumber& x) const{
    return LongNumber();
}

LongNumber LongNumber::operator * (const LongNumber& x) const{
    return LongNumber();
}

LongNumber LongNumber::operator / (const LongNumber& x) const{
    return LongNumber();
}

LongNumber LongNumber::operator % (const LongNumber& x) const{
    return LongNumber();
}

int LongNumber::get_digits_number() const {
    return length;
}

int LongNumber::get_rank_number(int rank) const{
    return 0;
}

bool LongNumber::is_negative() const {
    return 0;
}


int LongNumber::get_length(const char* const str) const {
    int length = 0;
    while(str[length] != END) {
        length++;
    }
}

std::ostream& operator << (std::ostream &os, const LongNumber& x) {
    return os;
}