#ifndef ISHOW_H
#define ISHOW_H

#include <string>
#include "showtype.h"

namespace show {
    class IShow {
    public:
        virtual std::string getName() const = 0;
        virtual std::string getDescription() const = 0;
        virtual ShowType getShowType() const = 0;
    };
}

#endif // ISHOW_H