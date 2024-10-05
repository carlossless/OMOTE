#include <lvgl.h>
#include "gui_ossc.h"
#include "applicationInternal/hardware/hardwarePresenter.h"
#include "applicationInternal/gui/guiBase.h"
#include "applicationInternal/gui/guiRegistry.h"
#include "applicationInternal/omote_log.h"
#include "applicationInternal/commandHandler.h"
#include "devices/converter/device_ossc/device_ossc.h"

lv_color_t color_av1 = lv_color_hex(0x700000); // red
lv_color_t color_av2 = lv_color_hex(0x007000); // green
lv_color_t color_av3 = lv_color_hex(0x000070); // blue
lv_color_t color_profile = lv_color_hex(0x700070); // purple

// Apple Key Event handler
static void ossc_event_cb(lv_event_t* e) {
  // Send IR command based on the event user data  
  uint16_t command = *((uint16_t*)(&(e->user_data)));
  executeCommand(command);
  omote_log_v("%d\r\n", command);
}

lv_obj_t* ossc_create_button(lv_obj_t* tab, const char *label, uint16_t command) {
  lv_obj_t* button;
  lv_obj_t* buttonLabel;

  button = lv_btn_create(tab);
  lv_obj_align(button, LV_ALIGN_TOP_LEFT, 0, 0);
  lv_obj_set_size(button, 66, 40);
  lv_obj_set_style_radius(button, 4, LV_PART_MAIN);
  lv_obj_add_event_cb(button, ossc_event_cb, LV_EVENT_CLICKED, (void *)command);
  buttonLabel = lv_label_create(button);        
  lv_label_set_text(buttonLabel, label);
  lv_obj_set_style_text_font(buttonLabel, &lv_font_montserrat_12, LV_PART_MAIN);
  lv_obj_set_style_text_align(buttonLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);
  lv_obj_center(buttonLabel);

  return button;
}

void create_tab_content_ossc(lv_obj_t* tab) {
  lv_obj_t* button;

  button = ossc_create_button(tab, "RGBS", OSSC_AV1_RGBS);
  lv_obj_align(button, LV_ALIGN_TOP_LEFT, 0, 0);
  lv_obj_set_style_bg_color(button, color_av1, LV_PART_MAIN);

  button = ossc_create_button(tab, "YPbPr", OSSC_AV2_YPBPR);
  lv_obj_align(button, LV_ALIGN_TOP_MID, 0, 0);
  lv_obj_set_style_bg_color(button, color_av2, LV_PART_MAIN);

  button = ossc_create_button(tab, "RGBHV", OSSC_AV3_RGBHV);
  lv_obj_align(button, LV_ALIGN_TOP_RIGHT, 0, 0);
  lv_obj_set_style_bg_color(button, color_av3, LV_PART_MAIN);

  button = ossc_create_button(tab,"RGsB", OSSC_AV1_RGSB);
  lv_obj_align(button, LV_ALIGN_TOP_LEFT, 0, 50);
  lv_obj_set_style_bg_color(button, color_av1, LV_PART_MAIN);

  button = ossc_create_button(tab, "RGsB", OSSC_AV2_RGSB);
  lv_obj_align(button, LV_ALIGN_TOP_MID, 0, 50);
  lv_obj_set_style_bg_color(button, color_av2, LV_PART_MAIN);

  button = ossc_create_button(tab, "RGBS", OSSC_AV3_RGBS);
  lv_obj_align(button, LV_ALIGN_TOP_RIGHT, 0, 50);
  lv_obj_set_style_bg_color(button, color_av3, LV_PART_MAIN);

  button = ossc_create_button(tab, "YPrPb", OSSC_AV1_YPBPR);
  lv_obj_align(button, LV_ALIGN_TOP_LEFT, 0, 100);
  lv_obj_set_style_bg_color(button, color_av1, LV_PART_MAIN);

  button = ossc_create_button(tab, "RGsB", OSSC_AV3_RGSB);
  lv_obj_align(button, LV_ALIGN_TOP_RIGHT, 0, 100);
  lv_obj_set_style_bg_color(button, color_av3, LV_PART_MAIN);

  button = ossc_create_button(tab, "YPbPr", OSSC_AV3_YPBPR);
  lv_obj_align(button, LV_ALIGN_TOP_RIGHT, 0, 150);
  lv_obj_set_style_bg_color(button, color_av3, LV_PART_MAIN);

  button = ossc_create_button(tab, "PROFILE\nLOAD", OSSC_PROFILE_LOAD);
  lv_obj_align(button, LV_ALIGN_TOP_LEFT, 0, 150);
  lv_obj_set_style_bg_color(button, color_profile, LV_PART_MAIN);
}

void notify_tab_before_delete_ossc(void) {
  // remember to set all pointers to lvgl objects to NULL if they might be accessed from outside.
  // They must check if object is NULL and must not use it if so
}

void register_gui_ossc(void){
  register_gui(std::string(tabName_ossc), & create_tab_content_ossc, & notify_tab_before_delete_ossc);
}
