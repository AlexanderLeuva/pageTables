#include <stdio.h>
#include "mlpt.h"
#include <stdlib.h>


/**
 * Given a virtual address, return the physical address.
 * Return a value consisting of all 1 bits
 * if this virtual address does not have a physical address.
 */
size_t translate(size_t va) {
    //TODO: Implement this function
    //extrapolate different parts of the address by shifting and masking

    return 0;
}

/**
 * Use posix_memalign to create page tables and other pages sufficient
 * to have a mapping between the given virtual address and some physical address.
 * If there already is such a page, does nothing.
 */
void page_allocate(size_t va) {
    //TODO: Implement this function


    //have ptbr point to the first page table
    //if ptbr is null, then allocate a page for it
    //if ptbr is not null, then do nothing


    //posix_memalign to allocate to ptbr
    //if posix_memalign fails, then return
    //if posix_memalign succeeds, then set ptbr to the address of the page table

    posix_memalign(&ptbr,4096,4096);

}
