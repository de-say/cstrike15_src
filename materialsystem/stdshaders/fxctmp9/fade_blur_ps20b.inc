// ALL SKIP STATEMENTS THAT AFFECT THIS SHADER!!!
#include "shaderlib/cshader.h"
class fade_blur_ps20b_Static_Index
{
public:
	// CONSTRUCTOR
	fade_blur_ps20b_Static_Index( IShaderShadow *pShaderShadow, IMaterialVar **params )
	{
	}
	int GetIndex()
	{
		// Asserts to make sure that we aren't using any skipped combinations.
		// Asserts to make sure that we are setting all of the combination vars.
#ifdef _DEBUG
#endif // _DEBUG
		return 0;
	}
};
#define shaderStaticTest_fade_blur_ps20b 0
class fade_blur_ps20b_Dynamic_Index
{
public:
	// CONSTRUCTOR
	fade_blur_ps20b_Dynamic_Index( IShaderDynamicAPI *pShaderAPI )
	{
	}
	int GetIndex()
	{
		// Asserts to make sure that we aren't using any skipped combinations.
		// Asserts to make sure that we are setting all of the combination vars.
#ifdef _DEBUG
#endif // _DEBUG
		return 0;
	}
};
#define shaderDynamicTest_fade_blur_ps20b 0
static const ShaderComboSemantics_t fade_blur_ps20b_combos =
{
	"fade_blur_ps20b", NULL, 0, NULL, 0 
};

class ConstructMe_fade_blur_ps20b
{
public:
	ConstructMe_fade_blur_ps20b()
	{
		GetShaderDLL()->AddShaderComboInformation( &fade_blur_ps20b_combos );
	}
};

static ConstructMe_fade_blur_ps20b s_ConstructMe_fade_blur_ps20b;