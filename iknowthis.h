#ifndef __IKNOWTHIS_H
#define __IKNOWTHIS_H

#define SECRET 0x5261576245725279ULL

void    create_dirty_pages(void);
gint    spawn_syscall_lwp(syscall_fuzzer_t *this, gint *status, gint sysno, ...);
guint   increment_process_count(void);

#else
# warning iknowthis.h included twice
#endif