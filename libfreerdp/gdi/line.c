/**
 * FreeRDP: A Remote Desktop Protocol Implementation
 * GDI Line Functions
 *
 * Copyright 2010-2011 Marc-Andre Moreau <marcandre.moreau@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <freerdp/freerdp.h>
#include <freerdp/gdi/gdi.h>

#include <freerdp/gdi/32bpp.h>
#include <freerdp/gdi/16bpp.h>
#include <freerdp/gdi/8bpp.h>

#include <freerdp/gdi/line.h>

p_LineTo LineTo_[5] =
{
	NULL,
	LineTo_8bpp,
	LineTo_16bpp,
	NULL,
	LineTo_32bpp
};

/**
 * Draw a line from the current position to the given position.\n
 * @msdn{dd145029}
 * @param hdc device context
 * @param nXEnd ending x position
 * @param nYEnd ending y position
 * @return nonzero if successful, 0 otherwise
 */

BOOL gdi_LineTo(HGDI_DC hdc, int nXEnd, int nYEnd)
{
	p_LineTo _LineTo = LineTo_[IBPP(hdc->bitsPerPixel)];

	if (_LineTo == NULL)
		return FALSE;

	return _LineTo(hdc, nXEnd, nYEnd);
}

/**
 * Draw one or more straight lines
 * @param hdc device context
 * @param lppt array of points
 * @param cCount number of points
 * @return nonzero on success, 0 otherwise
 */
BOOL gdi_PolylineTo(HGDI_DC hdc, GDI_POINT *lppt, DWORD cCount)
{
	DWORD i;

	for (i = 0; i < cCount; i++)
	{
		if (!gdi_LineTo(hdc, lppt[i].x, lppt[i].y))
			return FALSE;
		if (!gdi_MoveToEx(hdc, lppt[i].x, lppt[i].y, NULL))
			return FALSE;
	}

	return TRUE;
}

/**
 * Draw one or more straight lines
 * @param hdc device context
 * @param lppt array of points
 * @param cPoints number of points
 * @return nonzero on success, 0 otherwise
 */
BOOL gdi_Polyline(HGDI_DC hdc, GDI_POINT *lppt, int cPoints)
{
	if (cPoints > 0)
	{
		int i;
		GDI_POINT pt;

		if (!gdi_MoveToEx(hdc, lppt[0].x, lppt[0].y, &pt))
			return FALSE;

		for (i = 0; i < cPoints; i++)
		{
			if (!gdi_LineTo(hdc, lppt[i].x, lppt[i].y))
				return FALSE;
			if (!gdi_MoveToEx(hdc, lppt[i].x, lppt[i].y, NULL))
				return FALSE;
		}

		if (!gdi_MoveToEx(hdc, pt.x, pt.y, NULL))
			return FALSE;
	}

	return TRUE;
}

/**
 * Draw multiple series of connected line segments
 * @param hdc device context
 * @param lppt array of points
 * @param lpdwPolyPoints array of numbers of points per series
 * @param cCount count of entries in lpdwPolyPoints
 * @return nonzero on success, 0 otherwise
 */
BOOL gdi_PolyPolyline(HGDI_DC hdc, GDI_POINT *lppt, int *lpdwPolyPoints, DWORD cCount)
{
	int cPoints;
	DWORD i, j = 0;

	for (i = 0; i < cCount; i++)
	{
		cPoints = lpdwPolyPoints[i];
		if (!gdi_Polyline(hdc, &lppt[j], cPoints))
			return FALSE;
		j += cPoints;
	}

	return TRUE;
}

/**
 * Move pen from the current device context to a new position.
 * @param hdc device context
 * @param X x position
 * @param Y y position
 * @return nonzero on success, 0 otherwise
 */

BOOL gdi_MoveToEx(HGDI_DC hdc, int X, int Y, HGDI_POINT lpPoint)
{
	if (lpPoint != NULL)
	{
		lpPoint->x = hdc->pen->posX;
		lpPoint->y = hdc->pen->posY;
	}

	hdc->pen->posX = X;
	hdc->pen->posY = Y;

	return TRUE;
}
