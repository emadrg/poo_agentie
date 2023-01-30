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
    explicit ApartamentException(const std::string& msg):
            LocuintaException("Exceptie Apartament: " + msg) {}
};

class PenthouseException : public LocuintaException {
public :
    explicit PenthouseException(const std::string& msg):
            LocuintaException("Exceptie Penthouse: " + msg) {}
};

class CasaException : public LocuintaException {
public :
    explicit CasaException(const std::string& msg):
            LocuintaException(msg) {}
};

class CasaOrasException : public CasaException {
public:
    explicit CasaOrasException(const std::string& msg):
            CasaException("Exceptie Casa oras: " + msg) {}
};

class CasaTaraException : public CasaException {
public:
    explicit CasaTaraException(const std::string& msg):
            CasaException("Exceptie Casa tara: " + msg) {}
};


#endif //OOP_EXCEPTII_H
