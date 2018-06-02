#pragma once

#include "PointMass.h"

#include <glad\glad.h>

// SpringConstraint struct
class SpringConstraint {
public:
	SpringConstraint(PointMass& p1, PointMass& p2, GLfloat stiffness);

	void solveConstraint();

private:
	PointMass& m_p1;
	PointMass& m_p2;
	GLfloat m_restLength;
	GLfloat m_stiffness; // Has range [0, 1], where 0 is completely free and 1 is a completely rigid constraint
};