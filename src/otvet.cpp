#include "otvetb.h"

std::string otvet(std::string a) {
    std::string otv = "";
    std::string glasnie = "aeiouAEIOU";

    for (size_t i = 0; i < a.length(); i++) {
        bool glas = false;
        for (size_t j = 0; j < glasnie.length(); j++) {
            if (a[i] == glasnie[j]) {
                glas = true;
                break;
            }
        }
        if (!glas) otv += a[i];
    }
    return otv;
}
