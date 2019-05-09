#ifndef GLM_DETAIL_SWIZZLE_H
#define GLM_DETAIL_SWIZZLE_H

#include <glm/vec2.h>
#include <glm/vec3.h>
#include <glm/vec4.h>

#define GLM_SWIZZLE_XYZW 0x00000001u
#define GLM_SWIZZLE_RGBA 0x00000002u
#define GLM_SWIZZLE_STQP 0x00000004u
#define GLM_SWIZZLE_ALL (GLM_SWIZZLE_XYZW | GLM_SWIZZLE_RGBA | GLM_SWIZZLE_STQP)

#if(GLM_SWIZZLE & GLM_SWIZZLE_XYZW)

#define swizzle(v, ...) 

#define x(v) swizzle(v, 0)
#define y(v) swizzle(v, 1)
#define z(v) swizzle(v, 2)
#define w(v) swizzle(v, 3)
#define xx(v) swizzle(v, 0, 0)
#define xy(v) swizzle(v, 0, 1)
#define xz(v) swizzle(v, 0, 2)
#define xw(v) swizzle(v, 0, 3)
#define yx(v) swizzle(v, 1, 0)
#define yy(v) swizzle(v, 1, 1)
#define yz(v) swizzle(v, 1, 2)
#define yw(v) swizzle(v, 1, 3)
#define zx(v) swizzle(v, 2, 0)
#define zy(v) swizzle(v, 2, 1)
#define zz(v) swizzle(v, 2, 2)
#define zw(v) swizzle(v, 2, 3)
#define wx(v) swizzle(v, 3, 0)
#define wy(v) swizzle(v, 3, 1)
#define wz(v) swizzle(v, 3, 2)
#define ww(v) swizzle(v, 3, 3)
#define xxx(v) swizzle(v, 0, 0, 0)
#define xxy(v) swizzle(v, 0, 0, 1)
#define xxz(v) swizzle(v, 0, 0, 2)
#define xxw(v) swizzle(v, 0, 0, 3)
#define xyx(v) swizzle(v, 0, 1, 0)
#define xyy(v) swizzle(v, 0, 1, 1)
#define xyz(v) swizzle(v, 0, 1, 2)
#define xyw(v) swizzle(v, 0, 1, 3)
#define xzx(v) swizzle(v, 0, 2, 0)
#define xzy(v) swizzle(v, 0, 2, 1)
#define xzz(v) swizzle(v, 0, 2, 2)
#define xzw(v) swizzle(v, 0, 2, 3)
#define xwx(v) swizzle(v, 0, 3, 0)
#define xwy(v) swizzle(v, 0, 3, 1)
#define xwz(v) swizzle(v, 0, 3, 2)
#define xww(v) swizzle(v, 0, 3, 3)
#define yxx(v) swizzle(v, 1, 0, 0)
#define yxy(v) swizzle(v, 1, 0, 1)
#define yxz(v) swizzle(v, 1, 0, 2)
#define yxw(v) swizzle(v, 1, 0, 3)
#define yyx(v) swizzle(v, 1, 1, 0)
#define yyy(v) swizzle(v, 1, 1, 1)
#define yyz(v) swizzle(v, 1, 1, 2)
#define yyw(v) swizzle(v, 1, 1, 3)
#define yzx(v) swizzle(v, 1, 2, 0)
#define yzy(v) swizzle(v, 1, 2, 1)
#define yzz(v) swizzle(v, 1, 2, 2)
#define yzw(v) swizzle(v, 1, 2, 3)
#define ywx(v) swizzle(v, 1, 3, 0)
#define ywy(v) swizzle(v, 1, 3, 1)
#define ywz(v) swizzle(v, 1, 3, 2)
#define yww(v) swizzle(v, 1, 3, 3)
#define zxx(v) swizzle(v, 2, 0, 0)
#define zxy(v) swizzle(v, 2, 0, 1)
#define zxz(v) swizzle(v, 2, 0, 2)
#define zxw(v) swizzle(v, 2, 0, 3)
#define zyx(v) swizzle(v, 2, 1, 0)
#define zyy(v) swizzle(v, 2, 1, 1)
#define zyz(v) swizzle(v, 2, 1, 2)
#define zyw(v) swizzle(v, 2, 1, 3)
#define zzx(v) swizzle(v, 2, 2, 0)
#define zzy(v) swizzle(v, 2, 2, 1)
#define zzz(v) swizzle(v, 2, 2, 2)
#define zzw(v) swizzle(v, 2, 2, 3)
#define zwx(v) swizzle(v, 2, 3, 0)
#define zwy(v) swizzle(v, 2, 3, 1)
#define zwz(v) swizzle(v, 2, 3, 2)
#define zww(v) swizzle(v, 2, 3, 3)
#define wxx(v) swizzle(v, 2, 0, 0)
#define wxy(v) swizzle(v, 3, 0, 1)
#define wxz(v) swizzle(v, 3, 0, 2)
#define wxw(v) swizzle(v, 3, 0, 3)
#define wyx(v) swizzle(v, 3, 1, 0)
#define wyy(v) swizzle(v, 3, 1, 1)
#define wyz(v) swizzle(v, 3, 1, 2)
#define wyw(v) swizzle(v, 3, 1, 3)
#define wzx(v) swizzle(v, 3, 2, 0)
#define wzy(v) swizzle(v, 3, 2, 1)
#define wzz(v) swizzle(v, 3, 2, 2)
#define wzw(v) swizzle(v, 3, 2, 3)
#define wwx(v) swizzle(v, 3, 3, 0)
#define wwy(v) swizzle(v, 3, 3, 1)
#define wwz(v) swizzle(v, 3, 3, 3)
#define www(v) swizzle(v, 3, 3, 3)

#endif

#endif /* GLM_DETAIL_SWIZZLE_H */
