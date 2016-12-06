#ifndef _MEMORY_H
#define _MEMORY_H

/* Type of malloc requests */
enum lc_memTypes {
    LC_MEMTYPE_GFS = 0,
    LC_MEMTYPE_DIRENT = 1,
    LC_MEMTYPE_DIRNAME = 2,
    LC_MEMTYPE_ICACHE = 3,
    LC_MEMTYPE_INODE = 4,
    LC_MEMTYPE_SYMLINK = 5,
    LC_MEMTYPE_PCACHE = 6,
    LC_MEMTYPE_ILOCK = 7,
    LC_MEMTYPE_BMAP = 8,
    LC_MEMTYPE_EXTENT = 9,
    LC_MEMTYPE_BLOCK = 10,
    LC_MEMTYPE_PAGE = 11,
    LC_MEMTYPE_DATA = 12,
    LC_MEMTYPE_DPAGEHASH = 13,
    LC_MEMTYPE_XATTR = 14,
    LC_MEMTYPE_XATTRNAME = 15,
    LC_MEMTYPE_XATTRVALUE = 16,
    LC_MEMTYPE_XATTRBUF = 17,
    LC_MEMTYPE_STATS = 18,
    LC_MEMTYPE_MAX = 19,
};

#endif
