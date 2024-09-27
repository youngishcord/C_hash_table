#include "hashmap/include/hashmap.h"
#include <stdio.h>

int main(void) {
    hash_map_t* map = hash_map_create(1);

    const char* keys[4] = {
        "test",
        "my",
        "first",
        "hashmap",
    };
    
    for (long idx = 0; idx < 4; idx++) {
        map = hash_map_insert(map, keys[idx], idx);
    }

    for (long idx = 0; idx < 4; idx++) {
        printf(
            "map[\"%s\"] = %ld\n",
            keys[idx],
            hash_map_at(map, keys[idx])
        );
    }

    hash_map_free(map);
    return 0;
}