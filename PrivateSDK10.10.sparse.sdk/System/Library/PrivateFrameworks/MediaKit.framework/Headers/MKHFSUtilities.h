#ifndef __MEDIAKIT_MKHFSUTILITIES_H__
#define __MEDIAKIT_MKHFSUTILITIES_H__

#include <hfs/hfs_format.h>
#include <MediaKit/MKMedia.h>

typedef enum {
	kHFSPlusFormat = 0xff
} HFSTypes;

int32_t MKReadHFSMDBVHB(MKMediaRef media, HFSTypes *type, HFSPlusVolumeHeader *vh, void *a, void *b);

#endif
