#include <map>
#include "scenes/scene_receiver.h"
#include "applicationInternal/keys.h"
#include "applicationInternal/scenes/sceneRegistry.h"
#include "applicationInternal/hardware/hardwarePresenter.h"
#include "applicationInternal/commandHandler.h"
// devices
#include "devices/AVreceiver/device_pioneer_vsxs520/device_pioneer_vsxs520.h"
// guis
#include "devices/AVreceiver/device_pioneer_vsxs520/gui_pioneer_vsxs520.h"

std::string scene_name_receiver = "Receiver";
t_gui_list scene_receiver_gui_list = {tabName_pioneer_vsxs520};

uint16_t SCENE_RECEIVER;
uint16_t SCENE_RECEIVER_FORCE;

std::map<char, repeatModes> key_repeatModes_receiver;
std::map<char, uint16_t> key_commands_short_receiver;
std::map<char, uint16_t> key_commands_long_receiver;

void scene_setKeys_receiver() {
  key_repeatModes_receiver = {
                                                                                                   {KEY_OFF,  SHORT            },
                       {KEY_REWI,  SHORT_REPEATED      },    {KEY_PLAY,  SHORT            },   {KEY_FORW,  SHORT_REPEATED      },
        {KEY_CONF,  SHORT            },                                                            {KEY_INFO, SHORT            },
                                                         {KEY_UP,    SHORT            },
                      {KEY_LEFT,  SHORT            },    {KEY_OK,    SHORT            },    {KEY_RIGHT, SHORT           },
                                                         {KEY_DOWN,  SHORT            },
         {KEY_BACK,   SHORT            },                                                             {KEY_SRC,   SHORT            },
    {KEY_VOLUP, SHORT_REPEATED   },                      {KEY_MUTE,  SHORT            },
    {KEY_VOLDO, SHORT_REPEATED   },
  };
  
  key_commands_short_receiver = {
                                                                                                    {KEY_OFF,  PIONEER_VSXS520_POWER},
             {KEY_REWI,  PIONEER_VSXS520_REWIND_PREV},    {KEY_PLAY,  PIONEER_VSXS520_PLAY_PAUSE},   {KEY_FORW,  PIONEER_VSXS520_FORWARD_NEXT},
    {KEY_CONF, PIONEER_VSXS520_AV_ADJUST},                                                            {KEY_INFO, PIONEER_VSXS520_STATUS},                                        
                                                        {KEY_UP,    PIONEER_VSXS520_UP      },
                 {KEY_LEFT,  PIONEER_VSXS520_LEFT}, {KEY_OK,    PIONEER_VSXS520_ENTER }, {KEY_RIGHT, PIONEER_VSXS520_RIGHT},
                                                        {KEY_DOWN,  PIONEER_VSXS520_DOWN    },
    {KEY_BACK, PIONEER_VSXS520_BACK},                                                         {KEY_SRC,   PIONEER_VSXS520_HOME},
    {KEY_VOLUP, PIONEER_VSXS520_VOLUME_UP  },       {KEY_MUTE,  PIONEER_VSXS520_VOLUME_MUTE  },
    {KEY_VOLDO, PIONEER_VSXS520_VOLUME_DOWN},
  };
  
  key_commands_long_receiver = {
  };
}

void scene_start_sequence_receiver(void) {
}

void scene_end_sequence_receiver(void) {
}

void register_scene_receiver(void) {
  register_command(&SCENE_RECEIVER,       makeCommandData(SCENE, {scene_name_receiver}));
  register_command(&SCENE_RECEIVER_FORCE, makeCommandData(SCENE, {scene_name_receiver, "FORCE"}));

  register_scene(
    scene_name_receiver,
    & scene_setKeys_receiver,
    & scene_start_sequence_receiver,
    & scene_end_sequence_receiver,
    & key_repeatModes_receiver,
    & key_commands_short_receiver,
    & key_commands_long_receiver,
    & scene_receiver_gui_list,
    SCENE_RECEIVER);
}
