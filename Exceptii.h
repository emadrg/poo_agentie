//
// Created by drgem on 28/01/2023.
//

#ifndef OOP_EXCEPTII_H
#define OOP_EXCEPTII_H

#include <exception>
#include <string>
#include <stdexcept>

class LocuintaException : public std::runtime_error {
    using std::runtime_error::runtime_error;
};

class ApartamentException : public LocuintaException {
public :
    explicit ApartamentException(std::string msg):
            LocuintaException("Exceptie Apartament: " + msg) {}
};

class PenthouseException : public LocuintaException {
public :
    explicit PenthouseException(std::string msg):
            LocuintaException("Exceptie Penthouse: " + msg) {}
};

class CasaException : public LocuintaException {
public :
    explicit CasaException(std::string msg):
            LocuintaException(msg) {}
};

class CasaOrasException : public CasaException {
public:
    explicit CasaOrasException(std::string msg):
            CasaException("Exceptie Casa oras: " + msg) {}
};

class CasaTaraException : public CasaException {
public:
    explicit CasaTaraException(std::string msg):
            CasaException("Exceptie Casa tara: " + msg) {}
};


#endif //OOP_EXCEPTII_H
