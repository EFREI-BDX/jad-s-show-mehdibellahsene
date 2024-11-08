#ifndef SHOW_H
#define SHOW_H

#include <string>
#include "ishow.h"
#include "showtype.h"

namespace show {
    class Show : public IShow {
    private:
        std::string name;
        std::string description;
        ShowType showType;
    public:
        Show(const std::string& name, const std::string& description, ShowType showType)
            : name(name), description(description), showType(showType) {}

        std::string getName() const override { return name; }
        std::string getDescription() const override { return description; }
        ShowType getShowType() const override { return showType; }
    };
}

#endif // SHOW_H