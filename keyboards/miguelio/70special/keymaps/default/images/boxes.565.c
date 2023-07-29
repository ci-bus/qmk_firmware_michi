// Miguelio, open source code

#include "boxes.565.h"
#include <qp.h>

const uint16_t boxes[8][36] = {
  { // red
    0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x0400,
    0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x0400,
    0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x0400,
    0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x0400,
    0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x07E0, 0x0400,
    0x0400, 0x0400, 0x0400, 0x0400, 0x0400, 0x0400
  }, { // green
    0x001F, 0x001F, 0x001F, 0x001F, 0x001F, 0x0010,
    0x001F, 0x001F, 0x001F, 0x001F, 0x001F, 0x0010,
    0x001F, 0x001F, 0x001F, 0x001F, 0x001F, 0x0010,
    0x001F, 0x001F, 0x001F, 0x001F, 0x001F, 0x0010,
    0x001F, 0x001F, 0x001F, 0x001F, 0x001F, 0x0010,
    0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010
  }, { // blue
    0xF800, 0xF800, 0xF800, 0xF800, 0xF800, 0x8000,
    0xF800, 0xF800, 0xF800, 0xF800, 0xF800, 0x8000,
    0xF800, 0xF800, 0xF800, 0xF800, 0xF800, 0x8000,
    0xF800, 0xF800, 0xF800, 0xF800, 0xF800, 0x8000,
    0xF800, 0xF800, 0xF800, 0xF800, 0xF800, 0x8000,
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000
  }, { // cyan
    0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0x8010,
    0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0x8010,
    0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0x8010,
    0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0x8010,
    0xF81F, 0xF81F, 0xF81F, 0xF81F, 0xF81F, 0x8010,
    0x8010, 0x8010, 0x8010, 0x8010, 0x8010, 0x8010
  }, { // yellow
    0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x0430,
    0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x0430,
    0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x0430,
    0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x0430,
    0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x0430,
    0x0430, 0x0430, 0x0430, 0x0430, 0x0430, 0x0430
  }, { // violet
    0xFFE0, 0xFFE0, 0xFFE0, 0xFFE0, 0xFFE0, 0x0400,
    0xFFE0, 0xFFE0, 0xFFE0, 0xFFE0, 0xFFE0, 0x0400,
    0xFFE0, 0xFFE0, 0xFFE0, 0xFFE0, 0xFFE0, 0x0400,
    0xFFE0, 0xFFE0, 0xFFE0, 0xFFE0, 0xFFE0, 0x0400,
    0xFFE0, 0xFFE0, 0xFFE0, 0xFFE0, 0xFFE0, 0x0400,
    0x0400, 0x0400, 0x0400, 0x0400, 0x0400, 0x0400
  }, { // gray
    0xB5B6, 0x7BEF, 0x7BEF, 0x7BEF, 0xB5B6, 0x0000,
    0x7BEF, 0xB5B6, 0x7BEF, 0xB5B6, 0x7BEF, 0x0000,
    0x7BEF, 0x7BEF, 0xB5B6, 0x7BEF, 0x7BEF, 0x0000,
    0x7BEF, 0xB5B6, 0x7BEF, 0xB5B6, 0x7BEF, 0x0000,
    0xB5B6, 0x7BEF, 0x7BEF, 0x7BEF, 0xB5B6, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
  }, { // dark gray
    0x0821, 0x0821, 0x0821, 0x0821, 0x0821, 0x8410,
    0x0821, 0x0821, 0x0821, 0x0821, 0x0821, 0x8410,
    0x0821, 0x0821, 0x0821, 0x0821, 0x0821, 0x8410,
    0x0821, 0x0821, 0x0821, 0x0821, 0x0821, 0x8410,
    0x0821, 0x0821, 0x0821, 0x0821, 0x0821, 0x8410,
    0x8410, 0x8410, 0x8410, 0x8410, 0x8410, 0x8410
  }
};
