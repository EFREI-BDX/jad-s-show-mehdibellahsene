#ifndef ISPECTATOR_H
#define ISPECTATOR_H

#include <string>

namespace customer {
    class ISpectator {
    public:
        virtual std::string getFirstName() const = 0;
        virtual std::string getLastName() const = 0;
    };
}

#endif // ISPECTATOR_H