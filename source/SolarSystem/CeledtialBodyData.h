#pragma once
#include <string>

namespace Rendering
{
	struct CelestialBodyData
	{
		std::string mName;
		std::uint32_t mOrdinal;
		std::string mTextureName;
		float mMeanDistance;
		float mRotationPeriod;
		float mOrbitalPeriod;
		float mAxialTilt;
		float mDiameter;
		float mReflectance;
		float mIsLit;
		std::string mParent;
	};
}
