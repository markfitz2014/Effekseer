#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//   fxc /Zpc /Tvs_3_0 /Emain /Fh
//    ShaderHeader_15/EffekseerRenderer.Standard_Distortion_VS.h
//    Shader_15/standard_renderer_distortion_VS.fx
//
//
// Parameters:
//
//   float4x4 _63_mCamera;
//   float4x4 _63_mProj;
//   float4 _63_mUVInversed;
//
//
// Registers:
//
//   Name            Reg   Size
//   --------------- ----- ----
//   _63_mCamera     c0       4
//   _63_mProj       c4       4
//   _63_mUVInversed c8       1
//

    vs_3_0
    dcl_texcoord v0
    dcl_texcoord1 v1
    dcl_texcoord2 v2
    dcl_texcoord3 v3
    dcl_texcoord4 v4
    dcl_texcoord o0
    dcl_texcoord1 o1.xy
    dcl_texcoord2 o2
    dcl_texcoord3 o3
    dcl_texcoord4 o4
    dcl_position o5
    mov r0.xyz, v0
    add r1.xyz, r0, v3
    mul r2, r1.y, c1
    mad r2, c0, r1.x, r2
    mad r1, c2, r1.z, r2
    add r1, r1, c3
    rcp r0.w, r1.w
    mul r2, c1, v0.y
    mad r2, c0, v0.x, r2
    mad r2, c2, v0.z, r2
    add r2, r2, c3
    rcp r1.w, r2.w
    mul r2.xyz, r1.w, r2
    mad r1.xyz, r1, r0.w, -r2
    dp3 r0.w, r1, r1
    rsq r0.w, r0.w
    mad r1.xyz, r1, r0.w, r2
    mul r3, r1.y, c5
    mad r3, c4, r1.x, r3
    mad r1, c6, r1.z, r3
    add r1, r1, c7
    rcp r0.w, r1.w
    mul o3, r0.w, r1
    add r0.xyz, r0, v4
    mul r1, r0.y, c1
    mad r1, c0, r0.x, r1
    mad r0, c2, r0.z, r1
    add r0, r0, c3
    rcp r0.w, r0.w
    mad r0.xyz, r0, r0.w, -r2
    dp3 r0.w, r0, r0
    rsq r0.w, r0.w
    mad r0.xyz, r0, r0.w, r2
    mul r1, r0.y, c5
    mad r1, c4, r0.x, r1
    mad r0, c6, r0.z, r1
    add r0, r0, c7
    rcp r1.x, r0.w
    mul o4, r0, r1.x
    mul r0, r2.y, c5
    mad r0, c4, r2.x, r0
    mad r0, c6, r2.z, r0
    add r0, r0, c7
    rcp r1.x, r0.w
    mul o2, r0, r1.x
    mov o5, r0
    mad o1.y, c8.y, v2.y, c8.x
    mov o0, v1
    mov o1.x, v2.x

// approximately 49 instruction slots used
#endif

const BYTE g_vs30_main[] =
{
      0,   3, 254, 255, 254, 255, 
     55,   0,  67,  84,  65,  66, 
     28,   0,   0,   0, 167,   0, 
      0,   0,   0,   3, 254, 255, 
      3,   0,   0,   0,  28,   0, 
      0,   0,  16,   1,   0,   0, 
    160,   0,   0,   0,  88,   0, 
      0,   0,   2,   0,   0,   0, 
      4,   0,   2,   0, 100,   0, 
      0,   0,   0,   0,   0,   0, 
    116,   0,   0,   0,   2,   0, 
      4,   0,   4,   0,  18,   0, 
    100,   0,   0,   0,   0,   0, 
      0,   0, 126,   0,   0,   0, 
      2,   0,   8,   0,   1,   0, 
     34,   0, 144,   0,   0,   0, 
      0,   0,   0,   0,  95,  54, 
     51,  95, 109,  67,  97, 109, 
    101, 114,  97,   0,   3,   0, 
      3,   0,   4,   0,   4,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,  95,  54,  51,  95, 
    109,  80, 114, 111, 106,   0, 
     95,  54,  51,  95, 109,  85, 
     86,  73, 110, 118, 101, 114, 
    115, 101, 100,   0, 171, 171, 
      1,   0,   3,   0,   1,   0, 
      4,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 118, 115, 
     95,  51,  95,  48,   0,  77, 
    105,  99, 114, 111, 115, 111, 
    102, 116,  32,  40,  82,  41, 
     32,  72,  76,  83,  76,  32, 
     83, 104,  97, 100, 101, 114, 
     32,  67, 111, 109, 112, 105, 
    108, 101, 114,  32,  57,  46, 
     50,  57,  46,  57,  53,  50, 
     46,  51,  49,  49,  49,   0, 
     31,   0,   0,   2,   5,   0, 
      0, 128,   0,   0,  15, 144, 
     31,   0,   0,   2,   5,   0, 
      1, 128,   1,   0,  15, 144, 
     31,   0,   0,   2,   5,   0, 
      2, 128,   2,   0,  15, 144, 
     31,   0,   0,   2,   5,   0, 
      3, 128,   3,   0,  15, 144, 
     31,   0,   0,   2,   5,   0, 
      4, 128,   4,   0,  15, 144, 
     31,   0,   0,   2,   5,   0, 
      0, 128,   0,   0,  15, 224, 
     31,   0,   0,   2,   5,   0, 
      1, 128,   1,   0,   3, 224, 
     31,   0,   0,   2,   5,   0, 
      2, 128,   2,   0,  15, 224, 
     31,   0,   0,   2,   5,   0, 
      3, 128,   3,   0,  15, 224, 
     31,   0,   0,   2,   5,   0, 
      4, 128,   4,   0,  15, 224, 
     31,   0,   0,   2,   0,   0, 
      0, 128,   5,   0,  15, 224, 
      1,   0,   0,   2,   0,   0, 
      7, 128,   0,   0, 228, 144, 
      2,   0,   0,   3,   1,   0, 
      7, 128,   0,   0, 228, 128, 
      3,   0, 228, 144,   5,   0, 
      0,   3,   2,   0,  15, 128, 
      1,   0,  85, 128,   1,   0, 
    228, 160,   4,   0,   0,   4, 
      2,   0,  15, 128,   0,   0, 
    228, 160,   1,   0,   0, 128, 
      2,   0, 228, 128,   4,   0, 
      0,   4,   1,   0,  15, 128, 
      2,   0, 228, 160,   1,   0, 
    170, 128,   2,   0, 228, 128, 
      2,   0,   0,   3,   1,   0, 
     15, 128,   1,   0, 228, 128, 
      3,   0, 228, 160,   6,   0, 
      0,   2,   0,   0,   8, 128, 
      1,   0, 255, 128,   5,   0, 
      0,   3,   2,   0,  15, 128, 
      1,   0, 228, 160,   0,   0, 
     85, 144,   4,   0,   0,   4, 
      2,   0,  15, 128,   0,   0, 
    228, 160,   0,   0,   0, 144, 
      2,   0, 228, 128,   4,   0, 
      0,   4,   2,   0,  15, 128, 
      2,   0, 228, 160,   0,   0, 
    170, 144,   2,   0, 228, 128, 
      2,   0,   0,   3,   2,   0, 
     15, 128,   2,   0, 228, 128, 
      3,   0, 228, 160,   6,   0, 
      0,   2,   1,   0,   8, 128, 
      2,   0, 255, 128,   5,   0, 
      0,   3,   2,   0,   7, 128, 
      1,   0, 255, 128,   2,   0, 
    228, 128,   4,   0,   0,   4, 
      1,   0,   7, 128,   1,   0, 
    228, 128,   0,   0, 255, 128, 
      2,   0, 228, 129,   8,   0, 
      0,   3,   0,   0,   8, 128, 
      1,   0, 228, 128,   1,   0, 
    228, 128,   7,   0,   0,   2, 
      0,   0,   8, 128,   0,   0, 
    255, 128,   4,   0,   0,   4, 
      1,   0,   7, 128,   1,   0, 
    228, 128,   0,   0, 255, 128, 
      2,   0, 228, 128,   5,   0, 
      0,   3,   3,   0,  15, 128, 
      1,   0,  85, 128,   5,   0, 
    228, 160,   4,   0,   0,   4, 
      3,   0,  15, 128,   4,   0, 
    228, 160,   1,   0,   0, 128, 
      3,   0, 228, 128,   4,   0, 
      0,   4,   1,   0,  15, 128, 
      6,   0, 228, 160,   1,   0, 
    170, 128,   3,   0, 228, 128, 
      2,   0,   0,   3,   1,   0, 
     15, 128,   1,   0, 228, 128, 
      7,   0, 228, 160,   6,   0, 
      0,   2,   0,   0,   8, 128, 
      1,   0, 255, 128,   5,   0, 
      0,   3,   3,   0,  15, 224, 
      0,   0, 255, 128,   1,   0, 
    228, 128,   2,   0,   0,   3, 
      0,   0,   7, 128,   0,   0, 
    228, 128,   4,   0, 228, 144, 
      5,   0,   0,   3,   1,   0, 
     15, 128,   0,   0,  85, 128, 
      1,   0, 228, 160,   4,   0, 
      0,   4,   1,   0,  15, 128, 
      0,   0, 228, 160,   0,   0, 
      0, 128,   1,   0, 228, 128, 
      4,   0,   0,   4,   0,   0, 
     15, 128,   2,   0, 228, 160, 
      0,   0, 170, 128,   1,   0, 
    228, 128,   2,   0,   0,   3, 
      0,   0,  15, 128,   0,   0, 
    228, 128,   3,   0, 228, 160, 
      6,   0,   0,   2,   0,   0, 
      8, 128,   0,   0, 255, 128, 
      4,   0,   0,   4,   0,   0, 
      7, 128,   0,   0, 228, 128, 
      0,   0, 255, 128,   2,   0, 
    228, 129,   8,   0,   0,   3, 
      0,   0,   8, 128,   0,   0, 
    228, 128,   0,   0, 228, 128, 
      7,   0,   0,   2,   0,   0, 
      8, 128,   0,   0, 255, 128, 
      4,   0,   0,   4,   0,   0, 
      7, 128,   0,   0, 228, 128, 
      0,   0, 255, 128,   2,   0, 
    228, 128,   5,   0,   0,   3, 
      1,   0,  15, 128,   0,   0, 
     85, 128,   5,   0, 228, 160, 
      4,   0,   0,   4,   1,   0, 
     15, 128,   4,   0, 228, 160, 
      0,   0,   0, 128,   1,   0, 
    228, 128,   4,   0,   0,   4, 
      0,   0,  15, 128,   6,   0, 
    228, 160,   0,   0, 170, 128, 
      1,   0, 228, 128,   2,   0, 
      0,   3,   0,   0,  15, 128, 
      0,   0, 228, 128,   7,   0, 
    228, 160,   6,   0,   0,   2, 
      1,   0,   1, 128,   0,   0, 
    255, 128,   5,   0,   0,   3, 
      4,   0,  15, 224,   0,   0, 
    228, 128,   1,   0,   0, 128, 
      5,   0,   0,   3,   0,   0, 
     15, 128,   2,   0,  85, 128, 
      5,   0, 228, 160,   4,   0, 
      0,   4,   0,   0,  15, 128, 
      4,   0, 228, 160,   2,   0, 
      0, 128,   0,   0, 228, 128, 
      4,   0,   0,   4,   0,   0, 
     15, 128,   6,   0, 228, 160, 
      2,   0, 170, 128,   0,   0, 
    228, 128,   2,   0,   0,   3, 
      0,   0,  15, 128,   0,   0, 
    228, 128,   7,   0, 228, 160, 
      6,   0,   0,   2,   1,   0, 
      1, 128,   0,   0, 255, 128, 
      5,   0,   0,   3,   2,   0, 
     15, 224,   0,   0, 228, 128, 
      1,   0,   0, 128,   1,   0, 
      0,   2,   5,   0,  15, 224, 
      0,   0, 228, 128,   4,   0, 
      0,   4,   1,   0,   2, 224, 
      8,   0,  85, 160,   2,   0, 
     85, 144,   8,   0,   0, 160, 
      1,   0,   0,   2,   0,   0, 
     15, 224,   1,   0, 228, 144, 
      1,   0,   0,   2,   1,   0, 
      1, 224,   2,   0,   0, 144, 
    255, 255,   0,   0
};
