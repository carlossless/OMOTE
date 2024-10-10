#include <lvgl.h>
#include "gui_pioneer_vsxs520.h"
#include "applicationInternal/hardware/hardwarePresenter.h"
#include "applicationInternal/gui/guiBase.h"
#include "applicationInternal/gui/guiRegistry.h"
#include "applicationInternal/omote_log.h"
#include "applicationInternal/commandHandler.h"
#include "devices/AVreceiver/device_pioneer_vsxs520/device_pioneer_vsxs520.h"

// Apple Key Event handler
static void pioneer_vsxs520_event_cb(lv_event_t* e) {
  // Send IR command based on the event user data  
  uint16_t command = *((uint16_t*)(&(e->user_data)));
  executeCommand(command);
  omote_log_v("%d\r\n", command);
}

lv_obj_t* create_button_pioneer_vsxs520(lv_obj_t* tab, const char *label, uint16_t command) {
  lv_obj_t* button;
  lv_obj_t* buttonLabel;

  button = lv_btn_create(tab);
  lv_obj_align(button, LV_ALIGN_TOP_LEFT, 0, 0);
  lv_obj_set_size(button, 66, 40);
  lv_obj_set_style_radius(button, 4, LV_PART_MAIN);
  lv_obj_set_style_bg_color(button, color_primary, LV_PART_MAIN);
  lv_obj_add_event_cb(button, pioneer_vsxs520_event_cb, LV_EVENT_CLICKED, (void *)command);
  buttonLabel = lv_label_create(button);        
  lv_label_set_text(buttonLabel, label);
  lv_obj_set_style_text_font(buttonLabel, &lv_font_montserrat_12, LV_PART_MAIN);
  lv_obj_set_style_text_align(buttonLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);
  lv_obj_center(buttonLabel);

  return button;
}

void create_tab_content_pioneer_vsxs520(lv_obj_t* tab) {
  lv_obj_t* button;

  button = create_button_pioneer_vsxs520(tab, "BD/DVD", PIONEER_VSXS520_BD_DVD);
  lv_obj_align(button, LV_ALIGN_TOP_LEFT, 0, 0);

  button = create_button_pioneer_vsxs520(tab, "GAME", PIONEER_VSXS520_GAME);
  lv_obj_align(button, LV_ALIGN_TOP_MID, 0, 0);

  button = create_button_pioneer_vsxs520(tab, "CBL/SAT", PIONEER_VSXS520_CBL_SAT);
  lv_obj_align(button, LV_ALIGN_TOP_RIGHT, 0, 0);

  button = create_button_pioneer_vsxs520(tab, "STRMBOX", PIONEER_VSXS520_STRMBOX);
  lv_obj_align(button, LV_ALIGN_TOP_LEFT, 0, 50);

  button = create_button_pioneer_vsxs520(tab, "CD", PIONEER_VSXS520_CD);
  lv_obj_align(button, LV_ALIGN_TOP_MID, 0, 50);

  button = create_button_pioneer_vsxs520(tab, "TV", PIONEER_VSXS520_TV);
  lv_obj_align(button, LV_ALIGN_TOP_RIGHT, 0, 50);

  button = create_button_pioneer_vsxs520(tab, "BT", PIONEER_VSXS520_BT);
  lv_obj_align(button, LV_ALIGN_TOP_LEFT, 0, 100);

  button = create_button_pioneer_vsxs520(tab, "USB", PIONEER_VSXS520_USB);
  lv_obj_align(button, LV_ALIGN_TOP_MID, 0, 100);

  button = create_button_pioneer_vsxs520(tab, "TUNER", PIONEER_VSXS520_TUNER);
  lv_obj_align(button, LV_ALIGN_TOP_RIGHT, 0, 100);

  button = create_button_pioneer_vsxs520(tab, "NET", PIONEER_VSXS520_NET);
  lv_obj_align(button, LV_ALIGN_TOP_LEFT, 0, 150);

  button = create_button_pioneer_vsxs520(tab, "PHONO", PIONEER_VSXS520_PHONO);
  lv_obj_align(button, LV_ALIGN_TOP_RIGHT, 0, 150);
}

void notify_tab_before_delete_pioneer_vsxs520(void) {
  // remember to set all pointers to lvgl objects to NULL if they might be accessed from outside.
  // They must check if object is NULL and must not use it if so
}

void register_gui_pioneer_vsxs520(void) {
  register_gui(std::string(tabName_pioneer_vsxs520), & create_tab_content_pioneer_vsxs520, & notify_tab_before_delete_pioneer_vsxs520);
}
