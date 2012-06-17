/*
* Phoenix 3D ��Ϸ���� Version 2.0
*
* Copyright (C) 2009-2011 http://www.Phoenix3d.org/
*
* �ļ�����	��	PX2ScreenTarget.hpp
*
* �汾		:	1.0 (2011/02/01)
*
* ����		��	more
*
*/

#ifndef PX2SCREENTARGET_HPP
#define PX2SCREENTARGET_HPP

#include "PX2GraphicsPrerequisites.hpp"
#include "PX2Camera.hpp"
#include "PX2TriMesh.hpp"

namespace PX2
{

	class ScreenTarget
	{
	public:
		// ��Ļ�ռ�����
		static Camera* CreateCamera ();

		// ����reder target����Ļ���񡣶����ʽ������3-tuple positions��2-tuple
		// texture coordinates in unit 0����������[xmin,xmax]x[ymin,ymax]������
		// ����������ڷ�Χ[0,1]x[0,1]�ڡ�
		static TriMesh* CreateRectangle (VertexFormat* vformat, int rtWidth,
			int rtHeight, float xmin, float xmax, float ymin, float ymax,
			float zValue);

		/// ������Ļ���εĿռ�λ�õ������������
		static bool CreatePositions (int rtWidth, int rtHeight, float xmin,
			float xmax, float ymin, float ymax, float zValue, Float3* positions);

		/// ������Ļ���ε��������굽�����������
		static void CreateTCoords (Float2* tcoords);

	private:
		static bool ValidSizes (int rtWidth, int rtHeight);
		static bool ValidFormat (VertexFormat* vformat);
	};

}

#endif