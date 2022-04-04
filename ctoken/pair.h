#pragma once

#define PAIR(FIRST, SECOND) \
struct spair ## _ ## FIRST ## _ ## SECOND; \
typedef struct spair ## _ ## FIRST ## _ ## SECOND pair ## _ ## FIRST ## _ ## SECOND; \
typedef const pair ## _ ## FIRST ## _ ## SECOND cpair ## _ ## FIRST ## _ ## SECOND; \
typedef pair ## _ ## FIRST ## _ ## SECOND* ppair ## _ ## FIRST ## _ ## SECOND; \
typedef cpair ## _ ## FIRST ## _ ## SECOND* cppair ## _ ## FIRST ## _ ## SECOND; \
\
struct spair ## _ ## FIRST ## _ ## SECOND \
{ \
	FIRST first; \
	SECOND second; \
};
