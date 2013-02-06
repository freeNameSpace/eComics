/* comic_selection.c generated by valac 0.18.1, the Vala compiler
 * generated from comic_selection.vala, do not modify */

/* Classname: Comic_Selection
 * 
 * The purpose of this class is to allow the user to see a nice mosiac of comics they can see. Say their favorites?
 *
 */

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <stdlib.h>
#include <string.h>


#define ECOMICS_TYPE_COMIC_SELECTION (ecomics_comic_selection_get_type ())
#define ECOMICS_COMIC_SELECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ECOMICS_TYPE_COMIC_SELECTION, eComicsComic_Selection))
#define ECOMICS_COMIC_SELECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ECOMICS_TYPE_COMIC_SELECTION, eComicsComic_SelectionClass))
#define ECOMICS_IS_COMIC_SELECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ECOMICS_TYPE_COMIC_SELECTION))
#define ECOMICS_IS_COMIC_SELECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ECOMICS_TYPE_COMIC_SELECTION))
#define ECOMICS_COMIC_SELECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ECOMICS_TYPE_COMIC_SELECTION, eComicsComic_SelectionClass))

typedef struct _eComicsComic_Selection eComicsComic_Selection;
typedef struct _eComicsComic_SelectionClass eComicsComic_SelectionClass;
typedef struct _eComicsComic_SelectionPrivate eComicsComic_SelectionPrivate;
typedef struct _Block1Data Block1Data;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _gtk_tree_path_free0(var) ((var == NULL) ? NULL : (var = (gtk_tree_path_free (var), NULL)))
#define __g_list_free__gtk_tree_path_free0_0(var) ((var == NULL) ? NULL : (var = (_g_list_free__gtk_tree_path_free0_ (var), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _eComicsComic_Selection {
	GtkBox parent_instance;
	eComicsComic_SelectionPrivate * priv;
};

struct _eComicsComic_SelectionClass {
	GtkBoxClass parent_class;
};

struct _Block1Data {
	int _ref_count_;
	eComicsComic_Selection * self;
	GtkTreeIter iter;
	GtkIconView* view;
};


extern GtkListStore* ecomics_model;
GtkListStore* ecomics_model = NULL;
static gpointer ecomics_comic_selection_parent_class = NULL;

GType ecomics_comic_selection_get_type (void) G_GNUC_CONST;
enum  {
	ECOMICS_COMIC_SELECTION_DUMMY_PROPERTY
};
eComicsComic_Selection* ecomics_comic_selection_new (void);
eComicsComic_Selection* ecomics_comic_selection_construct (GType object_type);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
static void __lambda10_ (Block1Data* _data1_);
void ecomics_comic_manager_Open_Comic (const gchar* title);
static void _gtk_tree_path_free0_ (gpointer var);
static void _g_list_free__gtk_tree_path_free0_ (GList* self);
static void ___lambda10__gtk_icon_view_selection_changed (GtkIconView* _sender, gpointer self);


static Block1Data* block1_data_ref (Block1Data* _data1_) {
	g_atomic_int_inc (&_data1_->_ref_count_);
	return _data1_;
}


static void block1_data_unref (void * _userdata_) {
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
		eComicsComic_Selection * self;
		self = _data1_->self;
		_g_object_unref0 (_data1_->view);
		_g_object_unref0 (self);
		g_slice_free (Block1Data, _data1_);
	}
}


static gpointer _gtk_tree_path_copy0 (gpointer self) {
	return self ? gtk_tree_path_copy (self) : NULL;
}


static void _gtk_tree_path_free0_ (gpointer var) {
	(var == NULL) ? NULL : (var = (gtk_tree_path_free (var), NULL));
}


static void _g_list_free__gtk_tree_path_free0_ (GList* self) {
	g_list_foreach (self, (GFunc) _gtk_tree_path_free0_, NULL);
	g_list_free (self);
}


static void __lambda10_ (Block1Data* _data1_) {
	eComicsComic_Selection * self;
	GList* _tmp0_ = NULL;
	GList* paths;
	GValue title = {0};
	GValue icon = {0};
	GList* _tmp1_;
	self = _data1_->self;
	_tmp0_ = gtk_icon_view_get_selected_items (_data1_->view);
	paths = _tmp0_;
	_tmp1_ = paths;
	{
		GList* path_collection = NULL;
		GList* path_it = NULL;
		path_collection = _tmp1_;
		for (path_it = path_collection; path_it != NULL; path_it = path_it->next) {
			GtkTreePath* _tmp2_;
			GtkTreePath* path = NULL;
			_tmp2_ = _gtk_tree_path_copy0 ((GtkTreePath*) path_it->data);
			path = _tmp2_;
			{
				GtkListStore* _tmp3_;
				GtkTreePath* _tmp4_;
				GtkTreeIter _tmp5_ = {0};
				gboolean _tmp6_ = FALSE;
				gboolean tmp;
				gboolean _tmp7_;
				GtkListStore* _tmp8_;
				GtkTreeIter _tmp9_;
				GValue _tmp10_ = {0};
				GtkListStore* _tmp11_;
				GtkTreeIter _tmp12_;
				GValue _tmp13_ = {0};
				GValue _tmp14_;
				_tmp3_ = ecomics_model;
				_tmp4_ = path;
				_tmp6_ = gtk_tree_model_get_iter ((GtkTreeModel*) _tmp3_, &_tmp5_, _tmp4_);
				_data1_->iter = _tmp5_;
				tmp = _tmp6_;
				_tmp7_ = tmp;
				_vala_assert (_tmp7_ == TRUE, "tmp == true");
				_tmp8_ = ecomics_model;
				_tmp9_ = _data1_->iter;
				gtk_tree_model_get_value ((GtkTreeModel*) _tmp8_, &_tmp9_, 0, &_tmp10_);
				G_IS_VALUE (&icon) ? (g_value_unset (&icon), NULL) : NULL;
				icon = _tmp10_;
				_tmp11_ = ecomics_model;
				_tmp12_ = _data1_->iter;
				gtk_tree_model_get_value ((GtkTreeModel*) _tmp11_, &_tmp12_, 1, &_tmp13_);
				G_IS_VALUE (&title) ? (g_value_unset (&title), NULL) : NULL;
				title = _tmp13_;
				_tmp14_ = title;
				ecomics_comic_manager_Open_Comic (g_value_get_string (&_tmp14_));
				_gtk_tree_path_free0 (path);
			}
		}
	}
	G_IS_VALUE (&icon) ? (g_value_unset (&icon), NULL) : NULL;
	G_IS_VALUE (&title) ? (g_value_unset (&title), NULL) : NULL;
	__g_list_free__gtk_tree_path_free0_0 (paths);
}


static void ___lambda10__gtk_icon_view_selection_changed (GtkIconView* _sender, gpointer self) {
	__lambda10_ (self);
}


eComicsComic_Selection* ecomics_comic_selection_construct (GType object_type) {
	eComicsComic_Selection * self = NULL;
	Block1Data* _data1_;
	GtkScrolledWindow* _tmp0_;
	GtkScrolledWindow* scrolled;
	GtkListStore* _tmp1_;
	GtkListStore* _tmp2_;
	GtkIconView* _tmp3_;
	GdkPixbuf* _tmp4_ = NULL;
	GdkPixbuf* pixbuf;
	GtkListStore* _tmp5_;
	GtkTreeIter _tmp6_ = {0};
	GtkListStore* _tmp7_;
	GtkTreeIter _tmp8_;
	GdkPixbuf* _tmp9_;
	GdkPixbuf* _tmp10_ = NULL;
	GtkListStore* _tmp11_;
	GtkTreeIter _tmp12_ = {0};
	GtkListStore* _tmp13_;
	GtkTreeIter _tmp14_;
	GdkPixbuf* _tmp15_;
	GtkViewport* _tmp16_;
	GtkViewport* viewport;
	gint _tmp17_ = 0;
	gint _tmp18_;
	gint _tmp19_ = 0;
	gint _tmp20_;
	_data1_ = g_slice_new0 (Block1Data);
	_data1_->_ref_count_ = 1;
	self = (eComicsComic_Selection*) g_object_new (object_type, NULL);
	_data1_->self = g_object_ref (self);
	_tmp0_ = (GtkScrolledWindow*) gtk_scrolled_window_new (NULL, NULL);
	g_object_ref_sink (_tmp0_);
	scrolled = _tmp0_;
	_tmp1_ = gtk_list_store_new (2, GDK_TYPE_PIXBUF, G_TYPE_STRING);
	_g_object_unref0 (ecomics_model);
	ecomics_model = _tmp1_;
	_tmp2_ = ecomics_model;
	_tmp3_ = (GtkIconView*) gtk_icon_view_new_with_model ((GtkTreeModel*) _tmp2_);
	g_object_ref_sink (_tmp3_);
	_data1_->view = _tmp3_;
	gtk_icon_view_set_pixbuf_column (_data1_->view, 0);
	gtk_icon_view_set_text_column (_data1_->view, 1);
	gtk_icon_view_set_item_orientation (_data1_->view, GTK_ORIENTATION_VERTICAL);
	_tmp4_ = gtk_widget_render_icon ((GtkWidget*) _data1_->view, GTK_STOCK_ABOUT, GTK_ICON_SIZE_DIALOG, NULL);
	pixbuf = _tmp4_;
	_tmp5_ = ecomics_model;
	gtk_list_store_append (_tmp5_, &_tmp6_);
	_data1_->iter = _tmp6_;
	_tmp7_ = ecomics_model;
	_tmp8_ = _data1_->iter;
	_tmp9_ = pixbuf;
	gtk_list_store_set (_tmp7_, &_tmp8_, 0, _tmp9_, 1, "XKCD", -1);
	_tmp10_ = gtk_widget_render_icon ((GtkWidget*) _data1_->view, GTK_STOCK_PRINT, GTK_ICON_SIZE_DIALOG, NULL);
	_g_object_unref0 (pixbuf);
	pixbuf = _tmp10_;
	_tmp11_ = ecomics_model;
	gtk_list_store_append (_tmp11_, &_tmp12_);
	_data1_->iter = _tmp12_;
	_tmp13_ = ecomics_model;
	_tmp14_ = _data1_->iter;
	_tmp15_ = pixbuf;
	gtk_list_store_set (_tmp13_, &_tmp14_, 0, _tmp15_, 1, "Failure To Feed", -1);
	g_signal_connect_data (_data1_->view, "selection-changed", (GCallback) ___lambda10__gtk_icon_view_selection_changed, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
	_tmp16_ = (GtkViewport*) gtk_viewport_new (NULL, NULL);
	g_object_ref_sink (_tmp16_);
	viewport = _tmp16_;
	g_object_get ((GtkWidget*) scrolled, "width-request", &_tmp17_, NULL);
	_tmp18_ = _tmp17_;
	g_object_get ((GtkWidget*) scrolled, "height-request", &_tmp19_, NULL);
	_tmp20_ = _tmp19_;
	gtk_widget_set_size_request ((GtkWidget*) viewport, _tmp18_, _tmp20_);
	gtk_container_add ((GtkContainer*) viewport, (GtkWidget*) _data1_->view);
	gtk_container_add ((GtkContainer*) scrolled, (GtkWidget*) viewport);
	gtk_box_pack_start (G_TYPE_CHECK_INSTANCE_CAST (self, GTK_TYPE_BOX, GtkBox), (GtkWidget*) scrolled, TRUE, TRUE, (guint) 0);
	_g_object_unref0 (viewport);
	_g_object_unref0 (pixbuf);
	_g_object_unref0 (scrolled);
	block1_data_unref (_data1_);
	_data1_ = NULL;
	return self;
}


eComicsComic_Selection* ecomics_comic_selection_new (void) {
	return ecomics_comic_selection_construct (ECOMICS_TYPE_COMIC_SELECTION);
}


static void ecomics_comic_selection_class_init (eComicsComic_SelectionClass * klass) {
	ecomics_comic_selection_parent_class = g_type_class_peek_parent (klass);
}


static void ecomics_comic_selection_instance_init (eComicsComic_Selection * self) {
}


GType ecomics_comic_selection_get_type (void) {
	static volatile gsize ecomics_comic_selection_type_id__volatile = 0;
	if (g_once_init_enter (&ecomics_comic_selection_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (eComicsComic_SelectionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) ecomics_comic_selection_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (eComicsComic_Selection), 0, (GInstanceInitFunc) ecomics_comic_selection_instance_init, NULL };
		GType ecomics_comic_selection_type_id;
		ecomics_comic_selection_type_id = g_type_register_static (GTK_TYPE_BOX, "eComicsComic_Selection", &g_define_type_info, 0);
		g_once_init_leave (&ecomics_comic_selection_type_id__volatile, ecomics_comic_selection_type_id);
	}
	return ecomics_comic_selection_type_id__volatile;
}


