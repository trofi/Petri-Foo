#ifndef __SAMPLE_EDITOR_H__
#define __SAMPLE_EDITOR_H__

#include <gtk/gtk.h>

void sample_editor_init(GtkWidget* parent);

/* waveform thumb in sample tab */
void sample_editor_set_thumb(GtkWidget* thumb);

void sample_editor_show(int id);
void sample_editor_update_loop();
void sample_editor_update_play();

#endif /* __SAMPLE_EDITOR_H__ */
