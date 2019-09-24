#ifndef _VECTOR_H_
#define _VECTOR_H_
typedef struct {
    char value[64];
    char key[32];
} kv;
typedef struct {
    kv* body;
    int size;
}vector;
vector* v_create();
int v_get_size(vector *v);
kv v_get_val(vector* v, int i);
kv v_get_key(vector* v, int i);
void v_set(vector *v, int i, char val, char key);
void v_destroy(vector *v);
void push(vector *v, char key, char val);
//bool v_set_size(vector *v, int size);
#endif
