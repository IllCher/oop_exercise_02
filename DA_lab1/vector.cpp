#include <iostream>
#include "vector.hpp"
vector* v_create() {
    vector *v = new vector;
    v->size = 0;
    v->body = nullptr;
    return v;
}
int v_get_size(vector *v) {
    return v->size;
}
kv v_get_val(vector* v, int i) {
    return v->body[i];
}
void v_set(vector *v, int i, char val, char key) {
    v->body[i].key = key;
    v->body[i].value = val;
}
void push(vector *v, kv a) {
    v->body[v->size] = a;
    v->size++;
}
/*bool v_set_size(vector *v, int size) {
    double *bodyRe = (double*)realloc(v->body,size*sizeof(double));
    if (bodyRe == NULL && size != 0) {
        return false;
    }
    for (int i = v->size; i < size; i++) {
        bodyRe[i]=0;
    }
    v->body = bodyRe;
    v->size = size;
    return true;
}*/
void v_destroy(vector *v) {
    delete(v);
}
