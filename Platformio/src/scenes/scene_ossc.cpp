#include <map>
#include "scenes/scene_appleTV.h"
#include "applicationInternal/keys.h"
#include "applicationInternal/scenes/sceneRegistry.h"
#include "applicationInternal/hardware/hardwarePresenter.h"
#include "applicationInternal/commandHandler.h"
// devices
#include "devices/converter/device_ossc/device_ossc.h"
// guis
#include "devices/converter/device_ossc/gui_ossc.h"

std::string scene_name_ossc = "OSSC";
t_gui_list scene_ossc_gui_list = {tabName_ossc};

uint16_t SCENE_OSSC;
uint16_t SCENE_OSSC_FORCE;

std::map<char, repeatModes> key_repeatModes_ossc;
std::map<char, uint16_t> key_commands_short_ossc;
std::map<char, uint16_t> key_commands_long_ossc;

void scene_setKeys_ossc() {
  key_repeatModes_ossc = {
    {KEY_CONF,  SHORT            },                                                             {KEY_INFO,  SHORT            },
                                                         {KEY_UP,    SHORT            },
                      {KEY_LEFT,  SHORT            },    {KEY_OK,    SHORT            },    {KEY_RIGHT, SHORT           },
                                                         {KEY_DOWN,  SHORT            },
                                                                                                             {KEY_SRC,   SHORT            },
  };
  
  key_commands_short_ossc = {
    {KEY_CONF,  OSSC_MENU_TOGGLE},                                                                    {KEY_INFO,  OSSC_SOURCE_INFO},
                                                         {KEY_UP,    OSSC_NEXT      },
                      {KEY_LEFT,  OSSC_VALUE_MINUS   },     {KEY_OK,    OSSC_OK  },    {KEY_RIGHT, OSSC_VALUE_PLUS   },
                                                         {KEY_DOWN,  OSSC_PREV    },
                                                                                                             {KEY_SRC,   OSSC_BACK    },
  };
  
  key_commands_long_ossc = {
  };
}

void scene_start_sequence_ossc(void) {
}

void scene_end_sequence_ossc(void) {
}

void register_scene_ossc(void) {
  register_command(&SCENE_OSSC,       makeCommandData(SCENE, {scene_name_ossc}));
  register_command(&SCENE_OSSC_FORCE, makeCommandData(SCENE, {scene_name_ossc, "FORCE"}));

  register_scene(
    scene_name_ossc,
    & scene_setKeys_ossc,
    & scene_start_sequence_ossc,
    & scene_end_sequence_ossc,
    & key_repeatModes_ossc,
    & key_commands_short_ossc,
    & key_commands_long_ossc,
    & scene_ossc_gui_list,
    SCENE_OSSC);
}
