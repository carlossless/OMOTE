#include <string>
#include "applicationInternal/commandHandler.h"
#include "applicationInternal/hardware/hardwarePresenter.h"
#include "device_ossc.h"

uint16_t OSSC_BACKLIGHT_TOGGLE;
uint16_t OSSC_SAMP_PHASE_MINUS;
uint16_t OSSC_SAMP_PHASE_PLUS;
uint16_t OSSC_LINEMULT_MODE;
uint16_t OSSC_SCANLINE_TYPE;
uint16_t OSSC_SCANLINE_MODE;
uint16_t OSSC_SCANLINE_INT_UP;
uint16_t OSSC_SCANLINE_INT_DOWN;
uint16_t OSSC_MENU_TOGGLE;
uint16_t OSSC_NEXT;
uint16_t OSSC_VALUE_MINUS;
uint16_t OSSC_OSSC_OK;
uint16_t OSSC_VALUE_PLUS;
uint16_t OSSC_PREV;
uint16_t OSSC_BACK;
uint16_t OSSC_SOURCE_INFO;
uint16_t OSSC_AV1_RGBS;
uint16_t OSSC_AV2_YPBPR;
uint16_t OSSC_AV3_RGBHV;
uint16_t OSSC_AV1_RGSB;
uint16_t OSSC_AV2_RGSB;
uint16_t OSSC_AV3_RGBS;
uint16_t OSSC_AV1_YPBPR;
uint16_t OSSC_AV3_RGSB;
uint16_t OSSC_PROFILE_LOAD;
uint16_t OSSC_AV3_YPBPR;

void register_device_ossc() {
  register_command(&OSSC_BACKLIGHT_TOGGLE , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x3EC101FE"}));
  register_command(&OSSC_SAMP_PHASE_MINUS , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x5EA1D827"}));
  register_command(&OSSC_SAMP_PHASE_PLUS  , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x5EA158A7"}));
  register_command(&OSSC_LINEMULT_MODE    , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x1CE3C837"}));
  register_command(&OSSC_SCANLINE_TYPE    , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x1CE318E7"}));
  register_command(&OSSC_SCANLINE_MODE    , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x1CE348B7"}));
  register_command(&OSSC_SCANLINE_INT_UP  , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x1CE350AF"}));
  register_command(&OSSC_SCANLINE_INT_DOWN, makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x1CE3D02F"}));
  register_command(&OSSC_MENU_TOGGLE      , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x3EC14DB2"}));
  register_command(&OSSC_NEXT             , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x3EC12DD2"}));
  register_command(&OSSC_VALUE_MINUS      , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x3EC1AD52"}));
  register_command(&OSSC_OSSC_OK          , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x3EC11DE2"}));
  register_command(&OSSC_VALUE_PLUS       , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x3EC16D92"}));
  register_command(&OSSC_PREV             , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x3EC1CD32"}));
  register_command(&OSSC_BACK             , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x3EC1ED12"}));
  register_command(&OSSC_SOURCE_INFO      , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x3EC1659A"}));
  register_command(&OSSC_AV1_RGBS         , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x3EC129D6"}));
  register_command(&OSSC_AV2_YPBPR        , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x3EC1A956"}));
  register_command(&OSSC_AV3_RGBHV        , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x3EC16996"}));
  register_command(&OSSC_AV1_RGSB         , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x3EC1E916"}));
  register_command(&OSSC_AV2_RGSB         , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x3EC119E6"}));
  register_command(&OSSC_AV3_RGBS         , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x3EC19966"}));
  register_command(&OSSC_AV1_YPBPR        , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x3EC159A6"}));
  register_command(&OSSC_AV3_RGSB         , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x3EC139C6"}));
  register_command(&OSSC_PROFILE_LOAD     , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x3EC1B946"}));
  register_command(&OSSC_AV3_YPBPR        , makeCommandData(IR, {std::to_string(IR_PROTOCOL_NEC), "0x3EC1C936"}));
}
