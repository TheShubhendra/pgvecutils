#include "postgres.h"
#include "fmgr.h"
#include "vector.h"
#include "utils/array.h"
#include "utils/builtins.h"
#include "catalog/pg_type.h"
#include <stdlib.h>


PG_MODULE_MAGIC;

PG_FUNCTION_INFO_V1(vector_rand);

Datum
vector_rand(PG_FUNCTION_ARGS){
    int dim = PG_GETARG_INT32(0);
    Vector* vec = (Vector*) palloc(VECTOR_SIZE(dim));
    vec->dim = dim;

    for (int i = 0; i < dim; i++) {
        vec->x[i] = (float4) random() / (float4) RAND_MAX;
    }

    PG_RETURN_POINTER(vec);

}