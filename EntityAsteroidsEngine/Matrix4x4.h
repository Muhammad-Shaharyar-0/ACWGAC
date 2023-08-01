#pragma once
#include "Vector4.h"


namespace Datastructers
{
	struct Matrix4x4
	{
		union
		{
			float mElements[16];
			Vector4 mRows[4];
			struct
			{
				//Column 1 //Column 2 //Column 3 //Column 4
				float _11; float _12; float _13; float _14; //Row 1
				float _21; float _22; float _23; float _24; //Row 2
				float _31; float _32; float _33; float _34; //Row 3
				float _41; float _42; float _43; float _44; //Row 4
			};
		};

		//Structors
		Matrix4x4();
		Matrix4x4(const Vector4& pRow1, const Vector4& pRow2, const Vector4& pRow3, const Vector4& pRow4);
		Matrix4x4(
			const float& p11, const float& p12, const float& p13, const float& p14,
			const float& p21, const float& p22, const float& p23, const float& p24,
			const float& p31, const float& p32, const float& p33, const float& p34,
			const float& p41, const float& p42, const float& p43, const float& p44);
		~Matrix4x4();

		//Operator overloads
		Matrix4x4& operator*=(const Matrix4x4& rhs);
	};

	//Operator overloads
	inline Matrix4x4 operator*(Matrix4x4 lhs, const Matrix4x4& rhs) { lhs *= rhs; return lhs; }

}
