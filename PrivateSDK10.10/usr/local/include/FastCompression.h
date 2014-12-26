#ifndef __FASTCOMPRESSION_H__
#define __FASTCOMPRESSION_H__

size_t lzvn_encode(void *       dst,
                   size_t       dst_size,
                   const void * src,
                   size_t       src_size,
                   void *       work);
size_t lzvn_decode(void *       dst,
                   size_t       dst_size,
                   const void * src,
                   size_t       src_size);
size_t lzvn_encode_work_size(void);

#endif 