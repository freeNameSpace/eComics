/* RowButton.c generated by valac 0.18.1, the Vala compiler
 * generated from RowButton.vala, do not modify */

/**/
/*  Copyright (C) 2008 Christian Hergert <chris@dronelabs.com>*/
/*  Copyright (C) 2011 Giulio Collura*/
/*  Copyright (C) 2012 Victor Eduardo <victor@elementaryos.org>*/
/**/
/*  This program is free software: you can redistribute it and/or modify*/
/*  it under the terms of the GNU General Public License as published by*/
/*  the Free Software Foundation, either version 3 of the License, or*/
/*  (at your option) any later version.*/
/**/
/*  This program is distributed in the hope that it will be useful,*/
/*  but WITHOUT ANY WARRANTY; without even the implied warranty of*/
/*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the*/
/*  GNU General Public License for more details.*/
/**/
/*  You should have received a copy of the GNU General Public License*/
/*  along with this program.  If not, see <http://www.gnu.org/licenses/>.*/
/**/

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gee.h>
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <stdlib.h>
#include <string.h>


#define GRANITE_WIDGETS_TYPE_ROW_BUTTON (granite_widgets_row_button_get_type ())
#define GRANITE_WIDGETS_ROW_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRANITE_WIDGETS_TYPE_ROW_BUTTON, GraniteWidgetsRowButton))
#define GRANITE_WIDGETS_ROW_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRANITE_WIDGETS_TYPE_ROW_BUTTON, GraniteWidgetsRowButtonClass))
#define GRANITE_WIDGETS_IS_ROW_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRANITE_WIDGETS_TYPE_ROW_BUTTON))
#define GRANITE_WIDGETS_IS_ROW_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRANITE_WIDGETS_TYPE_ROW_BUTTON))
#define GRANITE_WIDGETS_ROW_BUTTON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRANITE_WIDGETS_TYPE_ROW_BUTTON, GraniteWidgetsRowButtonClass))

typedef struct _GraniteWidgetsRowButton GraniteWidgetsRowButton;
typedef struct _GraniteWidgetsRowButtonClass GraniteWidgetsRowButtonClass;
typedef struct _GraniteWidgetsRowButtonPrivate GraniteWidgetsRowButtonPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_list_free0(var) ((var == NULL) ? NULL : (var = (g_list_free (var), NULL)))

struct _GraniteWidgetsRowButton {
	GtkBox parent_instance;
	GraniteWidgetsRowButtonPrivate * priv;
};

struct _GraniteWidgetsRowButtonClass {
	GtkBoxClass parent_class;
};

struct _GraniteWidgetsRowButtonPrivate {
	gint _selected;
	GeeHashMap* item_map;
};


static gpointer granite_widgets_row_button_parent_class = NULL;

GType granite_widgets_row_button_get_type (void) G_GNUC_CONST;
#define GRANITE_WIDGETS_ROW_BUTTON_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), GRANITE_WIDGETS_TYPE_ROW_BUTTON, GraniteWidgetsRowButtonPrivate))
enum  {
	GRANITE_WIDGETS_ROW_BUTTON_DUMMY_PROPERTY,
	GRANITE_WIDGETS_ROW_BUTTON_SELECTED,
	GRANITE_WIDGETS_ROW_BUTTON_N_ITEMS
};
GraniteWidgetsRowButton* granite_widgets_row_button_new (void);
GraniteWidgetsRowButton* granite_widgets_row_button_construct (GType object_type);
GtkButton* granite_widgets_row_button_append_pixbuf (GraniteWidgetsRowButton* self, GdkPixbuf* pixbuf);
GtkButton* granite_widgets_row_button_append (GraniteWidgetsRowButton* self, GtkWidget* w);
GtkButton* granite_widgets_row_button_append_text (GraniteWidgetsRowButton* self, const gchar* text);
GtkButton* granite_widgets_row_button_append_icon (GraniteWidgetsRowButton* self, const gchar* icon_name, GtkIconSize size);
void granite_widgets_row_button_set_active (GraniteWidgetsRowButton* self, gint new_active_index);
void granite_widgets_row_button_remove (GraniteWidgetsRowButton* self, gint index);
void granite_widgets_row_button_clear_children (GraniteWidgetsRowButton* self);
gint granite_widgets_row_button_get_selected (GraniteWidgetsRowButton* self);
void granite_widgets_row_button_set_selected (GraniteWidgetsRowButton* self, gint value);
guint granite_widgets_row_button_get_n_items (GraniteWidgetsRowButton* self);
static void g_cclosure_user_marshal_VOID__INT_OBJECT (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
static void granite_widgets_row_button_finalize (GObject* obj);
static void _vala_granite_widgets_row_button_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_granite_widgets_row_button_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


/**
         * Makes new ModeButton
         */
static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


GraniteWidgetsRowButton* granite_widgets_row_button_construct (GType object_type) {
	GraniteWidgetsRowButton * self = NULL;
	GeeHashMap* _tmp0_;
	GtkStyleContext* _tmp1_ = NULL;
	GtkStyleContext* _tmp2_;
	GtkStyleContext* style;
	self = (GraniteWidgetsRowButton*) g_object_new (object_type, NULL);
	gtk_box_set_homogeneous ((GtkBox*) self, TRUE);
	gtk_box_set_spacing ((GtkBox*) self, 0);
	g_object_set ((GtkWidget*) self, "can-focus", FALSE, NULL);
	_tmp0_ = gee_hash_map_new (G_TYPE_INT, NULL, NULL, GTK_TYPE_BUTTON, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL);
	_g_object_unref0 (self->priv->item_map);
	self->priv->item_map = _tmp0_;
	_tmp1_ = gtk_widget_get_style_context ((GtkWidget*) self);
	_tmp2_ = _g_object_ref0 (_tmp1_);
	style = _tmp2_;
	gtk_style_context_add_class (style, GTK_STYLE_CLASS_LINKED);
	gtk_style_context_add_class (style, "raised");
	_g_object_unref0 (style);
	return self;
}


GraniteWidgetsRowButton* granite_widgets_row_button_new (void) {
	return granite_widgets_row_button_construct (GRANITE_WIDGETS_TYPE_ROW_BUTTON);
}


/**
         * Appends Pixbuf to ModeButton
         *
         * @param pixbuf Gdk.Pixbuf to append to ModeButton
         */
GtkButton* granite_widgets_row_button_append_pixbuf (GraniteWidgetsRowButton* self, GdkPixbuf* pixbuf) {
	GtkButton* result = NULL;
	GdkPixbuf* _tmp0_;
	GtkImage* _tmp1_;
	GtkImage* _tmp2_;
	GtkButton* _tmp3_ = NULL;
	GtkButton* _tmp4_;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (pixbuf != NULL, NULL);
	_tmp0_ = pixbuf;
	_tmp1_ = (GtkImage*) gtk_image_new_from_pixbuf (_tmp0_);
	g_object_ref_sink (_tmp1_);
	_tmp2_ = _tmp1_;
	_tmp3_ = granite_widgets_row_button_append (self, (GtkWidget*) _tmp2_);
	_tmp4_ = _tmp3_;
	_g_object_unref0 (_tmp2_);
	result = _tmp4_;
	return result;
}


/**
         * Appends text to ModeButton
         *
         * @param text text to append to ModeButton
         * @return index of new item
         */
GtkButton* granite_widgets_row_button_append_text (GraniteWidgetsRowButton* self, const gchar* text) {
	GtkButton* result = NULL;
	const gchar* _tmp0_;
	GtkLabel* _tmp1_;
	GtkLabel* _tmp2_;
	GtkButton* _tmp3_ = NULL;
	GtkButton* _tmp4_;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (text != NULL, NULL);
	_tmp0_ = text;
	_tmp1_ = (GtkLabel*) gtk_label_new (_tmp0_);
	g_object_ref_sink (_tmp1_);
	_tmp2_ = _tmp1_;
	_tmp3_ = granite_widgets_row_button_append (self, (GtkWidget*) _tmp2_);
	_tmp4_ = _tmp3_;
	_g_object_unref0 (_tmp2_);
	result = _tmp4_;
	return result;
}


/**
         * Appends icon to ModeButton
         *
         * @param icon_name name of icon to append
         * @param size desired size of icon
         * @return index of appended item
         */
GtkButton* granite_widgets_row_button_append_icon (GraniteWidgetsRowButton* self, const gchar* icon_name, GtkIconSize size) {
	GtkButton* result = NULL;
	const gchar* _tmp0_;
	GtkIconSize _tmp1_;
	GtkImage* _tmp2_;
	GtkImage* _tmp3_;
	GtkButton* _tmp4_ = NULL;
	GtkButton* _tmp5_;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (icon_name != NULL, NULL);
	_tmp0_ = icon_name;
	_tmp1_ = size;
	_tmp2_ = (GtkImage*) gtk_image_new_from_icon_name (_tmp0_, _tmp1_);
	g_object_ref_sink (_tmp2_);
	_tmp3_ = _tmp2_;
	_tmp4_ = granite_widgets_row_button_append (self, (GtkWidget*) _tmp3_);
	_tmp5_ = _tmp4_;
	_g_object_unref0 (_tmp3_);
	result = _tmp5_;
	return result;
}


/**
         * Appends given widget to ModeButton
         *
         * @param w widget to add to ModeButton
         * @return index of new item
         */
GtkButton* granite_widgets_row_button_append (GraniteWidgetsRowButton* self, GtkWidget* w) {
	GtkButton* result = NULL;
	GtkButton* _tmp0_;
	GtkButton* item;
	GtkWidget* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (w != NULL, NULL);
	_tmp0_ = (GtkButton*) gtk_button_new ();
	g_object_ref_sink (_tmp0_);
	item = _tmp0_;
	_tmp1_ = w;
	gtk_container_add ((GtkContainer*) item, _tmp1_);
	g_object_set ((GtkWidget*) item, "width-request", 36, NULL);
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) item);
	gtk_widget_show_all ((GtkWidget*) item);
	result = item;
	return result;
}


/**
         * Sets item of given index's activity 
         *
         * @param new_active_index index of changed item
         */
void granite_widgets_row_button_set_active (GraniteWidgetsRowButton* self, gint new_active_index) {
	GeeHashMap* _tmp0_;
	gint _tmp1_;
	gboolean _tmp2_ = FALSE;
	GeeHashMap* _tmp3_;
	gint _tmp4_;
	gpointer _tmp5_ = NULL;
	GtkButton* new_item;
	GtkButton* _tmp6_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->item_map;
	_tmp1_ = new_active_index;
	_tmp2_ = gee_abstract_map_has_key ((GeeAbstractMap*) _tmp0_, (gpointer) ((gintptr) _tmp1_));
	g_return_if_fail (_tmp2_);
	_tmp3_ = self->priv->item_map;
	_tmp4_ = new_active_index;
	_tmp5_ = gee_abstract_map_get ((GeeAbstractMap*) _tmp3_, (gpointer) ((gintptr) _tmp4_));
	new_item = G_TYPE_CHECK_INSTANCE_TYPE ((GtkButton*) _tmp5_, GTK_TYPE_BUTTON) ? ((GtkButton*) ((GtkButton*) _tmp5_)) : NULL;
	_tmp6_ = new_item;
	if (_tmp6_ != NULL) {
		gint _tmp7_;
		gint _tmp8_;
		gint _tmp9_;
		GtkButton* _tmp10_;
		GtkWidget* _tmp11_ = NULL;
		_tmp7_ = self->priv->_selected;
		_tmp8_ = new_active_index;
		if (_tmp7_ == _tmp8_) {
			_g_object_unref0 (new_item);
			return;
		}
		_tmp9_ = new_active_index;
		self->priv->_selected = _tmp9_;
		_tmp10_ = new_item;
		_tmp11_ = gtk_bin_get_child ((GtkBin*) _tmp10_);
		g_signal_emit_by_name (self, "mode-changed", _tmp11_);
	}
	_g_object_unref0 (new_item);
}


/**
         * Removes item at given index
         *
         * @param index index of item to remove
         */
void granite_widgets_row_button_remove (GraniteWidgetsRowButton* self, gint index) {
	GeeHashMap* _tmp0_;
	gint _tmp1_;
	gboolean _tmp2_ = FALSE;
	GeeHashMap* _tmp3_;
	gint _tmp4_;
	gpointer _tmp5_ = NULL;
	GtkButton* item;
	GtkButton* _tmp6_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->item_map;
	_tmp1_ = index;
	_tmp2_ = gee_abstract_map_has_key ((GeeAbstractMap*) _tmp0_, (gpointer) ((gintptr) _tmp1_));
	g_return_if_fail (_tmp2_);
	_tmp3_ = self->priv->item_map;
	_tmp4_ = index;
	_tmp5_ = gee_abstract_map_get ((GeeAbstractMap*) _tmp3_, (gpointer) ((gintptr) _tmp4_));
	item = G_TYPE_CHECK_INSTANCE_TYPE ((GtkButton*) _tmp5_, GTK_TYPE_BUTTON) ? ((GtkButton*) ((GtkButton*) _tmp5_)) : NULL;
	_tmp6_ = item;
	if (_tmp6_ != NULL) {
		gint _tmp7_;
		GtkButton* _tmp8_;
		GtkWidget* _tmp9_ = NULL;
		GeeHashMap* _tmp10_;
		gint _tmp11_;
		GtkButton* _tmp12_;
		_tmp7_ = index;
		_tmp8_ = item;
		_tmp9_ = gtk_bin_get_child ((GtkBin*) _tmp8_);
		g_signal_emit_by_name (self, "mode-removed", _tmp7_, _tmp9_);
		_tmp10_ = self->priv->item_map;
		_tmp11_ = index;
		gee_abstract_map_unset ((GeeAbstractMap*) _tmp10_, (gpointer) ((gintptr) _tmp11_), NULL);
		_tmp12_ = item;
		gtk_widget_destroy ((GtkWidget*) _tmp12_);
	}
	_g_object_unref0 (item);
}


/**
         * Clears all children
         */
void granite_widgets_row_button_clear_children (GraniteWidgetsRowButton* self) {
	GList* _tmp0_ = NULL;
	GeeHashMap* _tmp5_;
	g_return_if_fail (self != NULL);
	_tmp0_ = gtk_container_get_children ((GtkContainer*) self);
	{
		GList* button_collection = NULL;
		GList* button_it = NULL;
		button_collection = _tmp0_;
		for (button_it = button_collection; button_it != NULL; button_it = button_it->next) {
			GtkWidget* button = NULL;
			button = (GtkWidget*) button_it->data;
			{
				GtkWidget* _tmp1_;
				GtkWidget* _tmp2_;
				GtkWidget* _tmp3_ = NULL;
				_tmp1_ = button;
				gtk_widget_hide (_tmp1_);
				_tmp2_ = button;
				_tmp3_ = gtk_widget_get_parent (_tmp2_);
				if (_tmp3_ != NULL) {
					GtkWidget* _tmp4_;
					_tmp4_ = button;
					GTK_CONTAINER_CLASS (granite_widgets_row_button_parent_class)->remove ((GtkContainer*) G_TYPE_CHECK_INSTANCE_CAST (self, GTK_TYPE_BOX, GtkBox), _tmp4_);
				}
			}
		}
		_g_list_free0 (button_collection);
	}
	_tmp5_ = self->priv->item_map;
	gee_abstract_map_clear ((GeeAbstractMap*) _tmp5_);
	self->priv->_selected = -1;
}


gint granite_widgets_row_button_get_selected (GraniteWidgetsRowButton* self) {
	gint result;
	gint _tmp0_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_selected;
	result = _tmp0_;
	return result;
}


void granite_widgets_row_button_set_selected (GraniteWidgetsRowButton* self, gint value) {
	gint _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	granite_widgets_row_button_set_active (self, _tmp0_);
	g_object_notify ((GObject *) self, "selected");
}


guint granite_widgets_row_button_get_n_items (GraniteWidgetsRowButton* self) {
	guint result;
	GeeHashMap* _tmp0_;
	gint _tmp1_;
	gint _tmp2_;
	g_return_val_if_fail (self != NULL, 0U);
	_tmp0_ = self->priv->item_map;
	_tmp1_ = gee_abstract_map_get_size ((GeeMap*) _tmp0_);
	_tmp2_ = _tmp1_;
	result = (guint) _tmp2_;
	return result;
}


static void g_cclosure_user_marshal_VOID__INT_OBJECT (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) {
	typedef void (*GMarshalFunc_VOID__INT_OBJECT) (gpointer data1, gint arg_1, gpointer arg_2, gpointer data2);
	register GMarshalFunc_VOID__INT_OBJECT callback;
	register GCClosure * cc;
	register gpointer data1;
	register gpointer data2;
	cc = (GCClosure *) closure;
	g_return_if_fail (n_param_values == 3);
	if (G_CCLOSURE_SWAP_DATA (closure)) {
		data1 = closure->data;
		data2 = param_values->data[0].v_pointer;
	} else {
		data1 = param_values->data[0].v_pointer;
		data2 = closure->data;
	}
	callback = (GMarshalFunc_VOID__INT_OBJECT) (marshal_data ? marshal_data : cc->callback);
	callback (data1, g_value_get_int (param_values + 1), g_value_get_object (param_values + 2), data2);
}


static void granite_widgets_row_button_class_init (GraniteWidgetsRowButtonClass * klass) {
	granite_widgets_row_button_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (GraniteWidgetsRowButtonPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_granite_widgets_row_button_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_granite_widgets_row_button_set_property;
	G_OBJECT_CLASS (klass)->finalize = granite_widgets_row_button_finalize;
	/**
	         * Index of currently selected item.
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GRANITE_WIDGETS_ROW_BUTTON_SELECTED, g_param_spec_int ("selected", "selected", "selected", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	         * Read-only length of current ModeButton
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GRANITE_WIDGETS_ROW_BUTTON_N_ITEMS, g_param_spec_uint ("n-items", "n-items", "n-items", 0, G_MAXUINT, 0U, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	g_signal_new ("mode_added", GRANITE_WIDGETS_TYPE_ROW_BUTTON, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_user_marshal_VOID__INT_OBJECT, G_TYPE_NONE, 2, G_TYPE_INT, GTK_TYPE_WIDGET);
	g_signal_new ("mode_removed", GRANITE_WIDGETS_TYPE_ROW_BUTTON, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_user_marshal_VOID__INT_OBJECT, G_TYPE_NONE, 2, G_TYPE_INT, GTK_TYPE_WIDGET);
	g_signal_new ("mode_changed", GRANITE_WIDGETS_TYPE_ROW_BUTTON, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__OBJECT, G_TYPE_NONE, 1, GTK_TYPE_WIDGET);
}


static void granite_widgets_row_button_instance_init (GraniteWidgetsRowButton * self) {
	self->priv = GRANITE_WIDGETS_ROW_BUTTON_GET_PRIVATE (self);
	self->priv->_selected = -1;
}


static void granite_widgets_row_button_finalize (GObject* obj) {
	GraniteWidgetsRowButton * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GRANITE_WIDGETS_TYPE_ROW_BUTTON, GraniteWidgetsRowButton);
	_g_object_unref0 (self->priv->item_map);
	G_OBJECT_CLASS (granite_widgets_row_button_parent_class)->finalize (obj);
}


/**
     * This widget is a multiple option modal switch
     */
GType granite_widgets_row_button_get_type (void) {
	static volatile gsize granite_widgets_row_button_type_id__volatile = 0;
	if (g_once_init_enter (&granite_widgets_row_button_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GraniteWidgetsRowButtonClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) granite_widgets_row_button_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GraniteWidgetsRowButton), 0, (GInstanceInitFunc) granite_widgets_row_button_instance_init, NULL };
		GType granite_widgets_row_button_type_id;
		granite_widgets_row_button_type_id = g_type_register_static (GTK_TYPE_BOX, "GraniteWidgetsRowButton", &g_define_type_info, 0);
		g_once_init_leave (&granite_widgets_row_button_type_id__volatile, granite_widgets_row_button_type_id);
	}
	return granite_widgets_row_button_type_id__volatile;
}


static void _vala_granite_widgets_row_button_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	GraniteWidgetsRowButton * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GRANITE_WIDGETS_TYPE_ROW_BUTTON, GraniteWidgetsRowButton);
	switch (property_id) {
		case GRANITE_WIDGETS_ROW_BUTTON_SELECTED:
		g_value_set_int (value, granite_widgets_row_button_get_selected (self));
		break;
		case GRANITE_WIDGETS_ROW_BUTTON_N_ITEMS:
		g_value_set_uint (value, granite_widgets_row_button_get_n_items (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_granite_widgets_row_button_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	GraniteWidgetsRowButton * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GRANITE_WIDGETS_TYPE_ROW_BUTTON, GraniteWidgetsRowButton);
	switch (property_id) {
		case GRANITE_WIDGETS_ROW_BUTTON_SELECTED:
		granite_widgets_row_button_set_selected (self, g_value_get_int (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



