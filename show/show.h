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
        Show(const std::string& name, const std::string& description, ShowType showType);

        std::string getName() const override;
        std::string getDescription() const override;
        ShowType getShowType() const override;
    };
}

#endif // SHOW_H