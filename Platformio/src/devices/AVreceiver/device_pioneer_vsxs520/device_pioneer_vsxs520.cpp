#include <string>
#include "applicationInternal/commandHandler.h"
#include "applicationInternal/hardware/hardwarePresenter.h"
#include "device_pioneer_vsxs520.h"

/*
+-----------------------------------+
| [ POWER ]                 RC-933R |
|-----------------------------------|
| [ BD/DVD  ] [ GAME  ] [ CBL/SAT ] |
| [ STRMBOX ] [ CD    ] [ TV      ] |
| [ USB     ] [ NET   ] [ TUNER   ] |
| [ NET     ]           [ PHONO   ] |
|-----------------------------------|
| [ AV ADJUST ]  [ ^ ]   [ STATUS ] |
| [ < ]        [ ENTER ]      [ > ] |
| [ HOME ]       [ v ]     [ BACK ] |
|-----------------------------------|
|            [ VOLUME UP ]          |
| [ MUTE ]  [ VOLUME DOWN ]         |
| [ AUTO ]     [ SURR ]  [ DIMMER ] |
| [ REWIND ]   [ PLAY ] [ FORWARD ] |
| [ REPEAT ]  [ ADD FAV ]  [ MODE ] |
|-----------------------------------|
|              PIONEER              |
+-----------------------------------+
*/

uint16_t PIONEER_VSXS520_POWER;
uint16_t PIONEER_VSXS520_BD_DVD;
uint16_t PIONEER_VSXS520_GAME;
uint16_t PIONEER_VSXS520_CBL_SAT;
uint16_t PIONEER_VSXS520_STRMBOX;
uint16_t PIONEER_VSXS520_CD;
uint16_t PIONEER_VSXS520_TV;
uint16_t PIONEER_VSXS520_BT;
uint16_t PIONEER_VSXS520_USB;
uint16_t PIONEER_VSXS520_TUNER;
uint16_t PIONEER_VSXS520_NET;
uint16_t PIONEER_VSXS520_PHONO;

uint16_t PIONEER_VSXS520_AV_ADJUST;
uint16_t PIONEER_VSXS520_STATUS;
uint16_t PIONEER_VSXS520_UP;
uint16_t PIONEER_VSXS520_LEFT;
uint16_t PIONEER_VSXS520_ENTER;
uint16_t PIONEER_VSXS520_RIGHT;
uint16_t PIONEER_VSXS520_DOWN;
uint16_t PIONEER_VSXS520_HOME;
uint16_t PIONEER_VSXS520_BACK;

uint16_t PIONEER_VSXS520_VOLUME_UP;
uint16_t PIONEER_VSXS520_VOLUME_DOWN;
uint16_t PIONEER_VSXS520_VOLUME_MUTE;

uint16_t PIONEER_VSXS520_AUTO_DIRECT;
uint16_t PIONEER_VSXS520_SURR;
uint16_t PIONEER_VSXS520_DIMMER;
uint16_t PIONEER_VSXS520_REWIND_PREV;
uint16_t PIONEER_VSXS520_PLAY_PAUSE;
uint16_t PIONEER_VSXS520_FORWARD_NEXT;
uint16_t PIONEER_VSXS520_REPEAT_SHUFFLE;
uint16_t PIONEER_VSXS520_ADD_FAV;
uint16_t PIONEER_VSXS520_MODE;

void register_device_pioneer_vsxs520() {
  register_command(&PIONEER_VSXS520_POWER         , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55A38C7A55A38C7"}));
  register_command(&PIONEER_VSXS520_BD_DVD        , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55A3AC5A55A03FC"}));
  register_command(&PIONEER_VSXS520_GAME          , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55A3AC5A55A035C"}));
  register_command(&PIONEER_VSXS520_CBL_SAT       , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55A08F7A55A08F7"}));
  register_command(&PIONEER_VSXS520_STRMBOX       , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55AEA15F50A6C93"}));
  register_command(&PIONEER_VSXS520_CD            , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55A32CDA55A32CD"}));
  register_command(&PIONEER_VSXS520_TV            , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55A30CFA55A30CF"}));
  register_command(&PIONEER_VSXS520_BT            , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55A3AC5A55A23DC"}));
  register_command(&PIONEER_VSXS520_USB           , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55A7986A55AD32C"}));
  register_command(&PIONEER_VSXS520_TUNER         , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55AE21DA55AE21D"}));
  register_command(&PIONEER_VSXS520_NET           , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55A3AC5A55A837C"}));
  register_command(&PIONEER_VSXS520_PHONO         , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55AB24DA55AB24D"}));
  register_command(&PIONEER_VSXS520_AV_ADJUST     , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55A5AA5A55A53AC"}));
  register_command(&PIONEER_VSXS520_STATUS        , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55AD926A55ABB44"}));
  register_command(&PIONEER_VSXS520_UP            , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55A01FEAS5A01FE"}));
  register_command(&PIONEER_VSXS520_LEFT          , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55AC13E55SAC13E"}));
  register_command(&PIONEER_VSXS520_ENTER         , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55A21DEA55A21DE"}));
  register_command(&PIONEER_VSXS520_RIGHT         , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55A41BEA55A41BE"}));
  register_command(&PIONEER_VSXS520_DOWN          , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55A817EA55A817E"}));
  register_command(&PIONEER_VSXS520_HOME          , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55AD926A55A6B94"}));
  register_command(&PIONEER_VSXS520_BACK          , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55ABA45A55A906F"}));
  register_command(&PIONEER_VSXS520_VOLUME_UP     , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55A50AFA55A50AF"}));
  register_command(&PIONEER_VSXS520_VOLUME_DOWN   , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55AD02FA55AD02F"}));
  register_command(&PIONEER_VSXS520_VOLUME_MUTE   , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55A48B7A55A48B7"}));
  register_command(&PIONEER_VSXS520_AUTO_DIRECT   , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55A59A6A55AC33C"}));
  register_command(&PIONEER_VSXS520_SURR          , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55A7AB5A55A10EF"}));
  register_command(&PIONEER_VSXS520_DIMMER        , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55A6A95A55A609F"}));
  register_command(&PIONEER_VSXS520_REWIND_PREV   , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55AEA15F50AB44B"}));
  register_command(&PIONEER_VSXS520_PLAY_PAUSE    , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55AEA15F50A2CD3"}));
  register_command(&PIONEER_VSXS520_FORWARD_NEXT  , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55AEA15F50A748B"}));
  register_command(&PIONEER_VSXS520_REPEAT_SHUFFLE, makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55AEA15F50AAC53"}));
  register_command(&PIONEER_VSXS520_ADD_FAV       , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55AEA15F50A1CE3"}));
  register_command(&PIONEER_VSXS520_MODE          , makeCommandData(IR, {std::to_string(IR_PROTOCOL_PIONEER), "0xA55AEA15F50AEC13"}));
}
