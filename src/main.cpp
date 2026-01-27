#include <bn.core.h>
#include <bn.backdrop.h>
#include <bn.color.h>


int main() {
    bn::core::init();

    bn::backdrop::set_color(bn::color(23,0,12));

    while(true) {
        bn::core::update();
    }
}