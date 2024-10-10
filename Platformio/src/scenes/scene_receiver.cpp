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
  };
  
  key_commands_short_receiver = {
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
