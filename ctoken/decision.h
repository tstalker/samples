#ifdef DECISION_H
#error Redefined header decision.h
#endif

#define DECISION_H

typedef enum
{
	END = 1,
	LEFT,
	RIGHT,
	LEFT_LEFT,
	LEFT_RIGHT,
	RIGHT_RIGHT
}
decision;

typedef const decision cdecision;
typedef decision *pdecision;
typedef cdecision *cpdecision;
