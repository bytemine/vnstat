#ifndef IFINFO_H
#define IFINFO_H

#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__)
#include <net/if.h>
#endif

int getifinfo(const char *iface);
void initmacs(void);
const char *if2mac(const char *iface);
const char *mac2if(const char *mac);
int getiflist(char **ifacelist, int showspeed);
int readproc(const char *iface);
int readsysclassnet(const char *iface);
void parseifinfo(int newdb);
#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__)
int getifdata(const char *iface, struct if_data *ifd);
int readifaddrs(const char *iface);
#endif
uint32_t getifspeed(const char *iface);

#endif
