#include "Common.hpp"

ngin::RGB ngin::colorToRGB(const Color& passedColor) {
    switch(passedColor) {
    case Red:
        return RGB{1.f, 0.f, 0.f};
        break;
    case Green:
        return RGB{0.f, 1.f, 0.f};;
        break;
    case Blue:
        return RGB{0.f, 0.f, 1.f};
        break;
    case White:
        return RGB{1.f, 1.f, 1.f};
        break;
    case Black:
        return RGB{0.f, 0.f, 0.f};
        break;
    }
}


