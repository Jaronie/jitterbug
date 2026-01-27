#include <bn_core.h>
#include <bn_backdrop.h>
#include <bn_color.h>

#include "bn_sprite_items_bug.h"

int main()
{
    bn::core::init();

    bn::backdrop::set_color(bn::color(0,23,12));


    while (true)
    {
        bn::core::update();
    }
}