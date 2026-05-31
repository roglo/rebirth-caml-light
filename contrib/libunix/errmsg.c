#include <string.h>
#include <mlvalues.h>
#include <alloc.h>

extern int errno;
extern int error_table[];

value unix_error_message(err)
     value err;
{
  int errnum;
  errnum = error_table[Tag_val(err)];
  return copy_string(strerror(errnum));
}
