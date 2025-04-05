#include <lvgl.h>
#include "gui_viewsonic_pjd7720hd.h"
#include "applicationInternal/hardware/hardwarePresenter.h"
#include "applicationInternal/gui/guiBase.h"
#include "applicationInternal/gui/guiRegistry.h"
#include "applicationInternal/omote_log.h"
#include "applicationInternal/commandHandler.h"
#include "devices/projector/device_viewsonic_pjd7720hd/device_viewsonic_pjd7720hd.h"

void create_tab_content_viewsonic_pjd7720hd(lv_obj_t* tab) {

}

void notify_tab_before_delete_viewsonic_pjd7720hd(void) {
  // remember to set all pointers to lvgl objects to NULL if they might be accessed from outside.
  // They must check if object is NULL and must not use it if so
}

void register_gui_viewsonic_pjd7720hd(void) {
  register_gui(std::string(tabName_viewsonic_pjd7720hd), & create_tab_content_viewsonic_pjd7720hd, & notify_tab_before_delete_viewsonic_pjd7720hd);
}
