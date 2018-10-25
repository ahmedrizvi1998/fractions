//
// Created by vscilab on 10/25/2018.
//

#ifndef FRACTIONS_FRACTIONS_H
#define FRACTIONS_FRACTIONS_H

#include <cstdint>

class Fraction {

public:
    Fraction(int32_t numerator, int32_t denominator){
        this->numerator = numerator;
        this->denominator = denominator;
    }

public:
    int32_t getNumerator() const;
    int32_t getDenominator() const;
    double getRealValue() const;

    void setNumerator(const int32_t numerator );
    void setDenominator(const int32_t denominator);

    void output();

private:
    int32_t numerator;
    int32_t denominator;

};


#endif //FRACTIONS_FRACTIONS_H
