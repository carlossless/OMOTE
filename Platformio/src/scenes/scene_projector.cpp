#include <map>
#include "scenes/scene_projector.h"
#include "applicationInternal/keys.h"
#include "applicationInternal/scenes/sceneRegistry.h"
#include "applicationInternal/hardware/hardwarePresenter.h"
#include "applicationInternal/commandHandler.h"
// devices
#include "devices/projector/device_viewsonic_pjd7720hd/device_viewsonic_pjd7720hd.h"
// guis
#include "devices/projector/device_viewsonic_pjd7720hd/gui_viewsonic_pjd7720hd.h"

std::string scene_name_projector = "Projector";
t_gui_list scene_projector_gui_list = {tabName_viewsonic_pjd7720hd};

uint16_t SCENE_PROJECTOR;
uint16_t SCENE_PROJECTOR_FORCE;

std::map<char, repeatModes> key_repeatModes_projector;
std::map<char, uint16_t> key_commands_short_projector;
std::map<char, uint16_t> key_commands_long_projector;

void scene_setKeys_projector() {
  key_repeatModes_projector = {
                                                                                                   {KEY_OFF,  SHORT            },
        {KEY_CONF,  SHORT            },                                                            
                                                         {KEY_UP,    SHORT            },
                      {KEY_LEFT,  SHORT            },    {KEY_OK,    SHORT            },    {KEY_RIGHT, SHORT           },
                                                         {KEY_DOWN,  SHORT            },
         {KEY_BACK,   SHORT            },                                                             {KEY_SRC,   SHORT            },
    {KEY_VOLUP, SHORT_REPEATED   },                      {KEY_MUTE,  SHORT            },
    {KEY_VOLDO, SHORT_REPEATED   },
  };
  
  key_commands_short_projector = {
                                                                                                    {KEY_OFF,  VIEWSONIC_PJD7720HD_POWER},
    {KEY_CONF, VIEWSONIC_PJD7720HD_MENU},                                                                  
                                                        {KEY_UP,    VIEWSONIC_PJD7720HD_UP      },
                 {KEY_LEFT,  VIEWSONIC_PJD7720HD_LEFT}, {KEY_OK,    VIEWSONIC_PJD7720HD_ENTER }, {KEY_RIGHT, VIEWSONIC_PJD7720HD_RIGHT},
                                                        {KEY_DOWN,  VIEWSONIC_PJD7720HD_DOWN    },
    {KEY_BACK, VIEWSONIC_PJD7720HD_EXIT},                                                         {KEY_SRC,   VIEWSONIC_PJD7720HD_SOURCE},
    {KEY_VOLUP, VIEWSONIC_PJD7720HD_VOLUME_UP  },       {KEY_MUTE,  VIEWSONIC_PJD7720HD_MUTE    },
    {KEY_VOLDO, VIEWSONIC_PJD7720HD_VOLUME_DOWN},
  };
  
  key_commands_long_projector = {
  };
}

void scene_start_sequence_projector(void) {
}

void scene_end_sequence_projector(void) {
}

void register_scene_projector(void) {
  register_command(&SCENE_PROJECTOR,       makeCommandData(SCENE, {scene_name_projector}));
  register_command(&SCENE_PROJECTOR_FORCE, makeCommandData(SCENE, {scene_name_projector, "FORCE"}));

  register_scene(
    scene_name_projector,
    & scene_setKeys_projector,
    & scene_start_sequence_projector,
    & scene_end_sequence_projector,
    & key_repeatModes_projector,
    & key_commands_short_projector,
    & key_commands_long_projector,
    & scene_projector_gui_list,
    SCENE_PROJECTOR);
}
