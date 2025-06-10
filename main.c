#include <stdio.h>
#include <libusb-1.0/libusb.h>


int main ()
{
  printf ("0x%x\n",LIBUSBX_API_VERSION);
  int r;
  r = libusb_init (NULL);
  //r = libusb_init_context (NULL, NULL, 0);
  
  
  
  
  return 0;
}
  
