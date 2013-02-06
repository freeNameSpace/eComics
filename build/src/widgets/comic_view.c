/* comic_view.c generated by valac 0.18.1, the Vala compiler
 * generated from comic_view.vala, do not modify */

/* Classname: Comic_View
 * 
 * This is a widget that is used to display a comic. This includes the viewport and all imaging requirements.
 *
 */

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>


#define ECOMICS_TYPE_COMIC_VIEW (ecomics_comic_view_get_type ())
#define ECOMICS_COMIC_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ECOMICS_TYPE_COMIC_VIEW, eComicsComic_View))
#define ECOMICS_COMIC_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ECOMICS_TYPE_COMIC_VIEW, eComicsComic_ViewClass))
#define ECOMICS_IS_COMIC_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ECOMICS_TYPE_COMIC_VIEW))
#define ECOMICS_IS_COMIC_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ECOMICS_TYPE_COMIC_VIEW))
#define ECOMICS_COMIC_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ECOMICS_TYPE_COMIC_VIEW, eComicsComic_ViewClass))

typedef struct _eComicsComic_View eComicsComic_View;
typedef struct _eComicsComic_ViewClass eComicsComic_ViewClass;
typedef struct _eComicsComic_ViewPrivate eComicsComic_ViewPrivate;

struct _eComicsComic_View {
	GtkBox parent_instance;
	eComicsComic_ViewPrivate * priv;
};

struct _eComicsComic_ViewClass {
	GtkBoxClass parent_class;
};


static gpointer ecomics_comic_view_parent_class = NULL;

GType ecomics_comic_view_get_type (void) G_GNUC_CONST;
enum  {
	ECOMICS_COMIC_VIEW_DUMMY_PROPERTY
};
eComicsComic_View* ecomics_comic_view_new (void);
eComicsComic_View* ecomics_comic_view_construct (GType object_type);


eComicsComic_View* ecomics_comic_view_construct (GType object_type) {
	eComicsComic_View * self = NULL;
	self = (eComicsComic_View*) g_object_new (object_type, NULL);
	return self;
}


eComicsComic_View* ecomics_comic_view_new (void) {
	return ecomics_comic_view_construct (ECOMICS_TYPE_COMIC_VIEW);
}


static void ecomics_comic_view_class_init (eComicsComic_ViewClass * klass) {
	ecomics_comic_view_parent_class = g_type_class_peek_parent (klass);
}


static void ecomics_comic_view_instance_init (eComicsComic_View * self) {
}


GType ecomics_comic_view_get_type (void) {
	static volatile gsize ecomics_comic_view_type_id__volatile = 0;
	if (g_once_init_enter (&ecomics_comic_view_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (eComicsComic_ViewClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) ecomics_comic_view_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (eComicsComic_View), 0, (GInstanceInitFunc) ecomics_comic_view_instance_init, NULL };
		GType ecomics_comic_view_type_id;
		ecomics_comic_view_type_id = g_type_register_static (GTK_TYPE_BOX, "eComicsComic_View", &g_define_type_info, 0);
		g_once_init_leave (&ecomics_comic_view_type_id__volatile, ecomics_comic_view_type_id);
	}
	return ecomics_comic_view_type_id__volatile;
}



