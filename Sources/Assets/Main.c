#include <stdio.h>
#include <sys/stat.h>
#include <argp.h>
#include <gtk/gtk.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include "../API/Logos.h"

const char *argp_program_version = "Christoffen Assets";
const char *argp_program_bug_address = "M. Gage Morgan <gage@christoffen.com>";
static char doc[] = "Generates all of the logo, or just some.";

static int parse_opt (int key, char *arg, struct argp_state *state) {
 switch (key) {
 case 'C': 
 ColoredNoLogo(); 
 break;
 case 'c':
 ColoredAll();
 break;
 case 'O':
 OutlinedNoLogo();
 break;
 case 'o':
 OutlinedAll();
 break;
 case 'F':
 Frankenlogos();
 break;
 }
 return 0;
}

int main(int argc, char *argv[]) {
struct stat st = {0};

if (stat("UI", &st) == -1) {
    mkdir("UI", 0700);
}

CopyFiles();

if (stat("AppContent", &st) == -1) {
    mkdir("AppContent", 0700);
}

if (stat("AppContent/Logo", &st) == -1) {
    mkdir("AppContent/Logo", 0700);
}

if (stat("AppContent/IconChat", &st) == -1) {
    mkdir("AppContent/IconChat", 0700);
}

if (argc == 1) {
    GtkBuilder      *builder; 
    GtkWidget       *window;
 
    gtk_init(&argc, &argv);
 
    builder = gtk_builder_new();
    gtk_builder_add_from_file (builder, "UI/MainWindow.ui", NULL);
 
    window = GTK_WIDGET(gtk_builder_get_object(builder, "MainWindow"));
    gtk_builder_connect_signals(builder, NULL);
 
    g_object_unref(builder);
 
    gtk_widget_show(window);                
    gtk_main();
 
    return 0;

} else {

 struct argp_option options[] =
 {
 { "colored-no-logo", 'C', 0, 0, "Generate all colored triangles, except for the logo\n"},
 { "colored-all", 'c', 0, 0, "Generate all colored triangles, and the logo\n"},
 { "outlined-no-logo", 'O', 0, 0, "Generate all outlined triangles, except for the logo\n"},
 { "outlined-all", 'o', 0, 0, "Generate all outlined triangles, and the logo\n"}, 
 { "frankenlogos", 'F', 0, 0, "Generate the Frankenlogos (don't ask; just do)\n"}, 
 { 0 }
 };
 struct argp argp = { options, parse_opt, 0, 0 };
 return argp_parse (&argp, argc, argv, 0, 0, 0); 
  }

}
 
