#define VECTOR_INITV(TYPE) \
void vector_initv ## _ ## TYPE (pvector ## _ ## TYPE this, pvector ## _ ## TYPE pv) \
{ \
	this->init = vector_init ## _ ## TYPE; \
	this->init(this, pv->begin(pv), pv->size(pv)); \
}
