/* use via LD_LIBRARY_PATH, not LD_PRELOAD */
#include <string.h>
struct tw { unsigned long r0; void *r1; };
#pragma GCC diagnostic ignored "-Wmissing-declarations"
unsigned long kustomer_initialize() { return 0; }
unsigned long kustomer_uninitialize() { return 0; }
unsigned long kustomer_set_logger() { return 0; }
struct tw kustomer_dump_ensure() { return (struct tw){0, strdup("")}; }
struct tw kustomer_begin_ensure() { return (struct tw){0, NULL}; }
unsigned long kustomer_end_ensure() { return 0; }
unsigned long kustomer_ensure_set_allow_untrusted() { return 0; }
unsigned long kustomer_ensure_ok() { return 0; }
unsigned long kustomer_ensure_ensure_bool() { return 0; }
unsigned long kustomer_ensure_ensure_int64_op() { return 0; }
char *kustomer_err_numeric_text() { return strdup(""); }
unsigned long kustomer_set_autorefresh() { return 0; }
unsigned long kustomer_set_notify_when_updated() { return 0; }
unsigned long kustomer_set_productuseragent() { return 0; }
unsigned long kustomer_wait_until_ready() { return 0; }
