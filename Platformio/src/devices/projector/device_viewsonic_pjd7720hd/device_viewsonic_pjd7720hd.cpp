#include <string>
#include "applicationInternal/commandHandler.h"
#include "applicationInternal/hardware/hardwarePresenter.h"
#include "device_viewsonic_pjd7720hd.h"

/*
+------------------------------+
| [ POWER ]           [ STAR ] |
|------------------------------|
| [ COMP1 ] [ COMP2 ] [ HDMI ] |
| [ AUTO ]          [ SOURCE ] |
|------------------------------|
|             [ ^ ]            |
| [ < ]     [ ENTER ]    [ > ] |
|             [ v ]            |
| [ MENU ]   [ 3D ]   [ EXIT ] |
|------------------------------|
| [M_R]  [M_L]  [PGUP]  [PGDN] |
| [MOUSE]   [PATTERN]  [BLANK] |
|------------------------------|
| [ LOCK ]  [ MUTE ]  [ HELP ] |
| [ TIMER ] [VOL UP] [ZOOM IN] |
| [ ECO ]   [VOL DN] [COLOR M] |
|------------------------------|
|           ViewSonic          |
|           RCP01051           |
+------------------------------+
*/

uint16_t VIEWSONIC_PJD7720HD_POWER;
uint16_t VIEWSONIC_PJD7720HD_STAR;
uint16_t VIEWSONIC_PJD7720HD_COMP1;
uint16_t VIEWSONIC_PJD7720HD_COMP2;
uint16_t VIEWSONIC_PJD7720HD_HDMI;
uint16_t VIEWSONIC_PJD7720HD_AUTO_SYNC;
uint16_t VIEWSONIC_PJD7720HD_SOURCE;
uint16_t VIEWSONIC_PJD7720HD_UP;
uint16_t VIEWSONIC_PJD7720HD_LEFT;
uint16_t VIEWSONIC_PJD7720HD_ENTER;
uint16_t VIEWSONIC_PJD7720HD_RIGHT;
uint16_t VIEWSONIC_PJD7720HD_DOWN;
uint16_t VIEWSONIC_PJD7720HD_MENU;
uint16_t VIEWSONIC_PJD7720HD_3D;
uint16_t VIEWSONIC_PJD7720HD_EXIT;
uint16_t VIEWSONIC_PJD7720HD_MOUSE_RIGHT;
uint16_t VIEWSONIC_PJD7720HD_MOUSE_LEFT;
uint16_t VIEWSONIC_PJD7720HD_MOUSE_PGUP;
uint16_t VIEWSONIC_PJD7720HD_MOUSE_PGDN;
uint16_t VIEWSONIC_PJD7720HD_MOUSE;
uint16_t VIEWSONIC_PJD7720HD_PATTERN;
uint16_t VIEWSONIC_PJD7720HD_BLANK;
uint16_t VIEWSONIC_PJD7720HD_LOCK;
uint16_t VIEWSONIC_PJD7720HD_MUTE;
uint16_t VIEWSONIC_PJD7720HD_HELP;
uint16_t VIEWSONIC_PJD7720HD_TIMER;
uint16_t VIEWSONIC_PJD7720HD_VOLUME_UP;
uint16_t VIEWSONIC_PJD7720HD_ZOOM_IN;
uint16_t VIEWSONIC_PJD7720HD_ECO_MODE;
uint16_t VIEWSONIC_PJD7720HD_VOLUME_DOWN;
uint16_t VIEWSONIC_PJD7720HD_COLOR_MODE;

void register_device_viewsonic_pjd7720hd() {
  register_command(&VIEWSONIC_PJD7720HD_POWER, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12FE817"}));
  register_command(&VIEWSONIC_PJD7720HD_STAR , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12F6A95"}));
  register_command(&VIEWSONIC_PJD7720HD_COMP1, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12F827D"}));
  register_command(&VIEWSONIC_PJD7720HD_COMP2, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12FA25D"}));
  register_command(&VIEWSONIC_PJD7720HD_HDMI, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12F1AE5"}));
  register_command(&VIEWSONIC_PJD7720HD_AUTO_SYNC, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12F10EF"}));
  register_command(&VIEWSONIC_PJD7720HD_SOURCE, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12F02FD"}));
  register_command(&VIEWSONIC_PJD7720HD_UP, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12FD02F"}));
  register_command(&VIEWSONIC_PJD7720HD_LEFT, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12F708F"}));
  register_command(&VIEWSONIC_PJD7720HD_ENTER, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12FA857"}));
  register_command(&VIEWSONIC_PJD7720HD_RIGHT, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12FF00F"}));
  register_command(&VIEWSONIC_PJD7720HD_DOWN, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12F30CF"}));
  register_command(&VIEWSONIC_PJD7720HD_MENU, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12F0CF3"}));
  register_command(&VIEWSONIC_PJD7720HD_3D, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12F04FB"}));
  register_command(&VIEWSONIC_PJD7720HD_EXIT, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12F14EB"}));
  register_command(&VIEWSONIC_PJD7720HD_MOUSE_RIGHT, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12F6C93"}));
  register_command(&VIEWSONIC_PJD7720HD_MOUSE_LEFT, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12FEC13"}));
  register_command(&VIEWSONIC_PJD7720HD_MOUSE_PGUP, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12F609F"}));
  register_command(&VIEWSONIC_PJD7720HD_MOUSE_PGDN, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12FA05F"}));
  register_command(&VIEWSONIC_PJD7720HD_MOUSE, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12F8C73"}));
  register_command(&VIEWSONIC_PJD7720HD_PATTERN, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12FAA55"}));
  register_command(&VIEWSONIC_PJD7720HD_BLANK, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12FE01F"}));
  register_command(&VIEWSONIC_PJD7720HD_LOCK, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12F718E"}));
  register_command(&VIEWSONIC_PJD7720HD_MUTE, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12FAA55"}));
  register_command(&VIEWSONIC_PJD7720HD_HELP, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12FE01F"}));
  register_command(&VIEWSONIC_PJD7720HD_TIMER, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12F718E"}));
  register_command(&VIEWSONIC_PJD7720HD_VOLUME_UP, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12F41BE"}));
  register_command(&VIEWSONIC_PJD7720HD_ZOOM_IN, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12F4CB3"}));
  register_command(&VIEWSONIC_PJD7720HD_ECO_MODE, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12FD42B"}));
  register_command(&VIEWSONIC_PJD7720HD_VOLUME_DOWN, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12FC13E"}));
  register_command(&VIEWSONIC_PJD7720HD_COLOR_MODE, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0xC12F08F7"}));
}
