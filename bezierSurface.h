#ifndef _BEZIERSURFACE_H_
#define _BEZIERSURFACE_H_
#include "bezier.h"

class bezierSurface : public bezier{
private:
	int uPoints;
	int vPoints;
	float ***controlPoints;
	float ***curvePoints;
	void calSurface();
public:
	bezierSurface(int uPoints, int vPoints, float **points[3]);
	void setShowPoints(bool showControlPoints);
	virtual void draw();
        ~bezierSurface();
};
#endif
