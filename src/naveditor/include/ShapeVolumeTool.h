//
// Copyright (c) 2009-2010 Mikko Mononen memon@inside.org
//
// This software is provided 'as-is', without any express or implied
// warranty.  In no event will the authors be held liable for any damages
// arising from the use of this software.
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
// 1. The origin of this software must not be misrepresented; you must not
//    claim that you wrote the original software. If you use this software
//    in a product, an acknowledgment in the product documentation would be
//    appreciated but is not required.
// 2. Altered source versions must be plainly marked as such, and must not be
//    misrepresented as being the original software.
// 3. This notice may not be removed or altered from any source distribution.
//

#ifndef SHAPEVOLUMETOOL_H
#define SHAPEVOLUMETOOL_H

#include "NavEditor/Include/Editor.h"
#include "NavEditor/Include/InputGeom.h"

// Tool to create shape volumes for InputGeom

class ShapeVolumeTool : public EditorTool
{
	Editor* m_editor;

	int m_selectedVolumeIndex;
	int m_selectedPrimitive;

	int m_areaType;
	int m_polyFlags;

	float m_boxDescent;
	float m_boxAscent;

	float m_cylinderRadius;
	float m_cylinderHeight;

	float m_convexOffset;
	float m_convexHeight;
	float m_convexDescent;
	
	float m_pts[MAX_SHAPEVOL_PTS*3];
	int m_npts;
	int m_hull[MAX_SHAPEVOL_PTS];
	int m_nhull;

	ShapeVolume m_shapeCopy;
	int m_copiedShapeIndex;
	
public:
	ShapeVolumeTool();

	inline int getSelectedVolumeIndex() const { return m_selectedVolumeIndex; };

	virtual int type() { return TOOL_SHAPE_VOLUME; }
	virtual void init(Editor* editor);
	virtual void reset();
	virtual void handleMenu();
	virtual void handleClick(const float* s, const float* p, const int v, bool shift);
	virtual void handleToggle();
	virtual void handleStep();
	virtual void handleUpdate(const float dt);
	virtual void handleRender();
	virtual void handleRenderOverlay(double* proj, double* model, int* view);
};

#endif // SHAPEVOLUMETOOL_H