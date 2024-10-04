#include <string>
#include "applicationInternal/commandHandler.h"
#include "applicationInternal/hardware/hardwarePresenter.h"
#include "device_appleTV.h"

uint16_t APPLETV_GUI_EVENT_USER_DATA; //"AppleTV_gui_event_user_data";

uint16_t APPLETV_UP;
uint16_t APPLETV_LEFT;
uint16_t APPLETV_ENTER;
uint16_t APPLETV_RIGHT;
uint16_t APPLETV_DOWN;
uint16_t APPLETV_MENU;
uint16_t APPLETV_PLAYPAUSE;

void register_device_appleTV() {
  register_command(&APPLETV_GUI_EVENT_USER_DATA           , makeCommandData(IR, {std::to_string(IR_PROTOCOL_SONY)}));  // payload must be set when calling commandHandler

  register_command(&APPLETV_UP       , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x77E1505D"}));
  register_command(&APPLETV_LEFT     , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x77E1905D"}));
  register_command(&APPLETV_ENTER    , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x77E13A5D"}));
  register_command(&APPLETV_RIGHT    , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x77E1605D"}));
  register_command(&APPLETV_DOWN     , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x77E1305D"}));
  register_command(&APPLETV_MENU     , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x77E1C05D"}));
  register_command(&APPLETV_PLAYPAUSE, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x77E1FA5D"}));
}
