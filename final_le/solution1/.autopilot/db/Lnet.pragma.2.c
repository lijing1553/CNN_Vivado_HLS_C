# 1 "D:/vivado_hls/final_le/solution1/.autopilot/db/Lnet.pragma.1.c"
# 1 "D:/vivado_hls/final_le/solution1/.autopilot/db/Lnet.pragma.1.c" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 147 "<built-in>" 3
# 1 "<command line>" 1





# 1 "C:/Xilinx/Vivado_HLS/2015.2/common/technology/autopilot\\etc/autopilot_ssdm_op.h" 1
/* autopilot_ssdm_op.h*/
/*
#-  (c) Copyright 2011-2015 Xilinx, Inc. All rights reserved.
#-
#-  This file contains confidential and proprietary information
#-  of Xilinx, Inc. and is protected under U.S. and
#-  international copyright and other intellectual property
#-  laws.
#-
#-  DISCLAIMER
#-  This disclaimer is not a license and does not grant any
#-  rights to the materials distributed herewith. Except as
#-  otherwise provided in a valid license issued to you by
#-  Xilinx, and to the maximum extent permitted by applicable
#-  law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
#-  WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
#-  AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
#-  BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
#-  INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
#-  (2) Xilinx shall not be liable (whether in contract or tort,
#-  including negligence, or under any other theory of
#-  liability) for any loss or damage of any kind or nature
#-  related to, arising under or in connection with these
#-  materials, including for any direct, or any indirect,
#-  special, incidental, or consequential loss or damage
#-  (including loss of data, profits, goodwill, or any type of
#-  loss or damage suffered as a result of any action brought
#-  by a third party) even if such damage or loss was
#-  reasonably foreseeable or Xilinx had been advised of the
#-  possibility of the same.
#-
#-  CRITICAL APPLICATIONS
#-  Xilinx products are not designed or intended to be fail-
#-  safe, or for use in any application requiring fail-safe
#-  performance, such as life-support or safety devices or
#-  systems, Class III medical devices, nuclear facilities,
#-  applications related to the deployment of airbags, or any
#-  other applications that could lead to death, personal
#-  injury, or severe property or environmental damage
#-  (individually and collectively, "Critical
#-  Applications"). Customer assumes the sole risk and
#-  liability of any use of Xilinx products in Critical
#-  Applications, subject only to applicable laws and
#-  regulations governing limitations on product liability.
#-
#-  THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
#-  PART OF THIS FILE AT ALL TIMES. 
#- ************************************************************************

 *
 * $Id$
 */
# 280 "C:/Xilinx/Vivado_HLS/2015.2/common/technology/autopilot\\etc/autopilot_ssdm_op.h"
/*#define AP_SPEC_ATTR __attribute__ ((pure))*/



    /****** SSDM Intrinsics: OPERATIONS ***/
    // Interface operations
    //typedef unsigned int __attribute__ ((bitwidth(1))) _uint1_;
    void _ssdm_op_IfRead() __attribute__ ((nothrow));
    void _ssdm_op_IfWrite() __attribute__ ((nothrow));
    //_uint1_ _ssdm_op_IfNbRead() SSDM_OP_ATTR;
    //_uint1_ _ssdm_op_IfNbWrite() SSDM_OP_ATTR;
    //_uint1_ _ssdm_op_IfCanRead() SSDM_OP_ATTR;
    //_uint1_ _ssdm_op_IfCanWrite() SSDM_OP_ATTR;

    // Stream Intrinsics
    void _ssdm_StreamRead() __attribute__ ((nothrow));
    void _ssdm_StreamWrite() __attribute__ ((nothrow));
    //_uint1_  _ssdm_StreamNbRead() SSDM_OP_ATTR;
    //_uint1_  _ssdm_StreamNbWrite() SSDM_OP_ATTR;
    //_uint1_  _ssdm_StreamCanRead() SSDM_OP_ATTR;
    //_uint1_  _ssdm_StreamCanWrite() SSDM_OP_ATTR;

    // Misc
    void _ssdm_op_MemShiftRead() __attribute__ ((nothrow));

    void _ssdm_op_Wait() __attribute__ ((nothrow));
    void _ssdm_op_Poll() __attribute__ ((nothrow));

    void _ssdm_op_Return() __attribute__ ((nothrow));

    /* SSDM Intrinsics: SPECIFICATIONS */
    void _ssdm_op_SpecSynModule() __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule() __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl() __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef() __attribute__ ((nothrow));
    void _ssdm_op_SpecPort() __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection() __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel() __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive() __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst() __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap() __attribute__ ((nothrow));

    void _ssdm_op_SpecReset() __attribute__ ((nothrow));

    void _ssdm_op_SpecPlatform() __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain() __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain() __attribute__ ((nothrow));

    int _ssdm_op_SpecRegionBegin() __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd() __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopName() __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopTripCount() __attribute__ ((nothrow));

    int _ssdm_op_SpecStateBegin() __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd() __attribute__ ((nothrow));

    void _ssdm_op_SpecInterface() __attribute__ ((nothrow));

    void _ssdm_op_SpecPipeline() __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline() __attribute__ ((nothrow));


    void _ssdm_op_SpecLatency() __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel() __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol() __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence() __attribute__ ((nothrow));

    void _ssdm_op_SpecResource() __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit() __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue() __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore() __attribute__ ((nothrow));

    void _ssdm_op_SpecExt() __attribute__ ((nothrow));
    /*void* _ssdm_op_SpecProcess() SSDM_SPEC_ATTR;
    void* _ssdm_op_SpecEdge() SSDM_SPEC_ATTR; */

    /* Presynthesis directive functions */
    void _ssdm_SpecArrayDimSize() __attribute__ ((nothrow));

    void _ssdm_RegionBegin() __attribute__ ((nothrow));
    void _ssdm_RegionEnd() __attribute__ ((nothrow));

    void _ssdm_Unroll() __attribute__ ((nothrow));
    void _ssdm_UnrollRegion() __attribute__ ((nothrow));

    void _ssdm_InlineAll() __attribute__ ((nothrow));
    void _ssdm_InlineLoop() __attribute__ ((nothrow));
    void _ssdm_Inline() __attribute__ ((nothrow));
    void _ssdm_InlineSelf() __attribute__ ((nothrow));
    void _ssdm_InlineRegion() __attribute__ ((nothrow));

    void _ssdm_SpecArrayMap() __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition() __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape() __attribute__ ((nothrow));

    void _ssdm_SpecStream() __attribute__ ((nothrow));

    void _ssdm_SpecExpr() __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance() __attribute__ ((nothrow));

    void _ssdm_SpecDependence() __attribute__ ((nothrow));

    void _ssdm_SpecLoopMerge() __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten() __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind() __attribute__ ((nothrow));

    void _ssdm_SpecFuncInstantiation() __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer() __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract() __attribute__ ((nothrow));
    void _ssdm_SpecConstant() __attribute__ ((nothrow));

    void _ssdm_DataPack() __attribute__ ((nothrow));
    void _ssdm_SpecDataPack() __attribute__ ((nothrow));

    void _ssdm_op_SpecBitsMap() __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense() __attribute__ ((nothrow));


/*#define _ssdm_op_WaitUntil(X) while (!(X)) _ssdm_op_Wait(1);
#define _ssdm_op_Delayed(X) X */
# 7 "<command line>" 2
# 1 "<built-in>" 2
# 1 "D:/vivado_hls/final_le/solution1/.autopilot/db/Lnet.pragma.1.c" 2
# 1 "Le_7/Lnet.c"
# 1 "Le_7/Lnet.c" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 147 "<built-in>" 3
# 1 "<command line>" 1





# 1 "C:/Xilinx/Vivado_HLS/2015.2/common/technology/autopilot\\etc/autopilot_ssdm_op.h" 1
/* autopilot_ssdm_op.h*/
/*
#-  (c) Copyright 2011-2015 Xilinx, Inc. All rights reserved.
#-
#-  This file contains confidential and proprietary information
#-  of Xilinx, Inc. and is protected under U.S. and
#-  international copyright and other intellectual property
#-  laws.
#-
#-  DISCLAIMER
#-  This disclaimer is not a license and does not grant any
#-  rights to the materials distributed herewith. Except as
#-  otherwise provided in a valid license issued to you by
#-  Xilinx, and to the maximum extent permitted by applicable
#-  law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
#-  WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
#-  AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
#-  BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
#-  INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
#-  (2) Xilinx shall not be liable (whether in contract or tort,
#-  including negligence, or under any other theory of
#-  liability) for any loss or damage of any kind or nature
#-  related to, arising under or in connection with these
#-  materials, including for any direct, or any indirect,
#-  special, incidental, or consequential loss or damage
#-  (including loss of data, profits, goodwill, or any type of
#-  loss or damage suffered as a result of any action brought
#-  by a third party) even if such damage or loss was
#-  reasonably foreseeable or Xilinx had been advised of the
#-  possibility of the same.
#-
#-  CRITICAL APPLICATIONS
#-  Xilinx products are not designed or intended to be fail-
#-  safe, or for use in any application requiring fail-safe
#-  performance, such as life-support or safety devices or
#-  systems, Class III medical devices, nuclear facilities,
#-  applications related to the deployment of airbags, or any
#-  other applications that could lead to death, personal
#-  injury, or severe property or environmental damage
#-  (individually and collectively, "Critical
#-  Applications"). Customer assumes the sole risk and
#-  liability of any use of Xilinx products in Critical
#-  Applications, subject only to applicable laws and
#-  regulations governing limitations on product liability.
#-
#-  THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
#-  PART OF THIS FILE AT ALL TIMES. 
#- ************************************************************************

 *
 * $Id$
 */
# 280 "C:/Xilinx/Vivado_HLS/2015.2/common/technology/autopilot\\etc/autopilot_ssdm_op.h"
/*#define AP_SPEC_ATTR __attribute__ ((pure))*/



    /****** SSDM Intrinsics: OPERATIONS ***/
    // Interface operations
    //typedef unsigned int __attribute__ ((bitwidth(1))) _uint1_;
    void _ssdm_op_IfRead() __attribute__ ((nothrow));
    void _ssdm_op_IfWrite() __attribute__ ((nothrow));
    //_uint1_ _ssdm_op_IfNbRead() SSDM_OP_ATTR;
    //_uint1_ _ssdm_op_IfNbWrite() SSDM_OP_ATTR;
    //_uint1_ _ssdm_op_IfCanRead() SSDM_OP_ATTR;
    //_uint1_ _ssdm_op_IfCanWrite() SSDM_OP_ATTR;

    // Stream Intrinsics
    void _ssdm_StreamRead() __attribute__ ((nothrow));
    void _ssdm_StreamWrite() __attribute__ ((nothrow));
    //_uint1_  _ssdm_StreamNbRead() SSDM_OP_ATTR;
    //_uint1_  _ssdm_StreamNbWrite() SSDM_OP_ATTR;
    //_uint1_  _ssdm_StreamCanRead() SSDM_OP_ATTR;
    //_uint1_  _ssdm_StreamCanWrite() SSDM_OP_ATTR;

    // Misc
    void _ssdm_op_MemShiftRead() __attribute__ ((nothrow));

    void _ssdm_op_Wait() __attribute__ ((nothrow));
    void _ssdm_op_Poll() __attribute__ ((nothrow));

    void _ssdm_op_Return() __attribute__ ((nothrow));

    /* SSDM Intrinsics: SPECIFICATIONS */
    void _ssdm_op_SpecSynModule() __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule() __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl() __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef() __attribute__ ((nothrow));
    void _ssdm_op_SpecPort() __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection() __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel() __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive() __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst() __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap() __attribute__ ((nothrow));

    void _ssdm_op_SpecReset() __attribute__ ((nothrow));

    void _ssdm_op_SpecPlatform() __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain() __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain() __attribute__ ((nothrow));

    int _ssdm_op_SpecRegionBegin() __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd() __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopName() __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopTripCount() __attribute__ ((nothrow));

    int _ssdm_op_SpecStateBegin() __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd() __attribute__ ((nothrow));

    void _ssdm_op_SpecInterface() __attribute__ ((nothrow));

    void _ssdm_op_SpecPipeline() __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline() __attribute__ ((nothrow));


    void _ssdm_op_SpecLatency() __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel() __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol() __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence() __attribute__ ((nothrow));

    void _ssdm_op_SpecResource() __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit() __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue() __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore() __attribute__ ((nothrow));

    void _ssdm_op_SpecExt() __attribute__ ((nothrow));
    /*void* _ssdm_op_SpecProcess() SSDM_SPEC_ATTR;
    void* _ssdm_op_SpecEdge() SSDM_SPEC_ATTR; */

    /* Presynthesis directive functions */
    void _ssdm_SpecArrayDimSize() __attribute__ ((nothrow));

    void _ssdm_RegionBegin() __attribute__ ((nothrow));
    void _ssdm_RegionEnd() __attribute__ ((nothrow));

    void _ssdm_Unroll() __attribute__ ((nothrow));
    void _ssdm_UnrollRegion() __attribute__ ((nothrow));

    void _ssdm_InlineAll() __attribute__ ((nothrow));
    void _ssdm_InlineLoop() __attribute__ ((nothrow));
    void _ssdm_Inline() __attribute__ ((nothrow));
    void _ssdm_InlineSelf() __attribute__ ((nothrow));
    void _ssdm_InlineRegion() __attribute__ ((nothrow));

    void _ssdm_SpecArrayMap() __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition() __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape() __attribute__ ((nothrow));

    void _ssdm_SpecStream() __attribute__ ((nothrow));

    void _ssdm_SpecExpr() __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance() __attribute__ ((nothrow));

    void _ssdm_SpecDependence() __attribute__ ((nothrow));

    void _ssdm_SpecLoopMerge() __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten() __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind() __attribute__ ((nothrow));

    void _ssdm_SpecFuncInstantiation() __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer() __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract() __attribute__ ((nothrow));
    void _ssdm_SpecConstant() __attribute__ ((nothrow));

    void _ssdm_DataPack() __attribute__ ((nothrow));
    void _ssdm_SpecDataPack() __attribute__ ((nothrow));

    void _ssdm_op_SpecBitsMap() __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense() __attribute__ ((nothrow));


/*#define _ssdm_op_WaitUntil(X) while (!(X)) _ssdm_op_Wait(1);
#define _ssdm_op_Delayed(X) X */
# 7 "<command line>" 2
# 1 "<built-in>" 2
# 1 "Le_7/Lnet.c" 2
# 1 "Le_7/Lnet.h" 1



# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */





# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */






# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/_mingw_mac.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
# 18 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/_mingw_mac.h" 3
/* mingw.org's version macros: these make gcc to define
   MINGW32_SUPPORTS_MT_EH and to use the _CRT_MT global
   and the __mingwthr_key_dtor() function from the MinGW
   CRT in its private gthr-win32.h header. */




/* MS does not prefix symbols by underscores for 64-bit.  */

/* As we have to support older gcc version, which are using underscores
   as symbol prefix for x64, we have to check here for the user label
   prefix defined by gcc.  */
# 62 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/_mingw_mac.h" 3
/* Use alias for msvcr80 export of get/set_output_format.  */




/* Set VC specific compiler target macros.  */
# 10 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3


/* C/C++ specific language defines.  */
# 32 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
/* Note the extern. This is needed to work around GCC's
limitations in handling dllimport attribute.  */
# 147 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
/* Attribute `nonnull' was valid as of gcc 3.3.  We don't use GCC's
   variadiac macro facility, because variadic macros cause syntax
   errors with  --traditional-cpp.  */
# 225 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
/*  High byte is the major version, low byte is the minor. */
# 247 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
/*typedef int __int128 __attribute__ ((__mode__ (TI)));*/
# 277 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
# 14 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
# 674 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_directx.h" 1 3
# 674 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3

# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_ddk.h" 1 3
# 675 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
# 13 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 2 3


#pragma pack(push,_CRT_PACKING)








 typedef __builtin_va_list __gnuc_va_list;






  typedef __gnuc_va_list va_list;
# 46 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
/* Use GCC builtins */
# 102 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
#pragma pack(pop)
# 277 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3


#pragma pack(push,_CRT_PACKING)
# 316 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
/* We have to define _DLL for gcc based mingw version. This define is set
   by VC, when DLL-based runtime is used. So, gcc based runtime just have
   DLL-base runtime, therefore this define has to be set.
   As our headers are possibly used by windows compiler having a static
   C-runtime, we make this definition gnu compiler specific here.  */
# 370 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef unsigned long long size_t;
# 380 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long ssize_t;
# 392 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long intptr_t;
# 405 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef unsigned long long uintptr_t;
# 418 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long ptrdiff_t;
# 428 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
typedef unsigned short wchar_t;







typedef unsigned short wint_t;
typedef unsigned short wctype_t;
# 456 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
typedef int errno_t;




typedef long __time32_t;




__extension__ typedef long long __time64_t;







typedef __time64_t time_t;
# 518 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
/* _dowildcard is an int that controls the globbing of the command line.
 * The MinGW32 (mingw.org) runtime calls it _CRT_glob, so we are adding
 * a compatibility definition here:  you can use either of _CRT_glob or
 * _dowildcard .
 * If _dowildcard is non-zero, the command line will be globbed:  *.*
 * will be expanded to be all files in the startup directory.
 * In the mingw-w64 library a _dowildcard variable is defined as being
 * 0, therefore command line globbing is DISABLED by default. To turn it
 * on and to leave wildcard command line processing MS's globbing code,
 * include a line in one of your source modules defining _dowildcard and
 * setting it to -1, like so:
 * int _dowildcard = -1;
 */
# 605 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
/* MSVC-isms: */

struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct {
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
} _locale_tstruct,*_locale_t;



typedef struct tagLC_ID {
  unsigned short wLanguage;
  unsigned short wCountry;
  unsigned short wCodePage;
} LC_ID,*LPLC_ID;




typedef struct threadlocaleinfostruct {
  int refcount;
  unsigned int lc_codepage;
  unsigned int lc_collate_cp;
  unsigned long lc_handle[6];
  LC_ID lc_id[6];
  struct {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
  } lc_category[6];
  int lc_clike;
  int mb_cur_max;
  int *lconv_intl_refcount;
  int *lconv_num_refcount;
  int *lconv_mon_refcount;
  struct lconv *lconv;
  int *ctype1_refcount;
  unsigned short *ctype1;
  const unsigned short *pctype;
  const unsigned char *pclmap;
  const unsigned char *pcumap;
  struct __lc_time_data *lc_time_curr;
} threadlocinfo;






/* mingw-w64 specific functions: */
const char *__mingw_get_crt_info (void);





#pragma pack(pop)
# 9 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 2 3

# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\limits.h" 1 3 4
/*===---- limits.h - Standard header for integer sizes --------------------===*\
 *
 * Copyright (c) 2009 Chris Lattner
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
\*===----------------------------------------------------------------------===*/




/* The system's limits.h may, in turn, try to #include_next GCC's limits.h.
   Avert this #include_next madness. */




/* System headers include a number of constants from POSIX in <limits.h>.
   Include it if we're hosted. */




# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\limits.h" 1 3 4
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */


# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3 4
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
# 6 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\limits.h" 2 3 4





/*
 * File system limits
 *
 * NOTE: Apparently the actual size of PATH_MAX is 260, but a space is
 *       required for the NUL. TODO: Test?
 * NOTE: PATH_MAX is the POSIX equivalent for Microsoft's MAX_PATH; the two
 *       are semantically identical, with a limit of 259 characters for the
 *       path name, plus one for a terminating NUL, for a total of 260.
 */
# 38 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\limits.h" 2 3 4



/* Many system headers try to "help us out" by defining these.  No really, we
   know how big each datatype is. */
# 60 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\limits.h" 3 4
/* C90/99 5.2.4.2.1 */
# 90 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\limits.h" 3 4
/* C99 5.2.4.2.1: Added long long. */
# 102 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\limits.h" 3 4
/* LONG_LONG_MIN/LONG_LONG_MAX/ULONG_LONG_MAX are a GNU extension.  It's too bad
   that we don't have something like #pragma poison that could be used to
   deprecate a macro - the code should just use LLONG_MAX and friends.
 */
# 10 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 2 3


#pragma pack(push,_CRT_PACKING)
# 36 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
 typedef int ( *_onexit_t)(void);
# 46 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
 typedef struct _div_t {
    int quot;
    int rem;
  } div_t;

  typedef struct _ldiv_t {
    long quot;
    long rem;
  } ldiv_t;





#pragma pack(4)
 typedef struct {
    unsigned char ld[10];
  } _LDOUBLE;
#pragma pack()



 typedef struct {
    double x;
  } _CRT_DOUBLE;

  typedef struct {
    float f;
  } _CRT_FLOAT;




  typedef struct {
    long double x;
  } _LONGDOUBLE;



#pragma pack(4)
 typedef struct {
    unsigned char ld12[12];
  } _LDBL12;
#pragma pack()
# 100 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
 extern int * __imp___mb_cur_max;







  extern int* __imp___mbcur_max;
# 132 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
 typedef void ( *_purecall_handler)(void);

  __attribute__ ((__dllimport__)) _purecall_handler _set_purecall_handler(_purecall_handler _Handler);
  __attribute__ ((__dllimport__)) _purecall_handler _get_purecall_handler(void);

  typedef void ( *_invalid_parameter_handler)(const wchar_t *,const wchar_t *,const wchar_t *,unsigned int,uintptr_t);
  _invalid_parameter_handler _set_invalid_parameter_handler(_invalid_parameter_handler _Handler);
  _invalid_parameter_handler _get_invalid_parameter_handler(void);



  __attribute__ ((__dllimport__)) extern int * _errno(void);

  errno_t _set_errno(int _Value);
  errno_t _get_errno(int *_Value);

  __attribute__ ((__dllimport__)) unsigned long * __doserrno(void);

  errno_t _set_doserrno(unsigned long _Value);
  errno_t _get_doserrno(unsigned long *_Value);




  extern __attribute__ ((__dllimport__)) char *_sys_errlist[1];
  extern __attribute__ ((__dllimport__)) int _sys_nerr;
# 172 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
 extern int * __imp___argc;







  extern char *** __imp___argv;







  extern wchar_t *** __imp___wargv;
# 200 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
 extern char *** __imp__environ;
# 209 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
 extern wchar_t *** __imp__wenviron;
# 218 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
 extern char ** __imp__pgmptr;
# 227 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
 extern wchar_t ** __imp__wpgmptr;



  errno_t _get_pgmptr(char **_Value);
  errno_t _get_wpgmptr(wchar_t **_Value);




  extern int * __imp__fmode;



  __attribute__ ((__dllimport__)) errno_t _set_fmode(int _Mode);
  __attribute__ ((__dllimport__)) errno_t _get_fmode(int *_PMode);





  extern unsigned int * __imp__osplatform;
# 257 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
 extern unsigned int * __imp__osver;
# 266 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
 extern unsigned int * __imp__winver;
# 275 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
 extern unsigned int * __imp__winmajor;
# 284 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
 extern unsigned int * __imp__winminor;




  errno_t _get_osplatform(unsigned int *_Value);
  errno_t _get_osver(unsigned int *_Value);
  errno_t _get_winver(unsigned int *_Value);
  errno_t _get_winmajor(unsigned int *_Value);
  errno_t _get_winminor(unsigned int *_Value);
# 307 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
 void __attribute__ ((__nothrow__)) exit(int _Code) __attribute__ ((__noreturn__));
  __attribute__ ((__dllimport__)) void __attribute__ ((__nothrow__)) _exit(int _Code) __attribute__ ((__noreturn__));


  /* C99 function name */
  void _Exit(int) __attribute__ ((__noreturn__));
# 321 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
 void __attribute__((noreturn)) abort(void);




  __attribute__ ((__dllimport__)) unsigned int _set_abort_behavior(unsigned int _Flags,unsigned int _Mask);



  int abs(int _X);
  long labs(long _X);


  __extension__ long long _abs64(long long);
  int atexit(void ( *)(void));


  double atof(const char *_String);
  double _atof_l(const char *_String,_locale_t _Locale);

  int atoi(const char *_Str);
  __attribute__ ((__dllimport__)) int _atoi_l(const char *_Str,_locale_t _Locale);
  long atol(const char *_Str);
  __attribute__ ((__dllimport__)) long _atol_l(const char *_Str,_locale_t _Locale);


  void * bsearch(const void *_Key,const void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int ( *_PtFuncCompare)(const void *,const void *));
  void qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int ( *_PtFuncCompare)(const void *,const void *));

  unsigned short _byteswap_ushort(unsigned short _Short);
  /*unsigned long __cdecl _byteswap_ulong (unsigned long _Long); */
  __extension__ unsigned long long _byteswap_uint64(unsigned long long _Int64);
  div_t div(int _Numerator,int _Denominator);
  char * getenv(const char *_VarName) ;
  __attribute__ ((__dllimport__)) char * _itoa(int _Value,char *_Dest,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) char * _i64toa(long long _Val,char *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) char * _ui64toa(unsigned long long _Val,char *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) long long _atoi64(const char *_String);
  __extension__ __attribute__ ((__dllimport__)) long long _atoi64_l(const char *_String,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) long long _strtoi64(const char *_String,char **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long long _strtoi64_l(const char *_String,char **_EndPtr,int _Radix,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long _strtoui64(const char *_String,char **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long _strtoui64_l(const char *_String,char **_EndPtr,int _Radix,_locale_t _Locale);
  ldiv_t ldiv(long _Numerator,long _Denominator);
  __attribute__ ((__dllimport__)) char * _ltoa(long _Value,char *_Dest,int _Radix) ;
  int mblen(const char *_Ch,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _mblen_l(const char *_Ch,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) size_t _mbstrlen(const char *_Str);
  __attribute__ ((__dllimport__)) size_t _mbstrlen_l(const char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) size_t _mbstrnlen(const char *_Str,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t _mbstrnlen_l(const char *_Str,size_t _MaxCount,_locale_t _Locale);
  int mbtowc(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SrcSizeInBytes);
  __attribute__ ((__dllimport__)) int _mbtowc_l(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale);
  size_t mbstowcs(wchar_t * __restrict__ _Dest,const char * __restrict__ _Source,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t _mbstowcs_l(wchar_t * __restrict__ _Dest,const char * __restrict__ _Source,size_t _MaxCount,_locale_t _Locale);
  int rand(void);
  __attribute__ ((__dllimport__)) int _set_error_mode(int _Mode);
  void srand(unsigned int _Seed);



  double __attribute__ ((__nothrow__)) strtod(const char * __restrict__ _Str,char ** __restrict__ _EndPtr);
  float __attribute__ ((__nothrow__)) strtof(const char * __restrict__ nptr, char ** __restrict__ endptr);
  long double __attribute__ ((__nothrow__)) strtold(const char * __restrict__ , char ** __restrict__ );

  /* libmingwex.a provides a c99-compliant strtod() exported as __strtod() */
  extern double __attribute__ ((__nothrow__))
  __strtod (const char * __restrict__ , char ** __restrict__);
# 400 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
 float __mingw_strtof (const char * __restrict__, char ** __restrict__);
  long double __mingw_strtold(const char * __restrict__, char ** __restrict__);

  __attribute__ ((__dllimport__)) double _strtod_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,_locale_t _Locale);
  long strtol(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) long _strtol_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long strtoul(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) unsigned long _strtoul_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);


  int system(const char *_Command);

  __attribute__ ((__dllimport__)) char * _ultoa(unsigned long _Value,char *_Dest,int _Radix) ;
  int wctomb(char *_MbCh,wchar_t _WCh) ;
  __attribute__ ((__dllimport__)) int _wctomb_l(char *_MbCh,wchar_t _WCh,_locale_t _Locale) ;
  size_t wcstombs(char * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) size_t _wcstombs_l(char * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _MaxCount,_locale_t _Locale) ;



  void * calloc(size_t _NumOfElements,size_t _SizeOfElements);
  void free(void *_Memory);
  void * malloc(size_t _Size);
  void * realloc(void *_Memory,size_t _NewSize);
  __attribute__ ((__dllimport__)) void * _recalloc(void *_Memory,size_t _Count,size_t _Size);
/* Make sure that X86intrin.h doesn't produce here collisions.  */





  __attribute__ ((__dllimport__)) void _aligned_free(void *_Memory);
  __attribute__ ((__dllimport__)) void * _aligned_malloc(size_t _Size,size_t _Alignment);



  __attribute__ ((__dllimport__)) void * _aligned_offset_malloc(size_t _Size,size_t _Alignment,size_t _Offset);
  __attribute__ ((__dllimport__)) void * _aligned_realloc(void *_Memory,size_t _Size,size_t _Alignment);
  __attribute__ ((__dllimport__)) void * _aligned_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment);
  __attribute__ ((__dllimport__)) void * _aligned_offset_realloc(void *_Memory,size_t _Size,size_t _Alignment,size_t _Offset);
  __attribute__ ((__dllimport__)) void * _aligned_offset_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment,size_t _Offset);





  __attribute__ ((__dllimport__)) wchar_t * _itow(int _Value,wchar_t *_Dest,int _Radix) ;
  __attribute__ ((__dllimport__)) wchar_t * _ltow(long _Value,wchar_t *_Dest,int _Radix) ;
  __attribute__ ((__dllimport__)) wchar_t * _ultow(unsigned long _Value,wchar_t *_Dest,int _Radix) ;
  double wcstod(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr);
  float wcstof(const wchar_t * __restrict__ nptr, wchar_t ** __restrict__ endptr);

  float wcstof( const wchar_t * __restrict__, wchar_t ** __restrict__);
  long double wcstold(const wchar_t * __restrict__, wchar_t ** __restrict__);

  __attribute__ ((__dllimport__)) double _wcstod_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,_locale_t _Locale);
  long wcstol(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) long _wcstol_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long wcstoul(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) unsigned long _wcstoul_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t * _wgetenv(const wchar_t *_VarName) ;


  __attribute__ ((__dllimport__)) int _wsystem(const wchar_t *_Command);

  __attribute__ ((__dllimport__)) double _wtof(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) double _wtof_l(const wchar_t *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wtoi(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) int _wtoi_l(const wchar_t *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) long _wtol(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) long _wtol_l(const wchar_t *_Str,_locale_t _Locale);

  __extension__ __attribute__ ((__dllimport__)) wchar_t * _i64tow(long long _Val,wchar_t *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) wchar_t * _ui64tow(unsigned long long _Val,wchar_t *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) long long _wtoi64(const wchar_t *_Str);
  __extension__ __attribute__ ((__dllimport__)) long long _wtoi64_l(const wchar_t *_Str,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) long long _wcstoi64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long long _wcstoi64_l(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long _wcstoui64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long _wcstoui64_l(const wchar_t *_Str ,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);




  __attribute__ ((__dllimport__)) char * _fullpath(char *_FullPath,const char *_Path,size_t _SizeInBytes);
  __attribute__ ((__dllimport__)) char * _ecvt(double _Val,int _NumOfDigits,int *_PtDec,int *_PtSign) ;
  __attribute__ ((__dllimport__)) char * _fcvt(double _Val,int _NumOfDec,int *_PtDec,int *_PtSign) ;
  __attribute__ ((__dllimport__)) char * _gcvt(double _Val,int _NumOfDigits,char *_DstBuf) ;
  __attribute__ ((__dllimport__)) int _atodbl(_CRT_DOUBLE *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int _atoldbl(_LDOUBLE *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int _atoflt(_CRT_FLOAT *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int _atodbl_l(_CRT_DOUBLE *_Result,char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _atoldbl_l(_LDOUBLE *_Result,char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale);





  __extension__ unsigned long long _lrotl(unsigned long long _Val,int _Shift);
  __extension__ unsigned long long _lrotr(unsigned long long _Val,int _Shift);







  __attribute__ ((__dllimport__)) void _makepath(char *_Path,const char *_Drive,const char *_Dir,const char *_Filename,const char *_Ext);
  _onexit_t _onexit(_onexit_t _Func);



  void perror(const char *_ErrMsg);

  __attribute__ ((__dllimport__)) int _putenv(const char *_EnvString);




  __extension__ unsigned long long _rotl64(unsigned long long _Val,int _Shift);
  __extension__ unsigned long long _rotr64(unsigned long long Value,int Shift);






  unsigned int _rotr(unsigned int _Val,int _Shift);
  unsigned int _rotl(unsigned int _Val,int _Shift);


  __extension__ unsigned long long _rotr64(unsigned long long _Val,int _Shift);
  __attribute__ ((__dllimport__)) void _searchenv(const char *_Filename,const char *_EnvVar,char *_ResultPath) ;
  __attribute__ ((__dllimport__)) void _splitpath(const char *_FullPath,char *_Drive,char *_Dir,char *_Filename,char *_Ext) ;
  __attribute__ ((__dllimport__)) void _swab(char *_Buf1,char *_Buf2,int _SizeInBytes);



  __attribute__ ((__dllimport__)) wchar_t * _wfullpath(wchar_t *_FullPath,const wchar_t *_Path,size_t _SizeInWords);
  __attribute__ ((__dllimport__)) void _wmakepath(wchar_t *_ResultPath,const wchar_t *_Drive,const wchar_t *_Dir,const wchar_t *_Filename,const wchar_t *_Ext);


  __attribute__ ((__dllimport__)) void _wperror(const wchar_t *_ErrMsg);

  __attribute__ ((__dllimport__)) int _wputenv(const wchar_t *_EnvString);
  __attribute__ ((__dllimport__)) void _wsearchenv(const wchar_t *_Filename,const wchar_t *_EnvVar,wchar_t *_ResultPath) ;
  __attribute__ ((__dllimport__)) void _wsplitpath(const wchar_t *_FullPath,wchar_t *_Drive,wchar_t *_Dir,wchar_t *_Filename,wchar_t *_Ext) ;


  __attribute__ ((__dllimport__)) void _beep(unsigned _Frequency,unsigned _Duration) __attribute__ ((__deprecated__));
  /* Not to be confused with  _set_error_mode (int).  */
  __attribute__ ((__dllimport__)) void _seterrormode(int _Mode) __attribute__ ((__deprecated__));
  __attribute__ ((__dllimport__)) void _sleep(unsigned long _Duration) __attribute__ ((__deprecated__));
# 574 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
 char * ecvt(double _Val,int _NumOfDigits,int *_PtDec,int *_PtSign) ;
  char * fcvt(double _Val,int _NumOfDec,int *_PtDec,int *_PtSign) ;
  char * gcvt(double _Val,int _NumOfDigits,char *_DstBuf) ;
  char * itoa(int _Val,char *_DstBuf,int _Radix) ;
  char * ltoa(long _Val,char *_DstBuf,int _Radix) ;
  int putenv(const char *_EnvString) ;
  void swab(char *_Buf1,char *_Buf2,int _SizeInBytes) ;
  char * ultoa(unsigned long _Val,char *_Dstbuf,int _Radix) ;
  _onexit_t onexit(_onexit_t _Func);





  typedef struct { __extension__ long long quot, rem; } lldiv_t;

  __extension__ lldiv_t lldiv(long long, long long);

  __extension__ long long llabs(long long);




  __extension__ long long strtoll(const char * __restrict__, char ** __restrict, int);
  __extension__ unsigned long long strtoull(const char * __restrict__, char ** __restrict__, int);

  /* these are stubs for MS _i64 versions */
  __extension__ long long atoll (const char *);


  __extension__ long long wtoll (const wchar_t *);
  __extension__ char * lltoa (long long, char *, int);
  __extension__ char * ulltoa (unsigned long long , char *, int);
  __extension__ wchar_t * lltow (long long, wchar_t *, int);
  __extension__ wchar_t * ulltow (unsigned long long, wchar_t *, int);

  /* __CRT_INLINE using non-ansi functions */
# 627 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
#pragma pack(pop)



# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdlib_s.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */





# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
# 9 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdlib_s.h" 2 3
# 629 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 2 3

# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */





# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
# 9 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 2 3


#pragma pack(push,_CRT_PACKING)
# 31 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 3
/* Return codes for _heapwalk()  */







/* Values for _heapinfo.useflag */





 /* The structure used to walk through the heap with _heapwalk.  */
  typedef struct _heapinfo {
    int *_pentry;
    size_t _size;
    int _useflag;
  } _HEAPINFO;


  extern unsigned int _amblksiz;

/* Make sure that X86intrin.h doesn't produce here collisions.  */
# 98 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 3
/* Users should really use MS provided versions */
void * __mingw_aligned_malloc (size_t _Size, size_t _Alignment);
void __mingw_aligned_free (void *_Memory);
void * __mingw_aligned_offset_realloc (void *_Memory, size_t _Size, size_t _Alignment, size_t _Offset);
void * __mingw_aligned_realloc (void *_Memory, size_t _Size, size_t _Offset);



  __attribute__ ((__dllimport__)) int _resetstkoflw (void);
  __attribute__ ((__dllimport__)) unsigned long _set_malloc_crt_max_wait(unsigned long _NewValue);

  __attribute__ ((__dllimport__)) void * _expand(void *_Memory,size_t _NewSize);
  __attribute__ ((__dllimport__)) size_t _msize(void *_Memory);






  __attribute__ ((__dllimport__)) size_t _get_sbh_threshold(void);
  __attribute__ ((__dllimport__)) int _set_sbh_threshold(size_t _NewValue);
  __attribute__ ((__dllimport__)) errno_t _set_amblksiz(size_t _Value);
  __attribute__ ((__dllimport__)) errno_t _get_amblksiz(size_t *_Value);
  __attribute__ ((__dllimport__)) int _heapadd(void *_Memory,size_t _Size);
  __attribute__ ((__dllimport__)) int _heapchk(void);
  __attribute__ ((__dllimport__)) int _heapmin(void);
  __attribute__ ((__dllimport__)) int _heapset(unsigned int _Fill);
  __attribute__ ((__dllimport__)) int _heapwalk(_HEAPINFO *_EntryInfo);
  __attribute__ ((__dllimport__)) size_t _heapused(size_t *_Used,size_t *_Commit);
  __attribute__ ((__dllimport__)) intptr_t _get_heap_handle(void);
# 140 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 3
 static __inline void *_MarkAllocaS(void *_Ptr,unsigned int _Marker) {
    if(_Ptr) {
      *((unsigned int*)_Ptr) = _Marker;
      _Ptr = (char*)_Ptr + 16;
    }
    return _Ptr;
  }
# 159 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 3
 static __inline void _freea(void *_Memory) {
    unsigned int _Marker;
    if(_Memory) {
      _Memory = (char*)_Memory - 16;
      _Marker = *(unsigned int *)_Memory;
      if(_Marker==0xDDDD) {
 free(_Memory);
      }





    }
  }
# 205 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 3
#pragma pack(pop)
# 630 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 2 3
# 5 "Le_7/Lnet.h" 2
# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */





# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
# 9 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 2 3
# 36 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 3
 __attribute__ ((__dllimport__)) void * _memccpy(void *_Dst,const void *_Src,int _Val,size_t _MaxCount);
                void * memchr(const void *_Buf ,int _Val,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _memicmp(const void *_Buf1,const void *_Buf2,size_t _Size);
  __attribute__ ((__dllimport__)) int _memicmp_l(const void *_Buf1,const void *_Buf2,size_t _Size,_locale_t _Locale);
  int memcmp(const void *_Buf1,const void *_Buf2,size_t _Size);
  void * memcpy(void * __restrict__ _Dst,const void * __restrict__ _Src,size_t _Size) ;
  void * memset(void *_Dst,int _Val,size_t _Size);

  void * memccpy(void *_Dst,const void *_Src,int _Val,size_t _Size) ;
  int memicmp(const void *_Buf1,const void *_Buf2,size_t _Size) ;


  char * _strset(char *_Str,int _Val) ;
  char * _strset_l(char *_Str,int _Val,_locale_t _Locale) ;
  char * strcpy(char * __restrict__ _Dest,const char * __restrict__ _Source);
  char * strcat(char * __restrict__ _Dest,const char * __restrict__ _Source);
  int strcmp(const char *_Str1,const char *_Str2);
  size_t strlen(const char *_Str);
  size_t strnlen(const char *_Str,size_t _MaxCount);
  void * memmove(void *_Dst,const void *_Src,size_t _Size) ;
  __attribute__ ((__dllimport__)) char * _strdup(const char *_Src);
                char * strchr(const char *_Str,int _Val);
  __attribute__ ((__dllimport__)) int _stricmp(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int _strcmpi(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int _stricmp_l(const char *_Str1,const char *_Str2,_locale_t _Locale);
  int strcoll(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int _strcoll_l(const char *_Str1,const char *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _stricoll(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int _stricoll_l(const char *_Str1,const char *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _strncoll (const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _strncoll_l(const char *_Str1,const char *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _strnicoll (const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _strnicoll_l(const char *_Str1,const char *_Str2,size_t _MaxCount,_locale_t _Locale);
  size_t strcspn(const char *_Str,const char *_Control);
  __attribute__ ((__dllimport__)) char * _strerror(const char *_ErrMsg) ;
  char * strerror(int) ;
  __attribute__ ((__dllimport__)) char * _strlwr(char *_String) ;
  char *strlwr_l(char *_String,_locale_t _Locale) ;
  char * strncat(char * __restrict__ _Dest,const char * __restrict__ _Source,size_t _Count) ;
  int strncmp(const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _strnicmp(const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _strnicmp_l(const char *_Str1,const char *_Str2,size_t _MaxCount,_locale_t _Locale);
  char *strncpy(char * __restrict__ _Dest,const char * __restrict__ _Source,size_t _Count) ;
  __attribute__ ((__dllimport__)) char * _strnset(char *_Str,int _Val,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) char * _strnset_l(char *str,int c,size_t count,_locale_t _Locale) ;
                char * strpbrk(const char *_Str,const char *_Control);
                char * strrchr(const char *_Str,int _Ch);
  __attribute__ ((__dllimport__)) char * _strrev(char *_Str);
  size_t strspn(const char *_Str,const char *_Control);
                char * strstr(const char *_Str,const char *_SubStr);
  char * strtok(char * __restrict__ _Str,const char * __restrict__ _Delim) ;
  __attribute__ ((__dllimport__)) char * _strupr(char *_String) ;
  __attribute__ ((__dllimport__)) char *_strupr_l(char *_String,_locale_t _Locale) ;
  size_t strxfrm(char * __restrict__ _Dst,const char * __restrict__ _Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t _strxfrm_l(char * __restrict__ _Dst,const char * __restrict__ _Src,size_t _MaxCount,_locale_t _Locale);


  char * strdup(const char *_Src) ;
  int strcmpi(const char *_Str1,const char *_Str2) ;
  int stricmp(const char *_Str1,const char *_Str2) ;
  char * strlwr(char *_Str) ;
  int strnicmp(const char *_Str1,const char *_Str,size_t _MaxCount) ;
  int strncasecmp (const char *, const char *, size_t);
  int strcasecmp (const char *, const char *);







  char * strnset(char *_Str,int _Val,size_t _MaxCount) ;
  char * strrev(char *_Str) ;
  char * strset(char *_Str,int _Val) ;
  char * strupr(char *_Str) ;





  __attribute__ ((__dllimport__)) wchar_t * _wcsdup(const wchar_t *_Str);
  wchar_t * wcscat(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source) ;
                wchar_t * wcschr(const wchar_t *_Str,wchar_t _Ch);
  int wcscmp(const wchar_t *_Str1,const wchar_t *_Str2);
  wchar_t * wcscpy(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source) ;
  size_t wcscspn(const wchar_t *_Str,const wchar_t *_Control);
  size_t wcslen(const wchar_t *_Str);
  size_t wcsnlen(const wchar_t *_Src,size_t _MaxCount);
  wchar_t *wcsncat(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count) ;
  int wcsncmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  wchar_t *wcsncpy(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count) ;
  wchar_t * _wcsncpy_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count,_locale_t _Locale) ;
                wchar_t * wcspbrk(const wchar_t *_Str,const wchar_t *_Control);
                wchar_t * wcsrchr(const wchar_t *_Str,wchar_t _Ch);
  size_t wcsspn(const wchar_t *_Str,const wchar_t *_Control);
                wchar_t * wcsstr(const wchar_t *_Str,const wchar_t *_SubStr);
  wchar_t * wcstok(wchar_t * __restrict__ _Str,const wchar_t * __restrict__ _Delim) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcserror(int _ErrNum) ;
  __attribute__ ((__dllimport__)) wchar_t * __wcserror(const wchar_t *_Str) ;
  __attribute__ ((__dllimport__)) int _wcsicmp(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int _wcsicmp_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsnicmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _wcsnicmp_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t * _wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcsrev(wchar_t *_Str);
  __attribute__ ((__dllimport__)) wchar_t * _wcsset(wchar_t *_Str,wchar_t _Val) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcslwr(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) wchar_t *_wcslwr_l(wchar_t *_String,_locale_t _Locale) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcsupr(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) wchar_t *_wcsupr_l(wchar_t *_String,_locale_t _Locale) ;
  size_t wcsxfrm(wchar_t * __restrict__ _Dst,const wchar_t * __restrict__ _Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t _wcsxfrm_l(wchar_t * __restrict__ _Dst,const wchar_t * __restrict__ _Src,size_t _MaxCount,_locale_t _Locale);
  int wcscoll(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int _wcscoll_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsicoll(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int _wcsicoll_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsncoll(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _wcsncoll_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsnicoll(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _wcsnicoll_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);


  wchar_t * wcsdup(const wchar_t *_Str) ;

  int wcsicmp(const wchar_t *_Str1,const wchar_t *_Str2) ;
  int wcsnicmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount) ;
  wchar_t * wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount) ;
  wchar_t * wcsrev(wchar_t *_Str) ;
  wchar_t * wcsset(wchar_t *_Str,wchar_t _Val) ;
  wchar_t * wcslwr(wchar_t *_Str) ;
  wchar_t * wcsupr(wchar_t *_Str) ;
  int wcsicoll(const wchar_t *_Str1,const wchar_t *_Str2) ;
# 176 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 3
# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/string_s.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */





# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
# 9 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/string_s.h" 2 3
# 175 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 2 3
# 6 "Le_7/Lnet.h" 2
# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */





# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
# 9 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3


# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw_print_push.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */

/* Undefine __mingw_<printf> macros.  */
# 11 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3


#pragma pack(push,_CRT_PACKING)
# 26 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
 struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
  };
  typedef struct _iobuf FILE;
# 84 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
 typedef long _off_t;

  typedef long off_t;






  __extension__ typedef long long _off64_t;

  __extension__ typedef long long off64_t;





  __attribute__ ((__dllimport__)) FILE * __iob_func(void);
# 120 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
 __extension__ typedef long long fpos_t;
# 157 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
 __attribute__ ((__dllimport__)) int _filbuf(FILE *_File);
  __attribute__ ((__dllimport__)) int _flsbuf(int _Ch,FILE *_File);



  __attribute__ ((__dllimport__)) FILE * _fsopen(const char *_Filename,const char *_Mode,int _ShFlag);

  void clearerr(FILE *_File);
  int fclose(FILE *_File);
  __attribute__ ((__dllimport__)) int _fcloseall(void);



  __attribute__ ((__dllimport__)) FILE * _fdopen(int _FileHandle,const char *_Mode);

  int feof(FILE *_File);
  int ferror(FILE *_File);
  int fflush(FILE *_File);
  int fgetc(FILE *_File);
  __attribute__ ((__dllimport__)) int _fgetchar(void);
  int fgetpos(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos);
  char * fgets(char * __restrict__ _Buf,int _MaxCount,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int _fileno(FILE *_File);



  __attribute__ ((__dllimport__)) char * _tempnam(const char *_DirName,const char *_FilePrefix);
  __attribute__ ((__dllimport__)) int _flushall(void);
  FILE * fopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode) ;
  FILE *fopen64(const char * __restrict__ filename,const char * __restrict__ mode);
  int fprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
  int fputc(int _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) int _fputchar(int _Ch);
  int fputs(const char * __restrict__ _Str,FILE * __restrict__ _File);
  size_t fread(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  FILE * freopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode,FILE * __restrict__ _File) ;
  int fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...) ;
  int _fscanf_l(FILE * __restrict__ _File,const char * __restrict__ _Format,_locale_t locale,...) ;
  int fsetpos(FILE *_File,const fpos_t *_Pos);
  int fseek(FILE *_File,long _Offset,int _Origin);
  int fseeko64(FILE* stream, _off64_t offset, int whence);
  long ftell(FILE *_File);
  _off64_t ftello64(FILE * stream);
  __extension__ int _fseeki64(FILE *_File,long long _Offset,int _Origin);
  __extension__ long long _ftelli64(FILE *_File);
  size_t fwrite(const void * __restrict__ _Str,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  int getc(FILE *_File);
  int getchar(void);
  __attribute__ ((__dllimport__)) int _getmaxstdio(void);
  char * gets(char *_Buffer) ;
  int _getw(FILE *_File);




  __attribute__ ((__dllimport__)) int _pclose(FILE *_File);
  __attribute__ ((__dllimport__)) FILE * _popen(const char *_Command,const char *_Mode);




  int printf(const char * __restrict__ _Format,...);
  int putc(int _Ch,FILE *_File);
  int putchar(int _Ch);
  int puts(const char *_Str);
  __attribute__ ((__dllimport__)) int _putw(int _Word,FILE *_File);


  int remove(const char *_Filename);
  int rename(const char *_OldFilename,const char *_NewFilename);
  __attribute__ ((__dllimport__)) int _unlink(const char *_Filename);

  int unlink(const char *_Filename) ;


  void rewind(FILE *_File);
  __attribute__ ((__dllimport__)) int _rmtmp(void);
  int scanf(const char * __restrict__ _Format,...) ;
  int _scanf_l(const char * __restrict__ format,_locale_t locale,... ) ;
  void setbuf(FILE * __restrict__ _File,char * __restrict__ _Buffer) ;
  __attribute__ ((__dllimport__)) int _setmaxstdio(int _Max);
  __attribute__ ((__dllimport__)) unsigned int _set_output_format(unsigned int _Format);
  __attribute__ ((__dllimport__)) unsigned int _get_output_format(void);
  unsigned int __mingw_set_output_format(unsigned int _Format);
  unsigned int __mingw_get_output_format(void);




  int setvbuf(FILE * __restrict__ _File,char * __restrict__ _Buf,int _Mode,size_t _Size);
  __attribute__ ((__dllimport__)) int _scprintf(const char * __restrict__ _Format,...);
  int sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...) ;
  int _sscanf_l(const char * __restrict__ buffer,const char * __restrict__ format,_locale_t locale,...) ;
  __attribute__ ((__dllimport__)) int _snscanf(const char * __restrict__ _Src,size_t _MaxCount,const char * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _snscanf_l(const char * __restrict__ input,size_t length,const char * __restrict__ format,_locale_t locale,...) ;
  FILE * tmpfile(void) ;
  char * tmpnam(char *_Buffer);
  int ungetc(int _Ch,FILE *_File);
  int vfprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,va_list _ArgList);
  int vprintf(const char * __restrict__ _Format,va_list _ArgList);

  /* Make sure macros are not defined.  */
  extern
    __attribute__((__format__ (gnu_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
    int __mingw_vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,
      va_list _ArgList);
  extern
    __attribute__((__format__ (gnu_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
    int __mingw_snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
  extern
    __attribute__((__format__ (gnu_printf, 1, 2))) __attribute__ ((__nonnull__ (1)))
    int __mingw_printf(const char * __restrict__ , ... ) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 1, 0))) __attribute__ ((__nonnull__ (1)))
    int __mingw_vprintf (const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
    int __mingw_fprintf (FILE * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
    int __mingw_vfprintf (FILE * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
    int __mingw_sprintf (char * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
    int __mingw_vsprintf (char * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));

  __attribute__ ((__dllimport__)) int _snprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _snprintf_l(char * __restrict__ buffer,size_t count,const char * __restrict__ format,_locale_t locale,...) ;
  __attribute__ ((__dllimport__)) int _vsnprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,va_list _Args) ;
  __attribute__ ((__dllimport__)) int _vsnprintf_l(char * __restrict__ buffer,size_t count,const char * __restrict__ format,_locale_t locale,va_list argptr) ;
  int sprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,...) ;
  int _sprintf_l(char * __restrict__ buffer,const char * __restrict__ format,_locale_t locale,...) ;
  int vsprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,va_list _Args) ;

/* this is here to deal with software defining
 * vsnprintf as _vsnprintf, eg. libxml2.  */




  int vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,va_list _ArgList) ;

  int snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
# 312 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
 int vscanf(const char * __restrict__ Format, va_list argp);
  int vfscanf (FILE * __restrict__ fp, const char * __restrict__ Format,va_list argp);
  int vsscanf (const char * __restrict__ _Str,const char * __restrict__ Format,va_list argp);

  __attribute__ ((__dllimport__)) int _vscprintf(const char * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _set_printf_count_output(int _Value);
  __attribute__ ((__dllimport__)) int _get_printf_count_output(void);
# 330 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
 __attribute__ ((__dllimport__)) FILE * _wfsopen(const wchar_t *_Filename,const wchar_t *_Mode,int _ShFlag);


  wint_t fgetwc(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fgetwchar(void);
  wint_t fputwc(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fputwchar(wchar_t _Ch);
  wint_t getwc(FILE *_File);
  wint_t getwchar(void);
  wint_t putwc(wchar_t _Ch,FILE *_File);
  wint_t putwchar(wchar_t _Ch);
  wint_t ungetwc(wint_t _Ch,FILE *_File);
  wchar_t * fgetws(wchar_t * __restrict__ _Dst,int _SizeInWords,FILE * __restrict__ _File);
  int fputws(const wchar_t * __restrict__ _Str,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) wchar_t * _getws(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) int _putws(const wchar_t *_Str);
  int fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  int wprintf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _scwprintf(const wchar_t * __restrict__ _Format,...);
  int vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  int vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int swprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ , ...) ;
  __attribute__ ((__dllimport__)) int _swprintf_l(wchar_t * __restrict__ buffer,size_t count,const wchar_t * __restrict__ format,_locale_t locale,... ) ;
  __attribute__ ((__dllimport__)) int vswprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ ,va_list) ;
  __attribute__ ((__dllimport__)) int _swprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _snwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _vsnwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_list _Args) ;





  int snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
  int vsnwprintf (wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list);
# 373 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
 int vwscanf (const wchar_t * __restrict__ , va_list);
  int vfwscanf (FILE * __restrict__ ,const wchar_t * __restrict__ ,va_list);
  int vswscanf (const wchar_t * __restrict__ ,const wchar_t * __restrict__ ,va_list);

  __attribute__ ((__dllimport__)) int _fwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _wprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vfwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _swprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _scwprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vscwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _wprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _wprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _fwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _fwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vfwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vfwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _swprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _swprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vswprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vswprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _scwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _scwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vscwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _snwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vsnwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList) ;
  __attribute__ ((__dllimport__)) int _swprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,va_list _Args);
  __attribute__ ((__dllimport__)) int __swprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,...) ;
  __attribute__ ((__dllimport__)) int _vswprintf_l(wchar_t * __restrict__ buffer,size_t count,const wchar_t * __restrict__ format,_locale_t locale,va_list argptr) ;
  __attribute__ ((__dllimport__)) int __vswprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,va_list _Args) ;
# 417 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
 __attribute__ ((__dllimport__)) wchar_t * _wtempnam(const wchar_t *_Directory,const wchar_t *_FilePrefix);
  __attribute__ ((__dllimport__)) int _vscwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vscwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  int fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _fwscanf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  int swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _swscanf_l(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) int _snwscanf(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _snwscanf_l(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  int wscanf(const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _wscanf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) FILE * _wfdopen(int _FileHandle ,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) FILE * _wfopen(const wchar_t * __restrict__ _Filename,const wchar_t *__restrict__ _Mode) ;
  __attribute__ ((__dllimport__)) FILE * _wfreopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode,FILE * __restrict__ _OldFile) ;





  __attribute__ ((__dllimport__)) FILE * _wpopen(const wchar_t *_Command,const wchar_t *_Mode);




  __attribute__ ((__dllimport__)) int _wremove(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) wchar_t * _wtmpnam(wchar_t *_Buffer);
  __attribute__ ((__dllimport__)) wint_t _fgetwc_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fputwc_nolock(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _ungetwc_nolock(wint_t _Ch,FILE *_File);
# 475 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
 __attribute__ ((__dllimport__)) void _lock_file(FILE *_File);
  __attribute__ ((__dllimport__)) void _unlock_file(FILE *_File);
  __attribute__ ((__dllimport__)) int _fclose_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) int _fflush_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t _fread_nolock(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int _fseek_nolock(FILE *_File,long _Offset,int _Origin);
  __attribute__ ((__dllimport__)) long _ftell_nolock(FILE *_File);
  __extension__ __attribute__ ((__dllimport__)) int _fseeki64_nolock(FILE *_File,long long _Offset,int _Origin);
  __extension__ __attribute__ ((__dllimport__)) long long _ftelli64_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t _fwrite_nolock(const void * __restrict__ _DstBuf,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int _ungetc_nolock(int _Ch,FILE *_File);





  char * tempnam(const char *_Directory,const char *_FilePrefix) ;
  int fcloseall(void) ;
  FILE * fdopen(int _FileHandle,const char *_Format) ;
  int fgetchar(void) ;
  int fileno(FILE *_File) ;
  int flushall(void) ;
  int fputchar(int _Ch) ;
  int getw(FILE *_File) ;
  int putw(int _Ch,FILE *_File) ;
  int rmtmp(void) ;






#pragma pack(pop)



# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdio_s.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */





# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
# 9 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdio_s.h" 2 3
# 509 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3


# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw_print_pop.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */

/* Define __mingw_<printf> macros.  */
# 511 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3
# 7 "Le_7/Lnet.h" 2
# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
# 10 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3


# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
# 12 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 2 3


struct _exception;

#pragma pack(push,_CRT_PACKING)
# 55 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
/* See also float.h  */


/* IEEE 754 classication */
# 79 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
 extern double * __imp__HUGE;
# 91 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
 struct _exception {
    int type;
    const char *name;
    double arg1;
    double arg2;
    double retval;
  };

  void __mingw_raise_matherr (int typ, const char *name, double a1, double a2,
         double rslt);
  void __mingw_setusermatherr (int ( *)(struct _exception *));
  __attribute__ ((__dllimport__)) void __setusermatherr(int ( *)(struct _exception *));



  double sin(double _X);
  double cos(double _X);
  double tan(double _X);
  double sinh(double _X);
  double cosh(double _X);
  double tanh(double _X);
  double asin(double _X);
  double acos(double _X);
  double atan(double _X);
  double atan2(double _Y,double _X);
  double exp(double _X);
  double log(double _X);
  double log10(double _X);
  double pow(double _X,double _Y);
  double sqrt(double _X);
  double ceil(double _X);
  double floor(double _X);
  double fabs(double _X);
# 135 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
 double ldexp(double _X,int _Y);
  double frexp(double _X,int *_Y);
  double modf(double _X,double *_Y);
  double fmod(double _X,double _Y);

  void sincos (double __x, double *p_sin, double *p_cos);
  void sincosl (long double __x, long double *p_sin, long double *p_cos);
  void sincosf (float __x, float *p_sin, float *p_cos);
# 162 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
 struct _complex {
    double x;
    double y;
  };


  __attribute__ ((__dllimport__)) double _cabs(struct _complex _ComplexA);
  double _hypot(double _X,double _Y);
  __attribute__ ((__dllimport__)) double _j0(double _X);
  __attribute__ ((__dllimport__)) double _j1(double _X);
  __attribute__ ((__dllimport__)) double _jn(int _X,double _Y);
  __attribute__ ((__dllimport__)) double _y0(double _X);
  __attribute__ ((__dllimport__)) double _y1(double _X);
  __attribute__ ((__dllimport__)) double _yn(int _X,double _Y);


  __attribute__ ((__dllimport__)) int _matherr (struct _exception *);


/* These are also declared in Mingw float.h; needed here as well to work 
   around GCC build issues.  */
/* BEGIN FLOAT.H COPY */
/*
 * IEEE recommended functions
 */


  __attribute__ ((__dllimport__)) double _chgsign (double _X);
  __attribute__ ((__dllimport__)) double _copysign (double _Number,double _Sign);
  __attribute__ ((__dllimport__)) double _logb (double);
  __attribute__ ((__dllimport__)) double _nextafter (double, double);
  __attribute__ ((__dllimport__)) double _scalb (double, long);
  __attribute__ ((__dllimport__)) int _finite (double);
  __attribute__ ((__dllimport__)) int _fpclass (double);
  __attribute__ ((__dllimport__)) int _isnan (double);


/* END FLOAT.H COPY */



__attribute__ ((__dllimport__)) double j0 (double) ;
__attribute__ ((__dllimport__)) double j1 (double) ;
__attribute__ ((__dllimport__)) double jn (int, double) ;
__attribute__ ((__dllimport__)) double y0 (double) ;
__attribute__ ((__dllimport__)) double y1 (double) ;
__attribute__ ((__dllimport__)) double yn (int, double) ;

__attribute__ ((__dllimport__)) double chgsign (double);
/*
 * scalb() is a GCC built-in.
 * Exclude this _scalb() stub; the semantics are incompatible
 * with the built-in implementation.
 *
_CRTIMP double __cdecl scalb (double, long);
 *
 */
  __attribute__ ((__dllimport__)) int finite (double);
  __attribute__ ((__dllimport__)) int fpclass (double);
# 260 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
/* Use the compiler's builtin define for FLT_EVAL_METHOD to
   set float_t and double_t.  */


typedef float float_t;
typedef double double_t;
# 278 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
/* 7.12.3.1 */
/*
   Return values for fpclassify.
   These are based on Intel x87 fpu condition codes
   in the high byte of status word and differ from
   the return values for MS IEEE 754 extension _fpclass()
*/





/* 0x0200 is signbit mask */

/*
  We can't inline float or double, because we want to ensure truncation
  to semantic type before classification. 
  (A normal long double value might become subnormal when 
  converted to double, and zero when converted to float.)
*/

  extern int __fpclassifyl (long double);
  extern int __fpclassifyf (float);
  extern int __fpclassify (double);
# 325 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
/* 7.12.3.2 */


/* 7.12.3.3 */


/* 7.12.3.4 */
/* We don't need to worry about truncation here:
   A NaN stays a NaN. */

  extern int __isnan (double);
  extern int __isnanf (float);
  extern int __isnanl (long double);
# 372 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
/* 7.12.3.5 */


/* 7.12.3.6 The signbit macro */
  extern int __signbit (double);
  extern int __signbitf (float);
  extern int __signbitl (long double);
# 403 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
/* 7.12.4 Trigonometric functions: Double in C89 */
  extern float sinf(float _X);
  extern long double sinl(long double);

  extern float cosf(float _X);
  extern long double cosl(long double);

  extern float tanf(float _X);
  extern long double tanl(long double);
  extern float asinf(float _X);
  extern long double asinl(long double);

  extern float acosf (float);
  extern long double acosl (long double);

  extern float atanf (float);
  extern long double atanl (long double);

  extern float atan2f (float, float);
  extern long double atan2l (long double, long double);

/* 7.12.5 Hyperbolic functions: Double in C89  */
  extern float sinhf(float _X);



  extern long double sinhl(long double);

  extern float coshf(float _X);



  extern long double coshl(long double);

  extern float tanhf(float _X);



  extern long double tanhl(long double);

/* Inverse hyperbolic trig functions  */
/* 7.12.5.1 */
  extern double acosh (double);
  extern float acoshf (float);
  extern long double acoshl (long double);

/* 7.12.5.2 */
  extern double asinh (double);
  extern float asinhf (float);
  extern long double asinhl (long double);

/* 7.12.5.3 */
  extern double atanh (double);
  extern float atanhf (float);
  extern long double atanhl (long double);

/* Exponentials and logarithms  */
/* 7.12.6.1 Double in C89 */
  extern float expf(float _X);



  extern long double expl(long double);

/* 7.12.6.2 */
  extern double exp2(double);
  extern float exp2f(float);
  extern long double exp2l(long double);

/* 7.12.6.3 The expm1 functions */
/* TODO: These could be inlined */
  extern double expm1(double);
  extern float expm1f(float);
  extern long double expm1l(long double);

/* 7.12.6.4 Double in C89 */
  extern float frexpf(float _X,int *_Y);



  extern long double frexpl(long double,int *);

/* 7.12.6.5 */


  extern int ilogb (double);
  extern int ilogbf (float);
  extern int ilogbl (long double);

/* 7.12.6.6  Double in C89 */
  extern float ldexpf(float _X,int _Y);



  extern long double ldexpl (long double, int);

/* 7.12.6.7 Double in C89 */
  extern float logf (float);
  extern long double logl(long double);

/* 7.12.6.8 Double in C89 */
  extern float log10f (float);
  extern long double log10l(long double);

/* 7.12.6.9 */
  extern double log1p(double);
  extern float log1pf(float);
  extern long double log1pl(long double);

/* 7.12.6.10 */
  extern double log2 (double);
  extern float log2f (float);
  extern long double log2l (long double);

/* 7.12.6.11 */
  extern double logb (double);
  extern float logbf (float);
  extern long double logbl (long double);

/* Inline versions.  GCC-4.0+ can do a better fast-math optimization
   with __builtins. */
# 552 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
/* 7.12.6.12  Double in C89 */
  extern float modff (float, float*);
  extern long double modfl (long double, long double*);

/* 7.12.6.13 */
  extern double scalbn (double, int);
  extern float scalbnf (float, int);
  extern long double scalbnl (long double, int);

  extern double scalbln (double, long);
  extern float scalblnf (float, long);
  extern long double scalblnl (long double, long);

/* 7.12.7.1 */
/* Implementations adapted from Cephes versions */
  extern double cbrt (double);
  extern float cbrtf (float);
  extern long double cbrtl (long double);

/* 7.12.7.2 The fabs functions: Double in C89 */
  extern float fabsf (float x);
# 583 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
 extern long double fabsl (long double);
# 594 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
/* 7.12.7.3  */
  extern double hypot (double, double) ; /* in libmoldname.a */
  extern float hypotf (float x, float y);



  extern long double hypotl (long double, long double);

/* 7.12.7.4 The pow functions. Double in C89 */
  extern float powf(float _X,float _Y);



  extern long double powl (long double, long double);

/* 7.12.7.5 The sqrt functions. Double in C89. */
  extern float sqrtf (float);
  extern long double sqrtl(long double);

/* 7.12.8.1 The erf functions  */
  extern double erf (double);
  extern float erff (float);
  extern long double erfl (long double);

/* 7.12.8.2 The erfc functions  */
  extern double erfc (double);
  extern float erfcf (float);
  extern long double erfcl (long double);

/* 7.12.8.3 The lgamma functions */
  extern double lgamma (double);
  extern float lgammaf (float);
  extern long double lgammal (long double);

/* 7.12.8.4 The tgamma functions */
  extern double tgamma (double);
  extern float tgammaf (float);
  extern long double tgammal (long double);

/* 7.12.9.1 Double in C89 */
  extern float ceilf (float);
  extern long double ceill (long double);

/* 7.12.9.2 Double in C89 */
  extern float floorf (float);
  extern long double floorl (long double);

/* 7.12.9.3 */
  extern double nearbyint ( double);
  extern float nearbyintf (float);
  extern long double nearbyintl (long double);

/* 7.12.9.4 */
/* round, using fpu control word settings */
extern double rint (double);
extern float rintf (float);
extern long double rintl (long double);

/* 7.12.9.5 */
extern long lrint (double);
extern long lrintf (float);
extern long lrintl (long double);

__extension__ long long llrint (double);
__extension__ long long llrintf (float);
__extension__ long long llrintl (long double);

/* Inline versions of above. 
   GCC 4.0+ can do a better fast-math job with __builtins. */
# 737 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
/* 7.12.9.6 */
/* round away from zero, regardless of fpu control word settings */
  extern double round (double);
  extern float roundf (float);
  extern long double roundl (long double);

/* 7.12.9.7  */
  extern long lround (double);
  extern long lroundf (float);
  extern long lroundl (long double);
  __extension__ long long llround (double);
  __extension__ long long llroundf (float);
  __extension__ long long llroundl (long double);

/* 7.12.9.8 */
/* round towards zero, regardless of fpu control word settings */
  extern double trunc (double);
  extern float truncf (float);
  extern long double truncl (long double);

/* 7.12.10.1 Double in C89 */
  extern float fmodf (float, float);
  extern long double fmodl (long double, long double);

/* 7.12.10.2 */
  extern double remainder (double, double);
  extern float remainderf (float, float);
  extern long double remainderl (long double, long double);

/* 7.12.10.3 */
  extern double remquo(double, double, int *);
  extern float remquof(float, float, int *);
  extern long double remquol(long double, long double, int *);

/* 7.12.11.1 */
  extern double copysign (double, double); /* in libmoldname.a */
  extern float copysignf (float, float);
  extern long double copysignl (long double, long double);

/* 7.12.11.2 Return a NaN */
  extern double nan(const char *tagp);
  extern float nanf(const char *tagp);
  extern long double nanl(const char *tagp);







/* 7.12.11.3 */
  extern double nextafter (double, double); /* in libmoldname.a */
  extern float nextafterf (float, float);
  extern long double nextafterl (long double, long double);

/* 7.12.11.4 The nexttoward functions */
  extern double nexttoward (double, long double);
  extern float nexttowardf (float, long double);
  extern long double nexttowardl (long double, long double);

/* 7.12.12.1 */
/*  x > y ? (x - y) : 0.0  */
  extern double fdim (double x, double y);
  extern float fdimf (float x, float y);
  extern long double fdiml (long double x, long double y);

/* fmax and fmin.
   NaN arguments are treated as missing data: if one argument is a NaN
   and the other numeric, then these functions choose the numeric
   value. */

/* 7.12.12.2 */
  extern double fmax (double, double);
  extern float fmaxf (float, float);
  extern long double fmaxl (long double, long double);

/* 7.12.12.3 */
  extern double fmin (double, double);
  extern float fminf (float, float);
  extern long double fminl (long double, long double);

/* 7.12.13.1 */
/* return x * y + z as a ternary op */
  extern double fma (double, double, double);
  extern float fmaf (float, float, float);
  extern long double fmal (long double, long double, long double);

/* 7.12.14 */
/* 
 *  With these functions, comparisons involving quiet NaNs set the FP
 *  condition code to "unordered".  The IEEE floating-point spec
 *  dictates that the result of floating-point comparisons should be
 *  false whenever a NaN is involved, with the exception of the != op, 
 *  which always returns true: yes, (NaN != NaN) is true).
 */
# 871 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
 __attribute__ ((__dllimport__)) float _copysignf (float _Number,float _Sign);
   __attribute__ ((__dllimport__)) float _chgsignf (float _X);
   __attribute__ ((__dllimport__)) float _logbf(float _X);
   __attribute__ ((__dllimport__)) float _nextafterf(float _X,float _Y);
   __attribute__ ((__dllimport__)) int _finitef(float _X);
   __attribute__ ((__dllimport__)) int _isnanf(float _X);
   __attribute__ ((__dllimport__)) int _fpclassf(float _X);



   extern long double _chgsignl (long double);
# 898 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
#pragma pack(pop)
# 8 "Le_7/Lnet.h" 2
//#include <random>


# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */





# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
# 9 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 2 3






#pragma pack(push,_CRT_PACKING)
# 51 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 3
 typedef long clock_t;
# 88 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 3
 struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
  };




  extern __attribute__ ((__dllimport__)) int _daylight;
  extern __attribute__ ((__dllimport__)) long _dstbias;
  extern __attribute__ ((__dllimport__)) long _timezone;
  extern __attribute__ ((__dllimport__)) char * _tzname[2];

  __attribute__ ((__dllimport__)) errno_t _get_daylight(int *_Daylight);
  __attribute__ ((__dllimport__)) errno_t _get_dstbias(long *_Daylight_savings_bias);
  __attribute__ ((__dllimport__)) errno_t _get_timezone(long *_Timezone);
  __attribute__ ((__dllimport__)) errno_t _get_tzname(size_t *_ReturnValue,char *_Buffer,size_t _SizeInBytes,int _Index);
  char * asctime(const struct tm *_Tm) ;
  char * _ctime32(const __time32_t *_Time) ;
  clock_t clock(void);
  double _difftime32(__time32_t _Time1,__time32_t _Time2);
  struct tm * _gmtime32(const __time32_t *_Time) ;
  struct tm * _localtime32(const __time32_t *_Time) ;
  size_t strftime(char * __restrict__ _Buf,size_t _SizeInBytes,const char * __restrict__ _Format,const struct tm * __restrict__ _Tm);
  __attribute__ ((__dllimport__)) size_t _strftime_l(char * __restrict__ _Buf,size_t _Max_size,const char * __restrict__ _Format,const struct tm * __restrict__ _Tm,_locale_t _Locale);
  __attribute__ ((__dllimport__)) char * _strdate(char *_Buffer) ;
  __attribute__ ((__dllimport__)) char * _strtime(char *_Buffer) ;
  __time32_t _time32(__time32_t *_Time);
  __time32_t _mktime32(struct tm *_Tm);
  __time32_t _mkgmtime32(struct tm *_Tm);

  void tzset(void) ;


  __attribute__ ((__dllimport__)) void _tzset(void);


  double _difftime64(__time64_t _Time1,__time64_t _Time2);
  __attribute__ ((__dllimport__)) char * _ctime64(const __time64_t *_Time) ;
  __attribute__ ((__dllimport__)) struct tm * _gmtime64(const __time64_t *_Time) ;
  __attribute__ ((__dllimport__)) struct tm * _localtime64(const __time64_t *_Time) ;
  __attribute__ ((__dllimport__)) __time64_t _mktime64(struct tm *_Tm);
  __attribute__ ((__dllimport__)) __time64_t _mkgmtime64(struct tm *_Tm);
  __attribute__ ((__dllimport__)) __time64_t _time64(__time64_t *_Time);
  unsigned _getsystime(struct tm *_Tm);
  unsigned _setsystime(struct tm *_Tm,unsigned _MilliSec);


  __attribute__ ((__dllimport__)) wchar_t * _wasctime(const struct tm *_Tm);
  wchar_t * _wctime32(const __time32_t *_Time) ;
  size_t wcsftime(wchar_t * __restrict__ _Buf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,const struct tm * __restrict__ _Tm);
  __attribute__ ((__dllimport__)) size_t _wcsftime_l(wchar_t * __restrict__ _Buf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,const struct tm * __restrict__ _Tm,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t * _wstrdate(wchar_t *_Buffer) ;
  __attribute__ ((__dllimport__)) wchar_t * _wstrtime(wchar_t *_Buffer) ;
  __attribute__ ((__dllimport__)) wchar_t * _wctime64(const __time64_t *_Time) ;



  wchar_t * _wctime(const time_t *) ;
# 167 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 3
double difftime(time_t _Time1,time_t _Time2);
char * ctime(const time_t *_Time) ;
struct tm * gmtime(const time_t *_Time) ;
struct tm * localtime(const time_t *_Time) ;
# 220 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 3
time_t mktime(struct tm *_Tm);
time_t _mkgmtime(struct tm *_Tm);
time_t time(time_t *_Time);
# 250 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 3
 __attribute__ ((__dllimport__)) extern int daylight;
  __attribute__ ((__dllimport__)) extern long timezone;
  __attribute__ ((__dllimport__)) extern char *tzname[2];
  void tzset(void) ;




# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_timeval.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */




struct timeval
{
 long tv_sec;
 long tv_usec;
};
# 256 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 2 3




struct timezone {
  int tz_minuteswest;
  int tz_dsttime;
};

  extern int mingw_gettimeofday (struct timeval *p, struct timezone *z);






#pragma pack(pop)



# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/time_s.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */





# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
# 9 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/time_s.h" 2 3
# 274 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 2 3


/* Adding timespec definition.  */


# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/timeb.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */





# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
# 9 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/timeb.h" 2 3






#pragma pack(push,_CRT_PACKING)
# 53 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/timeb.h" 3
 struct __timeb32 {
    __time32_t time;
    unsigned short millitm;
    short timezone;
    short dstflag;
  };


  struct timeb {
    time_t time;
    unsigned short millitm;
    short timezone;
    short dstflag;
  };


  struct __timeb64 {
    __time64_t time;
    unsigned short millitm;
    short timezone;
    short dstflag;
  };



  __attribute__ ((__dllimport__)) void _ftime64(struct __timeb64 *_Time);
  __attribute__ ((__dllimport__)) void _ftime(struct __timeb32 *);





struct timespec {
  time_t tv_sec; /* Seconds */
  long tv_nsec; /* Nanoseconds */
};

struct itimerspec {
  struct timespec it_interval; /* Timer period */
  struct timespec it_value; /* Timer expiration */
};



  void ftime (struct timeb *);
# 117 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/timeb.h" 3
#pragma pack(pop)



# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/sys/timeb_s.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */






# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/timeb.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
# 10 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/sys/timeb_s.h" 2 3
# 119 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/timeb.h" 2 3
# 277 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 2 3
# 10 "Le_7/Lnet.h" 2
# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\float.h" 1 3 4
/*===---- float.h - Characteristics of floating point types ----------------===
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */




/* If we're on MinGW, fall back to the system's float.h, which might have
 * additional definitions provided for Windows.
 * For more details see http://msdn.microsoft.com/en-us/library/y0ybw9fy.aspx
 */




# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\float.h" 1 3 4
/*
 * float.h
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is a part of the mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within the package.
 *
 * Constants related to floating point arithmetic.
 *
 * Also included here are some non-ANSI bits for accessing the floating
 * point controller.
 *
 */
# 27 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\float.h" 3 4
/* All the headers include this file. */


# 1 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3 4
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
# 28 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\float.h" 2 3 4


/*
 * Functions and definitions for controlling the FPU.
 */


/* TODO: These constants are only valid for x86 machines */

/* Control word masks for unMask */






/* Number of base-FLT_RADIX digits in the significand, p.  */
# 72 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\float.h" 3 4
/* Control word values for unNew (use with related unMask above) */
# 91 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\float.h" 3 4
/* These are also defined in Mingw math.h, needed to work around
   GCC build issues.  */
/* Return values for fpclass. */
# 108 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\float.h" 3 4
/* invalid subconditions (_SW_INVALID also set) */





/*  Floating point error signals and return codes */
# 133 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\float.h" 3 4
/* Set the FPU control word as cw = (cw & ~unMask) | (unNew & unMask),
 * i.e. change the bits in unMask to have the values they have in unNew,
 * leaving other bits unchanged. */
__attribute__ ((__dllimport__)) unsigned int __attribute__ ((__nothrow__)) _controlfp (unsigned int unNew, unsigned int unMask) ;
__attribute__ ((__dllimport__)) unsigned int __attribute__ ((__nothrow__)) _control87 (unsigned int unNew, unsigned int unMask);


__attribute__ ((__dllimport__)) unsigned int __attribute__ ((__nothrow__)) _clearfp (void); /* Clear the FPU status word */
__attribute__ ((__dllimport__)) unsigned int __attribute__ ((__nothrow__)) _statusfp (void); /* Report the FPU status word */




/*
   MSVCRT.dll _fpreset initializes the control register to 0x27f,
   the status register to zero and the tag word to 0FFFFh.
   This differs from asm instruction finit/fninit which set control
   word to 0x37f (64 bit mantissa precison rather than 53 bit).
   By default, the mingw version of _fpreset sets fp control as
   per fninit. To use the MSVCRT.dll _fpreset, include CRT_fp8.o when
   building your application.	 
*/
void __attribute__ ((__nothrow__)) _fpreset (void);
void __attribute__ ((__nothrow__)) fpreset (void);

/* Global 'variable' for the current floating point error code. */
__attribute__ ((__dllimport__)) int * __attribute__ ((__nothrow__)) __fpecode(void);


/*
 * IEEE recommended functions.  MS puts them in float.h
 * but they really belong in math.h.
 */
# 33 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\float.h" 2 3 4


/* Undefine anything that we'll be redefining below. */
# 74 "C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\float.h" 3 4
/* Characteristics of floating point types, C99 5.2.4.2.2 */
# 11 "Le_7/Lnet.h" 2
//#include "ap_cint.h"
//#include "mat.h"
//#include "minst.h"


//#define eta 1
//#define eta2 1
//#define eta3 1





//s2到c3的网络连接表，非全连接，同时消除对称性，避免过拟合

//C1卷积层:输入32X32图像,6个卷积核6个偏置,存在(5X5+1)X6参数,该卷积层是全连接
//卷积输出图像为28X28
/*int table[6][16]={{1,0,0,0,1,1,1,0,0,1,1,1,1,0,1,1},
				  {1,1,0,0,0,1,1,1,0,0,1,1,1,1,0,1},
				  {1,1,1,0,0,0,1,1,1,0,0,1,0,1,1,1},
				  {0,1,1,1,0,0,1,1,1,1,0,0,1,0,1,1},
				  {0,0,1,1,1,0,0,1,1,1,1,0,1,1,0,1},
				  {0,0,0,1,1,1,0,0,1,1,1,1,0,1,1,1}};*/
typedef struct c1_layer
{
 //float d0[32][32];
 float mapData[6][5][5];//特征模块数据，即6个卷积核
 float dmapData[6][5][5];//特征模块数据，即6个卷积核
 //float **map_2;
 //float dmapData[6][5][5];//存放特征模块的数据的局部梯度
 float bias[6];//偏置,一个特征图共享一个偏置参数
 float dbias[6];//偏置,一个特征图共享一个偏置参数
 float v[6][28][28];//进入激活函数的输入值
 float y[6][28][28];//激活函数后神经元的输出
 float d[6][28][28];//网络的局部梯度,δ值
 //float d_c[6][28][28];
 //float ef[6][28][28];
}c1_layer;

//S2平均池化层:输入使用上一层C1的激活后输出即c1_layer.d
//池化不重叠，图像缩小一倍输出为14X14

typedef struct s2_layer
{
 //float input_img[6][28][28];
 //float weig[6];//6个权重，同一特征图使用同一权重
 //float dweig[6];//6个权重，同一特征图使用同一权重
 //float bias[6];//6个偏置，同一特征图使用同一偏置
 //float dbias[6];//6个偏置，同一特征图使用同一偏置
 float v[6][14][14];//进入激活函数的输入值
 float y[6][14][14];//激活函数后神经元的输出
 float d[6][14][14];//网络的局部梯度,δ值
 //float d_c[6][14][14];
 //float ef[6][14][14];
 //float db[16];
}s2_layer;

//C3卷积层:非全连接卷积层，使用table表，为1处为有一个连接，存在
//(5x5x3+1)x6 + (5x5x4 + 1) x 3 + (5x5x4 +1)x6 + (5x5x6+1)x1 = 1516个训练参数
//输入使用上一层的S2激活后输出即s2_layer.d
//卷积输出图像为10X10

typedef struct c3_layer
{
 //float input_img[6][14][14];
 //int table[6][16];
 float mapData[16][6][5][5];//特征模块数据，即(3*6+4*6+4*3+6*1)个卷积核,多余的为空,便于取卷积核
 float dmapData[16][6][5][5];//存放特征模块的数据的局部梯度
 float bias[16];//16个偏置，同一特征图使用同一偏置
 float dbias[16];//16个偏置，同一特征图使用同一偏置
 float v[16][10][10];//进入激活函数的输入值
 float y[16][10][10];//激活函数后神经元的输出
 float d[16][10][10];//网络的局部梯度,δ值
 //float d_c[16][10][10];
 //float ef[16][10][10];
}c3_layer;

//S4平均池化层:输入使用上一层C3的激活后输出即c3_layer.d
//池化不重叠，图像缩小一倍输出为5X5

typedef struct s4_layer
{
 //float input_img[16][10][10];
 //float weig[16];//16个权重，同一特征图使用同一权重
 //float dweig[16];//16个权重，同一特征图使用同一权重
 //float bias[16];//16个偏置，同一特征图使用同一偏置
 //float dbias[16];//16个偏置，同一特征图使用同一偏置
 float v[16][5][5];//进入激活函数的输入值
 float y[16][5][5];//激活函数后神经元的输出
 float d[16][5][5];//网络的局部梯度,δ值
 //float d_c[16][5][5];
 //float ef[16][5][5];
 //float db[16];
}s4_layer;

//C5卷积层:全连接卷积层，存在(5x5x16+1)x120 = 48120个参数
//输入使用上一层的S2激活后输出即s4_layer.d
//卷积输出为1维向量120位数组

typedef struct c5_layer
{
 //float input_img[16][5][5];
 float mapData[30][16][5][5];//特征模块数据，即16*120个卷积核
 float dmapData[30][16][5][5];
 float bias[30];//120个偏置，同一输出使用同一偏置
 float dbias[30];
 float v[30];//进入激活函数的输入值
 float y[30];//激活函数后神经元的输出
 float d[30];//网络的局部梯度,δ值
 //float d_c[120];
 //float ef[120];
}c5_layer;

//F6经典一维全连接神经网络,输出7X12点阵比特图即84位一维向量
//该层的训练参数和连接数是(120 + 1)x84=10164
//输入使用上一层的S2激活后输出即C5_layer.d

/*typedef struct F6_layer
{
	//float input[120];
	float weig[120][84];//权重120X84个权重
	float bias[84];//84个偏置，同一输出使用同一偏置
	float v[84];//进入激活函数的输入值
	float y[84];//激活函数后神经元的输出
	float d[84];//网络的局部梯度,δ值
	//float db[84];//网络的局部梯度,δ值
}F6_layer;*/

typedef struct RBF_layer
{
 //float input[84];
 //float wei[84][10];//权重
 float wei[30][10];//权重
 float dwei[30][10];//权重
 float bias[10];
 float dbias[10];
 float v[10];//进入激活函数的输入值
 float y[10];//激活函数后神经元的输出

 float d[10];//网络的局部梯度,δ值
 //float d_c[10];
 //float ef[10];
 //float jtemp;
}RBF_layer;


//LeNet-5 CNN结构
/*typedef struct cnn_network{

	c1_layer* C1;
	s2_layer* S2;
	c3_layer* C3;
	s4_layer* S4;
	c5_layer* C5;
	//F6_layer* F6;
	RBF_layer* output;

	float input_img[32][32];//标准32位输入图像
	//float bit[10];
	float acvau[10];//实际结果
	float eO[10];
	float eF[10]; // 训练误差
	float* L; // 瞬时误差能量
}CNN;*/

/*typedef struct train_opts{
	int numepochs; // 训练的迭代次数
	float alpha; // 学习速率
}CNNOpts;*/


//void CNNs(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output,float input_img[32][32],float acvau[10],float eF[10],int renew,float *JL);
void CNNs(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output,float input_img[32][32],unsigned int right);
//C1卷积层正向传播
void C1_conv(c1_layer* C1,float inputimg[32][32]);
//S2池化层正向传播
void S2_pool(c1_layer* C1,s2_layer* S2);
//C3卷积层正向传播
void C3_conv(s2_layer* S2,c3_layer* C3);
//S4池化层正向传播
void S4_pool(c3_layer* C3,s4_layer* S4);
//C5卷积层正向传播
void C5_conv(s4_layer* S4,c5_layer* C5);
//F6输出层正向传播
//void f6_layer(c5_layer* C5,F6_layer* F6);
//F6的反向网络梯度δ求解
//void DF6_layer(F6_layer* F6,RBF_layer* output);
//void DF6_layer(c5_layer* C5,RBF_layer* output);
//C5的反向网络梯度δ求解
//void DC5_layer(c5_layer* C5,F6_layer* F6);
void DC5_layer(c5_layer* C5,RBF_layer* output);
//void DC5_c(c5_layer* C5,RBF_layer* output,float acvau[10],float eF[10]);
//S4的反向网络梯度δ求解
void DS4_layer(s4_layer* S4,c5_layer* C5);
//void DS4_c(s4_layer* S4,c5_layer* C5,RBF_layer* output,float acvau[10],float eF[10]);
//C3的反向网络梯度δ求解
void DC3_layer(c3_layer* C3,s4_layer* S4);
//void DC3_c(c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output,float acvau[10],float eF[10]);
//S2的反向网络梯度δ求解
void DS2_layer(s2_layer* S2,c3_layer* C3);
//void DS2_c(s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output,float acvau[10],float eF[10]);
//C1的反向网络梯度δ求解
void DC1_layer(c1_layer* C1,s2_layer* S2);
//void DC1_c(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output,float acvau[10],float eF[10]);

//void in_layer(c1_layer* C1);
//C1卷积核及偏置更新
void update_C1(c1_layer* C1,float inputimg[32][32]);
//S2权重及偏置更新
void update_S2(c1_layer* C1,s2_layer* S2);
//C3卷积核及偏置更新
void update_C3(s2_layer* S2,c3_layer* C3);
//S4权重及偏置更新
void update_S4(c3_layer* C3,s4_layer* S4);
//C5卷积核及偏置更新
void update_C5(s4_layer* S4,c5_layer* C5);
//F5权重及偏置更新
//void update_F6(c5_layer* C5,F6_layer* F6);

//void O_layer(F6_layer* F6,RBF_layer* output);
void O_layer(c5_layer* C5,RBF_layer* output);
//void DO_layer(RBF_layer* output,float acvau[10],float eF[10]);
void DO_layer(RBF_layer* output,unsigned int right);
//void DO_c(RBF_layer* output,float acvau[10],float eF[10]);
//void update_OUT(F6_layer* F6,RBF_layer* output);
void update_OUT(c5_layer* C5,RBF_layer* output);

//void upadteall(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output,float *JL);
void upadteall(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output);
//void startup(CNN *cn);

//void loaddate(CNN *cn);
//void savedate(CNN *cn);
void correct(unsigned int right);

float Sigma(float input,float bas);
float sig(float j);
//float Sigma_2(float input,float bas);
float Sigma_3(float input,float bas);
float Dsigma(float y);
float Dsigma_2(float y);
float Dsigma_3(float input,float bas);
//int reverseunsigned charMNIST(int i);
void read_mnist(char* filename_img,char *filename_label,c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output);
//void read_date(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,F6_layer* F6,RBF_layer* output);
void read_date(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output);
//void save_date(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,F6_layer* F6,RBF_layer* output);
void save_date(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output);
//float **conv_1(float **a,int a_rows,int a_cols,float **b,int b_rows,int b_cols);
//float **conv_2(float **a,int a_rows,int a_cols,float **b,int b_rows,int b_cols);
//float **conv_3(float **a,int a_rows,int a_cols,float **b,int b_rows,int b_cols);
void sigmatest(float input);
//void dateport(float input_img[32][32],float acvau[10]);
void dateport(unsigned int date,unsigned char signal,unsigned short *led,unsigned char *signal_out);
void datereadc1(float date,unsigned char* signal);
void datereads2(float date,unsigned char* signal);
void datereadc3(float date,unsigned char* signal);
void datereads4(float date,unsigned char* signal);
void datereadc5(float date,unsigned char* signal);
void datereado(float date,unsigned char* signal);
void datereadinput(unsigned int date,unsigned char* signal);
void datereadacv(float date,unsigned char* signal);
float datewritec1(unsigned char* signal);
float datewrites2(unsigned char* signal);
float datewritec3(unsigned char* signal);
float datewrites4(unsigned char* signal);
float datewritec5(unsigned char* signal);
float datewriteo(unsigned char* signal);
# 2 "Le_7/Lnet.c" 2

/*int table[6][16]={{1,0,0,0,1,1,1,0,0,1,1,1,1,0,1,1},
				  {1,1,0,0,0,1,1,1,0,0,1,1,1,1,0,1},
				  {1,1,1,0,0,0,1,1,1,0,0,1,0,1,1,1},
				  {0,1,1,1,0,0,1,1,1,1,0,0,1,0,1,1},
				  {0,0,1,1,1,0,0,1,1,1,1,0,1,1,0,1},
				  {0,0,0,1,1,1,0,0,1,1,1,1,0,1,1,1}};*/



 static unsigned int input_i=0;
 static unsigned short righht_i=0;
 //static unsigned int j=0;
// static unsigned char stutas=0;
 static c1_layer C1={.mapData={{{0.00561638782, 0.00137754343, 0.00898386259, -0.00635405956, 0.00613536732}, {0.00859140232, 0.0114371199, 0.00197252468, 0.00598418759, -0.030467093}, {0.000485390075, -0.00364575069, 0.00464238506, 0.0115426648, 0.0198368207}, {-0.00791299902, 0.00564714521, 0.0104448842, 0.0220450033, 0.00729904789}, {0.0165716652, 0.00193984818, -0.00822351407, -0.00567146903, 0.017185986}}, {{-0.00271823234, 0.0118441712, -0.00123550114, 0.0211984795, 0.00294277817}, {-0.000188820093, 0.0200879779, -0.00332603976, -0.000569446827, -0.00761244725}, {-0.00277700904, -0.000175802808, -0.00191078894, -0.00179857539, -0.0111995004}, {0.0109327696, -0.015992051, 0.0108415466, -0.00181988615, 0.00783335976}, {-0.00354371942, 0.00517445384, -0.00272944476, -0.00490121963, -0.00673700916}}, {{0.00748118293, 0.00104063412, -0.00242629321, -0.00645566219, -0.0144777335}, {0.0067904559, -0.0180353243, -0.0166205429, 0.00108645379, -0.00058108283}, {-0.0118061295, -0.00324612204, 0.0204350911, 0.00376910018, 0.0267077684}, {0.00918660313, 0.00142053084, 0.00607392425, -0.00490170717, -0.000600151543}, {0.014196842, 0.00140950235, -0.0140685877, -0.00697538024, 0.0120092267}}, {{0.000355836761, -0.0053467215, -0.00752748828, -0.00250603398, 0.00376415043}, {-0.00270307204, 0.00365426205, -0.0189712401, -0.0117168035, 0.0155939367}, {-0.00299802539, 0.00640595891, -0.00827797782, -0.00991741102, 0.0121329185}, {-0.0117118116, -0.000370198133, -0.00476397481, -0.00205289363, 0.00944607519}, {0.00568214944, 0.0160057396, 0.0103533817, -0.00963188987, 0.00676239328}}, {{-0.01593519, -0.00670366315, 0.0176049732, -0.00868061557, 7.99392583e-005}, {-0.0015674145, -0.00542005338, 0.00303802546, 0.00981454551, -0.0132882986}, {-0.00783752836, 0.0228692312, -0.0245665796, -0.0157666821, -0.00186111673}, {-0.00605327403, -0.0131580373, -0.0125883343, 0.00731615815, 0.00279957661}, {-0.0138284164, 0.00175858906, -0.0130292457, -0.000389174995, 0.00979025662}}, {{0.0109373769, -0.0151324561, -0.00776260486, 0.00679018628, -0.00991997961}, {-0.016785685, 0.0100174788, 0.00960814673, 0.0208647884, 0.00472314376}, {0.00841592439, -0.0178910531, -0.0144938957, 0.0019605204, 0.00837674644}, {0.0241001099, 0.00341134844, -0.015474462, 0.00340832374, 0.00507851131}, {-0.0112715773, -0.00109135604, 0.0137955034, 0.00556102209, 0.00183635834}}}};
 //C1.mapData={{{-0.00148311711, 0.0127379671, 0.00884243473, 0.00362125901, 0.0244648959}, {-0.00297151506, 0.00509474752, -0.00221078866, -0.00491092727, -0.00709617091}, {0.0168545209, -0.00607557083, 0.00741676055, -0.0111844642, 0.00281237741}, {0.0118876519, -0.0057539735, -0.00101855793, -0.017727958, 0.00578434439}, {-0.022398429, -0.00222268654, 0.00394720631, 0.0135241477, -0.00512983883}}, {{0.0129237687, 0.0123376492, -0.00878347363, 0.00136597257, -0.00746302865}, {-0.00155010447, 0.00828511734, -0.00596029731, -0.012112231, 0.000790495251}, {-0.00802768767, -0.0181320328, -0.00275439606, -0.00629370706, 0.00717362482}, {0.00650395732, -0.0107846605, -0.00204344187, 0.00787713751, 0.0237401333}, {-0.00783682801, 0.00186582631, -0.00365800248, 0.000128199055, -0.000978947384}}, {{-0.00785651617, -0.00843770243, -0.000704437087, 0.00685255788, 0.0149435904}, {0.00190299936, 0.0190366656, 0.00686879037, 0.00475157937, -0.00439935084}, {0.00532639865, 0.00218098541, 0.00306653464, -0.00755754625, 0.00154993823}, {-0.00253824727, 0.0116795395, 0.00429193582, 0.00974576455, 0.00068458938}, {-0.0105617754, -0.00484624738, -0.00112213555, -0.010706611, -0.00869028363}}, {{0.00697691645, 0.00246490561, 0.00981880724, -0.0113328574, -0.0120124342}, {-0.00705879135, 0.0106926709, 0.00485267164, -0.00182971091, 0.00825132523}, {0.00592108537, 0.00498143351, 0.00444747321, -0.00550890155, -0.0134832542}, {-0.00413873186, -0.0142654451, 0.00678079668, -4.80901072e-005, -0.0223685857}, {-0.00353563158, -0.0201012995, 0.00118239119, -0.0190001987, -0.0123089869}}, {{-0.00357260671, -0.0126346732, 0.0100972559, 0.0021951641, -0.00224248949}, {0.00303656654, 0.00318545126, -0.00622961344, -0.00159093516, -0.000410534587}, {-0.0142738344, 0.00911728945, 0.0172677469, 0.00207532058, 0.0143391686}, {0.0025867892, -0.0232887194, 0.00248808996, 0.0112312827, 0.00381340203}, {-0.0235938672, 0.00717194797, -0.00215390208, -0.00265075429, 0.00347545673}}, {{-0.0224174093, -0.00398046896, 0.0154113611, 0.00891055539, -0.00900867395}, {0.000372841925, 0.00275423168, 0.00571748149, -0.00804443657, -0.0109937703}, {0.0203771852, -0.0122330431, 0.0116834156, -0.0141907949, 0.0021511754}, {0.0189416688, -0.00879338942, 0.00706935767, 0.00847339537, -0.015611656}, {0.00318931229, -0.00507349288, -0.00191482005, -0.0133090653, -0.00990386214}}};
 static s2_layer S2;
 static c3_layer C3={.mapData={{{{0.013495598, 0.013223486, -7.96062959e-005, -0.000972795882, -0.00314238085}, {0.00619493565, -0.00895239413, 0.0127359284, 0.00498098601, -0.0028288886}, {0.0111325681, 0.0122932345, 3.47811147e-005, 0.00150195137, -0.00609800126}, {-0.00260233111, 0.00246347208, 0.00177293539, -0.0120530603, 0.00531449076}, {0.00158206571, 0.000418421609, 0.00357018691, -0.00984075572, 0.0074892086}}, {{-0.00528982654, 0.0137040243, -0.000532436534, -0.0021890623, -0.00449283049}, {-0.00856701005, -0.0028652621, -0.00563859055, 0.00229512434, -0.0123693747}, {0.0160926227, -0.001903989, 0.00392911676, 0.00526646618, -0.00209227996}, {-0.00608324306, 0.00335624348, 0.00696958695, 0.00370639726, -0.000103113009}, {-0.00308174407, 0.00469782483, -0.00399743812, 0.0134601351, -0.00816262234}}, {{0.020986544, 0.00677387789, 0.00156387885, -0.00754472008, 0.00691036414}, {-0.00224266062, 0.00120757497, -3.10271666e-008, 0.00961210672, 0.00307030836}, {-0.0171848591, 0.00887656026, -0.00161351019, 0.0128050186, 0.0100273564}, {0.000921119004, 0.000934535346, -0.00881400332, -0.00661618216, 0.0122042773}, {0.00183694961, -0.00310990331, -0.00795481075, -0.009200342, 2.28826558e-008}}, {{0.000329011906, -0.00124196266, -0.00185123377, -0.00392564712, -0.00955652725}, {-0.00667093555, -0.00290518207, 0.00328721688, 0.00223569199, -0.0102818673}, {-0.00216126721, 0.00903463736, 0.0119236531, 0.00201737857, -0.00637639314}, {-0.00904157013, -0.00892027281, 0.013335119, -0.012719702, -0.00607484812}, {0.00335826282, 0.00416421611, 0.000642061466, -0.000449882675, -0.00993274339}}, {{-0.00996439531, 0.00866123009, 0.00939352252, 0.00335323531, -0.00767549826}, {0.00153810787, -0.00389782223, 0.00891293958, 0.00135962793, 0.00611427613}, {0.00346698542, 0.00993065536, -0.0228119008, -0.020410141, -0.00511775445}, {0.00216308329, 0.016189659, 0.0235931557, -0.0210407116, 0.00130528223}, {0.0232341755, -0.007372892, -0.00364672928, -0.016537156, -0.00610245718}}, {{0.00755923521, 0.0164592545, -0.0146484803, 0.0112922527, -0.00151333527}, {-0.00242427434, 9.90027349e-009, 0.0106990729, 0.00928893313, 0.000955973461}, {0.0132801021, -0.00278594089, -0.0177910682, -0.00360687636, 0.0102321142}, {-0.00906602573, 0.0100255301, -0.00418532034, -0.00359006971, 0.017137805}, {0.0133021791, 0.000623906555, -0.00561881252, -0.0084724389, 0.00425312575}}}, {{{0.0225328412, 0.0153747275, 0.00310203084, 0.00407381775, -0.00452741189}, {-0.00416203821, -0.0042741904, 0.00405967003, 0.00249851844, -0.00543904025}, {-0.00897067506, 0.00462251203, -0.00193813501, -0.00965507701, 0.00304718013}, {0.0144607145, 0.00927366968, -0.00389568741, -0.00319464807, -0.000766112178}, {-0.0132636679, -0.0119236056, 0.00970306899, -0.00278862449, -0.0163177084}}, {{-0.00587968621, -0.0107277734, 0.00941155758, 0.0078730192, -0.00195565494}, {0.0119855879, 0.00224085897, 0.00413167337, -0.00298303389, -0.0125597073}, {0.00328389066, 0.00187809765, 0.00933644921, 0.000467118836, -0.00224320847}, {-0.00700858515, 0.00817314629, 0.0037839103, -0.00518279942, 0.0199555419}, {-0.00804740563, -0.00757289026, 0.00412868662, -0.000787503144, -0.00200457522}}, {{-0.00618719961, 0.00052865484, -0.0085775461, 0.00531564048, -9.34127602e-005}, {0.00458990736, 0.0112282494, 0.0105608879, 0.0031398444, 0.00273038074}, {0.0214339085, -0.0040518702, 0.0024302816, -0.0175153054, 0.00311185536}, {-0.00403871015, 0.0250909571, -0.00453654258, 0.00649101799, 0.0142080672}, {0.0122435028, 0.001318558, -0.00488893222, -0.00727157807, 0.00142175646}}, {{0.0038597337, -0.00336854649, 0.00477998378, 0.00622217171, 0.0267283432}, {0.00620276434, -0.00029332962, -0.0111836856, 0.00881006662, -0.0141866338}, {-0.000687009713, 0.00274881488, 0.015833009, 0.00863124337, -0.0127938474}, {0.0120278588, -0.0191646684, 0.00403975649, 0.00663977209, 0.00303415931}, {0.00566878915, -0.0220984444, 0.00502509438, 0.0210759714, 0.0153340735}}, {{-0.0099967923, 0.00425354345, 0.00783217326, 0.00703219092, -0.00527378451}, {-0.0011039559, 0.00244695088, 0.0067022196, -0.00777423428, -0.00202706386}, {0.00387571356, -0.0146562634, 0.0145526761, 0.0021698398, 0.0079383431}, {0.0040531652, 0.00569240935, -0.0071614068, -0.00523166638, -0.0133455656}, {-0.0114168664, 0.00200135377, 0.00487275515, -0.00718033779, -0.00116033189}}, {{0.0130405473, -0.00212998316, 0.0116274543, 0.00082430453, -0.0132180601}, {-0.00154519221, -0.00828456227, 0.0162056033, 0.00804337766, -0.00125803775}, {-0.0021292679, 0.010859536, 0.00285796798, -0.00229497789, -0.00233765994}, {0.00198903191, -0.0182500128, 0.00425539166, 0.000836489431, -0.000692329253}, {0.000273013895, -0.00513485726, -0.00180174806, 0.0031789674, 0.0034162933}}}, {{{0.00138006185, 0.00881824549, -0.0018213453, -0.00529635511, 0.00495797023}, {-0.00790382922, 0.0158339143, -0.00557453884, 0.00401410088, 0.017061051}, {0.00301290536, -0.00420107646, 0.00609444873, 0.00674017565, -0.00536677241}, {-0.00383453653, 0.0327884257, 0.0114350244, 0.00623384723, 0.00309722708}, {0.00449303957, 0.000290435157, -0.00183976092, -0.0208534319, -0.00315184798}}, {{-0.0184708834, -0.00594171509, -0.0108662648, 0.00354614598, 0.000753642642}, {-0.00281652692, -0.0103633376, -0.000221617971, -0.00806483626, -0.000136413917}, {-0.0172212571, 0.00753518473, 0.00899185427, 0.0128998542, -0.00275185821}, {-0.00874644145, -0.00648568617, -0.0112004187, 0.00398837449, -0.014184528}, {-0.00574944075, 0.0053258054, -0.00160248717, 0.010708537, -0.0131613184}}, {{-0.00259422092, 0.000123659105, -0.000262756745, 0.00185473182, 0.00650473777}, {-0.00136345543, -0.00221180054, -0.00313866232, -0.0106036197, -0.00386900315}, {0.0114767626, -0.00511303917, 0.00962782465, 0.00160948082, 0.00184086722}, {0.0168434475, -0.0136603182, -0.0128221223, -0.0196027551, -0.00344730471}, {-0.00704471581, -0.00723613752, 0.00102876953, -0.00436988054, 0.0143106775}}, {{0.00252730073, -0.00449336646, -0.00942087173, -5.61405577e-005, -0.0011710407}, {-0.000588980096, 0.0140510648, -0.00712006353, -0.00677126646, 0.00254051946}, {0.00279265246, -0.002380847, 0.0185063872, 0.00690295547, -0.0113119595}, {0.00691246288, -0.0144462474, 0.000472976884, 0.000901660416, 0.00803241692}, {-0.00431735255, -0.00201566564, 0.00474386709, 0.00121211121, -0.00565738743}}, {{0.022300927, 0.014319364, 0.00682189176, -0.0271555781, -0.0019585602}, {0.0116222491, -0.0160515103, 0.0138122775, 0.000286562485, 0.000179161943}, {-0.00190974353, 0.0179064386, -0.0157081038, -0.0212089997, -0.00468971534}, {0.00197450537, -0.0117129367, 0.00830577966, 0.000522875751, -8.9683418e-008}, {-0.00655031949, -0.00451228209, 0.00322278659, -0.00367377209, 0.0168075897}}, {{0.0173201635, 0.0109906476, -0.00316593982, 0.00593485823, 0.0102441758}, {-0.00758747151, -0.00600714376, -0.00490336912, -0.0106878765, -0.0173041746}, {-0.0112923961, 0.00234902138, -0.000249525154, -0.00560173811, 0.00283215032}, {0.000253191305, 0.00255982159, 0.00567208324, -0.00423369883, -0.00577821722}, {0.0045793429, -0.0182738323, 0.010086705, -0.0010622862, -0.0069546774}}}, {{{0.0100828623, 0.000710495282, 0.00767061207, 0.0106494967, -0.00180765335}, {-0.00187046069, 0.0141788004, -0.00468316721, 0.00224038819, -0.00696376199}, {0.00818208605, -0.00178264058, -0.0187110901, -0.0175349321, -0.0146461725}, {-0.00551469764, 0.00694063213, -0.0210731756, -0.00334950769, -0.00654844195}, {0.00363872643, -0.00888199266, -0.0202769954, 0.0058272616, 0.00484820968}}, {{-0.00565020135, 0.00879188627, -0.0101617565, 0.00419976749, -0.00182633777}, {0.00596726174, 0.00397076365, -0.0102718715, 0.0156309158, -0.0102087194}, {0.0144269969, 0.00987576507, 0.00241879188, -0.00532452343, 0.0129747838}, {0.00248821708, -0.00252062478, -0.00845582597, -0.00110256684, -0.00501370523}, {0.00134995137, 0.00929467753, -0.000842936162, 0.00867241528, 0.0113468971}}, {{0.016672181, 0.00689592073, 0.0104666287, 0.00674766256, 0.0136106946}, {-0.00491357129, -0.0053375205, 0.0211040992, -0.0140926782, 0.00151220907}, {-0.00644565001, -0.00405175146, 0.0162109677, 0.000710224675, 0.00437089568}, {-0.0125806453, 0.00248522148, 0.0140618235, -0.0135054281, 0.0181181729}, {0.00425098231, 0.00636450807, -0.0225508008, 0.00918381009, 0.0221203007}}, {{0.0118388422, 0.00484978082, -0.00290301233, 0.00921216421, 0.0163206849}, {-0.0049961633, 0.0026464602, -0.00884911697, -0.0102880606, -0.00335710216}, {0.000294271653, 0.00464708917, 0.0015008311, 0.00464337692, 0.0207351279}, {-0.00554872537, 0.00920068752, -0.0115681337, -0.00520812254, 0.00802990701}, {0.0131024057, 0.0102296686, -0.00137912051, 0.0105290553, 0.00389092835}}, {{-0.00336495205, -0.0093060052, -0.0101381671, -0.0170369372, -0.00840882957}, {-0.00117830676, -0.00320979464, -0.00210772781, 0.0251909383, -0.00332813221}, {0.00438664062, 0.00652861269, -0.000812285347, 0.00285574119, 0.00888932776}, {0.00454013422, -0.00611800142, -0.0025519256, 0.00907903444, -0.0104925977}, {0.00889205188, -0.00887202099, 0.00382095925, -0.00795636512, -0.00458048051}}, {{0.0125597864, -0.00157720316, -0.00198574574, 0.00806432404, 0.0175909903}, {-0.0103961034, 0.0111434991, -0.0149634909, 0.00275210082, -0.000832887425}, {0.00871282723, -0.0169327129, 0.0163508989, 0.000155959642, -0.00306466129}, {-0.001026485, 0.00119754532, 0.004049649, -0.000251560443, -0.0127780354}, {-0.00515200244, -0.00884727202, -0.0172172412, -0.0036629939, 0.0170488972}}}, {{{0.0189286154, -0.0133765098, -0.0018191929, -0.00787463505, -0.016747348}, {-0.00858655758, -0.00361098256, 0.0138165019, 0.00239716773, 0.0214447733}, {-0.021805536, 0.00310820132, 0.0168548115, -0.0213520061, 0.0271427259}, {0.00591522595, -0.00135322555, -0.0018430003, -0.0165345576, -0.00142766419}, {0.00715317344, 0.0105073135, 0.00312159373, 0.0139731355, 0.000889426505}}, {{-0.00487439102, 0.0156121673, -0.0127939489, -0.0111075677, 0.00725445105}, {0.0022034985, -0.00161907112, -0.0101624401, 0.00208453508, -0.00525640231}, {0.00163324131, 0.00932221394, -0.00387771893, -0.00198652339, 0.0135298278}, {-0.00903788861, -0.0195809938, 0.00721513433, -0.00610349653, 0.0123033458}, {-0.00839714147, 0.00238610711, 0.00671145739, -0.0103873285, -0.00469966559}}, {{0.0044557713, -0.00237925979, 0.0209422428, 0.00293347938, 0.0161744021}, {-0.00202161679, 0.000505830278, 0.00571775297, 0.0142409513, -0.0140850106}, {-0.0120177083, -0.0177318007, -0.00806873199, 0.000809121411, 0.00389712816}, {0.0119336545, 0.00801308453, -0.004081388, -0.00297917635, -0.0134831108}, {-0.0181790646, -0.0111067006, -0.00305137737, -0.00422238745, 0.00994583499}}, {{0.00578785501, -0.00452818908, -0.0103467088, 0.0117131472, -0.0058203754}, {-0.00559965707, -0.00034063941, -0.0133922994, 0.000606283313, -0.00735467626}, {0.00345175364, 0.015226502, 0.00110619236, 0.0120370444, -0.00672174012}, {0.00783520285, 0.00660390407, 0.0200472306, 0.0131242694, 0.00574995764}, {-0.00171439839, 0.000583242392, -0.0112510296, 1.18791077e-009, -0.00120727951}}, {{-0.00157297344, -0.00828878209, 0.00762163382, -0.0107489554, 0.00784208253}, {-0.00859346148, 0.00112510286, -0.00118315744, -0.0101793231, -0.00486772647}, {0.00788744539, -0.00653064158, 0.00469580106, -0.00196208875, 0.00475624856}, {0.0019877241, -0.00815109443, -0.0138081992, -0.0112040313, 0.00667316746}, {0.00973125175, -0.00306471065, 0.0112424884, 0.00699115498, -0.00442317408}}, {{0.0141153168, 0.00273558707, 0.00421199156, -0.0103499806, -0.00283742254}, {0.00368884834, 0.00380234397, -0.01528305, 0.00317327189, 0.00390150631}, {0.00335364882, -0.00820178539, 0.00187000958, -0.0229606256, -0.00104339374}, {0.00489144074, -0.0103589995, 0.00268566771, 0.0055574337, 0.0137243718}, {-0.00618259655, -0.0016011484, -0.00473228237, 0.00271130493, 0.0086982958}}}, {{{-0.00110539678, 0.00223774859, 0.00789612811, 0.00759489182, -0.00800479669}, {-0.00687647657, -0.00214119093, -0.00700587826, -0.00516199833, -0.0061206487}, {-0.00101312855, 0.00314879674, 0.0202677473, 0.0105840657, -0.000723723439}, {0.0148311844, -0.010655419, -0.00288509624, -0.00738298194, 0.00818777457}, {-0.00532099511, 0.000900045387, 0.00418159319, -0.0119820004, -0.0164808389}}, {{-0.00510024559, -0.00894435588, 0.00493290275, 0.0225614216, 0.0137829389}, {0.00353434077, -0.0116536347, 0.00208403193, 0.0110343704, -0.0033476043}, {-0.0102861654, -0.0188746229, 0.00639347639, 0.00858398993, 0.0164438691}, {0.00526152644, 6.80013691e-005, -0.0160429943, -0.0121723665, -0.00236535212}, {-0.00503552472, 0.0102231195, -0.0130296638, 0.0111045595, -0.019099297}}, {{-0.00890519377, -0.00535967527, -0.00655567553, 0.00944240391, -0.0147452103}, {-0.0206517242, -0.0162320565, -0.0109107131, -0.0139267137, 8.17607943e-005}, {0.00299193896, 0.0187034924, 0.00237353146, 0.0066275713, 0.00221384317}, {0.00037600167, 0.0226397458, -0.00957934372, -0.00142816827, -0.0110726766}, {0.00244920002, 0.00710084243, -0.00539557217, 0.0144521408, 0.00895160064}}, {{0.000241819187, -0.0106728924, 0.00344372215, -0.00735196844, 0.00806432404}, {-0.00166435854, 0.000396896794, 0.00962636061, 0.00123280589, 0.0242725275}, {-0.00937547069, 0.00532815047, -0.00504380092, 0.00248030969, 0.0051469584}, {-0.00938870851, 0.0183820724, 0.00836127624, 0.0067165154, 0.00741553307}, {-0.00389509182, 0.0128681492, 0.00167458481, 0.0109369345, 0.0215665959}}, {{0.00554983085, -0.0113330642, 0.020722447, 0.00767191779, -0.000427523686}, {-0.00676758634, -0.00224433769, 0.000711321889, 0.0158125963, 0.00633376371}, {-0.00238510035, -0.00543216337, -0.00949951448, 0.00486449199, -0.0115139075}, {-0.00899046008, -0.0222413372, -0.00410442613, 0.00324931415, -0.0171391219}, {-0.0138643486, 0.0248864871, 0.00297019375, 0.00330218021, -0.00249906816}}, {{0.0137456311, 0.00840659719, 0.00932468008, 0.000912038959, 0.0114972591}, {0.00601092353, 0.00651714439, -0.00260938401, -0.0100349477, 0.0238607936}, {0.0194145981, -0.000501392409, 0.00120250776, -0.0134311495, 0.0114423987}, {0.00215699477, -0.0129162678, 0.000564707094, 0.00296463724, -0.0146564906}, {-0.00513972295, -0.00161817379, 0.0340425447, -0.00289847329, -0.00467230845}}}, {{{-0.00359291513, -0.0114395432, 0.00235676393, 0.00640214281, -0.00787412282}, {0.00264968188, 0.00460890634, 0.00474320306, 0.0140927536, -0.00610743416}, {0.00100891222, -0.0121523822, 0.0130860135, -0.0032323238, -0.00601602858}, {0.0106931645, -0.00192001555, 0.0114848884, 0.00356985163, 0.0113754934}, {0.00518432399, -0.0230228882, -0.0170074329, 0.000590702053, 0.00257168803}}, {{0.0010129544, -0.0046080309, -0.00467288215, 0.0265252199, 0.0135900937}, {0.00410311576, 0.00244541653, -0.00800913665, 0.00882212259, -0.0130675137}, {-0.00293100206, -0.0168091785, 0.00276324828, -0.00124606118, 0.0112761306}, {-0.00217750622, 0.00624341937, 0.0217798874, -4.94654806e-008, 0.00192882237}, {-0.0103477174, -0.00700400257, -0.014827203, -0.0106490608, -0.0127203818}}, {{-0.0102272723, -0.0098912539, 0.00563285174, -0.0127038686, 0.0190738849}, {-0.00415198645, 0.0199119467, 0.0099506015, -0.00651616184, 0.0077136769}, {-0.0133898854, 0.00330493227, 0.00957990251, -0.00390792964, 0.00380965625}, {-0.0011854599, -0.0140778348, -0.00907692872, -0.00688365428, -0.00405175146}, {0.0179771744, 0.00908449944, 0.00369836739, 0.00577349449, 0.0054443297}}, {{0.00491609285, 0.00837892573, -0.00762853213, 0.00571766729, -0.0110642249}, {-0.00659327814, 0.029984843, 0.00956566539, -0.000426646235, 0.0142345149}, {-0.0132254064, 0.00778782601, 0.0232845023, 0.00940759759, -0.00340960477}, {-0.0100762546, 0.00965926703, -0.0161275212, 5.36198859e-005, 0.00787096005}, {-0.00714163063, 0.00245767995, 0.0236272719, -0.000779821305, -0.00192827894}}, {{-0.00906685926, 0.00822093245, -0.00241565029, 0.0078230612, -0.00307029556}, {-0.00561184203, -0.0108519336, -0.00274680089, 0.00406288821, 0.0133638093}, {-0.0086125331, -0.0181653295, 0.00962766167, -0.0143193481, -0.0156346932}, {0.00130858575, 0.0152836395, -0.0073624826, -0.0116997873, -0.0140741849}, {-0.0168109853, -0.0124193216, 0.00828030333, 0.000115678369, -0.00295942347}}, {{0.00174680154, -0.00368383061, 0.0371626206, -0.0058946698, 0.00148907979}, {-0.0114465486, -0.0065276227, -0.00342076598, -0.0114586959, -0.00941870082}, {-0.00425817352, 0.000764857803, -0.00655130111, 0.000702199875, -0.00947875809}, {-0.0158175845, -0.0226041172, -0.00830359571, 0.00266777235, 0.0014924818}, {-0.00249225856, 0.00544457696, 0.0192477312, 0.0137413321, 0.0180899333}}}, {{{-0.00262914994, 0.000917353842, -0.00688834488, 0.0210819598, -0.00154842099}, {-0.0110367825, 0.0081038205, 0.0142847104, -0.0124745835, -0.0153515982}, {-0.0212883018, 0.000932183873, 0.00783224404, -0.00515975524, 0.00605631992}, {0.00077064283, -0.00268532895, -0.00734675443, 0.00566664152, 0.00142171688}, {0.00278503378, 0.0142616471, -0.0087709371, -0.00116875907, 0.00879766606}}, {{-0.00185037719, 0.0162900444, 0.0147345932, 0.000804256939, 0.00680205505}, {0.00199043564, 0.0115213087, -0.00199935306, -0.00183972763, -0.0107537117}, {-0.00679257978, -0.0128869712, -0.0204422269, -0.000496228866, 0.00405616779}, {0.00156671915, 0.00307358569, -0.0123927314, 0.0156229176, 0.00602765987}, {0.00473673828, 0.0139232734, 0.00118545012, 0.00197142805, 0.019999316}}, {{-0.001385496, 0.000300718268, 0.007260249, 0.0141572542, -9.90736153e-005}, {-0.00301526161, -0.0038181711, 0.00500728656, 0.0127309989, -0.0146811847}, {-0.00266974955, 0.00548477611, -0.00461835088, 0.020065818, 0.00802056771}, {-0.00596905965, 0.000283775298, -0.0216973666, -0.0109349992, 0.014136699}, {0.0012464769, 0.00540180132, -0.00242056209, 0.0175739713, -0.0141321579}}, {{-0.00246629422, 0.0194088183, 0.00267029414, 0.00768451858, -0.0093466416}, {0.00669238251, -0.0114388093, 0.00297292368, -0.00345958816, -0.00258608279}, {-0.0106093213, -0.023232976, 0.014432935, 0.00439957809, -0.00843825005}, {-0.0149168819, 0.00336714089, -0.000903649023, 0.000717255694, 0.0212593004}, {-0.0130257411, -0.00852285605, -0.000211585328, -0.00123371743, -0.000229674362}}, {{-0.00104918797, -0.000330994459, -0.0114246486, -0.00110909657, -0.00890837889}, {-0.00602979958, 0.00856064353, 0.00865786523, 0.0114907222, -0.00927942898}, {-0.00408576801, 0.0153378723, 0.00468059536, 0.00949554425, 0.00149533816}, {-0.00469108485, -0.00607632799, -0.0035181623, -0.0130115114, -0.0269661639}, {0.00609366596, 0.00744881993, -0.00757007254, -0.00497363601, -0.00698505156}}, {{-0.0169495307, -0.0153975021, -0.00574694248, 0.0059605157, 0.0212341193}, {0.0103097055, 0.00959780067, -0.00209696637, -0.00014226012, 0.00184348202}, {-0.0083510885, 0.00281049567, -0.00334960362, 0.00224432442, 0.000877392886}, {0.00919866562, 0.0113342134, -0.0036273764, 0.00436653942, 1.90432701e-008}, {0.015738219, 0.00374323665, 0.0119966818, -0.00639460515, -0.00054949784}}}, {{{5.96849313e-005, 0.00636158045, -0.000605284877, -0.011852202, 0.00402618572}, {0.000603010354, 0.0209920406, -0.00483767968, -0.00601049187, 0.00600506365}, {-0.00193460775, 0.00318385521, 0.0121602789, -0.00153344765, 0.00841875561}, {0.00291962526, -0.00168849959, -0.013286218, -0.0157641973, 0.00426293164}, {0.0140761323, 0.0066007711, 0.00718577672, 0.00408229604, -0.0082256645}}, {{0.0102117723, 0.0128054246, 0.00450843293, 0.00894604065, 0.00944258831}, {-0.00328349462, -0.0112963924, 0.0215030555, 0.0189386159, 0.00733341649}, {-0.0126732662, -0.0025174797, 0.0171158556, -0.00105271232, 0.0109798815}, {-0.0107044112, -0.00902188849, -0.00321103726, 0.0032610991, 0.00290622632}, {-0.00424889289, 0.0216464978, -0.00156360958, 0.00721376762, -0.00108888198}}, {{0.0115639111, -0.00340079167, -0.0141128665, 0.00250129867, -0.00398153486}, {-0.000769696373, -0.00496121589, 0.0148410331, 0.0191524792, 0.00664759381}, {0.00930549297, -0.0178469028, -0.0103430804, -0.00514348596, 0.000992993242}, {-0.00627686968, -0.00338551705, 0.000753939676, 0.0206401423, -0.000305044989}, {0.0137685183, -0.0139464354, 0.00979894958, -2.15399668e-005, -0.00915340893}}, {{0.00315163727, -0.000703308149, 0.00565414876, -0.002847814, 0.0099525433}, {-0.00263677118, 0.0155240279, 0.0104386155, 0.0120051168, 0.0116005838}, {-0.00966129266, 0.00825760514, 0.000878801744, -0.00314165768, -0.00957678445}, {-0.00635300623, -0.000310662785, 0.00205698027, 0.00573323807, 0.00779789034}, {0.00120502361, -0.00238911971, 0.00888176914, -0.00131470803, -0.00286817411}}, {{-0.0014509703, -0.00700400257, -0.0164120514, -0.00643008621, -0.0148860328}, {0.0177390482, -0.00834095944, -0.00493173487, 0.00146888348, 0.0173782948}, {0.00150842068, 0.00265190145, 0.00134923623, 0.0120563563, -0.00659859646}, {-0.00828188285, 0.0154857486, -0.0109320451, 0.0055122762, -0.00390491565}, {0.00303654466, 0.00873310771, 0.0195436422, -0.0131788524, -0.00474118022}}, {{0.00363729382, -0.0207391027, 0.00861572195, -0.00227203756, -0.0112364143}, {-0.0135304527, -0.0239716973, 0.00272045471, 0.00230536214, -0.00991244987}, {0.00400351873, 0.00968260225, 0.00234358292, -0.00316885882, 0.00879041478}, {-0.00489382353, -0.0261499807, -0.0136047052, 0.0127943233, -0.00156657083}, {0.018692106, -0.00771301379, 0.00623452291, 0.00213921652, -0.00415919116}}}, {{{0.0140576176, -0.00558834197, 0.00362851052, 0.00958993752, -0.00153160084}, {0.0188706443, 0.00240254262, -0.00263179722, -0.00707041938, -0.00465297326}, {-0.00574032636, -0.00544745475, 0.00486217299, -0.00209492934, 0.00884667039}, {-0.00475615589, -0.00567242224, -0.00109590148, -0.0196837671, -0.00668125553}, {-0.0155731477, -0.00980847701, -0.0129451528, -0.00501104444, 0.00290854322}}, {{0.013273797, 0.0188506413, 0.00133125356, 0.00259490032, -0.00301190838}, {0.0101612629, 0.00391324284, 0.00890198816, 0.00309731602, -0.00783776399}, {-0.0128216278, -0.00695197517, -0.0139744328, -0.000696735282, 0.00154494308}, {0.00563482055, -0.00102676929, -0.00491229212, 0.00328184385, 0.00431909738}, {-0.0135672176, -0.00975740422, 0.00666121719, 0.0045337854, -0.0134690469}}, {{0.0145751061, -0.00583987916, -0.025588017, -0.00444163987, -0.0114791216}, {-0.00933662616, 0.0124825193, 0.0102028111, -0.000351187657, 0.0123972958}, {0.00850028358, 0.00321761472, 0.000243733681, 0.0114674065, 0.011471807}, {0.00589067303, -0.00618154183, -0.00332418992, 0.0125064608, 0.00156309351}, {-0.0132793821, 0.012671411, -0.0136626028, -0.0183010008, -0.00895419531}}, {{0.0066220942, 0.00120168482, -0.00863578077, -0.00905486383, -0.0168337505}, {-0.00280342717, -0.00188981858, -0.00744999293, -0.0103638088, 0.00230533513}, {0.0137003837, -0.00795481075, 0.00102100265, -0.00387966936, -0.00978205726}, {0.00272372691, 0.0107250856, -0.0214587972, 0.00588971423, -0.00336257694}, {0.000443314028, -0.00725751836, -0.0135304537, 0.0112792896, 0.00246986607}}, {{-0.000815071573, -0.00745937647, -0.00524076493, 0.00264731166, -0.0158489253}, {0.00767933391, -0.0132841812, 0.00579026621, 0.00796426926, -0.0207601748}, {-0.00150433637, -0.000297263206, -0.0120549388, -0.0122626815, -0.00893053226}, {0.00473381625, 0.00833340175, 0.0122688999, -0.0130526936, -0.00834142882}, {0.0115404669, 0.00570797594, -0.0206038672, 0.0203397684, -0.00145105936}}, {{0.00832297932, 0.00180535333, -0.00482708914, -0.0271374285, 0.012519788}, {0.00189242221, -0.000394236675, 0.0134115219, 0.0138509683, 0.00494454708}, {-0.0012739402, -0.00145028403, 0.00648557907, 0.0140658543, -0.0175678264}, {-0.000689716253, -0.0047746785, -0.00687157596, -0.00878811814, -0.022295339}, {-0.00572209246, -0.00321064098, 0.0104919616, 0.00133065658, -0.00241962541}}}, {{{0.00731714303, -0.0126779545, 0.00323075685, -0.0217636675, 0.0155924549}, {-0.0118573252, -0.0183119532, 0.0089288177, -0.00711998576, 0.0075711417}, {-0.00778581062, 0.00110542902, 0.0162118338, -0.00390802464, -0.00029970106}, {0.0153371003, -0.00880816765, 0.0141971, -0.0112156654, -0.00647653081}, {0.00217207125, -0.00953979883, -0.00157938292, 0.0130366012, 0.00886310823}}, {{0.01875972, -0.00459273811, -0.00653474173, 0.00464672828, 0.00450381124}, {-0.0122710513, -0.0269093756, -0.000113705093, 0.004151823, -0.00462811021}, {0.00132982212, 0.00316833169, 0.000546713476, 0.00967577565, -0.0126956645}, {0.0173097383, 0.0151005555, -0.00404648157, 0.0060177655, -0.00467496179}, {0.00268186373, 0.000220256625, -0.00581017928, 0.0172493756, 0.0212390274}}, {{-0.00489304867, 0.00217707176, 0.0112838876, -0.0183528624, 0.00720946258}, {0.00700504938, 0.00642679958, 0.00837341603, -0.00195970456, -0.005753092}, {0.014482935, -0.00922298804, -0.00418296177, 0.0149776582, 0.0114344405}, {-0.00271854596, 0.000857093954, -0.000966641179, 0.00285211811, -0.0157306585}, {-0.00367500097, 0.00696479715, 0.00977286417, -0.00906325597, -0.0117047941}}, {{-0.00442260457, -0.00636948925, 0.00458395062, 0.000724673446, -0.0022864542}, {6.90227971e-005, 0.0113574248, 0.00193395629, 0.0140055744, 0.00134456798}, {-0.00987048727, 0.003440873, 0.000831376179, 0.00577428285, 0.0193804614}, {0.00491016032, -0.00447686389, -0.0190682076, 0.00511346292, 0.00991874095}, {0.0164926704, 0.00199707714, 0.00302293152, 0.0113029061, 0.0129297664}}, {{0.00769276032, -0.0090092821, -0.00355677702, -0.00331364106, 0.00601745257}, {-0.0141188093, 0.00990047585, -0.00371688278, -0.0045549199, -0.00266339094}, {-0.000199403745, 0.0200333241, 0.00775725348, -0.000287592149, 2.16233005e-008}, {0.00322348787, -0.00269067078, -0.0040240963, 0.00464258855, -0.00542169297}, {-0.00755572179, -0.0117112389, 0.014768905, 0.00931495801, -0.00220018462}}, {{-0.0138723385, 0.0108728483, -0.000632722105, 0.0167570524, -0.0110904919}, {-0.0151670761, 0.0104791168, -0.0058054789, 0.013538572, -0.0131512862}, {-0.00169875997, 0.00357670523, 0.00039513607, -0.00283281552, 0.0029348922}, {0.00202182936, -0.00677636778, -0.00187930581, -0.0176556166, 0.00905489828}, {-0.00860000215, 0.00412459951, 0.00383217353, 0.00239786296, -0.00143232779}}}, {{{0.00475728652, 0.0161522944, 0.0114238206, -0.0173595324, -0.00189717708}, {0.0106166694, 0.0291490518, 0.0184561275, 0.0189243518, 0.00985922478}, {-0.00140722515, 0.0104605053, 0.00229990319, 0.00419467688, -0.00459690858}, {0.00142072642, 0.0035367466, -0.0130859707, -0.00987253804, -0.00387970824}, {-0.00116819923, -0.00303269457, -0.00702779088, 0.00683908816, 0.00202212273}}, {{-0.0110464273, -0.0139903696, 0.0047621741, -0.000146540158, 0.0102858804}, {0.00794502907, 0.0193942245, 0.00971333031, -0.011765644, -0.00490167085}, {0.00168140209, 0.00716924388, -0.00580644934, 0.0171120297, -0.0121534159}, {-0.00799280219, -0.000739344629, 0.00927157421, 0.00458829151, 0.0070833629}, {0.0161307566, 0.0104128756, 0.0192613862, 0.000241572518, -0.00441749254}}, {{-0.00682647293, 0.0127745196, -0.0115919672, -0.00626233919, -0.00319649139}, {-0.0136353681, 0.00803663675, 0.00684284419, -0.0103378054, -0.0203902014}, {-0.00599758327, 0.0237462446, -0.00137326843, 0.0054602311, 0.0038602904}, {0.00445397757, -0.00847000256, -0.012144221, -0.00394333806, 0.00809867866}, {0.00271416828, -0.0176447853, 0.00172333035, -0.000912865857, 0.0147699211}}, {{0.00512182387, -0.021804044, -0.00420437567, 0.00528752478, 0.00491692033}, {-0.00293093151, 0.000351110939, 0.00162935443, 0.00276751257, -0.001615713}, {-0.0121372836, -0.0128065692, -0.0147617953, -0.00506533915, 0.00970184617}, {0.00555288279, 0.0121845724, 0.000476351415, 0.0147337876, 0.0125295045}, {-0.0101957712, 0.00878354348, 0.00421067048, 0.0232477859, -0.00968799368}}, {{0.00145864405, 0.0239855926, -0.0233806483, 0.0195658077, -0.000918009784}, {-0.0048785964, -0.0106703443, -0.0170388203, -0.0183476303, -0.00657843612}, {0.00679285312, 0.00866781827, 0.0196429361, -0.003550936, 0.0022034843}, {0.00184886123, 0.0171070509, 0.00263444125, -0.0124506038, -0.000815692067}, {-0.00842496194, -0.0106282337, -0.0052443305, -0.00573350862, 0.00244998746}}, {{0.00163552631, 0.000568710384, -0.00031403618, 0.00350505114, 0.00378016382}, {0.00213433197, 0.00381172262, -0.010795733, -0.00416167313, 0.0173538458}, {-0.0174944587, 0.0156505499, -0.013780552, 0.0109504526, -0.0161787067}, {-0.0187717024, 0.0061039445, -0.00214048079, -0.00157412712, -0.0074831536}, {-0.0266887806, 0.00169220776, 0.0029685765, 0.00659327023, 0.0208899081}}}, {{{0.0042102281, 0.00236315606, 0.00214848667, -0.0082903197, -0.0159210097}, {-0.0052701016, 0.00100853399, -0.0141731724, -0.00622480316, 0.00157547998}, {0.00425696047, 0.0162547342, -0.0173317418, -0.00285351416, -0.0092308782}, {-0.00611309195, 0.00809480343, 0.00113538804, -0.0150314057, 0.00511334976}, {0.00842263177, 0.011603564, 0.0202793293, 0.000172717031, -0.00919450074}}, {{0.00378598459, -0.0038490647, -0.00108955929, -0.00879622903, 0.00650004111}, {-0.0014057433, 0.0073741721, 0.00678064208, 0.00508697145, -0.00502557494}, {-0.0160372537, -0.00923976209, -0.00731897494, 0.0109040616, 0.00799584761}, {0.0167312138, 0.00241664727, 0.00538580865, 0.0059734378, -0.00571027538}, {-0.0163766965, 0.002254728, -0.00496479962, 0.0139213847, -0.00208901986}}, {{-0.0188780837, -0.00937287416, 0.00501009123, -0.00414344016, 0.0131468596}, {0.00561148953, -0.00385990599, -0.00287848501, 0.00717469631, -0.01074667}, {0.00496154279, -0.0106578227, -0.00297017279, 0.00356630748, 0.0099161407}, {0.000828259566, -0.00931086205, 0.024521634, 0.00137104979, -0.0148625476}, {0.00646325434, -0.00248756609, -0.00483117765, -0.000888421549, -0.024157431}}, {{-0.00325719756, -0.00648875674, 0.014917016, -0.00312757911, 0.00891781319}, {-0.0137574961, -0.00646154024, 0.00138134987, 0.00326632196, -0.00342202722}, {0.00248007732, 0.0048963502, -0.00706619397, 0.00272111245, 0.00877508428}, {-0.0131480005, -0.00562246749, -0.00461652223, -0.00520315673, -0.00124303298}, {0.0124077993, 0.00150877342, 0.0153711177, -0.00708340062, -0.00807105843}}, {{-0.000593207602, -0.0152779389, -0.0107733458, -0.01291929, 0.00309066218}, {0.00645824801, -0.0145530598, -0.0110727558, -0.00711873453, -0.014697534}, {0.00264110463, -0.00353145646, -0.0117383273, 0.0119742816, 0.000379318575}, {-0.0178746246, 0.0152361002, 0.000988926273, -0.00568769174, 0.0042009498}, {0.00368752214, 0.0141556393, 0.00620276062, -0.013138026, 0.00955144688}}, {{-0.0240730587, -0.00764288241, -8.85926426e-008, 0.0106146196, 0.00635250472}, {-0.00152228202, -0.00794280693, 0.00674455706, -0.00543830264, -0.00301250163}, {-0.0198237542, -0.00311141461, 0.00495997304, -0.00401879335, 0.00937249884}, {0.0183522366, -0.00183555426, -0.00273940386, 0.00932214502, 0.0108798165}, {-0.00804611668, 0.00622972799, 0.0114984838, -0.00455335435, -0.00470305607}}}, {{{0.00612323405, -0.00675719511, -0.00117908267, -0.0124763399, 0.00505475234}, {-0.0154526122, 0.00960702449, -0.0251403544, 0.00690054428, 0.000635315257}, {0.00188013748, -0.00490470789, -0.0221321713, 0.0151009439, -0.00271101715}, {0.0201381557, -0.0170345511, 0.00100469287, 0.00896892138, -0.00847166684}, {0.00537550123, -0.0163532142, -0.0134705668, 0.00418976368, -0.00904385466}}, {{-0.018436363, 0.0101297526, -0.00370767643, 0.00310707767, -0.00376386964}, {-5.99711602e-005, 0.00150585093, -0.00819455832, 0.0204180442, 0.00491000013}, {0.00586783746, -0.00941175595, 0.0253169462, -0.0165020712, 0.0179108456}, {-1.86246743e-005, -0.00725503592, -0.00518438919, 0.00779894833, 0.00946515147}, {0.0198760871, -0.00163229543, 0.00848560501, 0.00947708823, 0.000393369148}}, {{0.0030333586, -0.00873552542, -0.00591814378, 0.0107437437, 0.0139668342}, {-0.00119031419, -0.0125827799, 0.00198110496, 0.00570584089, 0.0133624105}, {0.00376168382, 0.0114183715, -0.0283406302, 0.00820774119, -0.0037082748}, {-0.0129298521, 0.0103929797, 0.0046374076, 0.00119107019, -0.00938037504}, {0.00479725655, 0.00440181978, 0.0160065815, 0.00997498631, 0.00565285608}}, {{0.0153299049, 0.0131380521, 0.0102795782, -0.00876828656, 0.00340688881}, {0.0128399516, 0.00178990897, 0.0142171495, 0.00695040496, -0.00835535862}, {-0.00752003305, 0.00787217077, 0.0112742558, 0.00780301215, 0.00206572749}, {-0.00432516867, 0.000337775302, 0.0154373189, -0.00594215887, -0.00939404499}, {0.00530605344, 0.012512343, -0.00406387029, 0.0150455907, 0.012660142}}, {{-0.0124733113, 0.0100067938, 0.00119347405, -0.000514167885, -0.000679295277}, {0.00491155311, 0.0115226032, -0.010547271, -0.0121903317, 0.00853365287}, {-0.000455755391, -0.00734438421, -0.00264444062, 0.0248929411, -0.00270631979}, {0.00631820457, 0.00205316162, -0.00624766853, -0.0219745953, 0.0080366889}, {0.00275716651, 0.0115210293, -0.0140311755, 0.00277807051, -0.00548107643}}, {{0.00631993357, 0.00370414415, -0.00975439325, -0.0184313115, -0.00362380175}, {0.00627441984, -0.00604346627, -0.00350686302, 0.0122064017, -0.00403105794}, {-0.00131110172, -0.0152861951, 0.00308218831, -0.0153018516, 0.0107188243}, {0.00900205597, 9.94361908e-005, 0.0173740629, -0.00798338465, -0.0220833775}, {-0.00490247831, -0.00740855839, -0.00281078764, -0.0144704152, -0.00401576515}}}, {{{-0.00936300028, 0.00189024571, -0.00650131423, 0.0147443498, 0.00354401534}, {0.00254214788, 0.00984691922, -0.0153969862, 0.0149481045, 0.0022083791}, {0.012619474, 0.00625362899, -0.00803168118, -0.00985074323, 0.00147781707}, {-0.0135177113, 0.0115474397, 0.0107705612, 0.0040148315, -0.0153860375}, {-0.0134970881, 0.004649824, 0.00976784248, 0.000268972857, 0.0080720624}}, {{-0.0132325692, 0.00808878243, 0.013135829, -0.0061519905, -0.00201563584}, {0.00557021284, -0.0126878843, 0.0143387411, 0.00346175767, 0.0104407109}, {-0.003496191, 0.00290124142, -0.00979839824, 0.00540746609, -0.000146913444}, {0.00705015147, -0.0031423145, 0.00124568352, 0.00163965393, 0.0127151096}, {-0.00648605451, -0.0109327463, 0.00708047068, 0.00322125293, -0.000911095296}}, {{-0.0165747106, 0.00271975552, -0.0026253555, -0.0156585965, 0.00122659525}, {0.000667846878, -0.000640996848, -0.00401167339, 0.0124030011, 0.0236922391}, {0.00647068769, -0.0175545178, 0.0137299784, -0.0107913725, -0.00390363717}, {-0.00753891282, 0.00617881771, 0.015519972, 0.004980342, 0.00641420716}, {0.0083168, 0.000241805261, -0.00681551825, -0.00121590856, 0.00504875416}}, {{0.00143826788, 0.012267204, -0.00155156851, 0.00641358597, -0.0177953225}, {0.00172868965, 0.0184225813, -0.00400093617, 0.000157988863, -0.0159953795}, {-0.0200832728, -0.00475953659, 0.00262149354, 0.00194587442, 0.00180696032}, {-0.00502680941, -0.0135593507, 0.0105850827, 0.00409053825, -0.0138445562}, {0.00488902209, 0.002346972, -0.0166194942, 0.00580528798, -0.00446672039}}, {{0.00444377773, -0.00592453545, 0.00458855974, 0.0028873703, -0.00575660495}, {0.00357871107, -0.00215699594, 0.00575510738, -0.00448348233, -0.0212292727}, {0.00762511371, 0.00868461933, -0.00726424437, -0.0112586971, -0.00493303034}, {0.00652931118, 0.000539492525, -0.00340422313, -0.00508073112, -0.000278474763}, {-0.00372117292, 0.0237401035, -0.0136210024, -0.00955259893, 0.00501850713}}, {{-0.0073003741, -0.00652462384, -0.00745496061, -0.0122183589, -0.00248345756}, {0.0159909669, 0.0104743242, -0.000247705873, -0.00488955202, 0.0100526018}, {0.0106517542, -0.0103585133, 0.00811006408, -0.0116904741, -0.00149564561}, {-0.013094333, -0.0052830996, -0.00966515485, -0.00312149571, 0.00538371596}, {0.0130299069, 0.0203126203, -0.00304286461, 0.00305489171, 0.0160551425}}}, {{{0.00261625345, 0.0170598142, 0.00211027637, -0.0121418769, -0.0039642388}, {-0.00574226677, -0.0131574646, -0.0124296853, -0.00784682762, 0.00475140242}, {-0.0167573225, 0.0247248951, 0.0145098818, 0.00149646413, 0.00977233797}, {0.0133013083, -0.0121278437, 0.000334408338, 0.0164471362, 0.00838216394}, {-0.0261068027, -0.0153045543, 0.00433488004, -0.0196588859, 0.00571277458}}, {{0.00195002102, -0.000765789649, -0.00428142352, -0.00189667125, 0.0121821864}, {-0.00255593425, 0.00142818573, -0.00628990214, -0.00866640452, -0.00504399603}, {0.00765593629, 0.00286893197, -0.00127215858, 0.00636126148, -0.00620276714}, {-0.00669281464, -0.00261232839, -0.0180021916, -0.007609786, -0.0222069509}, {0.0210490152, 0.0167639237, 0.0129503682, -0.000380670972, 0.0150700193}}, {{0.0166194867, 0.000929201313, -0.0142444214, 0.00472389208, 0.0280747488}, {0.00264143012, 0.00218543899, -0.00866925158, -0.0016827865, -0.00166593411}, {0.0233578216, -0.0109341359, 0.00458962983, -0.0120672109, 0.00138811523}, {-0.00737424335, -0.000766536745, -0.0105058998, 0.00741975754, 0.000955099415}, {-0.0115915174, 0.00849778857, -0.0130427163, -0.00771014206, -0.0176108237}}, {{-0.00161875482, 0.0100585958, -0.0355602168, 0.00155795331, 0.00096944283}, {0.00709505938, 0.00163716113, -0.00218201336, -0.00285243406, -0.00155976415}, {-0.0129259368, 0.00126710965, -0.0090517113, 0.0170555804, -0.000116961637}, {-0.000444457633, 0.0152104022, -0.0161727089, -0.00283044134, 0.00864679459}, {0.00762311323, -0.0102898572, 0.0229889341, -0.0255042817, 0.00903563108}}, {{0.00940570235, 0.00745713152, -0.00665205484, 0.0163115636, 0.00789370108}, {0.00216587866, -0.0079047652, 0.0247270074, -0.00220036414, 0.000745447818}, {0.00807236694, -0.00357947988, -0.00633133017, 0.0125573007, -0.00126935681}, {-0.00676873699, 0.00964718033, 0.0124504073, 0.00129393162, 0.00495349849}, {-0.00984878652, 0.00119556335, -0.00240995921, -0.001708986, -0.016263634}}, {{-0.0140398126, -0.00198374526, -0.0101251397, -0.0104685947, -0.00981496926}, {-0.00490433676, -0.00101757736, 0.00522712246, 0.0207521357, -0.00448202156}, {0.00426212605, 0.00728741474, 0.00726339174, -0.0063018878, 0.00589624792}, {-0.000343550171, -0.00303443987, 0.00890589599, 0.00957839284, -0.00580426212}, {0.00517358165, -0.00354564469, -0.00315660867, 0.0125035103, 0.00684963493}}}}};
 static s4_layer S4;
 static c5_layer C5={.mapData={{{{-0.00103369344, -0.00342483865, -0.01752037, -0.000544912298, -0.00308876648}, {0.0121493358, -0.000548670592, 0.00324576069, 0.00843197107, -0.00459216116}, {-0.0259530433, -0.00730419578, 0.0120938104, 0.0203814115, -0.00308487145}, {-1.97033205e-005, -0.0114330994, 0.00243676896, -0.00345341675, -0.0231351014}, {-0.00647176476, 0.00482045952, -0.00588388415, 0.0100322822, -0.00386537029}}, {{-0.0054290616, -0.0085331006, -0.0175279565, 0.0045014997, -0.00212411699}, {-0.00190526026, 0.00720656663, 0.00162939844, -0.0102637038, -0.00373837515}, {0.00186759257, -0.00712501118, 0.0059450902, -0.00767906662, 0.000543274975}, {-0.000287244242, -0.014457901, -0.00379137346, -0.00558755314, 0.00423435355}, {0.00348442094, 0.0090265004, 0.00743485847, 0.0153871169, 0.00460049696}}, {{-0.00134183711, 0.00411493797, -0.0133806728, 0.00133154728, -0.0171135981}, {0.00672570709, 0.0103220688, -0.00049872743, 0.00793249253, 0.00421366189}, {0.00518819457, -0.0132156834, 0.003022864, -0.00940971356, -0.002757143}, {0.00430489983, -0.0169569831, 0.00583391637, 0.000578711799, -0.00584309502}, {0.0104980879, -0.00187620614, 0.00392504875, 0.00323226606, 0.00770810526}}, {{-0.00391694298, -0.00311728823, -0.0185133237, 0.00582399871, -0.00349993934}, {0.000692416041, -0.00255181291, 0.00201681838, -0.0046578371, 0.0108804898}, {-0.00773646589, -0.00142523984, -0.00226450851, -0.0193944667, 0.0103948247}, {-0.0242087841, 0.00920955185, -0.00796030555, 0.0011838167, -0.00834235083}, {0.0103627406, -0.000478913513, -0.0072288611, 0.00378633826, 0.00832581613}}, {{-0.00662564486, 0.00353138801, 0.013553258, -0.0043084803, 0.00944140274}, {-0.00310821086, -0.00270511373, -0.0126702553, -0.00859746058, 0.0136175873}, {-0.0124002825, 0.00799237285, -0.00730532967, -0.00375105278, 0.00825351197}, {0.00222468469, 0.00351391919, 0.00480412971, 0.00344452867, 0.0134192798}, {0.0137797482, -0.000663830433, -0.0129237836, -0.00673756795, -0.00296041323}}, {{0.00282480288, -0.00334179983, -0.00892776717, -0.0088865133, 0.00181619544}, {-0.00980657246, 0.00541433087, 0.00264190347, 0.00771576073, 0.0184801966}, {-0.0118724415, -0.00758795254, 0.00606496353, -0.00247491268, 0.00328852376}, {0.00407483429, 0.0063639977, 0.0136993807, -0.00209220429, -0.00311947824}, {0.00118169154, -0.00210435316, 0.00661438424, 0.0109784612, -0.0113881482}}, {{0.000859392632, 0.00139181945, -0.00136386114, 0.0226022396, 0.00634850748}, {-0.00409427006, -0.00290075294, 0.00248858077, -0.0019231803, 0.00471179653}, {-0.0119600212, -0.00971593987, -0.0111229699, -0.00880260486, 0.00449288543}, {0.021606382, -0.0053558005, 0.0114479819, -5.91902754e-005, 0.00537345326}, {0.0043879943, 0.00682683568, 0.000523741881, -0.000477488589, 0.00775138708}}, {{0.0033687402, -0.00179433532, -0.00543940905, 0.00508366246, 0.00383847905}, {0.0047942372, 0.00368752214, 0.00219193124, -0.00519828452, -0.0160711054}, {-0.00300414604, 0.00389726297, 0.0127516976, -0.00178387191, 8.93792329e-009}, {0.0211325493, -0.00960397255, 0.0029540495, -0.00138724851, -0.0160406381}, {0.000302092027, 0.00219996343, 0.00996419415, -0.00261820457, -0.0104349786}}, {{-0.00236497284, -0.0134701002, -0.00747385807, -0.00640742294, 0.0123738032}, {-0.00296932668, -0.0238551982, -0.00733108632, 0.0164227318, -0.0124822473}, {0.0014036512, 0.0156289525, -0.00525247492, 0.00741973566, 0.0111973444}, {-0.00148807745, 0.00206966698, -0.021279674, 0.0149486931, -0.0158139616}, {-0.00480697164, 0.0127593866, -0.00332632917, -0.00167908904, 0.000882694323}}, {{-0.00304610725, 0.00494950032, -0.00794075523, -0.011294784, -0.00371382455}, {0.0074410676, -0.00643687742, 0.00704669161, 0.0141425906, 0.0052004382}, {-0.00654446939, 0.00346544827, -0.00334131531, 0.0207233336, -0.0146120666}, {0.00330157182, 0.00453186361, 0.0139692286, -0.00877067074, -0.00272996584}, {-0.0160980951, 0.00822428335, 0.00447203545, 0.00401989976, 0.0259925276}}, {{-0.00140343746, 0.0109112468, -0.0143171642, -0.00817207992, 0.00374476169}, {-0.00924098119, 0.00240973779, -0.00923662726, -0.00474373251, -0.0116958655}, {0.00127920811, 0.0102199633, -0.00785985496, 0.00859765988, -0.00732239569}, {0.0104433773, -0.00191216671, -0.00114987371, 0.0139283212, 0.00810045935}, {0.00143744808, -0.00172179262, -0.0008863525, 0.00446143653, 0.00841199048}}, {{-0.00492318766, -0.0219606068, 0.00445572566, 0.00377172371, -0.003023047}, {0.00782140996, 0.000919919694, -0.000952306669, -0.019250866, -0.0155142182}, {-0.0113500692, 0.00325355423, 0.0182191245, 0.00882793963, 0.0094413124}, {-0.0150375934, 0.0138581581, 0.00273361127, 0.00612216443, 0.0197798517}, {0.00455272943, -0.00259592803, -0.0047887438, -0.00796169508, 0.00371304573}}, {{0.0135324644, 0.0164754894, -0.00727515016, -7.61737974e-005, -0.00229059742}, {-0.0235506669, -0.00476294151, 0.00342047354, -0.0084663257, -0.0278088059}, {-0.00448197033, -0.0205920469, 0.00176510005, -0.00940688979, 0.00510968547}, {-0.000555133971, -0.00288300728, 0.0169877484, -0.0138721149, 0.0113542406}, {-0.0164088346, -0.00555904536, -0.0166641772, -0.00710595585, 0.00764905475}}, {{0.00497494219, -0.0164605845, -0.0234429222, 0.00320142601, 0.00842848048}, {-0.00844083447, -0.0112239728, -0.00287152478, 0.00880814157, 0.00474608317}, {0.0104943747, 0.00622599293, -0.00146234594, -0.009785234, -0.0110704172}, {-0.0125212278, 0.00687902141, -0.00345632457, 0.00033441413, -0.0202936567}, {0.000906491303, -0.00398962153, 0.0131649254, -0.000828262826, 0.00979606714}}, {{0.0126008801, 0.00388978096, -0.0102807814, -0.0202588867, 0.00748729846}, {-0.000572015822, 0.0114740478, -0.015731262, 0.0098807551, -0.0160135478}, {-0.0319111086, -0.0055093416, -0.00806064066, -0.017799899, 0.00544491969}, {0.00754961511, 0.00306427549, 0.0106220385, -0.00985932443, -0.00261737453}, {0.0139170131, 0.0017578674, -0.00413587969, 0.0171193462, -0.00949425157}}, {{0.0120471604, -0.00434433296, -0.00449817441, 0.00845283549, 0.00440133922}, {0.00849334802, 0.0156620629, -0.00559436437, 0.00379136996, 0.0111429654}, {-0.0128597626, 0.00271391682, -0.0141780274, -0.00872527063, -0.00204921002}, {-0.00916919764, -0.00216620136, 0.00319363177, -0.000386291387, 0.00904014707}, {-0.00694994861, 0.00755937258, -0.0138267437, 0.00744653819, 0.00164776179}}}, {{{0.0135809276, -0.00657260232, 0.00110935443, 0.0285460372, 0.000243941075}, {0.0191569701, 0.0108152805, -0.00468583917, 0.0199502893, 0.00349534699}, {-0.00919924583, 0.00329688773, 0.00425367756, 0.00146832643, 0.0111003499}, {-0.0113044055, 0.0112790838, -0.00111672259, 0.00633006683, 0.0054777828}, {0.00469286926, 0.00454173284, 0.0122931842, 5.99964915e-005, -0.000938784331}}, {{0.000176233385, 0.0136149395, -0.00756509928, -0.00359780504, -0.0106004691}, {-0.00573759153, -0.0112079745, -0.00932556018, -0.00650458876, -0.00652726833}, {-0.0181210488, -0.00687399367, 0.00122201664, 0.000926009729, 0.00178270892}, {-0.0125881406, -0.000232034916, -0.00215962203, 0.00497687189, 0.00361742615}, {-0.00292494847, -0.00343646272, 0.0113340048, 0.00028145418, 0.00571160065}}, {{-0.000918228645, 0.00244005397, -0.006566355, -0.0181258656, -0.0105787227}, {-0.00444587274, -0.0034659896, -0.0200304464, -0.00277812965, 0.00263167056}, {0.0166133828, -0.0201606546, -0.0211853608, -0.0197808668, -0.0170573238}, {-0.000838393986, -0.0134346895, 0.000281078188, -0.00601388235, 0.00139068416}, {0.00392345153, 0.000819875335, -0.00150401006, -0.011156356, -0.00144504861}}, {{0.00960072968, -0.00994179305, -0.00687512057, -0.00976814143, -0.0187621098}, {-0.00678642094, -0.0172766931, -0.00214253739, -0.00405419711, 0.00872026011}, {0.00441482803, -0.00186787674, 0.00306374487, -0.019798452, -0.00596133061}, {-0.00165880949, 0.00228404556, 0.0100199999, 0.00277699623, 0.00211613788}, {-0.00202023494, -0.0126541769, -0.0201981496, 0.00462374603, 0.00311342417}}, {{0.0102672856, -0.01162221, -0.00332687004, -0.0057393522, -0.00146724947}, {-0.0110442853, -0.00578506757, 0.0154652847, 0.00450233184, -0.000836895371}, {0.00518565066, 0.00324542844, 0.00203668233, 0.0169159006, -0.0152861113}, {0.0106761325, 0.00502435165, 0.00505027222, 0.00634124875, -0.010242817}, {-0.00956717879, -0.0037701861, -0.00233759359, -0.00606792234, -0.00243337057}}, {{-0.0179838166, 0.013690603, 0.00612126524, 0.0037432611, 0.00383532699}, {0.00896515045, 0.00134795951, 0.0075581735, 0.00432231789, 0.00485263579}, {-0.00376144052, 0.00368396961, 0.0163321029, -0.00382342772, -0.00699919509}, {0.00978636555, -0.00663134502, -0.0104795536, -0.00473563559, 0.00184615375}, {0.00366934296, 0.00801859982, -0.00377492397, 0.0165532045, -0.0159630273}}, {{-0.0118835466, -0.00811294746, 0.0129525848, 0.000995919225, 0.0114179067}, {0.0127128055, -0.0046760859, -0.00490096537, -0.00507832505, -0.0042832871}, {-0.00503207976, 0.00198839302, 0.00973025523, -0.000377501157, -0.00594686531}, {0.0137932422, -0.0052821706, -0.00161272497, -0.0141126951, -0.00693421252}, {0.0156095913, 0.0139988661, 0.00310661318, 0.00580929173, 0.00577851851}}, {{0.0188392457, -9.31617324e-005, 0.00318310666, 0.00978924986, -0.0017724405}, {-0.00744397985, -0.00127777702, 0.00269408268, 0.00677007996, -0.00788252801}, {0.0029108217, 0.00464394502, 0.00203094841, -0.0139866183, -0.0110688657}, {-0.0024467106, -0.00232620863, -0.00204799534, 0.0142427627, -0.011988367}, {-0.0106423581, 0.00168284739, 0.0156284198, 0.00705489051, 0.00158683758}}, {{-0.00810830947, -0.00048217838, 0.0119341221, 0.0081971474, -0.0059725265}, {-0.00985107012, -0.0065190508, 0.00478561735, -0.00414251583, -0.0121052964}, {-0.00326051749, -0.0126042319, 0.00347398175, -0.00749974651, 0.00894678291}, {0.00389039353, 0.0142157162, -0.00681703351, 0.0246272124, -0.00102869619}, {0.00775677012, 0.00281979446, 0.00433429517, -0.000383147941, 0.0125405267}}, {{-0.00697123585, -0.0173984524, -0.00435991026, 0.00328827044, 0.00858550426}, {-0.00206160522, 0.0196703915, -0.0149518391, -0.00471865432, 0.00501332851}, {-0.00279933633, -0.00483105984, 0.00283108093, -0.00318773254, -0.0122965081}, {0.00597649347, 0.000226172895, -0.000825302734, -0.00918461755, 0.00461061765}, {-0.000925693137, -0.00573182944, -0.00520157302, -0.00518833287, 0.00241736602}}, {{0.0126964571, -0.0134870186, -0.000255159975, 0.00740861846, 0.00747579895}, {0.000211700652, -0.00195745216, 0.0035551847, 0.00505366828, -0.00646154024}, {0.0125463847, 0.00719115417, 0.0059492751, 0.0100953029, -0.0153120831}, {0.015263102, 0.00785888266, 0.000782440649, -0.0010061888, 0.00945929717}, {-0.00665020011, 0.0125819203, -0.00830053072, -0.00147820171, 0.00133603264}}, {{-0.00732292421, 0.00344729796, -0.0120677687, -0.00431056134, -0.00769598503}, {0.0134440241, 0.0158682633, -0.00555082038, 0.00129360543, -0.0113142785}, {0.00779035315, -0.00958785508, -0.000171621679, 0.0113801081, 0.0131638497}, {0.00802962296, -0.000961155747, -0.0164606944, 0.00600491557, -0.00897184666}, {-0.00066416699, 1.35202143e-008, 0.0138888014, 0.00121640798, -0.00541742751}}, {{-0.00281424727, 0.0135544585, -0.0120617282, 0.00468067639, -0.00278158649}, {0.000130775137, 0.00952556636, -0.00462306105, -0.00735258823, -0.00815477129}, {-0.00759961037, -0.0168830547, 0.00611798884, 0.00434904685, -0.0144596295}, {-0.0117529361, -0.0120167537, 0.00330367335, 0.0034007309, -0.0158339385}, {0.0122985477, 0.00686581712, 0.014261282, -0.0250048097, -0.0118160462}}, {{0.00361131085, -0.00370939868, -0.00699035544, 0.00262859208, 0.00315294694}, {-0.00205139816, -0.0106844734, 0.0160573013, -0.0124149779, -0.0133682871}, {0.0115787918, 0.00494240224, -0.00706933672, -0.00187627878, 0.00971233007}, {0.00556301698, -0.000172480854, -0.00296172942, -0.0179187655, 0.0138097908}, {0.00611207448, 0.0184137058, 0.00216476386, 0.00322682713, 0.0075861793}}, {{-0.00885911006, 0.000903492677, -0.00349860452, -0.00350863929, 0.00507466914}, {-0.0083480794, 0.0137707284, -0.0116442433, -0.00224213419, -0.00680599408}, {0.00886514131, -0.00202123635, -0.0187127888, -0.00468849065, 0.00713033928}, {0.011949379, -0.00453812489, -2.91391061e-005, -0.00899288151, 0.0125155281}, {0.000980155775, 0.0186286122, 0.00792788342, -0.00343586598, -0.0117690936}}, {{-0.000908968213, -0.0130242743, -0.000818240165, 0.000923506566, -0.00892480928}, {-0.0120142177, 0.00136074028, 0.0127891907, 0.0022370487, -0.00510011474}, {0.00128051417, 0.00180874916, 0.00554793002, 0.0102773802, -0.00479432056}, {0.0002700763, 0.00555643858, 0.00205357978, -0.0152501157, 0.0032989555}, {-0.00351153477, 0.00354064582, -0.00915764645, -0.0058271559, -0.0142609691}}}, {{{-0.0107567515, 0.00439363718, 0.00551007222, -0.0172609631, 0.00677341362}, {0.00202812068, 0.00155750476, -0.015452493, 0.00106443535, 0.0211985372}, {-0.00500536291, -0.0164881684, -0.00197745441, 0.000799578906, -0.000855849532}, {-0.00228415872, -0.00157120067, 0.0205514207, 0.0095114829, -0.0121029522}, {0.0135531956, -0.0178808179, -0.0024202026, -0.0162938982, 0.00175971328}}, {{0.00853613857, -0.0204869267, 0.00122853555, 0.00281926733, 0.00391601771}, {-0.00390424021, -0.00714743463, -0.0196878538, 0.000220475209, -0.0119181639}, {-0.0189055428, -0.0103811165, -0.00117009121, -0.00406634435, -0.0115733044}, {0.000844998809, 0.00490793493, -0.00488193752, 0.00762487343, 0.00773452967}, {0.00235922006, 0.0211495925, 0.00136364903, 0.00247736182, 0.00240807701}}, {{-0.00765702222, -0.00610743416, 0.0182995889, 0.000214521089, 0.00766335335}, {0.0129939374, -0.0133156953, -0.0196860377, 0.00834852085, -0.00381678902}, {-0.0120563386, -0.0014231042, -0.00742710987, 0.00595886307, 0.000957694137}, {0.020621445, -0.0203175191, -0.00117099984, 0.00542954262, 0.0102490792}, {-0.014017527, 0.00357079762, 0.00894171745, -0.00609290088, -0.0120454775}}, {{-0.00228837039, 0.00521428371, 0.00448068604, -0.010817687, -0.00289762113}, {0.0126431482, -0.00330233481, 0.00577671686, -0.00249851588, -0.0218999647}, {0.0013054536, -0.000316562451, -0.0074976217, 0.00707123056, 0.0193126779}, {-0.0245102439, -0.0107939998, -0.0025499817, -0.0129986927, 0.00766644347}, {-8.19515844e-005, -0.00203318498, 0.00352902105, 0.0173687395, -0.0132033182}}, {{0.0064748358, -0.00123967289, -0.023423478, 0.00163160125, 0.00632942095}, {0.00598407164, -0.00451800739, -0.00140088156, 0.00931612682, 0.00571441697}, {0.00760315964, 0.00292299991, -0.0037812579, -0.000211258943, 0.00295551866}, {-0.00317884888, 0.00457947655, -0.00387970801, 0.00347694894, -0.0198379457}, {0.0167918727, 0.00328188133, 0.0045256014, -0.00523408549, -0.0141367093}}, {{0.000774642802, -0.0251636412, -0.00735591259, -0.0188697949, 0.00692388462}, {0.00588205177, 0.0150773507, -0.00891685952, 0.00618251832, 0.0175604858}, {0.0101794638, 0.0160719026, -0.00163692317, 0.00305517926, 0.000751582556}, {-0.00837016758, 0.00061659544, 0.00282154279, 0.00946038403, -0.00341063878}, {-0.00812886003, -0.0139926085, -0.0158175677, -8.557603e-005, -0.0036651534}}, {{0.00182020967, -0.0029987751, 0.0033695302, -0.0138599128, -0.0112564042}, {0.0120262653, -0.00590596953, -0.00215693354, 0.0137035828, 0.0167684369}, {-0.00939658191, -0.00131110172, 0.012533796, 0.000478498405, -0.00977389421}, {0.0074712229, -0.0127123846, 0.025519345, 0.0144028878, -0.00517189363}, {-0.00502411555, -0.0108555928, -0.00270547043, -0.0290336758, 0.0118411873}}, {{0.00184481347, 0.00628003199, -0.0176654849, 0.00192762609, -0.0191261042}, {-0.00446630456, 0.0113637121, -0.0182805564, -0.00265964377, -0.00927030295}, {0.0138740391, 0.0102300849, -0.000217789435, -0.00460414868, -0.0031659815}, {-0.0125868339, -0.011276965, 0.0106194755, 0.00717372727, 0.00241465052}, {0.00921121426, 0.0155127915, 0.00797823351, -0.0083236564, -0.0119784102}}, {{-0.00450355932, 0.0147673795, 0.00826130249, -0.0153109618, -0.00396140525}, {0.0002440221, 0.00981207285, -0.00339128403, -0.00487979222, 0.00254129758}, {0.0031208524, 0.0261925198, 0.0146154771, 0.00406770641, 0.00235194294}, {0.00548709324, 0.0134198358, 0.00289803115, 0.0158259589, 0.00195621024}, {0.0232548155, -0.00486862147, 0.00108389941, -0.00909711048, -0.0125478646}}, {{-0.0154846944, 0.0103960987, -0.0137109896, 0.00329024391, 0.0225951858}, {0.00494044414, 0.00656239595, -0.00451056706, 0.016810976, -0.00459846109}, {0.000334807759, 0.00788926519, 0.0155753875, -0.00118846702, 0.00854523294}, {0.0154593093, -0.00205487735, -0.0134480251, -0.0137885036, -0.00109447457}, {-0.00400165888, -0.00154229696, -0.00149728695, 0.0148489112, -0.00120761455}}, {{0.000884251669, -0.00286001503, -0.00930909254, -0.00288192625, 0.0035331205}, {0.00663714018, 0.00714748539, 0.000558365602, -0.0031281542, -0.00319078052}, {0.0196627639, -0.00900387671, -0.00577128585, -0.00184731791, -0.0010398638}, {0.00076139631, 0.0103634037, 0.0133782057, 0.00658506714, 0.00823982153}, {-0.00817257911, -0.00685231853, -0.0115140807, 0.00528514292, -0.00312758051}}, {{0.00192090403, -0.00178022322, 0.0184445344, 0.000546562253, 0.00801869482}, {-0.00266718911, 0.0163500085, 0.00982715283, -0.00316882296, 0.00463772612}, {-0.00884317607, 0.00457947468, 0.0118021267, -0.00964658242, -0.000331973919}, {-0.00855211448, -0.0124874478, 0.0176399313, -0.0129499529, 0.00742971571}, {0.00355733512, -0.00637372211, -0.00228050048, 0.00452655088, 0.00265168888}}, {{-0.00725042773, -0.000967641769, -0.0195697211, -0.00135932537, 0.00456548715}, {-0.00936316699, -0.00785164721, -0.0207419861, -0.00213616807, -0.00109296292}, {-0.0116552711, -0.0104946932, -0.0156687461, 0.0111040566, -0.00364657375}, {0.00340818684, -0.00937491376, -0.00925016403, -0.0109743048, 0.0122885024}, {-0.0193631146, 0.00433517154, -0.0118665462, -0.0166172124, 0.0283392817}}, {{0.0176827088, -0.00860773586, 0.0203750189, -0.0100684781, 0.00244670967}, {0.0215919837, 0.0232330691, 0.000371939474, 0.00932682306, 0.00013635635}, {0.00739024766, 0.00223111967, 0.00219164579, 0.00291184918, 0.00611679396}, {-0.00267586787, 0.0112456102, -0.0171133224, -0.00105078169, -0.00822790619}, {-0.00570301525, 0.00387041573, -0.0161798801, -0.000211367369, -0.00275382609}}, {{-0.00130408979, -0.00435934961, -0.00319275097, -0.00176188827, 0.0065375017}, {-0.0127852028, 0.000935939548, -0.0124569023, -0.00473727006, 0.0149447294}, {-0.00497059152, -0.00851856358, -0.0139841931, -0.00296090078, 0.0031261195}, {0.00611412153, 0.0106047923, 0.00231793197, -0.00329053449, 0.00940493308}, {0.000904213055, -0.0109528396, -0.003055081, -0.0163714774, 0.00746766012}}, {{-0.00286735315, -0.00959729869, 0.0040335129, 0.00524593238, 0.000964930223}, {-0.00753495097, 0.000314778503, 0.00450146617, 0.00248535047, 0.00291965296}, {-0.00489288568, 0.00255628489, -0.0062767351, 0.0131649626, -0.00811843108}, {0.00856802799, 0.00307062943, 0.00531046931, 0.00336720422, 0.00197961112}, {-0.00709813554, 0.0152431, 0.00320092845, -0.0110133206, -0.00579109788}}}, {{{-0.0096201878, -0.00427536992, -0.00236118329, 0.0184529759, -0.0132512841}, {-0.0164272282, 0.00146122719, 0.00426198728, -0.009050644, 0.00195561373}, {0.0020290087, 0.000152731009, -0.0201600716, -0.00907615479, 0.0108352536}, {-0.00196478562, -0.00244671223, 0.00793800876, 0.0011075713, -0.00119850144}, {-0.017191723, 0.00576857105, 0.00172736007, -0.0160407498, 0.0120051792}}, {{-0.00168577523, 0.0162122957, 0.00244549126, -0.0235357471, -0.0132420417}, {-0.00351170544, 0.0101178382, -0.00354851759, 0.00201341975, -0.000414755894}, {-0.00805297401, -0.0173470937, 0.019208055, -0.00744405715, -0.00688741216}, {-0.00210039248, 0.0012505108, 0.00406519137, -0.00688634533, 0.00647158455}, {0.0030636806, 0.00153918436, 0.00878811628, 0.00385688129, 0.00451036356}}, {{-0.00345082744, -0.00524891401, -0.00217329781, -0.00671373121, 0.0226027761}, {0.0370042436, -0.00656767143, -0.00985984504, 0.00141740334, 0.000406023464}, {0.00842279941, 0.0022912873, -0.00416039117, 0.00203593471, 0.0175637268}, {-0.00509483553, 0.0163590275, 0.00277715665, 0.0130605176, 0.00509882905}, {0.00342474016, -0.00074798055, 0.00420570653, -0.00118540705, 0.00508028409}}, {{-0.0156120118, 0.0181211755, 0.0122625092, 0.00829678494, 0.0161983017}, {0.0141509119, -0.00430240715, 0.0091930991, 0.017664291, -0.00850354135}, {-0.00298803672, -0.00228518061, 0.00447206385, 0.00879102107, 0.0218964759}, {-0.00032029688, -0.000642972649, 0.0022143072, -0.0179585814, -0.0130811436}, {-0.0141520984, 0.0044768583, -0.00564226136, -0.0114904353, -0.00812873989}}, {{-0.00436737621, -0.00445143785, -0.00661600474, -0.00285773841, 0.00652322499}, {-0.00103088189, -0.0241695065, 0.00849594083, 0.00575032597, 0.00160388253}, {0.00701399706, 0.0260879193, -0.00162185112, -0.015894983, 0.00888567325}, {0.0064563523, 0.00193207362, -0.00279267575, 0.00241023162, 0.000851197052}, {0.00261016469, 0.0175838638, -0.00436233822, -1.71860801e-008, 0.0186614152}}, {{0.00453387294, -0.0184987038, -0.00153503136, 0.00675655529, 0.00763529073}, {0.00274788192, -0.00644922769, -0.000460366777, 0.00329230819, -0.0116374046}, {0.00411068927, 0.00588671351, -0.0174674653, 0.00551630743, 0.0153478896}, {0.00589623908, -0.0124356821, -0.00800860021, 0.0033934908, -0.00313838036}, {0.0111238752, -0.0231221318, 0.00231370796, -0.0112088751, 0.0150818145}}, {{0.00453962991, 0.00485770637, 0.00639803708, -0.00693657342, 0.00472168624}, {0.00723387394, 0.00542443898, 0.0034260992, -0.0101818088, 0.014507303}, {0.00304521527, 0.00249250187, 0.00548463175, 0.00210703863, 0.00190000061}, {-0.0177824143, 0.011836187, 0.00525834691, 0.0104031498, 0.00645293342}, {0.0138707804, -0.0210022256, 0.0136085991, 0.00873736851, 0.00312807737}}, {{-0.00160006061, -0.00368046784, 0.0110110389, -0.013215214, -0.00326654222}, {0.00547611667, 0.0115701724, -0.00127345545, 0.0129221091, -0.0123494202}, {-0.0119132297, 0.0173910875, -0.0165338181, 0.00823141728, -0.012109898}, {0.000200573602, -0.0133167719, 0.00263565965, -0.00218441966, 0.00394990016}, {0.00429466553, -0.00509410584, -0.00512195099, -0.0104666473, -0.000972508278}}, {{0.00348815159, -0.00485790148, -0.00386209972, 0.00839592237, -0.0171696469}, {-0.00643357355, 0.00120424223, -0.00669452129, -0.00188711926, -0.00568335829}, {0.0092277946, -0.00042791976, -0.00119056785, 0.00994251389, 0.00370845804}, {-0.004421019, 0.000821431284, 0.0205175299, -0.00504942052, -0.00521651004}, {0.0112449918, -0.0023934471, 0.0098488247, -0.00605486333, 0.0070715528}}, {{0.00346001098, 0.0113876862, 0.00551141752, 0.00399753405, -0.0105250273}, {-0.00975827407, 0.000931444112, -0.0176507588, -0.00896517001, -0.00240263855}, {-0.0130787631, 0.00753653515, -0.0194716137, 0.0141326692, -0.000758176728}, {0.00739172753, 0.00612190226, 0.00154119963, 0.00471878098, 0.0116940681}, {0.00714282831, 0.00159515336, 0.00569609087, -0.00156847329, 0.00657122722}}, {{0.00329052634, -0.00243049511, -0.00741669675, -0.0104245134, 0.0213241726}, {-0.0145232342, -0.000894409488, -0.0292258039, -0.0206029154, -0.00872442033}, {0.00514947763, 0.00679140445, 0.0123269456, -0.00478752516, -0.00875256676}, {-0.000667846063, -0.00652392395, 0.0146414787, -0.00794560555, -0.00604986958}, {-0.00515547441, 0.00326324673, -0.00264785532, -0.000480552466, 0.0160412211}}, {{-0.0124276308, -0.000800678041, -0.00825207774, 0.000853310921, 0.00440647639}, {-0.0250759069, -0.0167821273, -0.0131597407, 0.0058886609, 0.017534513}, {-6.20444844e-005, -0.000421521225, -0.00512723438, 0.00685822638, 0.000521373644}, {0.00616846746, 0.00928963535, 0.0145993214, 0.0079512829, -0.000789805606}, {0.0083140377, 0.00183850958, -0.00875728671, 0.013438575, 0.00894832332}}, {{0.0165701024, -0.00474630063, -0.00132958812, 0.010597067, 0.00209968304}, {0.00254400936, -0.0138792591, 0.00130745058, -0.017147731, 0.000461271295}, {-0.00453903759, 0.00606938172, -0.015156622, -0.0068522864, -0.00531461835}, {-0.00574984681, -0.000659063808, 0.0150924306, 0.00529466476, -0.0172812995}, {-0.0050484594, 0.00795605034, -0.00767256366, 0.0056079179, -0.000527975848}}, {{-0.015581876, 0.0165979713, 0.00298383948, -0.00320931617, 0.00298276893}, {0.0101001691, -0.005637886, -0.00305519719, -0.0181652922, -0.00523662148}, {0.00138849218, -0.00335544045, 0.00297353859, -0.0142778736, -0.00175406341}, {0.00640144711, 0.00457512308, 0.00879221503, 0.00854838081, -2.15222542e-008}, {-0.00345145212, 0.0179222431, -0.00978312176, 0.00383261126, 0.00137754343}}, {{0.00754577061, -0.01572375, 0.00777439727, 0.000617312326, 0.0169108231}, {-0.00537481625, 0.000764811062, 0.00813282188, -0.0101563632, -0.00054747815}, {-0.0178575348, 0.00672416762, 0.0131783411, 0.0009895392, -0.00978381094}, {0.00845807977, -0.00443781773, -0.00682443054, 0.00680921413, 0.00261591049}, {0.0129252803, -0.0063800388, 0.0169585831, 0.00430075778, 0.0065792622}}, {{0.0125063239, -0.0115182055, 0.00935675018, 0.00224531977, 0.00200552447}, {-0.00556789059, -0.0181889143, -0.00420095911, -0.00427302532, -0.00479073776}, {0.0005159016, -0.00889651664, -0.00298618176, -0.0161494575, 0.000842146168}, {-0.00824651122, -0.00280501903, 0.00845339894, -0.00189727708, -0.00867854245}, {0.0244900789, 0.0194636323, -0.00403625285, -0.0225387476, -0.00570236333}}}, {{{0.00308979931, 0.00936396327, -0.00431861402, 0.00384383439, -0.0175586957}, {0.0103502674, -0.00409604097, 0.00367782451, -0.0197324492, -0.0109102177}, {-0.00494404696, 0.0038295025, -0.00296297949, -0.00181433908, -0.00401455676}, {-0.0026883448, 0.0128687518, -0.0103025613, 0.0139914257, -0.00255314517}, {0.000386183005, 0.0183531642, -0.00167627796, -0.022102749, 0.00496545527}}, {{-0.0132143013, 0.00814373698, -0.00911020674, -0.00444156397, -0.00493922457}, {-0.0194814391, -0.00514219468, -0.0153654935, -0.00819621049, 0.0035834189}, {-0.00364510273, -0.00136588188, 0.0204600673, 0.0110719344, 0.0104312478}, {-0.000254946994, -0.000221307826, 0.009108169, -0.0023534114, 0.00613245787}, {-0.0195983071, 0.000924229622, 0.00556372898, 0.000131741457, -0.00530361664}}, {{-0.0114178583, -0.0102087418, -0.00120004138, -0.00170360832, 0.0164355095}, {-0.00580686377, -0.00932633132, -0.0160423573, -0.00765839312, 0.00391298579}, {0.00259787892, -0.0262508001, 0.0122625576, 0.00336466148, 0.0108857406}, {-0.00467920909, 0.00182512088, 0.00944722723, -0.000800021458, 0.00443771947}, {0.00721985474, -0.01547579, -0.00412654784, -0.00557369506, -0.00485955179}}, {{-0.00124730682, -0.011614481, -0.00227694726, 0.000815816224, -0.00779258367}, {-0.00456563337, 0.0154740158, 0.00650714152, 0.00618223753, -0.0074294759}, {-0.00746899564, 0.00754850963, -0.0148956385, 0.00105088414, -0.00346559426}, {0.00971017312, -0.012284779, -0.012677609, -0.00879360083, -0.010382154}, {-0.00183812005, 0.0128059303, 0.00819872413, -0.00233942666, 0.0086571807}}, {{-0.0107931178, -0.007882284, 0.00246537616, -0.00323443161, -0.00614752527}, {0.00874695089, 0.00084855489, 0.00980818272, -0.00651895627, 0.000712866138}, {0.00147237559, 0.00431211805, -0.0121194031, -0.0052630417, 0.00516667776}, {-0.00784739945, 0.0192810558, -0.00375860767, -0.0115073295, -0.00671575963}, {-0.0157929696, -0.00318113202, -0.0269404966, -0.00921534188, 0.00143809395}}, {{0.0172180645, 0.0127297807, -0.00400966639, 0.00111426075, 0.00539305387}, {0.00147586246, 0.00707203755, 0.00683160778, 0.0139362263, -0.00215500523}, {-0.00908860937, 0.00564059755, -0.00382033805, 0.00480628014, -0.00408127066}, {-0.00285803806, -0.00876907539, 0.00967676099, -0.0103972694, -0.010616676}, {-0.00515880249, -0.00843196642, -0.00617191894, 0.0163977128, 0.00144423521}}, {{-0.00534066372, -0.00404592929, -0.010377666, 0.00955989491, 0.00252149184}, {0.00587372528, 0.00391151477, 0.0231733229, 0.01408049, 0.00124831276}, {-0.024143843, 0.00295773707, 0.0112020057, -0.0102250036, 0.00265689963}, {0.00986539666, -0.0123500451, -0.00741601083, -0.00670588622, -0.00457159569}, {0.00465968298, 0.00148026482, -0.003224327, -0.00101503008, 0.000819269859}}, {{-0.0169882979, 0.0263260398, 0.00400895672, 0.00648557907, -0.0119537991}, {-0.00485948659, -0.00145494996, 0.00497314008, -0.0010542128, 0.0244993996}, {5.80201595e-005, -0.00672236551, 0.015927963, 0.00178277865, 0.012826018}, {0.0108738551, -0.00697629014, -0.0135618448, 0.0107835922, 0.00155244628}, {0.0053962837, -0.00474047381, -0.0071692788, -0.0153204072, 0.00193245756}}, {{-0.00461216178, -0.00958185457, 0.00657609198, -0.00277105696, -0.00274315639}, {-0.00446837954, -0.0057939277, -0.00784446485, 0.00325204362, 0.0115013672}, {-0.00938875321, -0.012057283, -0.000710569846, 4.13579728e-005, 0.00673282938}, {-0.0033336638, 0.00163763133, 0.00953656621, -0.00554007199, -0.00350398268}, {-0.0149412155, -0.00740976399, 0.00118591776, 0.00249275309, -3.27402013e-005}}, {{0.000858256943, -0.000654576346, -0.00208916096, 0.00612640055, 0.00433396967}, {-0.0086342888, 6.16376419e-005, 0.00201055058, 0.00158186804, 0.00664781127}, {0.0145906983, -0.00124911196, 0.00974242296, 0.0139647573, -0.0115182912}, {0.0188332926, 0.00252444018, 0.0173427556, 0.0091526797, -0.00747609464}, {-0.0091505181, 0.0052712122, 0.0110243903, -0.00998828746, -0.0125836246}}, {{0.00513397716, 8.14669547e-005, -0.00480301166, -0.00382084446, -0.011167272}, {-0.0121363942, -9.06170171e-005, -0.00899288151, -0.00399900321, 2.67510138e-008}, {-0.00378011423, 0.00744653819, -0.0046020532, 0.00841355976, 0.00907880254}, {0.0109476401, 0.0110176727, 0.0048577874, -0.0216904823, 0.00119919586}, {-0.016359726, 0.00227537286, -0.00799031928, -0.00142610527, -0.013236382}}, {{-0.00576093793, 0.0179381408, -0.0080992775, 0.0115334755, 0.000815500214}, {0.000961387937, -0.00629940769, 0.024520129, -0.0185229015, -0.00650327606}, {0.000825486495, 0.00291328807, 0.00599844614, -0.0193248149, 0.00369218108}, {-0.0033994827, -0.0157226324, 0.0152689517, 0.00969534274, -0.00320714293}, {-0.00992942695, -0.00320470659, 0.00389369298, -0.00128493586, -0.00062445068}}, {{-0.00318736676, -0.0116508733, -0.00850938819, 0.0154108042, 0.00198993855}, {-0.0265371352, 0.00270522712, -0.00680303015, 0.00828639418, 0.00485424744}, {-0.00256825215, -0.013533582, -0.00502283964, -0.00248337956, 0.0121711669}, {0.0125810578, -0.00611219555, 0.00726158731, -0.00740823383, -0.00559639418}, {-0.00791634992, -0.0102296919, -0.00423482899, 0.012687074, 0.00285719451}}, {{0.00663926126, 0.00791836157, -0.0031280939, 0.00476122834, 0.0135951098}, {0.0112440418, -0.00244841445, -0.00652971724, 0.00245856424, -0.0150059946}, {0.00236790115, -0.0248394646, 0.0123201981, -0.0108291954, -0.00928841531}, {0.0142589593, -0.00225655898, -0.00171320967, -0.0106812287, -0.000494469074}, {0.0143306842, -0.0229872074, 0.00331875961, -0.00035517299, 0.0126366764}}, {{0.0145879593, -0.00389557565, -0.00367237628, 0.0128553603, 0.0081821261}, {0.0119186305, -0.0173573233, 0.0100560775, -9.55678406e-005, 0.00429553865}, {0.0190705862, 0.00351824262, -0.00207386538, 0.00229780213, 0.0105364798}, {-0.00508223241, -0.0020763725, -0.00669636857, 0.00434217788, -0.00929910503}, {-0.00738679664, 0.0216993317, 0.00205022586, 0.0258324593, -0.000811160018}}, {{-0.000740097195, -0.0018020008, -0.00256658718, 0.00999266189, -0.0157490205}, {-0.00361927529, 0.00931642391, -0.0103650773, 0.00597104756, 0.0105467495}, {0.00859035179, 0.00267016608, -0.00248587597, -0.000845070812, 0.000425824808}, {-0.000147291328, 0.00301738176, -0.0122133736, 0.00694413809, -0.000260909612}, {-0.0160804857, 0.000452818087, 0.00264152419, -0.0123273218, 0.00413783593}}}, {{{0.00130800682, 0.00285078282, 0.0178012848, -0.00195739232, 0.00638288213}, {-0.0044504134, -0.00868459791, -0.0109865889, 0.0119447317, -0.00481541269}, {0.00205829157, 0.0127408449, -0.0170472451, 0.00400526775, -0.00827733614}, {0.0143061932, 0.016319884, -0.00105154945, -0.00438003475, 0.00670657679}, {0.00990790501, 0.0114021329, 0.00657106005, 0.00931466278, -0.0107749403}}, {{-0.00464975135, -0.0012371256, -0.0116119934, -0.000274187012, -0.00332883652}, {-0.011588241, -0.00862741005, -0.00034846834, 0.00568104396, -0.00905833393}, {0.0220683757, 0.0131459255, 0.00542478776, -0.0106890583, -0.00385654299}, {-0.0111080194, -0.00107430725, -0.00195484934, 0.0196566004, -0.00735899946}, {0.0098230755, 0.000610693882, 0.00486933999, 0.0115335016, -0.000463018107}}, {{0.00748813618, 0.000476203306, -0.0239925664, -0.00326488982, -0.0134290466}, {0.000709586311, -0.0236535333, -0.000300149171, 0.000536642969, -0.0135743041}, {0.00141373358, 0.00603989419, 0.0022462518, 0.0120577998, -0.010528258}, {-0.00159460097, -0.01787946, 0.0148902461, -0.0107511673, 0.00477464031}, {-0.0155290011, -0.013721223, 0.000760492403, 0.00313037704, 0.00693382276}}, {{0.00748264324, 0.00450524176, 0.00497687189, -0.00858245883, 0.0300362837}, {0.0181683786, 0.0056095277, -0.0133065805, 0.00140033581, -0.00510338461}, {-0.0208188966, 0.010625164, -0.000326749665, 0.0017263795, 0.00397459697}, {-0.00319677568, -0.0212599467, 0.0231648423, -0.00606710976, 0.00826288853}, {-0.00681424979, 0.00795238838, -0.00123060297, -0.014393854, -0.00989205204}}, {{0.00529051293, -0.00538058905, 0.00295808422, 0.00607205741, -0.0217844397}, {-0.00504345028, 0.00426531211, -0.0072090053, 0.000451306201, 0.00852915645}, {-0.00844122656, 0.006260511, 0.006947204, 0.00770841911, 0.000129099571}, {0.00684185, 0.000641388877, -0.0183975045, 0.000269706012, 0.00300110271}, {-0.0067981109, 0.00936713908, -0.00291901268, -0.0158450417, -0.0234517213}}, {{-0.00549869658, -0.00576176308, -0.00891766604, -0.00644436199, -0.000744721212}, {0.00293685985, -0.0160870198, 0.00526489643, -0.0050578271, -0.00314811757}, {0.0174902026, 0.0131459478, 0.014377811, 0.00817288738, 0.00448070606}, {0.00110562984, -0.0074945949, -0.00728939427, -0.0031575656, -0.0176637154}, {0.00733453734, 0.0105822152, -0.0128757181, 0.0111124422, 0.0133197606}}, {{0.0248394292, -0.00154941471, 0.000712761946, 0.00530748861, 0.00441123033}, {-0.0138297044, -0.00925346743, 0.00250819768, -0.0119743068, 0.0242613498}, {-0.00292461412, -0.00763892662, 0.0169551317, -0.00812688936, 0.00950520672}, {0.00777226593, 0.00592294894, 0.0054171537, -0.00510640861, 0.00693868194}, {-0.0182155613, -0.0153144551, 0.0129117966, -0.00251812418, 0.00983681343}}, {{0.00867039803, -0.00925931241, -0.0052883341, 0.00933766086, -0.0241260957}, {-0.00782286376, -0.00486871554, 0.00508037396, 0.000309175259, 0.00781707373}, {0.00642417232, -0.0115024066, 0.0129287736, -0.00540810358, -0.0100105181}, {-0.00803893711, -0.00898277387, -0.0224147923, 0.0131902397, -0.00745784957}, {-0.00136167021, 0.00115048781, -0.00337817101, 0.00143061741, -0.00243786373}}, {{0.00720248558, -0.0113273235, 0.00306263659, -0.00556210848, -0.00342388474}, {-0.00250615017, 0.0164382979, 8.50611468e-005, 0.0025657739, -0.0173951574}, {0.00748541951, -0.00340856472, 0.0105325477, -0.0077687134, -0.00302169216}, {-0.00698483502, 0.0151958046, 0.00481711375, 0.0174532067, -0.00770038646}, {0.00334384548, -0.00459079724, 0.00946593285, -0.00478331, 0.0030380215}}, {{0.00372119551, 0.00496478146, 0.0031048567, -0.00576358894, -0.00876462553}, {-0.0111272139, 0.0105757657, 0.0178069174, 0.00661134487, 0.0118928244}, {-0.0102664297, 0.0137899769, 0.000474703469, -0.0140758129, 0.00407807622}, {0.00800417457, 0.00177544006, 0.0123057337, -0.00678484421, -0.00972713251}, {-0.00393451657, 0.0132312151, -0.0106270276, 0.00698451465, 0.0103765689}}, {{-0.00261299475, 0.00447215, -0.0253696851, -0.00417618454, -0.0166218504}, {-0.00569248432, -0.00256065186, 0.00584446406, -0.00711543905, 0.0159139019}, {-0.00294723129, -0.00658677332, 0.00139468082, -0.0100412183, -0.0210215282}, {-0.00721153244, -0.00268714689, 0.00565615343, -0.0164994095, -0.000569600263}, {0.00324542844, 0.00713749789, 0.0046495772, -0.01139268, 0.00686504273}}, {{0.014346011, -0.00800695084, 0.0108127138, -0.0143292984, -0.00914185401}, {0.0163140595, 0.00274211564, 0.0024826515, 0.0185645837, 0.0142491413}, {0.0279692877, 0.0100559369, 0.0208686274, -0.00530586205, -0.00628476869}, {0.00951345917, -0.00162860181, 0.00467382744, -0.0149893267, 0.000718559313}, {-0.00749030896, 0.0202481933, 0.0167163648, 0.0141353533, 0.0109435366}}, {{0.00109955412, -0.00403041672, 0.00156578305, 0.018187616, -0.0115808547}, {0.0154310139, 0.00230907253, -0.00986785162, -0.00601573614, -0.00582104409}, {0.0136675946, 0.00313663878, 0.0111481976, 0.00384269631, -0.00852526724}, {-0.0134849437, -0.00789724477, 0.00502903061, 0.00425349036, 0.0108081661}, {-0.0102297664, -0.00766819576, 0.00658107875, -0.0159304682, 0.0107602309}}, {{0.00272050616, -0.0157930721, 0.00598412147, 0.0130435377, -0.000615750032}, {-0.000442472316, 0.0164436735, -0.00395207107, 0.00217174343, 0.00272232248}, {-0.00297557889, -0.00488592219, 0.0219945032, -0.00355354534, 0.000623687869}, {0.00767421164, 0.00600519218, -0.00978540536, 0.00104577222, 0.000750130683}, {-0.0085170744, 0.00144745957, -0.00689461967, 0.00874295738, -0.00388330151}}, {{0.0124275498, 0.00131458498, -0.00119100534, -0.0141602652, 0.00429203548}, {-0.013010527, -0.000819274981, 0.0146791954, 0.00313974707, -0.0120621873}, {0.0171041992, -0.0148092285, -0.0140742753, 0.00728900312, -0.00513431942}, {-0.0200881902, -0.00662810216, 0.0212267973, 0.000726087717, 0.00742369331}, {0.00809776038, -0.0106933163, 0.00683075236, -0.010217947, -0.010946312}}, {{0.021152582, 0.0200399887, 0.00138221437, 0.000416185416, 0.0168833248}, {0.0164739713, 0.0149715673, 0.000128344924, -0.0220530313, -0.00782168563}, {-0.00237094355, -0.0112036057, 0.007258825, -0.00612941664, 0.011172154}, {-0.00462071272, -0.0178616066, 0.0303056911, -0.00519295968, 0.00782039575}, {-0.00552752102, 0.013145919, 0.00347689213, -7.49255123e-005, -0.0101893274}}}, {{{-0.0196047984, -0.000147404426, -0.0156179378, -0.00136753381, 0.00332579436}, {-0.00029332962, 0.0149447294, -0.0114128608, -0.00254349899, -0.0173400249}, {-0.000482978503, 0.00171162758, 0.0227044579, -0.00842541549, -0.0251280945}, {-0.00474685803, -0.00890962314, 0.00048559226, -0.000931452494, 0.00686242385}, {-0.0136700533, 0.00965326466, 0.00225770473, -0.0143809104, -0.00264185714}}, {{-0.0074775042, 0.00295158988, -0.00494867098, -0.00459282007, 0.0146650439}, {0.00757365394, 0.00855553988, 0.00878494792, -0.0250692014, -0.000995959388}, {0.00616078079, 0.00399341155, -0.00544145564, -0.00141451985, 0.00257262751}, {0.00538150501, 0.00661292346, -0.00509540224, -0.000169098814, -0.00487819314}, {0.0092965709, -0.00991905946, -0.0120869596, -0.00650578318, 0.00373301259}}, {{1.75004633e-008, -0.0171468146, -0.000585840608, 0.0109488321, -0.00517792813}, {0.00357313408, 0.00642308034, 0.0116471434, -0.0138748093, 0.0012007436}, {2.35124915e-008, -0.0117943631, -0.0111485748, 0.00790918712, 0.00082243653}, {-0.00451175263, 0.00709062861, 0.0246801563, -0.0033510474, -0.00399935246}, {-0.0175682548, 0.0137289474, -0.00624049781, -0.000270928926, -0.00461206865}}, {{-0.000554208527, 0.00187786354, 0.0164592545, -0.00157512166, -0.00147464091}, {-0.0151043925, -0.00871475786, -0.0112800552, -0.0162192583, -0.00712621491}, {0.0097437622, 0.0175665002, -0.0193954706, 0.0171320755, 0.00258553727}, {0.00589303207, -0.00925152097, 0.00771915959, -0.00484657334, 0.0173460431}, {-0.014472587, 0.00796163734, -0.00468022376, 0.00854461826, 0.00289815175}}, {{-0.00216767681, 0.00218317588, 0.00204774109, -0.000245706178, 0.015996987}, {-0.00412672898, -0.0057327156, 0.0205684453, 0.0133732902, 0.00164662162}, {-0.010696861, -0.00173935306, 0.00993691571, -0.00297050853, -0.0143898809}, {-0.00016240745, -0.00276454701, 0.00555281201, -0.00838051084, -0.0063045416}, {0.00747197401, 0.0240100138, -0.000577654282, -0.007891519, -0.00325764366}}, {{-0.00407100655, -0.00564767746, -0.0144832032, 0.00127901649, -0.00636272971}, {-0.0117993327, 0.00769107603, -0.010636027, -0.0123962071, -0.00333818188}, {0.00302087585, 0.0111280866, 0.002135074, -0.00512469327, 0.00871547405}, {0.00529682683, -9.8160388e-005, -0.00254495372, 0.00190085894, -0.00810352713}, {0.00643819431, 0.00938411895, -0.015579422, 0.0153017631, 0.00332356268}}, {{-0.0147123588, 0.0108780395, -0.0147170303, 0.00185270875, -0.000759710209}, {0.0155496672, 0.00113187823, 0.0249100979, 0.00720291911, -0.0080888886}, {0.00297631533, 0.0134771224, 0.00399932032, -0.0121392338, -0.00905603729}, {-0.00370823639, -0.000414929673, -0.00825434923, 0.0131439352, -0.0163850971}, {-0.0101567796, 0.00929154176, -0.0142507907, 0.0102961063, 0.00183132582}}, {{0.00992441177, -0.010250276, -0.0117392186, 0.00180310535, 0.0150134061}, {-0.00860369578, -0.00120659301, 0.0194679368, -0.00131919375, 0.00359263201}, {0.0120823588, 0.0297298916, -0.0047051888, -0.00244324934, 0.000138035655}, {0.00207809336, 0.000628781796, 0.00946827698, -0.008924881, -0.00720286882}, {-0.0115890224, 0.0134589495, 0.000603657623, 0.00429663807, 0.00735299801}}, {{-0.00233516051, 0.00849336572, -0.0142490743, -0.000361170853, 0.00103354244}, {-0.00901657436, -0.00845910236, 0.0174211394, 0.0148758283, -0.0127048725}, {-0.00221200869, -0.00940367393, -0.0101006934, -0.00260792975, -0.000807253527}, {-0.00446595391, 0.00790618639, 0.0017918736, -0.00375967706, -0.00446197949}, {0.00962976553, -4.42052078e-005, 0.0135365063, 0.00713278307, 0.000145709171}}, {{0.00217447407, -0.00690859836, 0.00255168579, -0.0126522882, -0.00965244789}, {0.00163584866, 0.00386157958, -0.00611219555, -0.00971241016, 0.00225879811}, {-0.0113142785, 0.0103750275, -0.00727572618, 0.0102626774, -0.00937917735}, {0.0089831017, 0.00346139725, 0.014619506, -1.60414988e-008, 0.00016889938}, {0.00255963812, 0.00240569306, -0.0104093216, 0.00312423031, -0.0131480163}}, {{0.00917042512, 0.002478268, 0.00682981312, 0.00290033128, -0.00895195268}, {0.00250247726, 0.00104673987, -0.00524368323, -0.0108857071, 0.0194904618}, {0.00298610167, -0.0134805413, -0.0105851786, -0.00285110157, -0.00991048757}, {0.00783159863, 0.00776641723, -0.00425020512, -0.00877167564, -0.00346415932}, {-0.00589646632, 0.0224539898, 0.00294483919, 0.00758380769, 0.0120268185}}, {{-0.00260813907, -0.00609127898, -0.00223902171, 0.0131597854, -0.000299340143}, {0.000341043487, -0.010194174, -0.00665353937, -0.00656592892, 0.0155041311}, {0.00249769236, 0.00338811614, 0.0128954453, 0.0112963039, 0.00448775711}, {0.00681192055, 0.00903957058, 0.00450775027, 0.00756182708, 0.0035155646}, {0.0257310327, 0.00162416231, -0.0105696628, 0.00633820985, 0.0147593431}}, {{-0.00626969337, -0.0108691826, -0.00790633447, 0.0107406061, -0.00604131958}, {-0.00110916095, -0.0266719442, 0.0127579449, 0.00593953673, -0.00705123041}, {-0.00301123108, 0.00737430109, -0.00220657117, 0.000226320175, -0.00108345901}, {0.00235731876, -0.00130703812, -0.0178803634, 0.00334672187, 0.000691838912}, {0.00117147132, -0.00150092051, 0.00123678497, -0.00425867364, -0.01095095}}, {{0.00309028523, 0.00261215353, -0.00417826371, 0.00173522404, -0.00716541009}, {-0.0159543864, 0.00750609674, 0.00997202192, -0.0143374521, 0.00609533722}, {-0.0128114354, 0.00631367369, -0.0126073202, -0.00500957994, 0.00841084681}, {-0.0147780692, 0.00316462782, 0.0230712555, 0.00981236342, -0.000835237908}, {0.00468581915, 0.00994839426, 0.00122763263, -0.00742458086, -0.00250514015}}, {{-0.00103590742, 0.00677540386, 0.010750724, 0.020381866, -0.0112565225}, {0.00829073694, -0.0120541677, 0.0144651541, -0.0134000676, 0.00674655661}, {0.0013894001, 0.00229307427, -0.0104579097, 0.0174467154, 0.00665153051}, {-0.00555969123, 0.00685029197, -0.00862771552, 0.00314167258, 0.0257232543}, {0.0032927047, 0.00174352399, 0.00315320771, -0.0116464868, 0.00549024856}}, {{-0.00551844807, -0.00813748036, 0.00485662743, -0.00516572176, -0.0022049062}, {-0.00511173159, -0.00841023028, 0.00234930986, -0.00519302022, -0.00182788377}, {0.0169309117, -0.0155565161, 0.0104635144, 0.00729247415, -0.00844425801}, {1.67671157e-008, -0.00618331367, 0.00660297042, -0.0056206747, -0.0172495954}, {-0.00529651716, -0.0134322252, 0.00773007981, -0.00511410739, 0.0135981413}}}, {{{0.00367785059, -0.0150149949, 0.00589477411, 0.019350823, -0.0118363127}, {-0.00534051098, -0.0119461212, -0.0062001273, -0.00357641885, -0.00514445081}, {-0.00762679987, -0.0138581106, -0.0178738907, -0.0026670068, 0.00310580223}, {-0.00986115914, -0.00979414862, -0.00103490066, -0.00819048006, -0.00422772113}, {0.00150469178, 0.010146183, 0.00993550569, 0.00722816726, -0.00602413854}}, {{0.00383901037, -0.00048442086, -0.00560001796, 0.00677434728, 0.0043862951}, {0.00423666136, 0.00330592436, -0.00743384194, -0.0126345111, -0.000256690924}, {-0.0226154607, 0.0113960188, -0.00192184246, -0.00563021377, -0.00623976626}, {0.00290749199, -0.0240678266, 0.00257238466, 0.00589483231, 0.00326701859}, {0.0259994473, -0.0104496358, -0.00918516424, -0.0236011874, -0.00512275752}}, {{0.00609246083, -0.00574944075, -0.00202378212, -0.0139055466, -0.00649894401}, {0.00424011145, 0.00144884328, -0.010583858, 0.00179179676, 0.0087279994}, {-0.0187491886, -0.00519848894, 0.00656274427, 0.0151651902, -0.0130108139}, {0.00648038043, -0.0135773718, -0.00709482701, 0.0100562042, -0.00109521474}, {0.00125750178, 0.00582409743, 0.00560219353, -0.0086879069, -1.75005262e-005}}, {{-0.0106693273, 0.000855772989, -0.024864383, 0.00434562284, -0.00770958234}, {0.00410463521, -0.00913628098, -0.0202163588, -0.00138134393, -0.00403451268}, {0.00376224471, 0.00672226865, 0.00179343973, -0.00619306741, -0.00280138687}, {0.00625922158, 0.0176371448, 0.00204135058, 0.0077619683, 0.00945437327}, {-0.0100510381, -0.00617449498, -0.00734933931, 0.00399878947, -0.00585346296}}, {{-0.0371222794, 0.000836951949, 0.00955979805, 0.00372899091, -0.000393485301}, {0.0169028025, -0.00647714129, 0.0181816537, 0.00582136726, 0.0200790763}, {0.0212873872, -0.00969931204, -0.00208302448, 0.0195237547, 0.00355171529}, {0.00270708557, -0.00890949182, 0.000717938412, -0.0107454611, 0.00694291666}, {-0.0104281763, 0.018340895, -0.00831846334, 6.6266366e-005, 0.00422996748}}, {{0.011853029, 0.00229855394, -0.00609000819, 3.01930268e-005, 0.0116243046}, {0.00465223473, -0.000598653452, 0.0137571618, -0.0183493178, 0.000421775796}, {0.00300922967, 0.00527627254, -0.0133774541, 0.00382433296, -0.00397666823}, {-0.00788951479, 0.00209968304, -0.00324623589, -0.00284514623, -0.0019813464}, {-0.000782742922, 0.0203777142, 0.00249356125, -0.00898721721, 0.00330260536}}, {{0.00546473358, 0.00562211685, 0.0107545871, -0.0240515303, -0.00911516137}, {0.00108269404, 0.0111422101, -0.00316036073, -0.0102632148, -0.00193685142}, {0.00568100903, 0.00486624381, -0.00121978438, 0.00777564431, -0.00189801538}, {-0.00890666433, 0.00138718076, 0.00221057818, -0.0180842094, 0.00719915703}, {0.00422907714, 0.00459374487, 0.0132246092, 0.00552373985, 0.00252923509}}, {{0.00118339946, 0.0100413831, 0.00578841986, -0.00117241417, -0.0216529518}, {-0.00846197922, -0.00911465846, 0.00178912818, -0.000927263987, -0.0279444419}, {0.00102792133, -0.00479181437, -0.0105460864, -0.000625943183, 0.00228111842}, {0.00595277874, 0.00515377428, 0.00110897387, 0.0115214726, 0.00743351178}, {0.0081349602, -0.00863816217, -0.00705899391, -0.000962798076, 0.0169761013}}, {{-0.00758161396, 0.0027724239, -0.00129639392, -0.0083099436, -0.00581389433}, {-0.0112129869, -0.0111987963, 0.00895062555, -0.00347940275, -0.000619726721}, {-0.00865566172, 0.00706688128, 0.00626196293, -0.00908197369, 0.00999508332}, {0.00584157091, 0.0245571006, -0.0184245687, -0.00955053698, -0.0147426454}, {-0.00542118214, -0.0103711933, 0.0226355325, -0.0182109214, -0.00339564844}}, {{-0.0173517372, -0.0190263651, 0.00765689369, 0.00369301997, 0.00477106031}, {0.00452518323, 0.000940661761, 0.0114283413, -0.00806992128, -0.00606777985}, {-0.0212998688, 0.00744734099, 0.0197390281, -0.00018706049, 0.00746976025}, {0.00301758153, 0.00492827967, -0.0109251076, 0.00447745575, 0.00287232897}, {0.00137004396, 0.00524395565, -0.00606368016, 0.0235964619, -0.0215531718}}, {{-0.00213178759, 0.0117739849, -0.00684759906, -0.00793237891, 0.0149625177}, {0.0024280271, -0.01646531, -0.0152897872, -0.000335460791, -0.00761936652}, {0.0134744504, 0.0290164519, -0.0141627286, 0.018514948, 0.0100181429}, {-0.00821235031, 0.0100412033, 0.0211545732, 0.00454574777, 0.012503529}, {-0.00802446902, 0.00971945655, -0.00572497863, -0.0110802185, 0.0133019164}}, {{-0.00223827548, 0.00392441591, -0.00657495204, -0.00385051011, 0.0126299281}, {-0.00617173081, 0.0114969946, -0.00331455562, 0.00477436185, 0.0035274867}, {-0.00822628848, -0.00176452554, 0.00221678149, 0.00140839035, 0.00180867873}, {0.0146971596, -0.00282954052, -0.0029455137, -0.00449441792, 0.0136935581}, {-0.0195375457, -0.00316537684, 0.0105329938, 0.00683928747, -0.00404234929}}, {{-0.0088538602, 0.00345749944, 0.00439344766, -0.0119327214, -0.0124996342}, {0.00650880206, -0.00135577656, 0.00777111668, -0.00683213538, 0.00484650629}, {-0.0134910243, 0.00579806091, 0.0195170138, -0.0119048161, -0.0072664055}, {0.000260088011, 0.0182493236, 0.000581013039, -0.0117254313, -0.0148024447}, {0.00719935074, 0.0110045783, 0.00635415735, 0.00319210929, 0.00268081808}}, {{0.00164389331, 0.0041609942, 0.00704025663, -0.0124211889, 0.0056153778}, {0.00228173751, -0.0111260181, 0.00018614922, 0.000688013155, -0.00126016361}, {0.00618371973, 0.00141333928, 0.000536730571, 0.00369250495, -0.00744961062}, {-0.00596723706, 0.00166587089, -0.00333842728, -0.00715355529, -0.000956713222}, {-0.00354527635, 0.0169035196, 0.0054788501, -0.00439597061, 0.0114817312}}, {{0.0022471738, 0.00302331732, -0.00323422463, 0.0112620238, 0.012109749}, {-0.00179536303, 0.00185055961, 0.00976629462, -0.0114344433, 0.00697733788}, {0.0160926227, -0.00917712227, 0.0126741081, 0.00209255284, -0.0141079128}, {0.000494572101, -0.0012283721, -0.00137454655, 0.00142769818, -0.00883878116}, {-0.00382797094, 0.00876560621, -0.0130501622, -0.0125318673, -0.00158532453}}, {{0.0153875081, 0.00384603813, -0.00834871363, 0.00569920056, 0.0118223177}, {-0.0234386697, -0.00414556731, 1.66972072e-008, 0.00670246454, -0.000662761566}, {-0.00432884786, -0.000715454575, -0.00792849809, -0.000996594084, 0.00268111983}, {-0.00550371688, -0.00128646719, -0.00195095933, 0.00400086725, 0.0112353656}, {-0.00901789963, 0.00322155049, -0.00531681348, 0.00670106476, -0.00397008099}}}, {{{-0.00382166589, -0.0183838513, -0.00768510904, 0.00174280792, 0.00812687073}, {0.00743589131, -0.0158790443, -3.2324082e-005, -0.0157846417, -0.00149558333}, {-0.00260757026, -0.0056704767, -0.0152911209, -0.0151854036, -0.00779517135}, {-0.000227771961, 0.000430653337, -0.0140158217, 0.00052623736, 0.0152434362}, {0.00022612515, 0.00278684776, -0.000895723759, -0.000131733104, -0.00265976554}}, {{-0.00918414444, -0.0235224459, -0.0148883648, -0.0145034362, 4.60562296e-005}, {-0.000522083719, 0.0124076968, -0.00739075709, 0.000743375043, -0.00200901297}, {0.0109093143, 0.00324027706, -0.00583464606, -0.00418303953, 0.000103241196}, {-0.00511575863, 0.0037675451, -0.00145182863, 0.00965885073, 0.0104865758}, {0.0161059126, -0.00852079503, 0.00448352285, -0.00232543238, -0.00126068015}}, {{-0.0124746896, 0.00387627841, 0.00548723573, 0.0107627315, 0.00850124191}, {0.000214291242, 0.0140263131, -0.00928732287, 0.00499200169, 0.0073911082}, {0.00307388999, -0.0106591163, -0.0138245914, -0.0051950058, -0.0084305834}, {-0.00215698057, -0.00902921613, -0.00818065275, 0.000501816452, 0.012154636}, {0.00819721539, 0.00259612058, 0.0261067599, 0.00327977142, -0.00746757071}}, {{0.000280272507, 0.00132167945, -0.00391746825, -0.00362281338, -0.0170595534}, {-0.00589599926, 0.00915355328, -0.0192025378, -0.00159348256, 0.00756949978}, {-0.00832613464, -0.00970509835, 0.00944477133, -0.0147066386, 0.00497531239}, {-0.00973160472, -0.00474091899, -0.0131754335, -0.00270692375, 0.00423613144}, {-0.0166894682, -0.0164264217, 0.0138949826, -0.000692442642, -0.00158921431}}, {{0.0165278185, -0.0163177084, -0.0177183915, 0.00432031462, -0.0109184105}, {0.00495162746, 0.00147856004, 0.00648653926, 0.00457447581, 0.0108982306}, {-0.00795881543, -0.00260536768, -0.00649754237, -0.0204748623, -0.00980530307}, {0.0230250545, 0.0157647096, -0.00857156608, 0.0181892645, 0.00172475458}, {0.0133480346, -0.0104140034, -9.39249585e-005, 0.0169079527, 0.000687758496}}, {{0.0166332778, -0.00484157586, -0.00761559093, -0.0256240387, 0.019362241}, {-0.0163573753, -0.0131647391, -0.00088646356, -0.00351053616, 0.00362991611}, {-0.0136231072, -0.00441168342, -0.00552525138, 0.0127298543, -0.00811630301}, {-0.00454070559, 0.00874250662, -0.00512714684, -0.00831352174, -0.00686580921}, {-0.00634243246, 0.00650902418, 0.0138031924, -0.00580395199, -0.00454390887}}, {{0.00205307221, -0.00582824601, 0.00400818465, -0.00787281804, -0.000770465238}, {0.0019141438, -0.0133433407, -0.00287665683, 0.00498321839, -0.0171706881}, {-0.000380520301, -0.00206215563, -0.01195582, -0.000457232265, -0.00189558393}, {0.00208555278, 0.0154412528, 0.0026227911, -0.00513913389, -0.00372848311}, {0.00461472198, 0.0100211389, 0.00902056322, -0.0100913579, 0.0301952027}}, {{-0.000414929673, -0.000977177289, 0.00788376108, -0.011775312, -0.00629594596}, {0.0100805648, -0.00698676845, -0.0116104735, -0.00840557646, -0.0162347667}, {0.0237391721, 0.0214518253, 0.00818655267, -0.00310397195, 0.00188433519}, {0.0072969473, 0.0148307784, -0.00661572721, 0.000614587741, 0.00423785159}, {0.0061945226, -0.00329183997, 0.00430463487, 0.0200894903, -0.00847823173}}, {{-0.0207085777, -0.00400117505, -0.00386594539, 0.00745405303, -0.0069740396}, {0.0110808378, -0.0112950904, -0.00178865169, 0.00377095584, 0.0073672221}, {0.0137264468, 0.0132633606, -0.00380233745, -0.00282043987, -0.0242282469}, {-0.0124561209, 0.0134081515, -0.0134541988, 0.000375140953, 0.00634776428}, {0.00220591994, 0.0235317629, -0.00299830502, -0.0126043595, 0.00432673655}}, {{-0.012314762, -0.000926237844, 0.00493268762, -0.0119522261, -0.00428871997}, {0.000641691149, -0.00740996609, -0.00436254498, -0.00899440981, 0.0058042286}, {0.0180951543, 0.00141374033, -0.00753801828, -0.0112093547, -0.00278504705}, {0.0207114164, 0.00957076997, 0.00945179909, -0.00352003076, -0.0224086624}, {0.00246139243, 0.00641122879, -0.0217850059, 0.00972163212, 0.002738985}}, {{0.000299486564, 0.00465984223, 0.0192696061, -0.00988003053, -0.00935630221}, {0.000584787747, 0.00288894679, 0.0266523864, -0.00653377967, -0.000386070664}, {-0.00431469409, 0.0116422242, -0.00234128046, 0.00327904127, -0.00200269441}, {-0.00332629262, 0.00817837007, 0.0094962623, 0.0219803248, 0.00833204016}, {-0.00434423657, 0.0019620494, 0.0153228315, -0.00456108153, 0.00279120193}}, {{-0.009053085, 0.00286997366, 0.00585747836, -0.0127596008, -0.00312645244}, {-0.0198682267, 0.00432919757, -0.00228445767, -0.0195725858, -0.0153638031}, {0.00213560369, 0.00114679185, 0.00917155202, -0.0191616248, -0.00664440962}, {0.0077843992, 0.0178309586, 0.00575877819, 0.00102068542, 0.00333815045}, {0.00134191837, 0.00957983173, -0.00119548978, 0.0114701847, -0.0192893222}}, {{0.000747450977, -0.00251084543, 0.00466880994, 0.0106259901, -0.000511679973}, {0.0108992262, 0.0124391383, -0.00367215555, 0.00492470153, 0.0156381149}, {-0.00711678946, -0.00180969387, -0.00659474777, 0.008500305, 0.00136798795}, {0.0156594627, 0.0122440206, 0.00156057801, 0.0187041778, 0.000678263837}, {-0.00998083968, -0.0181911364, -0.0111823622, -0.0189173445, 0.00712169567}}, {{0.00469506951, 0.0110090496, -0.0200186651, -0.00314394524, 0.00235485123}, {0.00943938363, 0.00247357949, -0.00333147729, -0.0068113571, 0.00261558522}, {0.00130038161, -0.0122375125, 0.00179950171, 0.00447814632, 0.0061493176}, {0.0091316551, -0.000293345482, 0.0183108747, -0.00221790979, -0.00165900344}, {0.0107645486, -0.00724203, -0.00691358885, 0.00257419189, -0.0118582156}}, {{0.0021808329, 0.00258525275, -0.004196411, 0.00402104901, -0.0054028905}, {-0.00226480979, -0.00348724634, 0.00948435254, -0.00119811215, 0.00484331138}, {-0.000694521295, -0.00582361128, -0.00668118941, -0.0235147234, 0.0104672024}, {0.00969402399, 0.00673692254, 0.00404705061, 0.0121086277, -0.00447305152}, {0.000502619252, 0.000882189954, -0.0110310605, 0.00420441059, -0.0180403888}}, {{0.00592524372, -0.00153774419, 0.0085623432, 0.0204383899, -0.000544120965}, {-0.00595328957, -0.000131354071, -0.00620405609, -0.00599502167, 0.00299261487}, {0.00879191607, -0.0150656197, 0.010423895, -0.00856021699, 0.0201981626}, {0.00941737555, -0.00393702555, 0.00694003422, 0.0221583433, 0.000374867319}, {0.000251434511, 0.0029603939, -0.0119574992, 0.00847871602, -0.00806898437}}}, {{{0.00691337977, -0.013733834, 0.0152204894, 0.00478854915, 0.00399083132}, {-0.0172816738, -0.0054549044, 0.0077535999, 0.00807340257, 0.00221593492}, {-0.00920201838, -0.0187241547, -0.0102653112, 0.00705457944, -0.00177168893}, {0.00460762391, 0.00994453765, -0.00148379232, 0.00504917372, 8.55399121e-005}, {-0.000425953418, 0.0129528679, -0.00927635748, 0.00116882543, 0.00800372381}}, {{-0.000523261318, 0.00798567664, -0.00645281048, -0.00442613335, 0.00504176412}, {-0.00075720204, 0.00578459818, -2.93143512e-005, 0.00263027241, -0.00309181516}, {-0.0185818542, 0.00140402594, -0.0129940351, 0.0113800196, -0.00480188802}, {-0.00211183028, 0.000394670293, 0.00341248629, 0.00483410107, 0.00618261332}, {-0.00487661781, -0.00537456153, -0.00719374744, -0.0161319487, -0.00600660266}}, {{-0.013560066, 0.0142899025, -0.0125262747, 0.00774492277, -0.0177894533}, {0.0141917635, -0.00594346598, -0.00678767357, -0.0023275218, 0.0171493161}, {-0.00270443503, 0.00138444861, 0.00160026085, -0.00462960638, 0.014713279}, {0.00630554045, -0.0149410246, -0.00694726873, -2.71094329e-008, 0.0055807177}, {0.00623013917, 0.0179259442, -0.00679290621, 0.00468313927, 0.0116223339}}, {{-0.0209672991, 0.0247747153, -0.00591110205, -0.004939734, 0.000609514187}, {-0.00283492962, 0.00425357139, 0.00306668784, -0.00709989946, -0.0105238818}, {-0.00131925545, 0.00777600333, 0.0136440117, 0.00381722441, -0.00369981886}, {-0.0120002786, 0.0192583352, 0.00861451123, 0.004507198, -0.00382478768}, {0.0014664015, -0.0186445359, 0.00432571722, 0.0101378439, -0.0252281278}}, {{-0.009432327, 0.00913425814, 0.00610901974, -0.00953868497, -0.00926352665}, {0.0131111564, -0.00358791882, -0.00239361404, -0.00407157, -0.00300179841}, {-0.0192937907, -0.0115131009, 0.0104452511, 0.00552385719, 0.00385343959}, {-0.014158044, -0.00275679422, -0.00833841041, 0.0197292585, 0.0170579813}, {-0.00852696877, 0.0100862086, -0.00199051294, 0.00488575082, 0.000521451642}}, {{0.00246853312, 0.00368897361, -0.0208230484, -0.0217427313, 0.00589493802}, {-0.00065906893, 0.00178151042, -0.00502900081, -0.00651331898, 0.00634624623}, {0.00398301007, -0.00468037697, -0.0188513156, -0.016991552, -0.00600510975}, {-0.00130152702, -0.0118816663, 0.00235361909, -0.0201485939, 0.00209623738}, {0.0131604662, -0.00342428358, -0.00719092693, -0.00425587082, 0.0030330834}}, {{0.0162793994, -0.0144235166, -0.0124424761, -0.0163386539, -0.00414522178}, {0.00772291748, -0.00270148413, 0.0230453052, 0.000800048118, -0.0211086851}, {0.000421431556, 0.0231651366, 0.00552558526, 0.0069325408, 0.00236108643}, {-0.0162945762, 0.0156811289, 0.00461877789, 7.91411003e-005, -0.000456348585}, {-0.00285731605, 0.0025152443, 0.00908065308, -0.00794854201, 0.0037075181}}, {{-0.00649015699, -0.00163000543, -0.00551788975, -0.0160382539, 0.000750917068}, {0.00782370195, 0.00539830234, -0.0119521692, 0.000281927641, -0.000799386296}, {-0.0044212495, -0.00177344063, 0.00747687789, 0.0065497118, 0.00622995663}, {-0.00345191965, -0.0072114612, -0.0053651412, 0.00636543892, -0.00981562585}, {0.00186689012, 0.0146398796, -0.0201494768, 0.00672304304, -0.00236343103}}, {{-0.00785849243, 0.00945997238, -0.011464362, 0.0108349035, 0.00725220935}, {0.0106642107, -0.0146607757, 0.00282076327, 0.010379889, 0.0147762224}, {0.0186841004, -0.00628092187, 0.0124255512, 0.0146128051, 0.000985454069}, {-0.00810371153, 0.00860371906, -0.0034370129, -0.0165813956, -0.0106155043}, {-0.0153319873, 0.0100896247, -0.0171586387, -0.00566265918, -0.00634705927}}, {{0.00359713286, -0.0117478371, -0.0173184238, -0.0129165873, -0.0154700922}, {-0.00325809047, -0.00202811556, -0.0065343366, -0.0068451101, -0.0140644452}, {-0.0180841088, 0.00188134541, 0.0209422428, -0.0162366983, -0.0308765769}, {0.00922338385, 0.00367318629, -0.00478447089, 0.00186122477, 0.0174340717}, {0.00275231386, 0.00529491715, -0.00680559315, 0.0101824207, -0.00414527906}}, {{0.00883586053, 0.010298416, -0.00630200887, 0.00608172361, -0.0250759069}, {-0.00247567985, -0.00286903186, -0.00676958077, -0.000796512177, 0.0148820039}, {-0.00437265588, -0.0063312347, 0.00104040268, -0.00184196769, 0.0172932725}, {0.00537796598, 0.0115017192, -0.0103639429, -0.00944572967, -0.00745909056}, {-0.0112396069, 0.008030558, 0.00103140052, -0.00972100347, 0.00399270095}}, {{-0.00774172647, -0.0255960915, 0.0135148792, 0.00834867451, 0.00866980571}, {0.000457896938, 0.0131047666, 0.0117105134, 0.00155861233, -0.00852485001}, {0.004877361, 0.0106071336, -0.00328723248, 0.0013257853, -0.0030242661}, {0.00483902823, -0.0138122542, -0.0151884509, 0.00492481841, 0.00218210742}, {-0.0113097671, 0.0041301595, 0.00411090255, -0.00730154803, 0.00114276935}}, {{-0.0117903268, 0.0101491148, -0.0101940772, 0.00505364826, 0.0214711949}, {0.00351129565, 0.00258746371, 0.000335470744, 0.000447328843, -0.0108696055}, {-0.00588834146, 0.00426408928, 0.0180349331, 0.0076085045, 0.00146206107}, {0.00629525678, -0.000493524014, 0.0197659973, 0.00804909691, -0.0052009332}, {0.000319827785, -0.00739786029, -0.00666649407, 0.00865327287, -0.00955083687}}, {{0.00408197055, 0.00275240652, 0.0113501372, -0.0136997551, 0.0282458179}, {-0.0108552994, 0.00291804923, 0.0212742761, 0.003354026, 0.00623749429}, {-0.02168075, -0.0072461674, -0.00908375811, -2.36648638e-008, -0.00401575351}, {-0.00464905472, 0.0188324098, -0.00802235212, 0.0171786044, -0.0220364295}, {-0.00257272972, 0.0137811592, -0.000415735849, 0.0149828494, 0.00223924476}}, {{0.00291180541, -0.0117909927, -0.00190013042, -0.00888895895, -0.00276289671}, {0.00597217819, 0.0143135767, -0.00348574622, -0.00148854265, 0.0113450829}, {0.0059650084, -0.0018660496, 0.00667426409, -0.0124424063, -0.00906639546}, {0.0109759504, 0.0140104229, -0.00781441573, 0.00705938507, -0.0126350634}, {0.00101857958, 0.0037240528, -0.0102229184, 0.00663971342, -0.00411537848}}, {{0.0180840716, 0.0132842567, 0.0116598476, 0.0149490256, 0.0106103718}, {-0.00928957481, 0.00276304944, 0.00483263051, -0.00225853245, 0.0100729167}, {0.00184991793, 0.00662552658, 0.001242931, -0.00318545219, 0.000193671352}, {-0.00654669246, 0.00659117429, 0.0160916466, -0.0196976401, 0.00167376152}, {-0.00224396889, 0.00135400146, -0.00507706311, -0.00150134531, -0.00681086397}}}, {{{0.00610871566, -0.00242286758, 0.0029627753, -0.00267260033, 0.00526538258}, {-0.00698819384, 0.00474558584, -0.0139929531, -0.00813519396, 0.00401133252}, {-0.00433418388, -0.0169447493, -0.0064674099, -0.00613062363, -0.0130761918}, {0.0083582066, -0.0160076153, 0.0160468854, 0.00760333007, -0.00137782737}, {0.00258754008, 0.0088601131, -0.0124331145, -0.00277739321, 4.40192089e-005}}, {{-0.00761410454, 0.00172868965, -0.00741192419, 0.0245181955, 0.0059895576}, {0.00492851157, 0.0140884956, -0.0113349538, -0.00749368733, -0.000107817934}, {-0.0102799293, -0.0110409437, -0.00643516844, -0.0169235226, -0.010683883}, {-0.00961987581, -0.00518619595, -0.00667016441, 0.0146316346, 0.00818302948}, {-0.000863996102, -0.00514190271, 0.00570016308, 0.0153341033, -0.014128997}}, {{0.00683129905, -0.00715877023, -0.0108073521, 0.00440730713, -0.00189340429}, {-0.00212701387, -0.000370434253, -0.00837253314, -0.00730605423, 0.00115001365}, {0.000554023893, 0.0153864762, -0.00238631456, 0.0132415313, 0.0156728961}, {0.000210347935, 0.0270072278, 0.0087605929, 0.00239148061, 0.0117435921}, {0.0188992899, -0.0280992649, 0.0086157294, 0.00639310991, -9.26026405e-005}}, {{0.00211529131, -0.0176351592, -0.00884472299, 0.00983866584, -0.0112708034}, {-0.00132462452, -0.017914651, 0.000461566, -0.00149451161, 0.009925819}, {0.0112939086, 0.00308779371, -0.00271442556, -0.00664317375, 0.00747682992}, {-0.0113562737, 0.0129397595, -0.0155424392, -0.0275870953, -0.0080902297}, {0.00122119463, -0.00141090492, -0.0039974642, -0.0137707265, -0.00195098878}}, {{-0.00392683363, -0.00245755515, 0.0106377816, -0.000197149871, 0.00493861968}, {0.00494311098, 0.00908442121, -0.0182448085, 0.00287419907, 0.0201227888}, {-0.000203086383, 0.00427536527, 0.00720658805, 0.0184949152, 0.00401349505}, {-0.00196936447, -0.00553093664, 5.16544787e-005, -0.00811814982, 0.00782703701}, {-0.0051957001, -0.00522217201, -0.00325366529, 0.00989454892, 0.0111874128}}, {{-8.91744057e-005, 0.013765852, -0.00727991341, -0.00302894507, 0.00528617715}, {-0.0188471656, -0.00288645877, 0.0076210564, -0.00858760439, -0.0192830767}, {-0.00245809811, 0.00138366409, 0.00354466797, 0.00626441976, -0.00896189082}, {0.0213754233, -0.0037136653, 0.0179187171, 0.00210986426, -0.000492236053}, {0.00878156815, -0.0252068024, 0.00548901642, 0.00626564212, -0.000664709834}}, {{0.0291313194, -0.0207187459, -0.000982232625, 0.0161292348, -0.0142546417}, {-0.0158096142, 0.00416421611, 0.00476290844, 0.0145952962, 0.000932017167}, {0.0116316713, 0.00444070855, 0.00288104499, 0.00762023171, 0.00977717526}, {-0.00307075679, 0.000668385648, 0.00233401102, -0.00874660164, -0.00500806607}, {0.00210774224, -0.00677153328, -0.00303874747, -0.00835696608, -0.0123798503}}, {{0.00948058721, -0.00475446321, 0.00703494204, -0.0069588325, 0.00570199685}, {0.00840312801, -0.0133234253, -0.00883198157, -0.00694901682, 0.00464528752}, {-0.00444732746, -0.0126465941, -0.00596908573, 0.00882732775, -0.00121519272}, {-0.00498376181, 0.00757048605, -0.0163118653, -0.0116734346, 0.0040984787}, {-0.0144424001, -0.00179666246, 0.0068260259, 0.00567701692, 0.000226543649}}, {{0.000315046229, -0.00663526636, -0.019660661, 0.00879785884, -0.00588135514}, {0.00251328829, -0.0256457217, -0.00280528143, 0.0022540018, 0.00252960366}, {0.0129265841, -0.00756648462, 0.0224096868, -0.0132905804, 0.00313874125}, {0.013369536, -0.00359489536, -0.00169834215, -0.0371332727, -0.00253889826}, {-0.0106521184, 0.00414646184, 0.00773704657, -0.0191202965, -0.00514525548}}, {{0.00318462006, -0.00669571571, 0.0163979847, -0.00294654723, 0.0178709887}, {0.00689982949, -0.000569119409, 0.010937483, -0.00743247522, 0.0132140741}, {0.00393228838, 0.00146528613, -0.00192909921, 0.00605329731, -0.0168183632}, {0.00935997628, -0.000608616276, 0.016060058, 0.00335881743, 0.00135114789}, {-0.00098673068, 0.00738867419, 0.000699976168, 0.00147925876, 0.000179155235}}, {{2.96013077e-005, -0.0107470108, 0.0187374465, 0.00329864956, -0.00281282258}, {-0.00489797443, 0.0108281886, -0.0090983063, 0.00927274674, -0.0154359918}, {-0.0159117002, -0.00523748342, -0.00303728809, 0.0145601826, 0.0042756116}, {-0.00333077484, -0.0047208108, -0.00942347664, -0.00804126915, 0.014434346}, {-0.00446085399, -0.0201919805, -0.00516433083, 0.00545262359, -0.0176927876}}, {{-0.00830216706, -0.00620509218, -0.00207435503, 0.00265091308, 0.00221874542}, {0.00322457612, 0.00464576669, 0.0117726168, -0.00115560438, -0.00127772591}, {0.00365846627, -0.00167767517, -0.0103065027, -0.0169085786, -0.00506028952}, {0.000745034195, 0.00257688505, -0.00443704799, -0.0129879573, -0.00854026806}, {0.00603594538, -0.0154452613, 0.00455189636, 0.00608384842, -0.00810770318}}, {{-0.0158290043, -0.00120036933, -0.00824403018, 0.00518612145, -0.0075347526}, {-0.0186688714, -0.00632712711, -0.00537230214, 0.0106461039, 0.000188054575}, {-0.0181461126, 0.00957967434, 0.0183702633, -0.00313262362, 0.00769322785}, {0.00395547505, 0.00989721529, 9.59179961e-005, -0.00752106262, -0.00984054524}, {-0.00525121344, 0.0061288164, -0.0174230915, -0.00422897236, -0.00276770396}}, {{-0.00193997263, 0.0141075645, 0.00915194303, -0.000155773887, 0.0185049362}, {0.00714224903, 0.0268432423, -0.00228415872, -0.0179699361, 0.0147178592}, {-0.00715979887, 0.00883772317, -0.00401116814, 0.013349006, -0.0126218032}, {0.000369016634, 0.00749494741, -0.00572423637, 0.00504951645, 0.00887965597}, {-0.00290286145, 0.0136118466, 0.000856368395, 0.00417633168, -0.00285235723}}, {{0.0173952896, -0.00409612805, 0.00898868963, -0.00724091008, 0.0160992891}, {0.0037260747, -0.00590711366, -0.00750952959, 0.00566860987, 0.000139722746}, {0.00131552573, -0.0041777892, -0.00707358588, -0.00335225509, -0.0166832563}, {-0.00400565146, -0.00732239569, -0.00660283491, 0.00647341274, 0.0142564671}, {-0.00348714809, 0.01630155, -0.00131302653, 0.00532858958, 0.00625571841}}, {{0.0118673909, -0.000134947099, 0.00610471889, -0.0149357924, 0.00233805063}, {-0.00986851659, -0.00720514543, -0.00769693218, 0.0054628686, 0.0140241133}, {-0.00915352348, -0.0162844639, 0.000652235409, 0.00158971525, 0.000547121686}, {-0.00128704775, -0.00861135311, -0.00186043477, 0.00764379045, 0.000600497588}, {-0.00453230459, 0.00702974573, -0.00676060887, 0.00150147988, -0.00394990994}}}, {{{-0.0116546843, 0.00798221771, 0.00824099965, 0.0103782611, 0.00486923568}, {-0.00201972993, -0.00282286666, 0.00497264322, -0.0105209695, -0.0116551891}, {-0.00323786703, 0.00752634834, -0.0080708731, -0.0212731324, -0.00901602767}, {-0.00150201935, 0.000292491895, -0.0124987457, 0.0145051386, -0.00663503772}, {-0.0171794463, 0.0216822959, -0.00607939856, -0.00274836388, 0.013247204}}, {{0.00541910529, -0.00343139144, 0.00116763858, 0.00519672316, 0.0108449021}, {0.0163357072, 0.0107165379, 0.00393640995, 0.00889704097, -0.00230331067}, {0.00716471486, 0.00293282606, -0.0136894835, -0.0101451455, -0.00245752325}, {-0.00315732672, 0.00594486156, -0.00288608228, -0.0107770693, 0.00655337377}, {0.0184138715, -0.00235826522, -0.0146003077, -0.00119846966, 0.0124633843}}, {{0.00452910038, 0.00618327595, -0.0223747361, 0.00845976453, 0.00269776979}, {-0.00299407495, -0.00153530377, -0.00656993175, -0.00704323221, 0.00243612542}, {0.0085957516, -0.00151561492, 0.0105420193, 0.0110105574, 0.00410660962}, {0.00745976111, -0.0253095701, -0.00248544174, 0.00378989242, -0.0222907495}, {0.0175248384, 0.00736474525, -0.00769931078, -0.00309984502, 0.0024484538}}, {{-0.0146949431, 0.00420493865, -0.000268910662, -0.00443999423, -0.007501591}, {0.0110852057, -0.00327700912, -0.000670418493, 0.00203402271, 0.0124091087}, {0.0100297723, 0.00191220548, 0.00247906568, 0.014772227, 0.0123114912}, {0.0058744764, 0.0102345552, 0.0134197706, -0.00853337534, 0.0200678129}, {-0.00189423666, 0.0099597238, 0.00371925114, -0.012528358, -0.00523735117}}, {{0.0226397309, 0.00578519888, -0.0133330133, 0.0206350293, -0.00181368343}, {0.0100986175, 0.0012062703, -0.00135386828, -0.0176964365, -0.00674630329}, {0.0126983868, -0.0107469987, -0.0055434755, 0.013117549, 0.00375997275}, {0.00751653407, 0.00406050868, -0.00787229091, 0.000129368273, -0.00679127825}, {0.00536691537, -0.0146365296, -0.00487118494, 0.00765090436, -0.00880563259}}, {{-0.000897763879, 0.0167844165, -0.0058483379, 0.0211242884, -0.0198178925}, {-0.0128242867, 0.00576943858, -0.0129404124, 0.0134186782, 0.00469058054}, {-0.00306334556, 0.0309803523, -0.00960256997, 0.00707211206, 0.0182323344}, {-0.00106278749, -0.00225894875, -0.0136581063, -0.0159293003, -0.000875114463}, {0.0204990264, -0.000874414225, 0.00586075429, -0.00179246615, 0.0130722476}}, {{-0.0145555288, -0.00550376484, 0.000587863498, -0.00299274945, 0.00795843452}, {0.0217513312, -0.00715863006, -0.00517471181, -0.0128893489, -0.0236923527}, {0.00586854108, -0.0243707504, 0.00153573265, 0.00155066117, 0.00466834521}, {0.00856817793, 0.00881904457, 0.000725624501, -0.0109695932, -0.0215269048}, {-0.0101207756, 0.0110667404, -0.0152133042, 0.0193600263, 0.00258107134}}, {{0.0049456181, -0.000599153165, 0.014618733, 0.00720108068, -0.0106825996}, {-0.0154823894, 0.00366295292, -0.00769655639, -0.015246558, -0.0212101042}, {0.00201983936, 0.00771285826, -0.00567682739, -0.00412073452, 0.00480019115}, {0.0012653314, -0.00964868069, 0.00557183707, -0.00905026682, -0.00319871888}, {-0.000663385494, -0.00446570106, -0.0126455948, -0.0170305911, -0.00687785214}}, {{0.00501458021, -0.0126637984, 0.00958766602, 0.00325980294, 0.0107435854}, {-0.00724246772, -0.00861091632, 0.00423903763, -0.00812237803, 0.0038167364}, {-0.00425098557, 0.0167678334, 0.00828747544, -0.00891782716, 0.00152795098}, {-0.010511444, -0.00397618813, 0.00702658435, -0.0143096009, -0.0132950358}, {0.010085742, 0.00181191519, -0.0140986014, -0.0174416602, -0.00782066304}}, {{-0.00247864565, 0.0241760444, -0.00230916799, -0.0164821837, -0.0147282546}, {-0.0102062235, -0.025632333, -0.00404945575, 0.0105059538, -0.0105576925}, {0.00415481161, 0.00368447579, 0.0041904985, 0.00486771809, 0.00528772827}, {0.00291590369, -0.00603682408, 0.00271671219, 0.0137712499, -0.00770052616}, {0.0163388457, -0.0112180859, -0.00214060512, 0.0139526306, -0.0123727042}}, {{-0.000684238505, 0.00697020162, 0.00449199416, -0.0116310772, 0.00842853542}, {-0.0197279248, 0.00865851715, 0.00880158227, -0.00874748919, 0.00701205479}, {-0.00912056025, -0.000703471014, -0.00132102368, 0.00285457727, -0.00326408376}, {-0.0152456192, -0.000870967226, 0.00802535471, -0.00971026905, 0.00442712661}, {0.00273211044, 0.00816823449, 0.000609763199, -0.0202630479, 0.0121034086}}, {{-0.0163095258, -0.00129448297, 0.00727546681, 0.0143324081, -0.00560788484}, {-0.00673896167, -0.00270040054, -0.000803343835, -0.000814723491, -0.0020769299}, {-0.00873164646, 0.0137765538, 0.00763737084, -0.00491605513, -0.00256962632}, {-0.00887377933, -0.00357821095, -0.001331356, 0.00277654571, -0.00198769826}, {-0.0148837548, 0.0148728956, -0.0131654628, -0.00364732346, -0.00356201432}}, {{0.021772081, -0.0110839726, 0.00283955759, -0.00689901086, -0.00441597961}, {-0.00472298684, 0.00865597557, -0.00891683903, 0.00166462397, 0.0111935344}, {-0.00697639817, 0.00363636413, 0.00089321821, 0.00260898843, -0.00206542015}, {0.00356063736, -0.0192240477, 0.0226411745, -0.00403390685, 0.00727391755}, {-0.00784689095, -0.00888013095, 0.00890720263, -0.00144656422, -0.0115787629}}, {{-0.00392597774, 0.00575090386, 0.00659883302, 0.0135356393, 0.00950387958}, {0.0152266268, -0.0051065404, -0.0106175952, -0.000983330887, 0.00595298829}, {-0.0148362145, 0.0129399449, 0.0137462942, -0.0109481439, -0.00328976777}, {0.00856846478, -0.0087680677, -0.0162191391, 0.000763399526, -0.00593724195}, {-0.0029585911, -0.0161157101, 0.00266316719, -0.00582420407, -9.97255338e-005}}, {{-0.00574791478, 0.00883669779, -0.00591380242, -0.00324067054, -0.00164157548}, {-0.00614796998, 0.0146686155, 0.00558678666, 0.00122399861, 0.000420803786}, {8.18516928e-005, -0.00401651394, 0.0173775703, 0.00587904081, -0.00340591953}, {-0.00250141206, -0.00642820681, 0.00185178197, -0.00493871281, -0.0135172233}, {-0.0103507126, -0.00245536095, -0.00641005207, 0.00114478776, 0.00515673822}}, {{-0.000816022221, -0.00462195231, -0.0215409789, -0.0141817024, 0.000506984303}, {-0.0139289992, 0.00210832525, 0.00888575148, 0.0120374598, -0.0109076835}, {0.00287541002, 0.00126176164, 0.0247030947, -0.00564978551, -0.00230256142}, {-0.00297799148, -0.00626169285, 0.00383072649, -0.00281982636, -0.00489435112}, {-6.62777495e-008, 0.0123109147, 0.0104486598, 0.0117096631, -0.00702401344}}}, {{{-0.0178567432, -0.000476313173, -0.0135733848, -0.00438107597, -0.00173338957}, {-0.00169131835, 0.00211241003, 0.00857595541, -0.0101563632, 0.000963833707}, {0.00297525618, -0.0055900584, -0.00128897605, 0.0117206397, -0.00879490934}, {0.0174921304, 0.0150182871, 0.00659561483, -0.0122469701, -0.0110337846}, {-0.00809316058, -0.0153695354, 0.0196946599, 0.000642537605, -0.00450879242}}, {{-0.00551306177, -0.00409332942, -0.00485974224, -0.0111832889, -0.0153036565}, {-0.00942311436, -0.00562214665, -0.000371631031, -0.00257643638, 0.00492402213}, {0.00919044018, 0.00424132822, 0.00761633832, -0.0128058922, -0.00321779493}, {-0.025492033, 0.0124155888, 0.00322119263, 0.0042541679, -0.00934129488}, {0.00831026305, -0.00650526956, -0.00397433667, 0.0184658859, -0.0308271665}}, {{0.00778565835, -0.00337350648, -0.0123861348, 0.00269914442, 0.00601356197}, {-0.00143172685, 0.00534884166, -0.00254128757, 0.0136215677, 0.0112925107}, {0.000164600613, -0.0215203725, 0.00756408926, 0.00325791375, 0.0254888088}, {-0.00177141023, -0.00447821058, -0.0182597563, 0.00766070466, -0.0024995096}, {-0.00174920051, 0.00305699254, -0.0109386342, -0.00992863718, 0.0122864908}}, {{0.0176302586, -0.00456204964, -0.00912001543, 0.0171811655, 0.00964776333}, {0.00829481054, -0.0019548838, 0.00176853896, -0.00724241138, -0.00282150297}, {-0.00746410154, -0.0099899359, -0.0103536788, -0.00832215324, 0.00524102291}, {-0.00822119229, -0.0056357393, -0.0123479795, -0.0147935553, -0.00426121196}, {-0.00597411161, 0.00608568266, 0.0050263186, 0.000193633517, 0.00795476697}}, {{-0.0200144872, 0.00432635052, 0.0107865799, -0.00783790275, 0.00229024515}, {-0.0209100265, 0.00426165946, 0.0105845816, 0.00376100116, 0.00787714217}, {-0.00304279383, -0.0159316286, 0.000776193861, -0.00391908269, 0.0153765697}, {-0.0208353214, -0.00342299137, -0.00312329549, 0.0237723105, 0.019516347}, {0.00298185507, 0.00149168761, -0.00610089023, 0.00114003057, 0.00251745735}}, {{-0.00256100716, -0.00264620874, 0.0061278902, 0.000579162559, 0.00542280357}, {0.00184054533, 2.52510981e-005, 0.000167573162, 0.004305318, -0.000833885802}, {-0.00333581283, 0.00809125975, -0.0168517958, 0.013659372, -0.00694807619}, {0.00812869146, -0.0138587058, -0.00559752574, 0.0108949132, -0.00114807766}, {0.00151743239, -0.000861902256, 0.0181068927, 0.0100408541, -0.0166701172}}, {{0.00119169999, 0.00380618195, -0.00745770289, -0.00527549582, -1.7813838e-005}, {0.00328030484, -0.0237851534, 0.00833300594, 0.00429070462, 0.00738950213}, {0.00161672884, -0.0104044015, -0.0163881332, 0.00655165361, -0.0030230456}, {0.0153710293, -0.0164321288, -0.00301488792, 0.0120809292, 0.00647074264}, {0.00303603266, -0.000487568148, 0.0086995177, -0.00184698554, -0.00748856133}}, {{-0.00555009022, -0.00212275377, -0.00300305942, -0.00224477332, 0.000148120263}, {-0.0010340095, 0.0140223363, 0.0207222961, 0.0252747182, 0.00673287734}, {-0.0015921985, 0.0129377153, -0.00522491662, -0.00825942867, -0.00956199039}, {0.00967004057, -0.00176491623, -0.0175634436, 0.000612839998, -0.00303618447}, {0.00588499708, 0.0122031765, -0.00635126885, 0.00199261121, -0.00630446523}}, {{0.00779697672, -0.00479859486, -0.00212264527, 0.00176705141, -0.00871846359}, {-0.0224340372, -0.00753400242, -0.0156339947, -0.0183858648, 0.019693831}, {0.0216909349, 0.010002994, 0.00191913533, 0.0099889962, 0.00841091666}, {-0.0184548777, 0.00497677363, 0.000358420657, 0.011482344, -0.00224845298}, {0.0138036814, -0.00405019615, 0.0186069049, -0.0125391101, 0.0145412032}}, {{-0.00290073268, 0.00077403133, 0.00101039279, -0.00208602031, -0.00424899813}, {-0.0113409534, 0.0102422284, -0.0128500825, -0.0210276619, 0.00945296511}, {-0.0019129311, -0.0101131415, -0.00120099168, -0.00567462016, 0.0187413972}, {-0.00566807156, 0.0206289012, -0.0147986235, -0.00429612258, 0.00908188429}, {-0.0024277512, -0.0134894187, 0.00456106151, 0.0135144498, -0.011021194}}, {{-0.00665010652, -0.000421538512, -0.0107304975, -0.00169112673, 0.002763981}, {-0.0118009187, 0.00231139013, -0.00262054685, -0.0109583698, 0.00244635786}, {0.00305635971, 0.016973719, 0.00518831378, -0.000751251762, -0.00834668055}, {-0.00714546442, -0.00455352338, 0.00151449617, 0.00223078695, 0.0127211055}, {0.00345354504, 0.0137115261, 0.00714336243, -0.00366428518, -0.00589481974}}, {{0.00849888567, -0.012850035, 0.00317994785, -0.00572873745, 0.00180127681}, {-0.00427505141, -0.00999685191, 0.00751114124, -0.00517641706, -0.0168276597}, {0.00879647117, 0.00668355497, -0.00389362941, 0.008278789, -0.000161649485}, {-0.0107525503, -0.00467644027, -0.0103725987, 0.0149532296, -0.00186867313}, {0.00390414521, 0.00900383759, -0.0216101222, 0.0062712268, -0.0133335087}}, {{-0.00743322959, -0.00926211197, 0.00876657199, -0.015321048, -0.0114408582}, {0.00110162329, 0.00200239127, -0.00290024257, -0.0214307923, -0.0118333213}, {0.00375559507, 0.00916214101, 0.00503082713, 0.0149280094, 0.0105384896}, {-0.00015614547, 0.0096271215, -0.00506553845, -0.00161670859, 0.00722353533}, {-0.0151410121, -0.0159074739, -0.00610824162, 0.0102372915, 0.00784469955}}, {{-0.00116476708, 0.000933899079, -0.00407157, 0.00100472127, 0.0187620297}, {-0.0121644903, -0.0140025532, -0.0103188576, 0.00612949254, 0.0137796169}, {0.00934260525, 0.00299619557, 0.00651182933, 0.0115641421, 0.00190401298}, {-4.16471739e-005, -0.00356453378, -0.0215160344, -0.0260438677, 0.00954405125}, {-0.0105238818, 0.011858088, -0.0113673145, -0.00352877472, 0.000998194213}}, {{0.001008149, -0.00993594434, -0.00780525338, 0.0052645239, -0.0127809094}, {-0.0155952731, -0.0116803395, -0.0105510466, -0.00385964243, 0.00764356786}, {0.00714369724, -0.00695935544, 0.00273169042, -0.00811690185, -0.020934429}, {0.00510795508, -0.00750936009, -0.0112506757, -0.0069200038, -0.00346833142}, {-0.0227658898, -0.00135639508, -0.00128140557, -0.00415888289, 0.0025937676}}, {{0.00391791482, 0.00510331942, 0.0195080377, 0.013243217, 0.00234060339}, {0.00685161026, -0.000538083492, -0.0173094142, 0.00671886932, -0.00677796174}, {0.00881689973, 0.0171076842, 0.00272964337, 0.00670413394, -0.00841478445}, {0.00144444453, -0.00897976011, -0.00262941374, -9.82018464e-005, 0.00722209597}, {-0.00954774674, 0.00926688872, 0.00393577991, 0.00907556154, 0.00134542864}}}, {{{0.00300492975, 0.0201994441, 0.00850979611, 0.0140268849, 0.0033121279}, {0.00162557594, -0.00705992803, -0.00165211665, -0.0102868583, 0.0127820354}, {0.000207449048, -0.0024764433, -0.00266704406, -0.0070306072, -0.00199071341}, {0.0172062516, -0.021385612, 0.000431139924, -0.00890431833, -0.00752346311}, {-0.0128545351, -0.0179068707, 0.00777712092, -0.00666153245, 0.000939943711}}, {{-0.00874661747, -0.00339151896, 0.00622967165, 0.0011100875, 0.00563488016}, {0.0139901703, -0.00531344255, 0.00323412288, 0.000528903445, 0.00355534395}, {0.00857527368, -0.00966832135, -0.0245904867, -0.00180388067, 0.00622032955}, {-0.00278116157, -0.00305035524, 0.00018919642, 0.0169294123, -0.0156589188}, {-0.00386650139, 0.00365313678, 0.000603901688, -0.0198149737, 0.00964566879}}, {{0.024756521, 0.0115278075, 0.00931163039, 0.0142396502, 0.000815726817}, {-0.010107928, 0.00702162692, 0.00918512885, 0.0112748435, -0.00248880195}, {-0.0149237374, 0.00422859332, -0.00803431496, -0.0121619338, -0.00198697229}, {0.0123898415, -0.0080380654, 0.00337348506, -0.0132220769, -0.0154369893}, {-0.0182467774, -0.00399777154, 0.00436149305, -0.00724977674, -0.0141234966}}, {{-0.0108660962, -0.00682408689, 0.00993612222, 0.00391301047, -0.0119273895}, {-0.00565796811, -0.00478097145, 0.00890230946, -0.00290646707, 0.00646898896}, {0.0111542037, -0.00399203645, 0.00999944843, -0.0111631192, 0.0111858603}, {-0.0034984157, -0.0202516448, -0.00943260547, -0.00658668671, 0.00212739944}, {0.00193282973, 0.0124404794, -0.00280322484, -0.00587551342, -0.00138428435}}, {{0.00532503892, -0.0149676334, -0.00835733768, 0.0120290872, -0.0157197248}, {-0.00250623072, -0.00396503229, 0.0293095615, -0.0166885983, -0.0101876296}, {0.0163848102, 0.0104429321, 0.00301418523, -0.00711956946, -0.0051228893}, {-0.0125167789, 0.0116442265, -0.0118767982, 0.000717846386, -0.00268650451}, {-0.000208062396, 0.0101794638, 0.0125105772, -0.0197753664, -0.0011475248}}, {{0.0253095087, 0.00343740685, -0.00670560123, 0.00518184341, 0.00372895272}, {0.0029201454, 0.0110101784, -0.000740290445, 0.0216445159, -0.00368336984}, {-0.000987954205, 0.0162071045, -0.00888931099, -0.00832912326, -0.00423656125}, {0.00601350237, 0.00192839757, -0.0143696433, 0.00370716769, -0.0121200308}, {0.0130651817, 0.000746378151, 0.00237050327, 0.00529725803, -0.0147525752}}, {{0.0113177672, 0.00367704267, 0.00540025253, 0.011446259, 0.00579672493}, {0.00816153269, 0.00795872323, 0.00650979485, 0.0104818242, 0.000220249392}, {0.0051301755, -0.00266399723, -0.00234754616, -0.00999224745, 0.00658861175}, {-0.00770962751, 0.00332258129, -0.00494455313, 0.00580349611, 0.00688073132}, {-0.00926606543, -0.002150079, -0.015265299, 0.00103467109, -0.00314222695}}, {{0.0180443004, -0.000291164179, -0.00513343839, 0.00488212053, 0.00648068031}, {-0.0113250529, -0.0182650685, 0.000391744688, 0.010061359, 0.003267986}, {-0.000645183551, -0.00147125951, 0.00882643834, 0.0023258538, 0.00218423642}, {-0.00188784825, 0.00394104887, 0.0226913132, -0.00225559087, 0.00566930138}, {0.00756459171, 0.0168364383, 0.0114371041, 0.0202001035, 0.00488081854}}, {{0.00465109618, 0.016900951, -0.016623104, 0.0132882772, -0.0188030284}, {-0.0163961723, -0.00459938729, -0.017411191, 0.00955960713, 0.010216576}, {0.0126787424, -0.00088361185, -0.00257176091, 0.00345810433, 0.0123206452}, {-0.00601573614, -0.000889808987, -0.0182620883, -0.00889498834, 0.00808271766}, {-0.0321114175, -0.00256187771, -0.00575151853, 0.0189934392, 0.0107636061}}, {{-0.0114546558, -0.00432221312, 0.00272411015, 0.0045431233, -0.00694345031}, {-0.016207492, 0.00140639069, -0.00309642195, -0.00315184798, -0.00354100205}, {-0.000152438748, 0.0113260029, -0.0120689534, -0.00390290073, -0.00441990048}, {-0.000665133237, 0.0166565981, -0.00741495937, 0.00866555423, -0.019661326}, {-0.00799263641, -0.00510193547, 0.0103399623, -0.00565165002, 0.0102051366}}, {{0.00444486598, -0.0102350656, 0.00546531985, -0.00995171443, 0.00415092753}, {-0.00092998083, -0.00153339631, 0.012872356, -0.00257992884, -0.0149320252}, {0.0104117887, -0.0280192439, 0.0115724141, -0.00854453351, -0.0223106239}, {0.00932208169, -0.00370908412, 0.00227573398, 0.00413822057, -0.0144262267}, {-0.00291262241, 0.00255599269, -0.00122812379, -0.0015768907, -0.0117040137}}, {{0.00988845248, -0.00462722452, -0.00661293184, 0.00793262292, 0.00491076615}, {-0.000444467762, 0.00872716215, -0.0214680322, -0.00275914348, 0.00511777261}, {-0.00179688702, 0.00678196643, 0.00984887779, -0.000165657824, -0.000705447805}, {-0.016004812, -0.00359243993, 0.00356015726, 0.0161379427, -0.00320624397}, {-0.0141567374, 0.00147674, 0.00562547799, -0.000351128285, -0.00603119796}}, {{-0.00348086352, -0.0161937103, -0.00657959189, 0.014624076, 0.00321717071}, {0.00457398826, -0.00534411985, -0.0217460822, 0.012414013, 0.00615960639}, {-0.00647377828, -0.0133007355, -0.00483165495, 0.0183615629, 0.0361692719}, {0.0120721012, -0.0178742725, -0.000353262003, 0.00339345704, -0.003604064}, {0.00964003988, -0.00726415776, 0.00429317076, 0.0100411056, -0.0039680656}}, {{0.000192259526, -0.0276014023, 0.0157146379, 0.00541473599, -0.00857866742}, {-0.007908931, -0.00348676834, -0.0132676261, 0.00152308866, -0.00987421069}, {-0.00989121757, 0.00109265128, -0.0215497687, 0.00192401244, 0.0142300194}, {0.000572019664, -0.00628800271, 0.00945298653, -0.00470433524, 0.00302386959}, {0.00248178514, -0.000111741982, -0.00439554732, 0.00633623451, 0.00804525334}}, {{-0.00864128862, -0.00299272127, 0.000421431556, -0.00860930979, -0.00285683386}, {3.23690621e-008, 0.0226670839, -0.0123056117, -0.00492966641, -0.00132562988}, {-0.0131968567, 0.0147730047, -0.00385906827, -0.00632614177, 0.0101676108}, {-0.0103023546, -0.00745075336, -0.00140783412, 0.0146466857, 0.00755912624}, {-0.0170156136, 0.00469401618, -0.00172704353, 0.00192130893, -0.0133104166}}, {{-0.00166576076, 0.0171698816, 0.00456760265, 0.0136637595, 0.0138837695}, {0.000132628134, -0.00944961514, -0.00126105221, 0.00689377962, -0.00312891137}, {-0.00972163398, -0.00198770454, -0.000405704341, -0.00461726589, 0.00913250353}, {-0.00397733832, 0.00356126647, -0.00519074313, -0.00889884774, -0.000967729778}, {0.0080440091, 0.0179779455, 0.00686405087, 0.00130863558, -0.00719225872}}}, {{{-0.00525920792, -0.0142155327, 0.00429055141, 0.00353263225, -0.0304576624}, {0.0122159189, -0.0284336917, 0.0297411289, -0.00586795947, 0.00595564116}, {-0.00103822525, 0.00324724219, 0.0157935768, 0.00170192949, -0.0162111316}, {-0.000615033729, 0.0170909055, 0.0115453852, -0.00611223048, 0.0109504219}, {0.00214868831, 0.00550455926, -0.00591358636, -0.0136987744, 0.0166159701}}, {{0.00295362691, 0.0145870177, -0.00819957536, -0.0158498101, 0.000548989279}, {0.00990492757, 0.0164991226, 0.0159283858, -0.00248710788, 0.015809644}, {0.0061493176, 0.0254718084, 0.0131932376, 0.0027578352, 0.00581952417}, {0.00438737869, -0.00308513409, 0.0158149172, 0.0161986891, 0.00242998265}, {-0.00711451005, -0.00523518631, 0.0049616117, -0.00871159509, 0.00450078351}}, {{-0.00128660456, 0.000707227504, -0.00302155898, 0.0034646932, -0.00413130131}, {-0.0167300068, -0.0058718333, -0.000562982459, -0.00464879349, -0.00609559519}, {-0.0138181355, -0.0219766721, 0.0136776166, -0.000902501168, -0.014035481}, {-0.00786064286, -0.00418597134, -0.00906082802, -0.0159145128, -0.000974689203}, {-0.0064021633, 0.0108480966, 0.00608102698, -0.00900373515, 0.0138272587}}, {{-0.0171009004, -0.00842856523, -0.000120746132, 0.00410662964, -0.0154126398}, {-0.0185799412, -0.00117200753, -0.00314319157, -0.00166425575, 0.00613661949}, {0.00945063494, 0.00955497939, 0.00617909478, 0.0026418739, -0.00394725893}, {-0.00476123253, -0.0064572487, 0.00339862658, 0.0141743496, -0.00668526301}, {0.0112544354, -0.00921432301, -0.0114345942, -0.0129421642, -0.00786029082}}, {{-0.0122804232, -0.0116220843, 0.00978592969, -0.00375643861, 0.0134221381}, {0.00917736534, -0.0143852942, -0.0127174454, -0.0136722839, 0.00098550017}, {0.0106520392, 0.00810298137, -0.00558658177, 0.0076126582, -0.00817498378}, {0.00553808222, 0.0192838684, -0.0125210462, -0.00457993755, 0.0124883214}, {0.00236802851, -0.000933461939, 0.0158293899, 0.00603247387, -0.00379461539}}, {{0.012559237, 0.00334214815, 0.00211545266, 0.00497897947, -0.00268803141}, {0.0127544953, -0.00833777897, 0.00045888382, -0.00369470264, 0.00243319757}, {-0.00823251344, 0.0101561518, 0.00723219942, 0.00543520739, -0.00168194587}, {0.00342373177, -0.000706660445, -8.95510166e-005, 0.000836954685, -0.0100000054}, {0.013837589, 0.00957750808, -0.0116123641, -0.00200059614, 0.00312092854}}, {{0.0134739047, -0.00262896647, 0.00481362129, 0.00892513245, 0.00502785621}, {0.00342107611, 0.00326414523, 0.00493222196, -0.0170817878, 0.00659380062}, {-0.00165757851, 0.00962747261, -0.0029642398, 0.00319888978, 0.000368892681}, {-0.0044183475, -0.00218124548, 0.0221231896, 0.00409330847, 0.00090897124}, {-0.00405740505, 0.0012019258, 0.00144765992, -0.00588366622, -0.0195081644}}, {{0.00245412788, 0.0108523853, 0.00317670498, 0.0157951154, 0.00980134308}, {-0.0114448862, 0.00351676159, -0.00327729969, -0.00561009394, 0.000220890419}, {-0.00890376791, 0.00806131866, -0.00653368887, 0.0027817802, -0.0214720685}, {-0.00561837014, -0.0120523032, -0.000700118544, -0.00228193519, -0.00113357522}, {-0.00939079281, -0.00599656859, -0.00401437189, 0.0146477353, 0.0080796713}}, {{-0.00588484155, -0.00549190305, 0.007226435, 0.00736410776, -0.0158394985}, {-0.0105503239, -0.0119248647, -0.00877214503, 0.00110807049, 0.000854271406}, {0.00413604872, 0.00140230905, 0.000185243523, -0.00666578766, -0.0115567986}, {-0.00740582962, -0.00105694646, 0.0101519264, -0.0115458313, -0.0152260019}, {0.00587209733, -0.00855902303, -0.00234888121, -0.0238022394, -0.00120333734}}, {{0.0041025742, 0.00222135126, -0.00950563885, 0.0150864571, 0.00614483887}, {-0.00764410105, 0.0132292695, -0.0143671324, -0.00410235347, 0.0166414231}, {0.0105968295, -0.0117327664, -0.00282390113, -0.0102979066, -0.0192668959}, {-0.00910725631, -0.0101832533, -0.00579169067, -0.0293574072, -0.0175959449}, {-0.0138951233, -0.00414536102, -0.00546730869, -0.00974100083, -0.00159319479}}, {{0.0124806259, 0.000891899981, -0.0110356724, 0.0259145815, 0.0120229609}, {-0.000164212237, 0.00359243806, 0.0145619148, 0.00306150364, -0.00453503616}, {-0.017055545, -0.0125391716, -0.012916374, -0.00826261099, 0.000972540525}, {0.0134900343, -0.0105988737, 0.00207781023, 0.00668500224, -0.00827105809}, {-0.0195262749, 0.0145963551, -0.00548691629, 0.00717376126, -0.0151027739}}, {{0.00368085154, 0.00490139564, 0.0062904004, 0.00208161771, 0.00477244146}, {-0.00338161853, -0.0144710504, 0.0124909217, -0.00963532086, 0.00405688165}, {-0.00215073465, 0.0258591138, 0.0189020205, -0.00101858284, 0.000254131941}, {-0.000625364948, 0.0180059932, -0.00670619356, 0.00401425129, 0.00143206085}, {-0.0110942461, 0.00648069568, 0.00643772958, -0.00448295427, 0.00147250725}}, {{-0.0213566367, -0.00978380255, -0.00282320729, -0.0106733534, 0.0022082245}, {0.0166261531, 0.0219700858, -0.00771948323, 0.0161932763, -0.0126968864}, {-0.017905429, -0.0110012386, -0.00691014202, -0.0023575516, -0.010942217}, {-0.00778104318, 0.0163688026, 0.00299373572, 0.00410763314, 0.0057091997}, {-0.00497381249, 0.00262831664, 0.00377499568, 0.00444762409, 0.00538946828}}, {{0.00856016017, -0.00891389325, 0.0178494602, 0.00108947756, 0.00519811362}, {-0.0021112496, -0.0136684235, 0.00208278559, 0.000496550696, 0.00456219353}, {0.0114535689, 0.00296111149, 0.000821687456, 0.00773446215, 0.0055216481}, {0.0147233494, -0.000402825419, 0.00505174324, 0.0154881524, 0.0148123261}, {0.000773785985, -0.00490615098, -0.0128192073, -0.00167459832, 0.00533750979}}, {{-0.0146133555, 0.00837238599, -0.00601388235, 0.0137579236, -0.0187866073}, {0.015565265, 0.00847678259, 0.0105433455, -0.00697790785, -0.0100026568}, {0.0027063163, 0.00624672417, 0.012486279, -0.0188822411, 0.00477671344}, {0.00131145865, 0.000414619019, -0.000332561642, -0.00292109651, 0.0151192583}, {0.0077974447, -0.00482435105, 0.0229349826, 0.00252763974, 0.000521588954}}, {{0.00693258923, 0.00666940492, 0.00990490802, 0.0103351623, 0.00169554958}, {-0.0014631399, -0.0136290723, 0.000327039423, 0.0053527425, -0.000824031595}, {-0.00073283806, -0.0119394111, -0.000172263957, 0.0180009361, -0.0110790776}, {0.00804092176, -0.0209990069, 0.00805610977, -0.0144035621, -0.00939205196}, {0.00193428551, -0.00369650009, -0.0120437816, -0.0128342975, 0.00241310662}}}, {{{-0.000902368338, -0.0352029428, 0.00384149677, 0.00967863016, 0.00651127519}, {0.00232585659, -0.0157850143, 0.00556311989, -0.00997290295, -0.00801722426}, {0.0204363279, -0.00485084299, -0.0110566309, -9.88142201e-005, -0.0105673578}, {-0.00749877514, 0.00213859347, 0.0139149921, -0.000766215904, 0.00265644793}, {-0.00296640862, 0.00518261641, -0.0209773984, -0.0145556806, 0.0211662948}}, {{-0.0190136973, 0.0038846212, 0.015267225, -0.0058141523, 0.00742628239}, {-0.0191439018, -0.00688097253, 0.00726459594, 0.00232577021, -0.0137069616}, {0.0057093408, 0.00810960401, -0.000237452667, -0.00645386521, 0.0134222396}, {-0.00947338808, 0.0217498895, 0.019999316, 0.000136931456, 0.000873896701}, {-0.00655521546, 0.00534387352, -0.0104080662, -0.00087721867, 0.0129757375}}, {{0.000704191159, 0.0107727144, 0.00175696576, -0.0047376249, 0.00895354059}, {0.0108142048, -0.00930589065, -0.00650551682, -0.0198914763, 0.0066918605}, {-0.00279246992, -0.0125932144, -0.00437167427, 0.00529162493, 0.0196540784}, {0.0096229827, 0.00800131075, -6.19408966e-005, -0.00243666302, -0.000910563394}, {-0.00216507236, 0.0145723447, 0.0107863443, 0.00127839518, 0.000756022928}}, {{-0.0195725858, 0.0133722508, -0.0261745602, 0.00792266894, -0.0149085633}, {0.0157646518, -0.000221970084, -0.0182082988, -0.00198772387, 0.00776167633}, {0.00981976464, -0.000613168406, 0.0201743226, -0.00166397879, 0.001721006}, {0.00416878564, 0.0170586649, -0.00230417936, -0.01560413, 7.62637064e-005}, {0.00196889904, -0.000488157646, -0.0271598864, -0.00740690809, 0.00112044066}}, {{0.00543808704, -0.00398256397, -0.0137042375, -0.0101298485, -0.00884519238}, {-0.00578035787, 0.00313856336, -0.00515287789, 0.00482504815, 0.00881878193}, {0.0159013867, 0.0170331877, 0.00579142291, 0.00319180056, 0.0168941412}, {-0.000609131122, -0.00263786851, -0.00918180682, -0.00375369284, -0.000922596839}, {0.00489381561, 0.00516905636, 0.00473529147, 0.0302199703, 0.00347121479}}, {{0.0015326587, 0.00355677446, -0.00287953508, 0.0131707694, -0.00927910209}, {-0.00816164166, -0.0114371972, -0.00928005017, -0.0117799267, -0.000768658239}, {0.0205835626, -0.00453769788, 0.00356412656, -0.00446600281, 0.00330505427}, {0.0014833411, 0.00943761878, -0.00645202585, 0.0166613199, -0.00275066728}, {0.00103499077, 0.00186157902, 0.000527186727, -0.00256893877, 0.00425564684}}, {{-0.000125357474, -0.00959768519, 0.0173482317, -0.0116537437, 0.01224727}, {0.0134602757, 0.00486572925, 0.00281078485, -0.00319901435, -0.0270297006}, {0.0146216564, 0.0185501259, 0.00662211468, 0.00827449467, -0.00223679165}, {0.0167109612, -0.00874887593, 0.0131243747, -0.00455552433, -0.00412740931}, {-0.000282516587, -0.0192247443, -0.010242817, 0.00157752761, 0.0107815368}}, {{-0.00734328711, 0.000142245015, 0.00319059333, 0.006396221, 0.00200857385}, {0.0217603575, -0.00296361977, -0.0120026404, 0.00274833548, 0.0077578905}, {-0.00273358217, -0.0211314168, -0.00151315611, -0.000719813339, 0.00347337523}, {-0.00383337261, 0.00403571688, -0.016630521, -0.0018086913, 0.00616829935}, {-0.0098210834, 0.00852352008, 0.00664201891, -0.00493197469, 0.00623341836}}, {{-0.00273884949, 0.000222849165, -0.00479990989, 0.0201901365, -0.00170175254}, {0.0086460067, 0.0111668184, -0.00469065551, -0.0044267904, 0.0158329662}, {-0.00760990195, 0.0154239759, -0.000669894624, -0.00257706735, -0.00241615181}, {0.00147263729, -0.0178306196, -0.00304996897, -0.00215352792, 0.00357869477}, {0.00153771392, 0.00321759703, -0.0123133278, -0.010601351, 0.00549208932}}, {{0.00517861918, 0.00402736617, -0.0020790135, 0.00351788709, -0.00812680554}, {0.00582730724, -0.00194734673, 0.0101887621, 0.0104449317, -0.000996681745}, {-0.00260938401, 0.0218378305, -0.0051536737, -0.00735984603, 0.000234443054}, {0.000934407755, 0.020805629, 0.0105772102, 0.0143199721, -0.00299875485}, {-0.00902068987, -0.000168474071, 0.00269765127, 0.0097604217, 0.00420979504}}, {{-0.000130371584, 0.00920045748, 0.00547294458, -0.0088506313, -0.0132611487}, {-0.00103918323, -0.000551763631, 0.00784006435, 0.0129195387, -0.00227355259}, {-0.010378751, -0.0193354972, 0.00879100338, 0.0100590317, -0.0045286594}, {-0.00514703523, 7.82927891e-005, -0.00697509618, -4.60659576e-005, 0.000676064286}, {-0.00851737894, -0.0121403607, -0.00206195866, -0.00774198724, -0.00478863064}}, {{0.0357577689, -0.0066733053, -0.0115342699, -9.67550732e-005, 0.00832278747}, {-0.00190911721, 0.00107168907, -0.0162857361, -0.00609658379, 0.0223499704}, {-0.0107053248, 0.00996525213, 0.00187891419, -0.0126027903, -0.0143294279}, {-0.0174729209, 0.0267606694, 0.0154551324, 0.00714822765, -0.00626288587}, {0.0105881449, 0.00226773252, 0.0117707457, -0.00232080673, -0.0122878393}}, {{-0.00868541654, -0.00479707913, 0.00966689643, 0.00339742959, 0.00337316073}, {-0.000931838702, -0.000315358397, 0.00399605604, -0.00744040962, 0.00554468203}, {0.0070422804, -0.00182874966, 0.00880971923, -0.00471433997, 0.0179345887}, {-0.00205258187, 0.00701270299, 0.00433716737, 0.0171696823, -0.0108116129}, {-0.00650893059, 0.014300134, 0.00202433532, 0.0112626441, -0.0094192056}}, {{-0.0146822846, 0.00426676823, 0.0038279593, 0.000977320131, -0.00848442782}, {0.0156977344, -0.00750357378, -0.00539690582, -0.000310796255, 0.0101742717}, {-0.00551588833, -0.00384843629, -0.0304977745, -0.00821539387, -0.0226649269}, {0.0262250975, 0.011970927, 0.0236282591, 0.0136975013, 0.0128447041}, {0.0185190979, 0.0173590239, -0.00897328742, 0.0137943951, 8.39558707e-005}}, {{-0.00131462223, -0.00630706456, 0.00618743338, -0.00590482354, -0.00867060293}, {-0.00733721768, -0.0278976671, 0.00353611703, -0.0102351019, -0.00597552629}, {0.000111310415, 0.00361175858, 0.00857650861, -0.00687102135, 0.0210324805}, {0.00781032862, 0.00229799189, -0.000923778047, -0.00061345048, -0.0140477028}, {0.0102561722, -0.00130798493, 0.00114742201, -0.00229636137, 0.0109240711}}, {{-0.00642304076, 0.0154511062, 0.0143307438, 0.0014792023, -0.00839948002}, {0.00269785477, -0.003523811, -0.00161539938, -9.64614301e-005, -0.0154215004}, {0.0093034301, -0.00632581674, 0.0149095897, -0.0102303931, 0.0153832315}, {0.00361732044, -0.000584678433, -0.0192121416, 0.00843255408, 0.00375779788}, {0.0112902699, -0.00378009235, 0.00368897361, 0.00101864489, -0.000816950982}}}, {{{-0.0133841317, 0.00517248642, 0.00388580258, -0.00499470625, 0.00854328088}, {-0.00130407058, 0.00559982006, 0.00880969223, -0.00994809717, -0.000247026852}, {-0.00422115019, 0.0190706756, -0.00696188118, -0.013720084, 0.0196163673}, {-0.00560181448, -0.00622710679, 0.0180781465, 0.00957702752, -0.0130748842}, {-0.000799434434, -0.0146399569, -0.00275339885, -0.00516626844, -0.00826078933}}, {{0.00211996492, 0.00100410311, 0.0088691609, 0.000145415834, 0.00309816515}, {0.0215228498, 0.00919462927, -0.0115190111, -0.00664306805, 0.00672053779}, {-0.00175638008, -0.00248010573, -0.0140637066, 0.00283530774, 0.0127159534}, {0.00649508974, -0.00800996833, 0.00737594441, 0.0104454318, 0.00534090446}, {0.0135501605, -0.000857811596, -0.000684149214, 0.00639282865, 0.0100091007}}, {{0.000160005948, 0.0184009671, -0.0106193461, -0.00395473465, 0.00355268666}, {0.0149994791, -0.00959858019, -0.0103601804, -0.00794317853, -0.00821667537}, {-0.00106222299, -0.00516276294, 0.00760713406, 0.0083463816, -0.0121401194}, {0.00111108506, 0.00834745541, 0.0137817105, 0.00251541822, 0.00919722952}, {0.0108408574, 0.00564819714, 0.0117742289, -0.0138270622, 0.0118825631}}, {{0.00309617678, 0.0130573642, -0.00770034781, 0.0159699135, 0.0122880274}, {0.0054031983, -0.00175768568, -0.0138634751, -0.0139373634, -0.0112455543}, {0.0118700713, -0.0204036385, 0.00817396399, -0.0136875492, -0.00294244615}, {0.00135443779, 0.00970828813, 0.0025237496, 0.0133375153, -0.00301785441}, {-0.00558778644, -0.00708037242, 2.86222757e-009, 0.00621339958, -0.00259355572}}, {{0.0025506136, -0.0206401609, 0.000694346789, 0.00336939353, -0.00269044447}, {-0.0157870706, 0.00795804802, 0.00246869051, 0.0173542406, -0.00304488535}, {0.00947671942, -0.00443010218, 0.0177085102, 0.00714277569, 0.000449627812}, {0.0185063966, -0.00665766513, -0.00480474206, 0.0039091194, -0.00459448295}, {0.0141918752, 0.00113194587, -0.0179537982, -0.000722009107, -0.00125184807}}, {{-0.0042431918, 0.00246344157, -0.0148146963, -0.0148119694, -0.0033029886}, {-0.0053115543, 0.00921554305, 0.0210465938, -0.0118021388, 0.00561907794}, {0.0121728387, 0.00300899427, 0.0039514075, -0.00277659134, 0.000289444841}, {-0.00205636257, -0.0116897244, 0.00721685821, 0.00351758604, -0.00240363134}, {-0.0103601608, -0.00643107295, -0.00152536004, 0.0143916849, -0.00178276922}}, {{-0.00213354244, -0.00341463997, -0.00847820193, 0.00569289224, -0.00939034671}, {-0.0109304795, -0.0166261885, -0.00233648601, 0.00205577002, 0.014284608}, {-0.00795872137, -0.00191108289, -0.00616745744, 0.0146414908, -0.00831999537}, {-0.00998585951, -0.0168233067, -0.00469150022, -0.0259639658, -0.00487684878}, {0.00639370969, -0.00903510116, 0.0192119405, -0.0208327025, 0.0146184331}}, {{0.00641819416, -0.000755319721, 0.00844735187, -0.00822502561, 0.00405944185}, {-0.00381425256, 0.011874768, -0.0165787842, 0.0060771904, -0.0106896982}, {-0.00628097402, 0.0134070981, 0.0186332855, 0.0189408939, 0.010344767}, {0.000692112313, -0.00670610415, -0.00994407199, 0.00830248743, -0.00767995417}, {0.00722476188, -0.0120963827, -0.00316433632, -0.0166924316, -0.00621558586}}, {{0.0121531682, -0.00673439354, -0.00194656476, 0.0163910203, -0.00871630572}, {-0.012885632, 0.0124476515, 0.00995790306, 0.0176333282, -0.0206202343}, {-0.000196793437, 0.00475609116, -0.0346443988, -0.00731908996, -0.00782943051}, {-0.00627175765, 0.00284991041, -0.00857353024, 0.00705088628, -0.0151540777}, {0.0113510843, -0.0166594349, -0.00294808438, -0.0317094475, 0.00375050795}}, {{-0.00416995073, 0.0112105384, -0.0061428831, -0.00155082112, 0.00174899143}, {0.00904260762, -0.0181630738, -0.00613563089, -0.00639902987, 0.00991461519}, {0.00168411457, 0.00546824979, -0.00488510868, -0.00148911343, 0.00471059605}, {-0.00153123203, -0.00713272532, 0.0011407017, -0.0103219133, 0.00336266938}, {-0.00282104127, 0.00902923383, -0.0136555843, -0.00513871759, -0.00517915888}}, {{-0.0110055907, -0.0120390486, 0.0167705826, -0.00752871344, 0.00047160199}, {0.00264893728, 0.000266684045, 0.00543358643, 0.00127638783, -0.00594511675}, {-0.0221712459, 0.00554232951, -0.00475927442, 0.00694111176, -0.0109394072}, {0.000285658025, -0.0021829973, 0.00143967324, 0.0058084433, -0.00575222773}, {-0.00989163294, -0.00161403895, 0.00438567344, 0.00510337809, 0.0165045876}}, {{0.0016798405, -0.00682483241, 0.0116909193, 0.00879919808, 0.0070878868}, {-0.00525206979, 0.00402864721, -0.0090199355, -0.00325663551, 0.00436151866}, {0.00268027978, -0.00802369229, -0.00182976096, -0.0184297003, -0.00338534103}, {0.00390207232, -0.00186759408, -0.00425713509, -0.00188293552, 0.00711995875}, {-0.00673643453, 0.00909364689, 0.0140905762, 0.000182797361, -0.0093958918}}, {{0.00148697454, 0.000959475001, 0.00254632626, 0.00191853533, -0.0017941813}, {0.00687314896, 0.00355574605, 0.00526272831, -0.0141043086, 0.0209580883}, {0.0202442054, 0.00341771869, 0.00340953399, -0.0180731583, -0.00283644325}, {-0.0155487219, -0.014874802, -0.0135596488, -0.00172247062, 0.0318471082}, {0.00264850399, -0.00126535818, 0.00254973257, -0.000354822609, -0.0002806462}}, {{0.0133336354, 0.0101685431, 0.00867388863, -0.00478974171, 0.00876506511}, {-0.0083178049, 0.0100887278, -0.000292365323, -0.014390789, -0.00669986056}, {-0.00422047032, -0.000817466236, -0.00308271917, 0.00990148727, 0.00343462429}, {0.0159307085, 0.00229760539, 0.00271956134, 0.00141231052, 0.0157271065}, {0.0277301464, -0.001083954, -0.011930679, -0.0181601457, 0.00265493221}}, {{-0.00575151853, 0.0168529209, -0.00757680461, -0.00289197266, 0.00340991421}, {0.00855285022, -0.00340669695, 0.00236723619, 0.00466886628, 0.0101920227}, {0.0198367797, 0.00701874169, -0.00499004591, -0.014024538, 0.00755830295}, {-0.0120328953, -0.0140997665, -0.0100327907, 0.0117457109, 0.0050193551}, {0.0128840627, -0.0035111953, 0.0350502282, 0.000837352651, -0.0109030148}}, {{0.00841144379, -0.00656127138, -0.0171302781, 0.0143850725, -0.000701992365}, {-0.00335681788, 0.0111183207, 0.00514378166, -0.000552525162, -0.0113340067}, {-0.000465569232, 0.0123818964, -0.00129954657, -0.0292830877, 0.00421949895}, {-0.011796819, 0.0163604449, 0.0296607483, 0.0136830835, 0.00377946743}, {0.0127943419, 0.000825902971, 0.0184657369, 0.00976787321, 0.0112341363}}}, {{{0.00128892728, 0.00727827242, 0.0124504073, -0.00956203882, -0.01389689}, {-0.0176789295, -0.000135289913, 0.00332947471, -0.00600798009, 0.0089738844}, {0.0266065262, -0.00433648285, -0.00823228341, 0.00758402469, 0.00470166514}, {0.00806748215, -0.00989107694, 0.000715123257, 0.000403520651, 0.0175465066}, {0.0024875619, -0.00316563831, -0.0192104392, 0.0181566812, -0.00280431798}}, {{-0.00369930035, -0.0101634553, -0.00811019633, -0.00915353093, -0.00457383832}, {-0.0121447993, 0.00874389429, -0.0126699451, 0.00792851206, -0.00044382544}, {0.00249221711, 0.0024130689, -0.00423073815, 0.00317826122, 0.00736123696}, {0.0173058063, -0.00262664189, 0.0066984361, -0.00948263984, 0.0140918717}, {-0.00516806589, -0.00440487871, 0.0108443778, -0.0122965667, -0.00712391175}}, {{0.00291425735, -0.00537093822, -0.00319742761, 0.0084066065, -0.00911138207}, {-0.000639622856, 0.0126673868, -0.0101607898, -0.00776729407, 0.0038314655}, {-0.0208509006, -0.021162251, 0.00104164309, -0.00437072339, -0.0222496334}, {-0.0163813252, -0.00163631386, 0.00223431294, -0.000734508969, -0.00181565294}, {0.00630373787, 0.00612082053, 0.0149918422, -0.00397341093, 0.0112182563}}, {{0.0121130077, 0.0114553003, 0.0180042889, 0.010357203, -0.00252566999}, {0.00326323556, -0.00679992419, 0.00151206809, -0.00860586762, -0.0153207676}, {-0.00469751144, -0.00396792497, -0.00837049633, 0.0028597489, 0.00990192872}, {-0.00475139916, 0.00798411295, 0.00302777765, 0.0013514352, -0.0113092298}, {-0.00466226973, -0.00439361157, 0.00367338327, 0.00144359411, 0.00617133174}}, {{0.00439661136, -0.0111080334, 0.011218302, -0.00281052245, -0.00655107806}, {-0.00755991368, -0.00914503634, 0.00885196961, -0.00129299203, 0.00868845452}, {-0.00146472594, -0.00653369306, -0.00169176108, 0.016619578, 0.00893560983}, {-0.0018338263, -0.00457529444, -0.00410840241, 0.00611010194, -0.00105363794}, {0.0270079337, -0.0127387336, -1.51642414e-008, -0.00905084424, 0.00678306725}}, {{0.0067736241, -0.00615064427, -0.010028813, -0.0133065805, 0.0078488728}, {0.0152833629, 0.0192142017, -0.00301098591, -0.00527060172, 0.00817457587}, {0.012272777, -0.000444279256, -0.00271216338, -0.00168188603, 0.00265309215}, {-0.00962966122, -0.000581027416, 0.00722324848, 0.00484776171, -0.00293653551}, {0.00804699957, -0.00091215322, 0.0068401522, -0.0106675113, 0.0178129319}}, {{0.000185227385, -0.0210285634, -0.010107981, -0.00136010908, -0.00439946633}, {-0.0142373098, 0.0253030043, -0.00191925699, -0.0120557426, 0.0121902693}, {0.00652093813, 0.0133267464, -0.0171312988, 0.018725818, -0.0171396378}, {-0.00677293213, 0.017034987, 0.00677249348, -0.00879706163, -0.0119060203}, {-0.00143665436, 0.0154433781, 0.021171825, -0.00888874196, -0.00754507398}}, {{0.0059413882, 0.0035091755, -0.00323089794, 0.00120861712, -0.00692816032}, {0.00130219769, -0.0106968116, -0.00324001396, -0.00915487763, -0.000262929883}, {-0.00210965145, -0.00983257312, -0.00946004782, -0.00356100826, 0.0133153293}, {0.0032017699, -0.00655952748, 0.0208326746, 0.00613421295, -0.00177292118}, {-0.00590028474, 0.0194440316, -0.0118351402, 0.0114886062, 0.00359775685}}, {{0.0172555521, -0.0181372706, 0.00614243932, 0.00422406988, -0.020324111}, {0.00362991611, -0.00475283712, -0.00245943037, -0.00731865177, 0.0128497984}, {0.00585727626, 0.00654577417, -0.00412072055, -0.00898194592, -0.00744110905}, {0.0119618867, -0.0126779238, -0.0340311266, -0.00625433913, 0.00388835161}, {0.0134859337, -0.00359436264, -0.0100221504, -0.00873997808, -6.96470233e-005}}, {{-0.0104592349, -0.0202795211, 0.00424489519, -0.000566242961, -0.00821790099}, {0.0142726693, -0.0119522261, 0.00385476206, 0.00308414595, -0.00909170602}, {0.0160834976, -0.0171574503, 0.00540415617, 0.00502306735, 0.000390357542}, {0.0224029217, -0.0115835955, 0.00382554182, -0.000738135888, -0.000554074941}, {0.0061005801, 0.00669856928, 0.00871858653, 0.0180622134, 0.0104218433}}, {{-0.0161230434, 0.012029063, 0.00186831038, 0.00297897938, 0.00443123095}, {0.00136672251, -0.00235352246, 0.00817099307, -0.0147616575, 0.00208696933}, {-0.00803539995, -0.0108181965, 0.0173146911, 0.000641030842, 0.0137200337}, {-0.00643542968, 0.00343899848, 0.0169229433, 0.00749923801, 0.00326030236}, {-0.00327117182, -0.010033885, -0.00700399466, 0.00679049129, 0.00242220284}}, {{0.00624805596, 0.0060801208, -0.0124039045, 0.00460860133, 0.000391932525}, {-0.00185743463, -0.00279691815, 0.00962099433, -0.0163137224, -0.00564779481}, {-0.00551167503, -0.00315406732, -0.0173864309, -0.0102690347, 0.00169983925}, {0.0101095745, 0.00780051388, -0.0132567855, -0.00056892616, 0.0144832404}, {-0.000135778944, -0.00271400507, 0.00664830394, 0.018198248, -0.000367683766}}, {{0.0122800888, -5.1562336e-005, 0.00133407139, 0.0128665417, -0.0158082377}, {-0.00542216795, 0.00446879491, -0.0111589702, 0.00181523885, 0.00419842685}, {0.00258746371, 0.00230129133, 0.00920336414, 0.0181787126, 0.00721679954}, {0.00365351792, -0.000492423016, 0.00959695503, -0.00918447133, 0.00622961204}, {-0.0128847221, 0.0194330588, -0.00112522044, -0.0121070119, 0.00660896115}}, {{0.0118391896, -0.0140772909, 0.0152390255, 0.0200643186, -0.00792828109}, {0.00223471387, -0.000853225647, -0.00583852828, -0.000941468577, 0.00145766221}, {0.00788127165, -0.0111414669, 0.00712127378, -0.0034868475, 0.0049465457}, {0.00529467547, 0.00311103323, 0.0108894771, -0.0272340514, 0.00402215263}, {0.00495314412, 0.00226933695, 0.0127600534, 0.000176002606, -0.00956914108}}, {{-0.00193778344, -0.00940500014, -0.00623334665, 0.0105323819, -0.0104073361}, {0.0125624929, 0.0132042682, -0.0140217869, -0.00900843274, 0.00842186715}, {0.00434622681, 0.0034057172, 0.00446066447, 0.00139181945, -0.000998436939}, {0.0111124227, -0.00188362447, 0.00165603403, -0.0130647831, 0.00482923351}, {0.00600476516, 0.000165019941, -0.00647613639, 0.0005551707, 0.010608783}}, {{-0.00104176521, -0.00341093354, 0.00399205834, -0.00241075107, 0.000493526168}, {-0.00810347218, -0.0050322623, 0.0136530316, 0.0110388109, 0.0154106682}, {-0.00841481704, -0.0111953132, 0.0101685431, -0.00450643618, 0.0133654168}, {-0.00573830074, 0.0019103369, 0.0134619987, -0.0154366121, -0.00542629743}, {0.00317130657, -0.00185956224, -0.00672168797, 0.0155014014, -0.00519942585}}}, {{{0.00133600377, -0.0135669438, -0.0113307098, 0.00601356942, 0.00837964099}, {-0.0101909125, -0.00503290119, 0.00878323149, 0.0089827748, 0.00485558109}, {0.00164295814, 0.0105524147, 0.0102512036, -0.0230515767, 0.00664087944}, {-0.00432764646, 0.0189453587, 0.0052447468, 0.0173603781, -0.00577180833}, {-0.00757713011, -0.014321059, 0.0207374394, -0.00118946447, 0.00146152906}}, {{-0.00531789381, -0.0106380098, -0.000126075785, 0.0147519391, -0.00233694701}, {-0.00726752169, 0.00545929372, -0.00431072339, -0.0121647781, 0.00960163772}, {-0.00268063345, -0.00643477822, 0.0113346986, 0.00304406229, -0.0092561096}, {-0.00373367127, -0.00158122741, 0.00606620545, -0.0177987814, -0.00892004091}, {-0.0037518891, 0.00650637504, -0.00399020826, -0.0290067196, 0.00584850786}}, {{0.0181598663, -0.00808078703, -0.00911630597, -0.00196773792, -0.00531095173}, {0.00620512245, -0.0066284826, -0.00361800333, 0.00185509573, -0.00212579011}, {-0.0247564837, -0.00476837344, -0.00334674702, 0.0108943982, -0.00529648783}, {-0.00386445387, 0.00656919694, 0.00166203547, -0.0054941182, -0.00583936088}, {-0.00859639514, -0.00775939599, -0.00534512196, 0.00125836139, 0.00421669614}}, {{0.00715872133, -0.0105160587, -0.00336121698, 0.00797869079, 0.00627815258}, {0.00666351477, -0.00308998441, 0.00543409865, 0.0126783187, -0.0181122273}, {0.017313635, -0.0279387645, 0.004624811, 0.0182881895, 0.00693921139}, {-0.00389476027, -0.00650211051, -0.00537876459, -0.00401127152, -0.000193595406}, {-0.00476151844, 0.00862275995, 0.00797390193, -0.0103854286, 0.00329433288}}, {{0.00661350973, 0.00911496952, 0.00221509859, 0.00268442114, 0.00109179667}, {-0.011498712, -0.00928873103, -0.00744747603, -0.00643885182, 0.00590148428}, {-0.00287303329, 0.00483842846, 0.0152204903, -0.00583368028, 0.0127262408}, {-0.00371739338, -0.0103289466, 0.00282702711, 0.00328481873, 0.00126606808}, {-0.00226133689, 0.00396341598, 0.00221109344, -0.00248110387, -0.0143929599}}, {{0.00103309855, 0.00925784279, -0.00168990262, 0.00288161915, 0.00380004779}, {-0.0041231825, 0.0099086659, -0.0036016549, 0.00498334365, 0.00300568016}, {-0.0175941754, 0.00209505158, 0.0323843583, 0.00915735681, -0.00519225467}, {-0.00970113929, -0.00604553474, 0.00344347302, -0.0131321223, -0.00830801018}, {0.00913792942, -0.00160192186, 0.00991918053, -0.000620017585, -0.00114196318}}, {{0.00194196159, 0.00926415995, -0.00114990934, 0.00365962088, 0.00507237203}, {0.0102785081, 0.00492668711, -0.00780146988, 0.00307537685, 0.0287206359}, {0.0164006893, -0.00686766719, 0.00950387772, -0.00463653868, 0.00454519643}, {0.00392357586, -0.0046414719, 0.013200541, -0.0193354748, 0.000520244765}, {0.0100987498, 0.00982223358, 0.0150058065, 0.0135302786, -0.00205388828}}, {{-0.00412587728, 0.0208440945, 0.00282439124, 0.0135990717, -0.00929191802}, {0.00353918062, -0.000484094868, -1.98565022e-008, -0.00263474882, 0.0205534566}, {-0.00366224558, -0.00722947484, 0.00530693261, 0.00774468854, -0.00707942853}, {-0.000576307066, -0.0103764646, 0.00631827256, 0.00518341828, -0.0176061485}, {-0.00980709214, 0.00129604642, 0.0143132322, 0.00534564443, 0.00102538266}}, {{0.0199792404, 0.0136341751, -0.00878106151, -0.00590304704, -0.00381376967}, {-0.00745909056, 0.00796353817, -0.0110406894, -0.00426385133, 0.0060751983}, {0.00766971521, -0.00577077782, -0.0103358049, -0.0014771123, -9.05966857e-008}, {0.00724040391, -0.00265840953, 0.0150884856, 0.0134662502, 0.00413529854}, {-0.00663874205, 0.00169242523, -0.00199562032, 0.0107538849, -0.0108559327}}, {{-0.00260230363, -0.0182623304, 0.00393843092, -0.00898745004, -0.0231401566}, {-0.00378273334, -0.000994447968, 0.00953223929, 0.0170206763, -0.00324063771}, {0.00716068735, 0.00131314003, 0.0132782012, -0.00556510501, -0.0191228483}, {0.000616577687, 0.0129578803, -0.0141404429, -0.00526845781, -0.0101245958}, {-0.022310609, 0.00278109917, 0.00334600918, -0.00588905253, 0.00943142455}}, {{-0.00336819864, 0.00625399733, -0.00109979068, 0.00919952895, 0.00146376318}, {0.00104328978, 0.0119246673, 0.0119026704, 0.00465447688, 0.00723548606}, {0.0134838503, 0.00187934982, 0.0121672386, -0.0058825626, -0.00534890825}, {-0.00148993789, -0.0147352312, 0.0091900574, 0.00853883568, -0.00190911721}, {-0.00299420301, -0.011799166, -0.0218786057, 0.0111450357, 0.00330674602}}, {{0.0108363191, 0.00715964148, 0.0114453686, -0.00650756806, 0.00395386433}, {0.00214965036, -0.00356825022, 0.0129757375, -0.00586793246, 0.0129803438}, {-0.0055488986, 0.0201118849, -0.00331103476, -0.0114333062, -0.00633111643}, {-0.0057577868, 0.00695993472, 0.00791765843, -7.79643905e-009, -0.00904219784}, {0.00995854568, 0.0108984057, 0.00493108854, -0.0088095041, -0.00434648013}}, {{0.0200782865, 0.00859325752, -0.00716048758, 0.00299020414, -0.00409025559}, {0.0104487939, -0.00408691308, -0.0036534653, -0.016191775, 0.00119347405}, {0.0023802428, -0.00211813324, -0.0136126727, 0.00698716613, -0.0104226321}, {-0.0105760507, -0.0049961633, 0.00601005321, -0.00563490996, 0.00706674438}, {-0.00863994844, 0.00127552939, -0.0159511194, -0.00138560683, 0.00114681711}}, {{0.00396503508, -0.000501435366, -0.0157342125, -0.00253893971, 0.00268731616}, {-0.00672375178, 0.00749298837, 0.000309270836, -0.00333413016, -0.0060462784}, {-0.00775979413, 0.00681721838, 0.00669931527, -0.00193711719, -0.0204267725}, {-0.00204532919, 0.00901611429, -0.00288326992, -0.00120112044, 0.0198139418}, {0.00515129324, -0.00273301662, 0.015594082, 0.0165558234, -0.00492663914}}, {{-0.00690257316, 0.000197938018, -9.48586967e-005, -0.0061481297, 0.00822607614}, {-0.010442541, 0.0107078366, 0.00828617066, -0.0121609066, 0.0207675435}, {-0.00115221471, -0.0167152621, 0.0149976034, -0.00539002195, -0.0199826732}, {0.0181405954, -0.0181367844, -0.00131621002, 0.00989725906, -0.000366578723}, {-0.0152820805, -0.00608953694, -0.007400034, 0.0132521978, 0.00431160955}}, {{0.0243155491, -0.0151097421, 0.00992413051, 0.0125444643, -0.00103958428}, {0.00601371005, -0.00130678667, 0.00668878295, 0.00669285981, 0.000351527764}, {0.00547327474, -0.000656466407, 0.00388369779, 0.00367499446, 0.00510026421}, {-0.00762785831, 0.00343968812, 0.00163566112, -0.00261636125, 0.00933842547}, {0.00830454286, -0.00180071115, 0.0121940607, -0.0125833116, 0.0118072229}}}, {{{-0.00424562534, -0.0132127721, 0.00888031907, 0.00158571359, -0.00658456841}, {-0.00876490586, 0.00849733409, 0.000383130304, 0.00259639253, 0.00570470514}, {0.00590533111, 0.0242909193, -0.0104620708, -0.00670880452, 0.0058653364}, {0.0153274173, -0.00833596941, -0.000445934129, 0.00609392254, -0.0141773205}, {0.00452243164, -0.00599826081, -0.00118711579, 0.0141517101, 0.00914933626}}, {{0.00128889771, -0.00386623712, -0.0067135659, -0.00293926313, -0.00677177496}, {-0.00971880183, 0.0012057717, 0.00192634203, -0.00865045376, 0.00183152815}, {0.0089317793, 0.00106208411, 0.0143742589, -0.00808037631, -0.0108291935}, {0.00169013941, 0.00772597361, -0.0119501296, -0.00296636345, -0.0178327709}, {-0.0181581285, 0.00455619581, -0.0171869639, -0.00525637111, 0.0124470312}}, {{0.00449230848, 0.0155078024, 0.0107454797, -0.00156051049, -0.00425464334}, {-0.00987049472, -0.00366662489, 0.000750040344, 0.0202394947, -0.00596989552}, {-3.9299819e-005, -0.00179076835, -0.00607217615, 0.0130400928, -0.00499604596}, {-0.00759741152, -0.00121365499, 0.000194808934, -0.00836092047, -0.011303802}, {0.0186179727, -0.00079351, -0.0059962594, 0.00644767471, 0.0119002238}}, {{-0.00622603483, 0.0240471233, -0.0164086744, -0.0189823117, -0.00263635139}, {-0.00303464918, 0.012194491, 0.00617915299, -0.00629825657, 0.005549083}, {-0.0139814746, 0.0179720297, 0.012486442, 0.00667674607, -0.0216031764}, {-0.0212895498, 0.00543980068, 0.0142057426, -0.00686115492, 0.0036322223}, {-0.0105196415, -0.00477735559, 0.0149609204, -0.0126095861, 0.0100576337}}, {{0.00341596315, 0.0108061312, 0.0142487697, 0.0128376391, -0.0219745953}, {-0.00404697331, -0.00378381135, -0.0180023517, -0.0102316281, -0.00112438714}, {0.00767932879, -0.00509422412, 0.0153826727, -0.00245295907, 0.0198018383}, {0.00804232154, -0.0239776019, 0.00656097569, -0.011264923, -0.0174843688}, {-0.000456522335, 0.0042635682, 0.00763810892, -0.0179309826, 0.0196848474}}, {{-0.00767593458, 0.0215478558, -0.00326714851, -0.00715741469, -0.00831770524}, {-0.00418067817, -0.00293426262, 0.00258126296, 0.000750413805, 0.00892191753}, {-0.00968843699, 0.00267462805, -0.00466177613, 0.0133556854, -0.00217179558}, {-0.0107978135, 0.000618080376, -0.00609302381, -0.00788923074, -0.00779258367}, {-0.00640086178, -0.0020988544, -0.0127134193, 0.0169563964, -0.0217844564}}, {{-0.00114967022, -0.00811153837, -0.00995894894, -0.00966156553, -0.0150226234}, {0.00233350811, 0.00904522929, -0.00741010206, -0.00797193497, -0.00638362858}, {-0.0124598732, 0.0224108845, 0.0112701058, -0.00105692807, -0.00940020476}, {0.00533201266, -0.00262076547, 0.0031735485, 0.00751831569, 0.00793263689}, {0.00774497865, 0.0152945546, 1.16376896e-005, 0.00328757428, -0.00807192363}}, {{0.00817591045, -0.00867493637, 0.00211417931, -0.00234232028, -0.00372559787}, {-0.00784676429, -0.0103295818, -0.011175463, -0.0136356894, 0.0114850793}, {-0.00754937995, -0.00411139661, 0.0106841959, 0.0160710625, 0.00138134835}, {-0.018732436, -0.0118241692, 0.000173943801, 0.00403488567, -0.000960078556}, {-0.00586628029, 0.00224273256, -0.00203495217, -0.0144432029, 0.0130677121}}, {{0.00813329872, 0.00295775267, 0.00656068046, -0.00782836508, 0.000394372619}, {-0.000979382894, -0.0104311667, 0.00966710225, 0.00272418302, 0.00171739713}, {0.025140306, 0.000138529504, -0.0016881692, 0.00583274476, -0.00178801152}, {-0.00264626462, -0.00481359567, -0.00205205684, 0.00632313685, -0.00197139522}, {-0.00573004922, 0.00848601758, -0.0147522595, -0.00103969814, -0.0252172109}}, {{0.0193478949, 0.0172179993, 0.0118482253, 0.0104373246, 0.00724973204}, {0.00868698489, 0.00449693343, -0.00149896031, 0.00755967805, 0.00693000294}, {-0.00937378779, 0.00122604135, 0.00533506833, 0.00681345956, 0.00462472998}, {-0.00113431679, -0.00814600568, 0.0096521033, -0.000810577534, 0.0049002273}, {-0.00918954425, -0.00590392854, 0.00290648523, -0.0163112395, -0.01256999}}, {{-0.012476678, 0.00227789977, 0.00179253635, -0.00799453165, -0.00637099333}, {0.0012523277, -0.0151736941, -0.00830216706, 0.00874335226, -0.000933900476}, {0.00931703113, -0.0210543387, 0.0113455383, -0.00252758199, 0.00689576566}, {0.0123802554, -0.00501006655, 0.0112551898, 0.0106461681, -0.00128890388}, {0.0073761628, -0.00633561378, 0.0165225752, -0.000682811136, 0.00505887112}}, {{-0.0116562303, 0.00228848285, 0.0068816822, -0.00989456102, 0.00033612593}, {-0.00458771829, 0.0153285824, -0.00232433924, -0.00429268368, 0.00265618344}, {-0.0100010186, -0.00975339673, 0.0148501601, 0.012904902, 0.012274377}, {-0.00308710639, -0.0187705848, -0.0183932614, 0.00680115726, -0.00642409921}, {-0.0050673238, -0.0071075093, 0.000867716095, 0.0153300064, -0.020152431}}, {{-0.0155012459, -0.0110738268, 0.00622873055, 0.00212045014, 0.00807971135}, {0.0110753812, 0.000112053596, 0.0113523444, -0.0124864299, -0.0148053598}, {0.00303150644, 0.00664297165, -0.0146811847, -0.0123949433, 0.00542841153}, {-0.012592772, 0.00725457724, -0.0119285416, -0.00840877183, 0.00284826965}, {-0.000525250507, 0.00342297228, -0.000836501014, -0.00850544777, 0.00310218241}}, {{0.00515226601, -0.00506855501, -0.00497904373, 0.0033799801, -0.00194564939}, {-0.00831792876, -0.000561117078, 0.0085367579, 0.0020844636, -0.0100770611}, {-0.00210551266, 0.00820848718, -0.000309353578, 0.00301174377, -0.00417365879}, {0.00189967721, -0.000394998875, -0.000893604185, -0.00115906203, 0.00110114564}, {-0.0111048259, -0.0035601994, -0.00998863392, -0.0153150903, -0.0049755862}}, {{0.00068162533, 0.0191522408, -0.00472738594, -0.00827289931, -0.0153265037}, {0.0255062636, 0.00184441358, 0.0116032623, 0.00336157437, 0.0172777195}, {-0.00608924683, -0.000717588933, 0.0102135697, 0.000206211145, 0.0003026755}, {0.00700229127, 0.00635063648, 0.000545072195, -0.0243200045, 0.00174538209}, {-0.000380532554, 0.00495509757, 0.014015059, 0.00781967305, -0.000490234757}}, {{-0.00645917933, 0.00934666209, -0.0153521169, -0.00912895426, 0.0194446817}, {0.0138338245, 0.00327066286, 0.0117725497, -0.00355056208, 0.00852847192}, {-0.019459974, -0.0103255082, -0.000167985345, -0.00804871693, 0.00384246884}, {0.0117149744, -0.00303137675, 0.00376302516, 0.00116647931, -0.00832417607}, {0.00934628025, 0.00268919859, 0.0135522028, -0.00939242449, -0.020127533}}}, {{{-0.0103384173, 0.0196947046, -0.0170932338, 0.00973675027, -0.0224489048}, {0.0061056721, 0.00488814944, 0.0100030452, -0.00715812575, -0.00303697097}, {0.00790333189, 0.000847456744, 0.00329355104, 0.0052435454, -0.0132776704}, {-0.0124117862, -0.0101044662, 0.0067134616, 0.00788295269, -0.0146911368}, {-0.0169243217, 0.0023198945, -0.0179587901, 0.00296623004, 0.00150480692}}, {{0.00544000464, 0.00262531731, -0.00675719511, 0.00399912335, -0.0282820873}, {0.00930986833, 0.00874937139, 0.0183495414, -0.0222865865, 0.00614610873}, {-0.0174341239, 0.020904649, 0.000115537179, 0.0072732009, -0.000523883733}, {0.00610871566, -0.0133077214, 0.00762275793, -0.00354859093, 0.0151787186}, {0.017435072, 0.00872456562, -0.0222877301, 0.0159370918, -0.00186288054}}, {{-0.00428581145, 0.0132848555, -0.00916098244, 0.00789025985, 0.0189045724}, {-0.00363682932, -0.00483702868, -0.0239155497, -0.0111809717, -0.0114806117}, {0.00585258845, -0.00839860644, 0.00634885905, -0.0110134631, -0.00366445561}, {0.00783354137, 0.0210915506, 0.00172815239, -0.0254283268, 0.00799186435}, {-0.00126353663, 0.0176689494, 0.00670927064, -0.0182313528, 0.00787832588}}, {{-0.00101375964, 0.00862833299, 0.00591211487, 0.00327525823, 0.00298961578}, {-0.00166478334, -0.00163689326, -0.0168678202, 0.00828173198, -0.000333484029}, {-0.0114975711, -0.00685113017, 0.000437025039, 0.0144368187, 0.0111932307}, {0.0097757997, 0.00937165041, 0.00150338758, -0.00438234676, 0.00106529891}, {-0.00270191277, -0.00436829496, 0.00875606108, -0.00501054851, -0.0174820032}}, {{-0.0122019714, -0.00182382169, -0.00215825951, -0.00728020305, 0.022693174}, {-0.00230731582, 0.00641163485, -0.002317362, 0.0219331887, -0.0131278364}, {-0.00169727195, -0.00377880433, -0.000705842627, -0.0105208335, 0.00964323059}, {-0.0157114603, 0.0150908353, 0.00149655493, -0.00938314479, 0.00255994964}, {-0.00968414079, 0.0146463467, -0.00851340499, 0.0169647746, -0.00422292482}}, {{-0.000526228861, 0.00759582547, -0.000287798524, 0.00288012088, -0.0146048712}, {0.0174588133, 0.00051519135, -0.00415455922, -0.00519027608, -0.000230361868}, {-0.0152899874, -0.007456969, -0.00156881532, -0.00843309145, 0.00220435788}, {0.00835344382, 0.00079039589, -0.0128547139, 0.0029111621, -0.0275313929}, {-0.00293683168, 0.00990538392, 0.00409232918, 0.00711331936, -0.00841657817}}, {{-0.00957051665, 0.0123391543, -0.00240266416, -0.00464092335, -0.00511401147}, {0.00955529511, -0.0054020891, -9.8103068e-005, -0.00892780349, 0.00484372303}, {-0.0105237579, 0.00867418479, 0.00507169636, 0.00903857686, 0.00215054397}, {0.00571640069, 0.00818304624, -0.0217797253, -0.00989022944, 0.0210175626}, {0.00727391755, 0.01858408, 0.0102365883, -0.00424234755, 0.000111788257}}, {{-0.00346570555, 0.01056387, 0.00957603101, -0.000782958523, -0.00118366769}, {-0.0100574167, -0.00504189124, 0.00129785424, 0.00866558868, 0.00856397673}, {0.0100582121, -0.00837321766, -0.00741576217, -0.014966228, 0.000598436163}, {-0.0196216293, 0.00630725501, -0.00915614422, -0.00304836757, 0.012658787}, {-0.00374732702, -0.014087907, -0.00499693444, 0.00339319534, -0.0115836728}}, {{0.00173355266, -0.00399883557, 0.00712676672, -0.0039454652, -0.00505624851}, {-0.0131263137, 0.025464993, -0.0158184133, 0.0108640566, -0.00670006732}, {-0.00441747298, 0.00763464579, 0.00710302964, 0.0105316713, -0.0101046925}, {0.0121556651, 0.00185139931, -0.00643658964, 0.016918065, -0.0147775626}, {0.00578567898, -0.0037164269, -0.00531616807, -0.0104466937, 0.00321994117}}, {{0.00375595596, -0.00986417755, 0.00947143417, -0.00375114195, 0.00301649794}, {-0.00780684222, -0.00565562956, 0.0122697996, -0.000611262396, 0.00531166838}, {0.00207535457, -0.00982652698, -0.00244245376, -0.0068477341, 0.00232398068}, {-0.00409714319, -0.0063731689, -0.0147645799, 0.000787180499, 0.00712152617}, {-0.00122881937, -0.00529416185, 0.0204710029, 0.00596093154, 0.0081137009}}, {{-0.00253712619, -0.00507653318, -0.00100840838, -0.00383519894, -0.0156096304}, {-0.0136499973, 0.0029849438, 0.00646414096, -0.0136327073, -0.00467320206}, {0.0181372426, 0.0126249669, -0.00648950599, -0.00533760199, 0.00318980659}, {-0.00328435376, -0.0101499632, 0.00897722878, 0.0131887458, -0.00855693594}, {-0.00849094521, -0.00378707866, -0.00842642412, -0.00115936948, 0.00571189495}}, {{0.000365165382, 0.00101591134, 0.000599594379, 0.00361940428, 0.0132975206}, {-0.00245514652, 0.00466534635, 0.00683072675, 0.00780747458, 0.00313083222}, {-0.016817797, -0.00891640875, 0.00722642941, -0.0017419419, 0.0119118309}, {-0.000338051585, 0.0108899428, 0.00682140794, 0.0144740622, -0.0089736674}, {-0.00835414603, 0.00405059336, -0.0200555082, -0.00113779726, 0.00717691286}}, {{-0.00348174898, 0.00460137939, -0.015348292, -0.0208394695, -0.0076586362}, {0.0226867776, 0.00865018182, 0.00877119228, 0.00947180111, 0.00253452454}, {0.0133130653, 0.00564240897, -0.0113273263, 0.00957704801, -0.00380035304}, {-0.0154199461, 0.00621949695, 0.0136483032, 0.00433628634, -0.00974937901}, {-0.0113139544, 0.00834848452, -0.0167773087, -0.0147512192, 0.000242151174}}, {{-0.0219737161, -0.00441749534, 0.0065343501, -0.00191427476, 0.00196749577}, {0.00661551813, 8.37951011e-005, 0.013031858, 0.00802846253, 0.00282238307}, {0.00733447401, -0.0068236799, -0.00309552439, 0.00601092353, 0.00782135595}, {-0.0107352855, 0.0151874283, -0.0137897255, -0.012107241, -0.0121994885}, {-0.00323702139, -0.000862018962, 0.00695136609, 0.000124569808, -0.00747943204}}, {{-0.01151466, -0.0102978153, -0.00718701165, -0.00293050054, -0.00122400455}, {-0.0134308217, -0.00870928168, 0.00304640108, 0.00722170388, 0.0148876589}, {-0.00392557913, 0.00593188405, 0.000287546718, -0.0191338137, 0.0160596613}, {-0.00961848907, -0.00959884655, 0.0118609397, 0.00123992353, 0.0145133669}, {0.0103282761, -0.00882942416, -0.0107046254, -0.00360880699, 0.0205093417}}, {{0.00386495632, -0.00138671964, 0.00435499195, 0.00241594436, 0.00734555535}, {-0.00812190212, -0.0132594565, -0.0035616362, -0.00872501731, -0.00327345449}, {0.0128057869, 0.0121360971, 0.000593596254, -0.00524458243, 0.00112901081}, {0.0133085167, 0.00585414376, -0.0090763513, -0.00281208986, 0.00291582942}, {-0.00217064261, -0.0115096318, 0.0145144248, 0.0139334425, 0.000965766143}}}, {{{-0.00313672307, 0.00385987642, 0.00755977165, -0.000140633201, -0.0102601079}, {-0.00525632594, -0.0113156177, 0.00264982414, -0.0156100458, 0.00863864087}, {0.00360327796, 0.00683571072, -0.00524898432, 0.00422565173, -0.000204114098}, {0.0180079602, -0.00696928054, -0.0167762861, -0.0137881534, -0.00224130601}, {-0.000670996029, 0.0169028025, 0.01076575, 0.027204277, 0.0129360547}}, {{0.0253988691, 0.0157954711, 0.00961975008, 0.0245216079, -0.001177139}, {-0.00740694255, 0.00891058892, -0.00573423924, -0.0108285761, 0.00849872641}, {0.00707220053, -0.00537819788, -0.00165365706, 0.0173473153, 0.00909808278}, {-0.00406720443, 0.00622873055, -0.0132908653, 0.0114759756, -0.00474802777}, {0.00168473576, -0.00346989115, -0.000962057966, 0.00633681845, -0.0214165784}}, {{0.00303878472, 0.0100914165, -0.00598758971, -0.0166041758, 0.00799797289}, {-0.0371626206, 0.000260511762, 0.0122805424, 0.00469324691, -0.00236049457}, {-0.0219577122, -0.00216554012, -0.0104741622, -0.0144807491, 0.0221562367}, {0.00141065614, -0.0118992617, 0.0204129238, -0.00667870417, -0.00381640764}, {-0.00239765667, -0.00700286217, -0.00193065125, 0.00713004824, -0.00563798891}}, {{0.00580852013, 0.00204699649, -0.0135710593, 0.0131277256, 0.000723405275}, {-0.00318679004, -0.0117275072, 0.012677595, 0.00583589869, -0.00256410567}, {-0.00250145514, -0.00303105079, 0.0140777798, 0.0177815631, 0.00626150286}, {-0.0129350442, -0.00680647464, 0.0197310299, 0.010775499, -0.00391314365}, {0.0237240754, 0.00122463051, 0.0108127352, 0.0194481891, -0.0198219661}}, {{0.000486589212, 0.00222884072, 0.00470308494, 0.000201099741, -0.000210543643}, {-0.000493007305, -0.00338372844, -0.00155182497, -0.00230417098, -0.0186797865}, {0.0152645642, -0.00845520105, -0.0215268657, 0.0146399532, 0.00379039743}, {-0.00373145705, 0.00022708597, 0.0163377896, -0.00858791824, -0.0109995427}, {0.00186289859, -0.00590348709, -0.0162004866, 0.00980549213, -0.0200074483}}, {{0.00663349684, -0.00811525062, 0.00048114665, -0.0064306776, -0.002977208}, {-0.00677817734, 0.00337220728, -0.00617379462, -0.00613776874, 0.0166979413}, {-0.012916374, -0.00282450696, 0.00148722553, 0.00801553018, 0.00764936674}, {0.0137406457, -0.000896835874, 0.00327437348, 0.00315063354, 0.00102567999}, {0.00708673103, 0.0108955409, 0.00063584937, -0.0021840441, -0.0213370156}}, {{-0.00238802051, -0.0057872422, -0.0129613644, 0.0116306469, -0.00947318226}, {0.00110588712, -0.00399266835, -0.00591839943, -0.00873637013, 0.0103853121}, {-0.0167566128, 0.00676576281, 0.00241784076, -0.0105934916, 0.00627307082}, {0.00614227261, -0.00618593302, -0.00847562868, 0.0175835919, 0.00467522303}, {-0.00865822472, 0.0115611227, 0.0188717414, 0.000331771997, 0.00211204309}}, {{0.00650109071, -0.00877747312, 0.0150811495, -0.00448295474, -0.018747272}, {0.00596906245, -0.00769687025, -0.0135827502, -0.0131065557, 0.00478156423}, {0.00394054037, 0.00647231191, 0.00141549518, -0.0260845572, -0.000395572541}, {0.00361167989, 0.0200465899, 0.00582449976, -0.0200487766, 0.00855336245}, {-0.00652715331, -0.0131858392, -6.15324607e-005, -0.01374494, -0.00421854993}}, {{-0.00212281989, -0.00386855053, 0.00591499172, 0.0038788151, -0.00182369247}, {-0.000643056177, 0.00877824333, -0.0135706933, -0.016732581, 0.00813517999}, {0.00641324511, 0.00514485035, -0.00225260924, -0.00119360955, 0.0130456584}, {-8.07857505e-005, 0.000628546288, -0.00226156344, 0.00847985875, 0.00683103083}, {0.00807669479, 0.0128446277, -0.00155023905, 0.0230015423, -0.00902037416}}, {{-0.0207288414, 0.00632064976, -0.0188836958, -0.0110309711, 0.025604656}, {0.0139648952, 0.00923430827, 0.00587357348, 0.0112447403, 0.0129895657}, {-0.00761313736, -0.0120205116, 0.00803374499, 0.0109491944, -0.00816147402}, {-0.0168473721, -0.00168048788, 0.0089873895, -0.00931410585, -0.00388853205}, {0.0115998955, -0.0150043126, -0.000125236358, 0.00532949995, -0.00424787961}}, {{0.000233016326, 0.00770138483, 0.00339412759, -0.00873155426, -0.019121429}, {-0.00293508708, 0.0165764578, 0.00427018758, -0.00534535898, -0.00283664791}, {0.00975625962, -0.0221745335, 0.0125804609, -0.00242219935, -0.00356512307}, {-0.012869806, 0.00271900697, 0.00295301271, -0.0187449064, 0.00146924763}, {-0.0068139066, -0.00731235091, -3.98537381e-009, 0.0120513057, -0.0156669561}}, {{0.00453571696, -0.0108987018, 0.000503326242, -0.0066974177, 0.00676936377}, {0.00627815677, 0.0166041795, -0.00464567542, 0.0014468641, 0.0034292941}, {-0.00793094933, 0.00210961024, -0.000874326099, 0.00771576073, 0.0241270009}, {-0.0208817255, 0.0136451581, -0.0255215913, -0.013124424, -0.00361542869}, {0.00472703343, 0.00930854119, 0.000407704501, 0.00171559688, -0.00748266233}}, {{-0.007150413, 0.0110388556, -0.00331396493, -0.00774248457, 0.0126849366}, {-0.0010868758, -0.00290454598, -0.0092321327, 0.00254701846, 0.0123891188}, {0.000985990162, 0.00348604633, 0.00458833901, -0.000267768919, -0.00486329012}, {0.00343235792, -0.00538770063, 0.00232798234, 0.000358704594, 0.00606331276}, {-0.0106373001, -0.0103480825, -6.48415953e-005, 0.0104053207, 0.00588570163}}, {{-0.00271948753, -0.0150883431, 0.00542434352, -0.0059367097, -0.00139694358}, {0.0110488711, -0.0196463708, -0.00607210491, 0.00877469312, 0.000376488664}, {0.00316296704, 0.0192979332, 0.0182791669, -0.00210972759, -0.00850221049}, {-0.0114413435, 0.00902608968, -0.0147093507, -0.00639715837, 0.0277000517}, {-0.00115343195, -0.0152068902, -0.00849698856, -0.0144436434, -0.0227530636}}, {{-0.0156960413, 0.00133966876, 0.00792079885, 0.0143242413, 0.0020766228}, {0.00777038559, 0.00317984889, -0.00547904195, 0.000187108497, -0.00277953525}, {-0.00276751863, -0.0141545786, -0.0070296796, 0.000578609412, -0.00473239785}, {0.00648133038, -0.00439679669, 0.0032092717, -0.0071766586, 0.00537727866}, {-0.00664281892, 0.00854461826, -0.000403641403, -0.00779150194, 0.0112451939}}, {{0.00500412844, -0.020289693, 0.000867356546, 0.00678705005, 0.0158956461}, {0.00508778868, 0.00733481022, -0.0104781371, -0.00456975773, 0.0132436296}, {0.0188308284, -0.0153746903, 0.0024663955, -0.00559275365, 0.00937840436}, {-0.00124681788, 0.00712683611, 0.0048415903, -0.00794297364, 0.00192010996}, {-0.00415164931, -0.0140063772, 0.0160148945, -0.0040047681, -0.0114408424}}}, {{{0.0133209871, 0.0145717254, 7.98685942e-005, 0.0106109986, 0.00279660383}, {-0.00263786851, -0.00313188275, -0.00545804994, -0.00701500196, 0.0152758574}, {0.0105222221, 0.0125661641, -0.0160111208, -0.0010689114, 0.0016187086}, {-0.0111582857, -0.0120996851, -0.00262330542, -0.0076152822, 0.00060916919}, {0.019682046, -0.0186163429, -3.40887034e-008, 0.00292227697, 0.00193266373}}, {{-0.00368304015, -0.0155056464, 0.0017940196, -0.00328011392, -0.00479606492}, {-0.00165898202, -0.00291331438, -0.0220430084, -0.00418960024, -0.0149611114}, {0.0132886302, 0.00807824451, 0.0051945271, 0.00854598545, 0.00934141967}, {-0.00203092583, 0.0207562279, -0.0278976988, -0.00637931749, -0.00316331256}, {0.0144599332, 0.00592022715, -0.0143580865, 0.00275364798, -0.00203857454}}, {{0.00621650834, -0.000756025023, -0.000973494025, 0.00280583207, -0.011606588}, {0.01631191, -0.0168327745, -0.00906075817, 0.0018908733, -0.016011741}, {0.0144262314, -0.0115525555, -0.00328122871, -0.0086485846, 0.00499531301}, {-0.0134086339, 0.0187898558, 0.0101008862, -0.00272099022, 0.00305473572}, {0.00732111419, 0.00318994094, -0.00439030258, -0.00506970473, 0.00322673004}}, {{-0.000446607854, 0.0147528071, -0.0139502687, -0.00227238191, 0.00234118896}, {-0.00280359411, -0.00137127086, -0.0219134148, -0.00114828977, -0.00948128384}, {-0.0135276699, 0.00223616394, 0.0165491551, -0.00916905701, -0.00582706602}, {-0.007247617, -0.00386793236, -0.0118871303, 0.00332471821, 0.0130257495}, {-0.000759405259, 0.00435038516, -0.00250344328, 0.0208325163, -0.0210346561}}, {{-0.0121411616, -0.00555357616, 0.025753893, -0.00114493782, -0.0136471959}, {0.00369640533, 0.00639241003, 0.00982978474, -0.0216344129, 0.0030210882}, {0.002167698, 0.00317686913, -0.00926593784, 0.00246571912, 0.0110872053}, {-0.00187151658, -0.0161459316, -0.00595756015, 0.0150758615, 0.00660621468}, {0.00501483865, 0.00198243163, 0.00871798862, -0.0098451674, 0.000238736407}}, {{-0.00420027645, 0.00522786286, -0.00706073688, -0.0033268861, -0.00158603163}, {0.0144033469, 0.0111238528, -0.0122654028, -0.010222448, -0.0113537936}, {-0.013530409, 0.00214187754, 0.0106531689, 0.00718727196, 0.00488891779}, {-0.00242426037, 0.0204538591, -0.0125991059, -0.0134322271, -0.00763025275}, {0.00165896234, 0.00823587086, -0.00581399305, -0.00328522013, -0.0123403352}}, {{0.000437621522, 0.00754872849, 0.016571248, 0.0156535991, -0.00968201552}, {-0.0085864719, 0.0050076968, -0.000136613569, -0.00615639007, 0.00210673804}, {-0.00855496619, -0.00896091573, 0.01594528, 0.0056024231, 0.00226457906}, {-0.0147518469, -0.0194963738, -0.0141991014, -0.0105003119, 0.00245025149}, {-0.00854287297, 0.0197390411, 0.0130883763, 0.00358636165, 0.00200263574}}, {{-0.0159462709, 0.00394058554, -0.00439068675, -0.000804591808, -0.00300501822}, {0.0109413126, -0.00984804332, -0.0161110032, 0.00202674652, 0.00705852127}, {0.00684536481, 0.00514871674, -0.00138897088, -0.00542386575, 0.01020166}, {0.0121749071, 0.00100611022, 0.00380222453, 0.0178993829, 0.00534090539}, {0.0116205467, -0.0101929428, 0.0129917283, 0.000624576642, 0.00379745336}}, {{-0.00470094103, -0.0142171467, 0.00209917291, -0.0127824666, -0.0154673196}, {-0.00113970332, 0.00925405882, -0.0081700962, 0.00972107053, 0.00695307273}, {-0.000132152229, -0.00283008348, 0.0052658827, 0.00265413639, -0.00847991835}, {-0.00137200113, -0.0053189043, 0.000442650809, -0.00264294236, 0.0038800675}, {0.00588842994, 0.0126980478, -0.0138061382, -0.00382980751, 0.00287973695}}, {{-0.0162944328, 0.00558504462, 0.00652351091, 0.00369134662, -0.0126774218}, {0.000394796778, -0.00783829391, -0.00975125283, 0.0173159856, -0.0057263351}, {-0.00719060889, -0.00659185601, 0.00550560141, 0.00852621812, 0.0234268382}, {0.0120303258, -0.0106024286, 0.0109045282, -0.00867637806, -0.00261995709}, {0.00465485873, -0.0038021889, 0.00611196365, -0.00075956306, 0.00142906886}}, {{0.00892417971, 0.0131411171, -0.00197689212, -0.0218234677, 0.00693194661}, {0.0212178491, 0.0220921002, 0.0143587431, -0.00897370838, -0.00117779523}, {-0.0146568976, 0.000840160472, -0.00459240284, -0.00890722405, 0.011446259}, {-0.00911913998, 0.00203503063, 0.0120637817, -0.0117582604, -0.0102796219}, {0.00470533175, -0.0142861521, 0.00934374426, -0.019036008, 0.00740627665}}, {{-0.0137571497, -0.00173332228, 0.0248882454, 0.00756031834, 0.012619474}, {0.0130426688, 0.00036902717, -0.0152226416, -0.000669743633, -0.00860673934}, {0.00364539423, -0.00868754182, -0.00300320191, -0.00596340979, -0.00303035905}, {0.0108467583, -0.00769676967, 0.00757217361, 0.0044264961, -0.00109707855}, {-3.53226533e-005, -0.0178295001, -0.00198030053, -0.00301456661, -0.00200705277}}, {{0.00266797747, 0.0102877021, 0.0089264866, 0.0149138449, 0.0165624581}, {-0.0117856013, 0.00752650388, -0.00487997988, 0.0050118682, -0.00347958994}, {-0.0182708856, 0.0054419972, -0.0162481423, -0.00813255645, -0.0101245958}, {0.0133458711, -0.00171176216, 0.0162333511, 0.0101650348, 0.00474663451}, {0.0117338002, 0.013062736, 0.00817156956, 0.0115483413, -0.0076933885}}, {{0.00414034585, 0.00279249786, -0.0182952695, -0.00769693218, -0.00938078854}, {0.00266154855, 0.00821648911, -0.0102587519, -0.00946129113, -0.00786821079}, {0.00730823819, 0.0107590072, -0.00145824684, 0.000702710648, -8.13244769e-005}, {0.0124358907, -0.0085646091, -0.00430464372, 0.0103338826, 0.00188652589}, {-0.0121003734, -0.00374646275, -0.0123948604, 0.015047987, -0.00375285698}}, {{0.0039177807, -0.00648548361, 0.0156752653, 0.010751931, 0.00458098948}, {0.00939434301, -0.00055145385, 0.00471369782, -0.00152631965, -0.00785707962}, {-0.0174529068, -0.00180697907, -0.00848293956, -0.00856150035, -0.0159989912}, {-0.0116393305, -0.0153951179, -0.000220923306, 0.0149510307, 0.015816709}, {-0.0106796799, 0.00303265662, 0.00398689834, 0.000389441673, 0.0105354525}}, {{-0.000850075972, 0.00551566295, 0.00347416825, 0.0238788072, 0.00523106987}, {0.00468946574, 0.0101347128, 0.00619213935, -0.00266876002, -0.00169299718}, {-0.0212223921, 0.0113605773, -0.00536104897, -0.0228606761, -0.000409965927}, {-0.00998000614, -0.00625983812, 0.00145653193, -0.0114738373, 0.00272788201}, {-0.0033348219, 0.00304713543, -0.0139244283, -0.00566865131, 0.00223845383}}}, {{{0.00480491528, 0.00572306896, 0.00827727467, 0.0192386676, 0.00155727193}, {-0.0128618432, 0.00843270775, -0.00224106084, 0.00306782429, 0.000350079441}, {-0.00408525486, -0.000136264585, 0.0268432423, 0.0042537502, -0.00602424052}, {-0.022368785, -0.000521038717, 0.0187328923, 0.00349266012, 0.0260438807}, {0.00189873297, 0.00701412885, -0.016440779, -0.0106462073, -0.00194753835}}, {{0.00185771217, -1.90627761e-005, -0.0139423274, -0.000904230285, 0.00755594857}, {0.00431532878, 0.00720396545, 0.0134956455, -0.00730730873, -0.00799762923}, {0.00509423949, 0.00717135984, -0.00948603544, 0.00624608761, 0.0104211858}, {0.00794084463, 0.0127730248, 0.00594282616, 0.00683490187, 0.00856879633}, {-0.00333453808, -0.0137127424, 0.00840549171, -0.00815420691, -0.00822976418}}, {{-0.00232243468, 0.0037341062, -0.00704875216, 0.00173040153, -0.00663806545}, {-0.00497395312, 0.00518368511, -0.00637740642, 0.00531904353, 0.0093052322}, {0.00374531141, -0.0144495023, -0.00406827079, -0.0132888937, 0.000905100198}, {0.0154307466, 0.000742839999, 0.00528813899, 0.00292872917, 0.00201911619}, {-0.00289651356, 0.00189251837, -0.00235318649, -0.00138680253, -0.00348673784}}, {{-0.00570935104, 0.00322331744, -0.00238567567, 0.00276846392, 0.0173366442}, {-0.0294649601, 0.0105655733, 0.0105783492, 0.00583986426, 0.00617463142}, {0.0196336824, 0.0174742807, -0.00705976179, -0.000312559627, 0.0149773993}, {0.0133134108, -0.0184008516, -0.00859794579, 0.010342746, -0.00670542568}, {0.0258757975, -0.00270743249, -0.00100867765, -0.00602812506, 0.000540923676}}, {{-0.00298197847, 0.00356954709, -0.00872552954, 0.0121157635, -0.00254606502}, {-0.0128559079, -0.0131551456, -0.00244001905, 0.00815194286, 0.00285758288}, {-0.010118491, 0.00915981084, -0.0103945322, -0.00286016706, 0.00394814275}, {-0.0138954762, 0.00197345112, -0.00140868605, -0.00473241415, 0.00660848897}, {0.00271748845, 0.0177181605, -0.00378714781, 0.00702713849, 0.00789563172}}, {{-0.00856821239, -0.00716907065, -0.0162944645, 0.000782967545, -0.00444433093}, {-0.0336317644, 0.00312323519, -0.0103143556, -0.00355522707, -0.0194194634}, {0.0145521704, -0.0122128362, -0.0026355458, 0.00773974136, 0.00872849114}, {-0.00143435108, -0.00645560259, -0.0105474479, 0.00603980524, -0.00673677074}, {0.00853374414, 0.00790651608, -0.00557363266, 0.0115162786, 0.0199923646}}, {{-0.00321305869, -0.0118535925, 0.0040054624, -0.00470735785, -0.0101572638}, {-0.0092307115, 0.0197674353, -0.00659081014, 0.00595189678, -0.00118592731}, {0.00896934047, -0.009995386, -0.0095272949, 0.0010256297, 0.0138006611}, {-0.00905125588, -0.0056311097, -0.00280936109, -0.00678361161, 0.0025509384}, {0.0126416869, 0.00195853971, -0.000822336238, 0.00506569399, 0.00172348681}}, {{0.0123109203, -0.00162355101, -0.0179711897, 0.0219026431, -0.00972909201}, {-0.0186996628, -0.00155143521, -0.00134978222, -0.00386292743, -0.0179380346}, {0.00690039853, 0.0136820264, -4.08150772e-005, -0.013170816, 0.0174547397}, {-0.00424700277, -0.0123445867, 0.0150458878, -0.00320482859, -0.00599530805}, {-0.0030640706, 0.00263607712, -0.00679939054, 0.0209975224, -0.000530098332}}, {{0.00754618924, 7.94143329e-009, -0.0102160452, -0.00382582471, -0.00704582874}, {-0.0178429745, 0.0111385938, -0.00121404836, -0.015715735, -0.0228256211}, {0.00642935093, 0.00731384149, -0.00782224722, -0.0104149599, 0.00694202445}, {0.00526256487, -0.0188462157, -0.00816800259, 0.00685401028, 0.00812896993}, {-0.00289362436, 0.00654512877, 0.00306938402, -0.0167393163, -0.0064894869}}, {{0.0114080217, 0.00318658142, 0.0112443473, -0.0100244451, 0.00778949214}, {0.00872117281, -0.00456423685, 0.0129381157, -0.00615986343, 0.00782230496}, {0.00148312503, -0.00653987052, 0.00694226194, 0.00344589539, -0.00940910075}, {0.0072921901, -0.00869505014, -0.00490253326, -0.00736829499, 0.000142455741}, {0.007401763, 0.00372644933, 0.00507860165, -0.0066431649, -0.00134239951}}, {{0.00777462265, -0.00858354755, -0.00809935573, -0.0100658201, 0.00942773744}, {0.012298652, 0.00749246264, -0.012468419, -0.00302633666, -0.00407297676}, {0.0058340868, -0.0183235183, 0.00468621822, -0.00591110904, -0.0128169768}, {0.0148361558, -0.00843403768, -0.00402795104, -0.00858930219, -0.0103036826}, {-0.000102869424, 0.00153228873, -0.00787622668, -0.0127478577, 0.0234361812}}, {{-0.00316239754, -0.0050386223, 0.00176802429, -0.000450154068, -0.000119465309}, {0.0023677079, 0.001815925, -0.000193096843, 0.0121034086, 0.00226123957}, {0.00146057829, 0.000441253185, 0.0093220491, -0.0114621529, 0.00283582415}, {0.0132250935, 0.00239612581, -0.0117982477, -0.00562961772, 0.000370423833}, {0.00742812548, -0.00364753394, -0.0206965748, 0.022992434, 0.0148541741}}, {{0.00749647897, 0.0111813145, 0.0174659919, -0.00255866582, -0.00150245253}, {0.00599644659, 0.000146477832, 0.00487613957, 0.00545277633, -0.0141981263}, {0.00129883736, 9.65484141e-005, -0.00428165961, 0.0101567172, 0.0109510766}, {-0.00415220018, 0.00718999188, 0.00740747014, 0.00310428999, 0.00113160757}, {-0.0141753033, -0.00727926008, -0.00893666036, -0.00709674088, 0.0128622018}}, {{0.0153771294, -0.00521636102, -0.00103958941, -0.00719829276, 0.00802461337}, {-0.000915958255, 0.00704605225, -0.00122187205, 0.000738192874, -0.00456430763}, {-0.00584030384, 0.00516907685, 0.0038774719, 0.0119530438, -0.0047542667}, {-0.000949703855, 0.00896000396, 0.0236357898, -0.00968916621, -0.00632273871}, {-0.0072478028, 0.0120084146, -0.018255556, 0.0150638958, -0.00492966641}}, {{0.014253661, -0.0038198831, -0.00889170449, -0.0123190787, -0.00563304359}, {-0.00594645413, 0.00195707241, -0.0153557975, 0.0030136744, -0.0233695172}, {0.0125796217, 0.000353095995, 0.00672863936, 0.000600042986, 0.0053487001}, {0.0131910788, 0.0104358373, -0.00158911943, -0.00391970808, -0.00783229712}, {0.020582376, 0.00989594124, -0.0107013909, 0.00567216333, -0.022760585}}, {{0.00739041809, -0.00400711503, 0.0104306452, -0.00787561759, -0.00922278035}, {0.00188609201, -0.0111447619, -0.000831458776, -0.0162944105, -0.0030100788}, {0.0118182916, 0.0134619894, -0.00636348175, -0.00144795235, -0.0102237603}, {0.0199586265, -0.00828148983, -0.0103717409, 0.00202133018, -0.0021358598}, {-0.012683697, 0.015091693, 0.00709053921, 0.000987430685, 0.00660111755}}}, {{{-0.00292859366, 0.00071402418, 0.00699831173, 0.00513468962, 0.00711908657}, {0.00796385668, 0.00699242577, 0.00615060469, -0.00474102562, -0.00895123649}, {0.00322876219, -0.00231968286, -0.00166933669, -0.00984890014, 3.6910893e-005}, {-0.0113599319, 0.00889242813, -0.000964014383, -0.00739575457, -0.00475686742}, {0.00788090751, 0.00720493123, 0.00312757236, 0.0216610339, 0.000940603612}}, {{0.00870326813, 0.00368051999, 0.0102540031, -0.00161219225, -0.00736212917}, {-0.000430257089, -0.000531751139, -0.00694204168, 0.000384291925, -0.00943539385}, {0.0029028384, -0.0120720882, 0.00660257926, -0.00208332622, -0.00285963179}, {0.0174012464, 0.0236709081, 0.0110015906, -0.00359916943, -0.0164958518}, {-0.0160256345, 0.0150086218, 0.0081808418, 0.00736602535, 0.00705312286}}, {{-0.0152880577, -0.0093168132, 0.00595679507, 0.00665484415, -0.00725155044}, {0.0106701553, 0.00189463585, -0.00125344237, -0.00405452074, 0.0154832685}, {-0.0151935266, -0.00180341513, 0.00502280239, 0.0201280061, 0.00469421316}, {0.00332598435, -0.00107287674, -0.00161268329, -0.00218840037, 0.00177214399}, {0.00348749617, -0.0164669566, 0.00447271718, 0.0019730262, -0.00468189968}}, {{-0.00534142135, -0.0182432681, 0.0238734297, -0.00138328609, -0.00173994608}, {-0.000663357263, 0.00948095229, 0.0055502723, -0.00141121401, -0.0142853092}, {0.0228757802, 0.000977055286, 0.00185148243, -0.0149487415, 0.00662539573}, {-0.00417571655, -0.00103405933, 4.8727652e-005, -0.0104579097, 0.0194465593}, {0.0070062275, 0.00414908258, -0.021034535, 0.00142212957, 0.00510150427}}, {{0.0253678448, -0.000215083259, -0.0166682657, -0.00510115037, -0.0121982954}, {0.00142171688, 0.0189363863, 0.00167125824, 0.00165957143, -0.00903786905}, {-0.0180581398, -0.00514271157, 0.00430083787, -0.018607717, 0.0167933665}, {-0.00248270365, -0.0152745871, -0.00922872219, 0.00620276993, 0.0123848356}, {0.00820712931, -0.00175968767, -0.000255183113, 0.00404109247, -0.00496462593}}, {{0.00538564334, -0.0088294642, 0.0134592839, 0.00406513689, -0.00278125331}, {0.00404372765, -0.0102209896, 0.0113672521, -0.00412076572, 0.00912311021}, {0.0178002156, 0.0090594124, 0.0128681399, -0.00609462988, -0.00622604368}, {-0.0236956868, 0.00108411093, 0.00495883916, 0.00752004841, -3.52241436e-008}, {-0.00528148608, -0.00029271972, -0.00720696943, -0.00211435417, -0.00352246058}}, {{0.00515199872, 0.0147208655, 0.00799953379, 0.000399177021, 0.0035182084}, {0.0147446515, -0.0113451267, -0.00282796612, 0.0083140377, 0.00663271034}, {0.0155594805, 0.00757975364, -0.0256797578, -0.00160304841, 0.00177027017}, {0.0186934005, -0.0109457914, -0.014723721, 0.00427540857, 0.0137339821}, {0.000115812392, 0.0142191723, 0.0070059998, -0.00803212635, -0.00940176379}}, {{0.00423934264, -0.00278174737, 0.0100653097, 0.00114545471, -0.00906979479}, {0.0108680017, 0.00850890204, -0.019658735, -0.0124973962, 0.0137236416}, {0.00119470712, -0.00490258588, -0.00222862908, 0.00357339601, 0.000923053944}, {-0.0116057312, 0.0032535214, -0.00319128414, 0.0129248733, 0.00135632046}, {-0.0149562713, 0.0197768174, 0.0110586165, -0.0165543184, -0.00268429052}}, {{-0.00589551078, -0.00204752618, -0.000303592533, 0.00553335715, -0.0101400232}, {-0.00382094737, 0.0016804788, 0.0163866039, -0.00795730948, 0.0048793829}, {0.00601876853, -0.0047069313, 0.00888655335, -0.0143002784, 0.00801097881}, {0.0130173946, 0.0110159758, 0.00769560039, -0.00142017473, -0.00183863903}, {-0.00398343941, 0.00405903999, 0.0178729668, 0.00599717954, -0.000650094298}}, {{0.0286785401, 0.00151914405, -0.00144527422, 0.0216281153, 0.00535379909}, {0.0105315559, -0.00951713882, -0.00782565121, 0.0213519707, 0.0192348287}, {-0.00048606965, 0.00402267743, 0.00528693991, 0.00234060339, 0.0052239825}, {0.00414340664, 0.00915571302, -0.0159144867, -0.0180682018, 0.00476667611}, {-0.00363714923, 0.000932167168, -0.0136464825, -0.01525963, 0.000920790888}}, {{-0.00392442849, 0.0084497761, 0.00103103463, 0.00546989776, 0.00580282463}, {0.0139972214, 0.00307662017, 0.00789051969, -0.00739339134, -0.00917674135}, {0.0276281089, -0.0146110728, -0.00144711859, 0.00708752172, 0.00911527686}, {0.00557395583, -0.0217608791, -0.00550897326, 0.00262683467, 0.00372345303}, {0.0168200843, 0.0082383398, -0.0111844875, 0.0140688801, -0.00363695459}}, {{-0.00848372653, -0.0130073819, -0.00201803981, 0.00095308671, -0.00408519246}, {-0.0024833288, -0.000886562164, 0.00532107428, 0.000406801148, 0.00682118861}, {0.00555274822, -0.0163935646, -0.0104022147, 0.0256698336, -0.0048601483}, {0.00157862145, 0.0155426953, -7.37050432e-005, 0.00443219487, 0.00507654157}, {0.00475557474, 0.0110515775, -0.00421812152, 0.00837556832, -0.000799173606}}, {{-0.0158925932, 0.00500912033, 0.00351024885, 0.0174547397, -0.0242994912}, {-0.00249100523, 0.0114223603, 0.00102883531, -0.00374262524, 0.000892611395}, {-0.0131809041, 0.0100713233, 0.004722137, 0.00526368339, 0.00796958897}, {0.0012253928, 0.000853622449, 0.0187578201, 0.00986982509, -0.015963316}, {0.000875040772, 0.00890706666, 0.0145051386, -0.00332622393, 0.0102089113}}, {{0.00521830888, -0.00104931789, -0.00217856443, 0.0046709301, 0.00912366249}, {0.000491919287, -0.00345083629, 0.00181617239, -0.00603994727, -0.0129068932}, {-0.0036140529, 0.0015517592, -0.0130646741, -0.00945066009, 0.019604791}, {0.00852506328, 0.00910323858, 0.00165999623, -0.00869419612, 0.0020513779}, {-0.00159471319, -0.0026655877, -0.00401927019, -0.000974818366, -0.00697920052}}, {{0.00405779993, 0.00191493891, -0.00471474975, 0.00285084522, -0.00749999657}, {0.00123485597, 0.00811901875, 0.00741839828, -0.00889297016, 0.0161556154}, {-0.0185128823, 0.00214401283, 0.0171373282, -0.022046335, 0.00434431573}, {0.00182852265, -0.0116017638, 0.00302807917, 0.000785745739, -0.0096979104}, {-0.00174991693, -0.0312171057, -0.0110907508, 0.000647704815, -0.0079960404}}, {{0.00908020604, 0.00435517542, 0.00726942392, -0.00593128474, 0.0165712852}, {-0.01390706, 0.00694729481, -0.00400134176, -0.00177028996, 0.00802025758}, {0.000430409535, -0.00432954682, -0.00483466964, -0.0103155663, -0.0168782491}, {0.0148311248, -0.0111550707, 0.0113255568, -0.0113776373, -0.00548896426}, {-0.000208102647, 0.00627163565, -0.0172065329, 0.0125503913, 0.00524306903}}}, {{{-0.0010479755, -0.00229028193, -0.00290184375, 0.00227722642, 0.00702518178}, {0.00586045906, -0.00770666311, 0.0155531736, -0.00892101601, -0.0163571257}, {0.0129213147, 0.013128913, -0.00178709812, 0.000269894226, -0.0101348925}, {-0.000750601816, -0.00689242128, 0.00258019078, -0.0086365873, -0.017496489}, {-0.0125332717, -0.0152910696, -0.00210539368, 0.0061743781, -0.00854840968}}, {{0.00594443362, -0.0152931195, 0.00144522125, -0.00782041065, 0.00606303429}, {0.00896830298, 0.000359348836, 0.00692523271, -0.0124677718, 0.00621289155}, {-0.00833546277, 0.00572890649, 0.00788487494, 0.000129846929, -0.0105988551}, {-0.0167623479, -0.00386673724, -0.00988989882, 0.00787124876, -0.0110709202}, {0.000564863207, -0.00947406329, 0.00181257841, 0.00275392761, 0.005228444}}, {{0.0313006341, -0.00264951191, 0.00221748278, 0.0120841637, 0.0106061427}, {-0.011875255, 0.000760028779, -0.00284341932, -0.0126912938, -0.0172381811}, {0.0161156021, 0.00415448239, -0.00678821374, 0.00348409475, 0.000363791944}, {-0.00806827284, -0.0082078008, -0.00503217895, -0.00667743105, -0.00513315899}, {0.00494571263, 0.0115040364, 0.00654676417, -0.00436376967, 0.00796670187}}, {{0.0167023018, -0.0070456448, 0.00449045189, 0.0180107579, 0.000678496261}, {0.00505011156, 0.0145552671, 0.00833738502, -0.00336561794, -0.0180005617}, {0.00436576456, 0.00582049321, 0.0046937638, 0.0127503872, 0.00256200321}, {-0.0156882405, -0.0139107574, -0.00978742633, 0.000352292031, 0.00916448329}, {-0.0148801068, 0.014895767, 0.01145506, -0.0171496626, -0.0134109901}}, {{-0.000886453723, 0.0274126716, 0.00305728242, 0.00154690852, 0.00140511361}, {-0.00380271696, 0.01372582, -0.00630648294, 0.00140392419, -0.00881916936}, {-0.00407801801, 0.00790833123, 0.0021119942, -0.0174231045, -0.00285555469}, {0.00706683379, 0.00531246606, -0.00260033808, -0.00631491793, -0.000656499586}, {0.00218274165, -0.0176790096, -0.0284022726, 0.00593089173, 0.00654697558}}, {{-0.000509830425, 0.00439325487, -0.0208243504, 0.00780712208, -0.00279572466}, {0.0141128693, -0.0113529218, -0.00500695268, 0.0102515779, -0.00252867024}, {-0.00770344352, -0.00164019153, 0.00839187205, 0.0211658999, 0.0183419976}, {-0.0150609007, 0.00568511849, -0.00583390612, -0.0055418089, -0.00556226494}, {0.00956475269, 0.00442045461, -0.0086809108, 0.00143559929, 0.00939031783}}, {{-0.00193936704, 0.00345138437, 0.000895334291, -0.00146272406, -0.00631493423}, {-0.00410318468, 0.00256091962, -0.00259524351, -0.00740813557, 0.0100395605}, {0.00626472756, -0.00291289296, 0.0218515247, 0.00758053735, 0.0122617148}, {-0.00556970946, 0.0101685161, -0.00935049541, 0.00285728462, -0.000799724483}, {0.0130437855, -0.0121418666, 0.0282779802, 0.0146349575, -0.01270732}}, {{0.00843589287, -0.00192236155, -0.0149317142, -0.000343122112, -0.00309029198}, {0.00126972375, -0.0132585932, -6.72301248e-005, 0.0190902241, 0.00329770381}, {-0.00912576355, 0.0105315736, 0.0158969853, -0.00377048622, 0.0213089846}, {0.0157881007, -0.00723670144, -0.000985293183, 0.00226793298, 0.00401636679}, {0.012272777, -0.00270808325, 0.000345223263, 0.00262298761, -0.00116961589}}, {{0.0105292471, -0.00703201257, 0.00305019296, 0.00492680632, 0.00195003045}, {0.00169288635, 0.0130491164, 0.012122157, 0.00820605271, 0.0122271469}, {-0.00340665388, -0.00672167027, 0.0120747965, 0.0048832777, -0.0135745239}, {0.00923448987, 0.00987730548, 0.0140502211, -0.00836766604, -0.0135529321}, {0.00772130862, 0.00421867333, -0.000265716255, -0.00155330182, -0.000230797174}}, {{-0.00164021447, 0.00781780016, 0.0046589626, 0.0045094965, -0.0109912502}, {-0.00573973451, 0.0173021127, 0.0149713941, 0.00536162127, 0.00204668334}, {-0.000664737541, 0.0117571428, 0.0122543201, 0.00937332213, 0.000797548564}, {-0.017738618, -0.00820727833, 0.0145112928, 0.00444993423, -0.00338676944}, {0.00999109913, -0.00910737365, 0.0186426844, 0.00437932927, -0.00386516703}}, {{0.00176802429, 4.76904352e-005, -0.00885008834, 0.0139731187, 0.00888141245}, {-6.88522414e-005, -0.00154898374, -0.00933827925, 0.00145325181, -0.0103405407}, {0.0134954443, -0.00942673627, -0.0151822139, -0.0117846979, -0.0083847912}, {-0.0182968024, -0.00757743325, 0.00200591027, -0.0026294149, 0.0109249922}, {0.00161784876, 0.000337164442, -0.017997345, 0.00770837115, 0.0103384312}}, {{-0.0126275318, 0.00931667816, -0.00952349789, -0.00530416425, 0.00497358153}, {-0.00640066713, -0.00434957724, -0.00306758517, -0.00599101279, 0.000870409829}, {0.0150579698, -0.0135852182, 0.0164635908, -0.00112787751, -0.00587930763}, {0.00462949323, -0.00697876932, -0.00909254234, 7.82927891e-005, -0.00176543149}, {-0.0096184779, 0.00309109711, 0.0133902738, 0.00877499953, 0.000142507561}}, {{0.0106285494, 0.00321818539, 0.0184088014, 0.0108422684, 0.00100996147}, {-0.000607552181, -0.00513183465, -0.000607647584, -0.00750145782, -0.00746043865}, {0.006143576, 0.00969768781, -0.000902706874, -0.00511722127, 0.00395661965}, {0.00230590859, 0.00735722668, 0.00762023265, 0.00974880066, 0.0148121016}, {0.00634511048, -0.0242931899, 0.0112340944, -0.00790694263, 0.00516010681}}, {{-0.0112936366, -0.00800855551, -0.00270980736, 0.00870556943, -0.0072007766}, {0.0176688693, -0.0232859049, -0.0141714001, -0.0105449194, 0.0150150042}, {0.0135739166, -0.0165290274, 0.00934129301, 0.0017399746, 0.00345664728}, {0.0055902712, 0.0102705155, -0.0138457743, -0.000994375325, 0.0054740468}, {0.00518720644, 0.00257273554, -0.00701033045, 0.0116441501, 0.0139313117}}, {{0.00430917321, 0.0164258163, -0.0109013943, -0.00411755173, -0.000682108046}, {-0.00488237524, 0.00661361637, -0.00822840352, -0.0132293068, 0.00750658242}, {0.00783325918, -0.0242516547, 0.004042638, -0.0131392563, -0.00341280154}, {-0.00450507971, -0.0013766808, 0.00680356286, -0.000992854941, 0.00818911102}, {0.00618346408, -0.017635107, 0.0139629822, -0.0134258363, -0.00348952855}}, {{0.0141894286, -0.00968565419, 0.0119022438, -0.00225528516, -0.00781784859}, {0.00556135457, 0.00481033977, -0.00996510312, 0.0179251116, 0.00131983042}, {0.0061288164, 0.013103717, 0.000455025118, -0.0119035775, 0.00541594252}, {0.0170260333, 0.0175025854, -0.000710670603, 0.0113169309, 0.00588087458}, {0.00520161772, -0.0167386755, 0.000746628386, 0.00566325104, -0.00957220234}}}, {{{-0.0108066602, 0.00966560096, -0.00116321142, -0.0232921336, 0.00202953583}, {-0.00829396956, 0.0115820831, -0.0104483822, 0.0046301065, 0.00188606954}, {-0.00493088365, 0.00925569888, 0.00544316974, 0.0180103704, 0.00288922153}, {0.0013490303, -0.0078892922, -0.0208586939, -0.00134579022, -0.0138284843}, {0.00804039184, -0.00549212052, 0.0108546605, -0.000952047529, -0.00788285956}}, {{-0.0207974166, 0.00261562294, 0.000698631804, -0.00896668714, 0.00699043414}, {0.0222877637, -0.000594190729, 0.0223576315, 0.0154063292, 0.00522663211}, {-0.00028653114, 0.00243162294, -0.00574871292, -0.000146428705, -0.00766409328}, {-0.0156822242, 0.000173445485, -0.0150880134, 0.0129529992, 0.00416154461}, {-0.00294163264, -0.00668520993, 0.00496756425, -0.0077152364, -0.00222671032}}, {{0.000766749377, -0.00406485982, 0.00411182409, 0.00775524136, 0.00140178739}, {-0.011137059, -0.0128517514, 0.00264522806, -0.00214143214, 0.00672167679}, {-0.00779159926, -0.00324536161, -0.000835448154, 0.000960371224, 0.0133171016}, {-0.00315402332, -0.00243899366, 0.00387874292, -0.00409944169, -0.00116120593}, {0.00189597101, 0.0073171705, 0.006978577, -0.00678545237, -0.00261599175}}, {{-0.0169004984, 0.00632568542, 0.00427330565, 0.000767927675, 0.0134265888}, {0.00204491126, -0.00464221556, 0.000915999175, -0.00427520741, 0.00694718678}, {-0.00140367378, 0.00747950468, 0.00175463699, -0.0209182892, -0.00898338761}, {0.00180306623, -0.00813363399, 0.00970973633, 0.0119206151, -0.00197140779}, {0.0059602228, -0.00353023363, -0.0253873914, 0.00670985272, -0.00257750717}}, {{-0.0265071057, -0.00461650593, 0.000570425647, -0.00119881216, -0.00173650985}, {0.00423423247, -0.0112335691, 0.00848905928, 0.00147032668, -0.0151014086}, {0.00223081908, 0.00619286578, -0.013510175, -0.0238694698, 0.00650880719}, {-0.0113656409, -0.0101241656, 0.0121531682, 0.000188881488, -0.023116691}, {-0.00363674178, -0.0041842768, -0.00994567107, 0.00165197125, -0.00293545937}}, {{-0.0136439307, -0.00905285031, -0.00792466849, 0.00399214076, -0.0198924504}, {0.00779022463, 0.00966805685, 0.00555610843, -0.0163269546, 0.00474227965}, {0.0016551821, -0.00912891142, 0.00212672539, -0.00513761351, -0.00904044788}, {-0.00327670365, -0.00520384917, 0.0105569484, 0.0154096242, 0.00875850674}, {-0.00760083087, -0.00536612142, -0.014905829, -0.000378356024, 0.00736518297}}, {{-0.00042663666, 0.00379282609, 0.00689809117, -0.00120599987, -0.00298777665}, {-0.0140281245, -0.00994650088, -0.020520959, 0.00629046466, -0.00376233505}, {-0.00238133734, -0.00167605234, -0.00411125319, -0.0038858389, 0.00790101942}, {0.0152873285, 0.00653671334, 0.00345651549, 2.59356536e-008, 0.00284436624}, {0.000770902785, 0.00157672819, -0.00264534168, 0.00232474483, 0.0102866134}}, {{0.00913239364, 0.00396915339, -0.0178969707, 0.0130487131, -0.000108825334}, {-0.00443065679, 0.00286074914, -0.00971895456, -0.0165968724, 0.0138297351}, {-0.0108519336, 0.00578162912, 0.00202617631, 0.00524897361, 0.00148256274}, {-0.000865513342, 0.0101588098, 0.00513136061, 0.00760284532, -0.0202752706}, {-0.00656204624, 0.0117719546, -0.00399115263, 0.0129042743, 0.0144762592}}, {{-0.00249244878, -0.00658662664, 0.00218489184, -0.00559203373, -0.00208980497}, {-0.000927250134, 0.00445965677, -0.0144711081, -0.00456486735, 0.000168697909}, {-0.0029077793, -0.00817837659, 0.0100229615, 0.00835499354, -0.00109530264}, {-0.00350197521, 0.00799623225, 0.00355392159, 0.00361007825, 0.025705263}, {0.00529131806, -0.000143903031, -0.0178764183, 0.00569733419, -0.00531383324}}, {{-0.0124213956, 0.00338731962, -0.00371557218, -0.0156852771, -0.016669549}, {-0.0180178583, 0.00526739703, -0.00847636536, 0.000662685314, 0.008795036}, {-0.0107713612, -0.0162450504, -0.00692704879, -0.000529655954, 0.00130414334}, {0.00519432826, -0.0162814092, -0.00879856385, 0.00145419757, -0.00180566625}, {-0.0196830127, 0.00430823676, 0.00749338837, 0.00843971968, 0.0195016041}}, {{-0.00738402549, 0.00270354678, 0.00112208258, -0.00411630888, -0.000243234535}, {-0.00390367908, -0.00293962937, -0.00187193637, -0.00339725148, 0.00271503138}, {0.000255798863, -0.0114027653, -0.0136602158, 0.0140304668, 0.00371242338}, {-0.0050822366, -0.0159917288, 0.0145555418, -0.00748270052, -0.00553881191}, {-0.00654644938, -0.0033855841, 0.00375893922, -0.00414642086, 0.0108928448}}, {{0.0115625132, 0.0173388142, -0.00310840085, -0.00880849361, 0.00427278224}, {0.00771060865, -0.0114981849, 0.00431656186, 0.00161474699, -0.00128873135}, {-6.28225389e-005, 0.010255266, 0.00992561691, -0.00687230052, 0.000502237061}, {0.00193312042, 0.00297977333, 0.000775058172, 0.0121156117, -0.00902461447}, {0.0162737202, 0.00180742145, 0.0169065744, 0.024712557, 0.00203366298}}, {{0.000761856034, 0.00914263446, 0.00638359273, 0.00307517499, 0.00907266792}, {0.0088385595, -0.0227887128, -0.0210391302, -0.0191904362, 0.0157005657}, {0.0179102216, -0.00775083713, -0.0151182795, -0.0179051273, -0.00176702579}, {-0.00124029268, 0.00431845989, 0.00740018953, 0.000767784484, -0.00761181908}, {0.000723067031, -0.00388507918, 0.00990424026, -0.0100976452, 0.00358736515}}, {{-0.00938875321, -0.0157880634, 0.00217449386, -0.0191461556, -0.00497864559}, {0.017515555, -0.00396250561, 0.00160499127, 0.00262961071, 0.00272642984}, {0.0124645708, -0.00939779915, 0.00605888106, 0.00765057374, -0.00147766457}, {-0.00929324236, 0.00906754192, -0.0185198113, 0.00542690186, 0.000494342123}, {0.00241526146, 0.00221874542, -0.0108338669, 0.00373199512, -0.0138424495}}, {{-0.0192755051, 0.00526293973, -0.000876624545, -0.00505553698, -0.00543977087}, {-0.00464285631, 0.00314666028, 0.000960016449, -0.0131343454, -0.017303016}, {-0.00734431855, 0.00764097972, -0.0139315361, 0.00515644718, -0.00883960631}, {-0.00134183711, -0.00335777621, -0.00708875712, -0.00548238168, 0.000608672097}, {-0.0165711176, 9.37354562e-005, -0.00106253428, 0.0237911008, -0.00449673133}}, {{0.0128533561, -0.00198540185, -0.00844357256, -0.0016745755, -0.00475294329}, {0.0135904746, 0.0111429654, -0.0077742734, 0.00765694492, -0.00744549697}, {0.00860643573, 0.0121790953, 0.0061530089, 0.0110423174, 0.00572039699}, {-0.000985678751, -0.018821938, -0.00527243549, -0.000722351018, 0.00296920422}, {-0.00811884832, -0.00930542499, 0.00478564622, -0.00439371541, 0.0114555918}}}, {{{0.000478774193, 0.0102796769, -0.0095386235, -0.00498914532, -0.00334722945}, {-0.00169672933, 0.0100896833, -0.0152406646, -0.00248502893, -0.011423721}, {-0.000330312061, 0.0127593298, 0.00203328417, -0.00471712556, 0.0165735539}, {-0.00857447553, 0.0115710469, 0.00514140539, -0.00603191368, -0.0165197887}, {-0.00140505482, -0.00181003986, 0.00645413343, -0.00509817246, -0.0187037364}}, {{0.00229918933, 0.00384448236, -0.00076523493, -0.00437895721, 0.00681354711}, {0.00872811023, 0.0167427957, 0.0068325405, 0.00646001799, -0.00629479717}, {-0.00202538958, -0.0082033379, 0.00293264422, -0.00773594482, -0.00456427317}, {-0.00261299475, 0.000876244099, -0.011989478, -0.0157996397, 0.00896243006}, {-0.00762067037, -0.00647329539, 0.0124333967, -0.0114535401, -0.00141126791}}, {{0.00624659471, -0.00823355746, -0.00542457076, 0.0107257776, -0.00591695914}, {-0.014553803, -0.0122788511, 0.00173528423, -0.0176733732, 0.0232931096}, {0.0110488813, 0.0167812649, 0.000847533403, -0.0112905111, -0.00432510907}, {0.00221093441, 0.0123141026, -0.00725422567, 0.0147769609, 0.0111993523}, {-0.00455777952, 0.00347294845, 0.00687646633, 0.00399083132, 0.01037273}}, {{0.00249539968, 0.00253309403, -0.0113648446, 0.00875384081, -0.000942059269}, {0.00176732987, -0.00787815079, -0.00580095779, 0.0014062624, 0.0177596435}, {0.00849872641, -0.0186055861, 0.00163150521, 0.0199582018, 0.00247473828}, {0.00772785535, 0.00486080162, 0.000314111792, -0.00113499758, -0.0107621346}, {-0.00149751909, -0.007035797, 0.0173775926, 0.00293800817, 0.0136625506}}, {{0.00962472335, 0.0257800519, 0.00286491495, 0.00487640221, 0.00700032804}, {-0.0222217254, 0.015754357, -0.00921172928, -0.0133630093, -0.00944287051}, {0.00106907624, -0.00107970554, 0.00287110219, 0.0049889111, -0.0108213853}, {0.00713741453, -0.020432286, 0.0239511542, -0.00165579189, -0.0306549761}, {0.0222255047, -0.0125560099, -0.00129659346, -0.00681112148, 0.0153500671}}, {{0.00785086676, 0.00400442118, 8.54233876e-005, 0.00736629497, -0.00642979704}, {-0.0011145426, -0.00407652697, 0.0142006939, -0.00703374995, 0.00768198911}, {0.00523287663, 0.00537897181, 0.00184465782, -0.0102073979, -0.00830617826}, {-0.00161178724, -0.0192283522, 0.000931005052, -0.00697397813, -0.000979592558}, {0.0117668379, 0.0125192339, -0.00719267316, -0.0159008056, 0.00179457793}}, {{-0.00425819075, 0.0149528235, 0.00480090175, 0.00520771183, -0.00500982581}, {-0.018439291, 0.000762707612, -0.00120743376, 0.0124883214, 0.00551836798}, {-0.00216141785, 0.0122602256, -0.0132078724, -0.0114772664, 0.00690819509}, {-0.000542358321, 0.0017802139, -0.00750831747, 0.00514895562, -0.00305767637}, {0.00858816225, -0.0144270621, -0.0214499105, 0.0152118262, 0.000184348406}}, {{0.0286627561, 0.00141034741, 0.0112728588, 0.00685963035, 0.00480252923}, {-0.00308503676, -0.00809183344, 0.00113768491, 0.0133415088, -0.0145551674}, {0.021930242, 0.00217769668, -0.0172272045, -0.0106718782, -0.00433108397}, {-0.0102371452, -0.00121209945, -0.00643950701, 0.0054250611, 0.00642573787}, {0.0072761965, 0.00727719255, -0.00688545173, -0.00831770152, 0.0011694812}}, {{0.00952818338, -0.0074718371, -0.00316054304, -0.0033550004, -0.00609453581}, {-0.0133330999, 0.000179020164, -0.0211977009, -0.00443055434, 0.00054668932}, {-0.0101883216, 0.00860946067, 0.00364350528, 0.00899784733, -0.000116333948}, {-0.0155853443, -0.0155753158, 0.0139634414, -0.00144694734, -0.00126419542}, {0.00569769228, -0.00516641932, 0.00185105624, -0.0224526953, -0.0084334258}}, {{-0.0123605067, 0.00408217032, 0.000596419326, -0.000126846324, 0.000717947376}, {-0.0102407206, -0.00866515562, -0.00195808127, -0.00497768633, -0.0146421986}, {0.0042935987, -0.00830626767, 0.00283215032, 0.0108071808, 0.00535940845}, {0.00731556583, -0.00970312953, 0.00247892179, -0.00187765749, -0.00592731126}, {-0.014079459, 0.00348063093, -0.0264193639, 0.00864753779, -0.0117486753}}, {{0.00144765212, 0.00259108865, -0.0117523922, -0.00753122242, 0.00581381051}, {-0.00877187587, 0.00640062522, -0.0135354334, -0.0100873988, 4.61116615e-005}, {-0.00382666709, -0.00480429316, -0.0112600373, -0.0181889702, 0.0022362317}, {0.00420241849, 0.0116344327, -0.00413131015, 0.00131672155, -0.0103952857}, {-0.019790031, -0.0081296172, 0.00195986778, -0.0204617102, -0.00239803526}}, {{0.00193208992, -0.0084565375, 0.0027430614, -0.0106311776, -0.000112898248}, {0.0153493239, -0.0286206622, -0.00582176121, -0.00892936997, 0.0199979991}, {0.0102778794, 0.00130635779, 0.00419428619, 0.00220762659, 0.0190091934}, {-0.00728477538, -0.00291541964, -0.0215523709, 0.013019288, -0.00601945631}, {0.0109793469, -0.00220199814, -0.00671096332, 0.0066094473, -0.00263801543}}, {{-0.00335157779, 0.0111606661, -0.00791379064, -0.000324482477, 0.012052739}, {0.0124279791, 0.00836305134, -0.0222378541, -0.00423382781, -0.0153299086}, {0.0054874476, -0.0128098605, -0.00936325826, -0.00133446534, -0.0105936788}, {-0.0114070084, 0.000185347046, -0.00311020622, 0.0108311595, -0.0109652197}, {0.00462747086, -0.000750187493, 0.00464337738, -0.00143592199, -0.0109769795}}, {{-0.0165916625, 0.00635825982, -0.0146761276, 0.0123110153, 0.00153318304}, {-0.00744881947, 0.0106791425, 0.00194350653, 0.0132650053, 0.00261144945}, {0.00904124789, -0.00387335988, -0.000699197, -0.00536866114, 0.00428358139}, {-0.00130734511, -0.000493343396, -0.0022037439, 0.00183877326, 0.0141659528}, {-0.00635821465, 0.00273186131, -0.00785980094, -0.00810394902, -0.00307433144}}, {{-0.00589622417, 0.00191154634, -0.0113961408, -0.0129960179, 0.00186607265}, {0.00264042406, -0.0107461112, -0.0262062512, 0.010533521, 0.0119752204}, {0.00530205201, -0.00403964287, 0.00440418487, -0.00626824517, 0.00614153873}, {0.000941457401, -0.0114321867, 0.00557594839, -0.0178013947, -0.00790831167}, {-0.0141029321, 0.011636883, -0.00935707707, -0.0130584268, 0.00623022625}}, {{-0.00603413116, -0.0154279657, 0.00178770756, 0.0194301624, -0.00029663337}, {-0.00401353138, -0.00487541314, 0.002350369, -0.0141496249, 0.0075403396}, {-0.00841396581, 0.00822126493, 0.000155086062, -0.0063874987, -0.00704583758}, {0.00281317066, -0.00987027027, -0.0177446511, -0.000605352223, 0.0155450292}, {-0.00530569116, -0.0122626135, 0.00216912781, -0.0142470282, 0.00973882154}}}, {{{-0.0131517462, -0.00481945043, -0.000379572331, -0.0123337321, -0.000966554624}, {-0.0100336662, 0.0175842401, 0.0116440896, -0.00685427757, 0.013721358}, {0.00678884098, -0.00664009573, 0.00893085822, 0.0063591022, -0.0120813418}, {0.00315726036, -0.0103253936, -0.0104991049, -0.014712533, 0.0118190674}, {-0.00360299065, -0.00211644405, -0.0149767315, 0.00446957583, -0.0034149359}}, {{0.00246571912, -0.0155322812, -0.00867609773, -0.0049672192, -0.00736547727}, {-0.00132683408, 0.00422929181, -0.00215151417, -0.00432663038, -0.0215585101}, {0.00901938882, -0.00991665851, -0.00936087314, 0.0277271327, 0.000274498423}, {0.00374714355, 0.0108530559, -0.0029555948, -0.00935659558, -0.00238680723}, {-0.00608676532, 8.28922857e-005, -0.0137767429, -0.0131071797, 0.00586318178}}, {{-0.00966220256, 0.00141550216, 0.00799309835, 0.0188344605, 0.000963401282}, {0.00131214655, -0.00892202463, -0.00310664927, -0.00190565037, 0.000360822247}, {-0.00438293489, 0.0147563638, 0.00342985406, -0.00112188375, 0.0108446945}, {-0.0228419472, 0.00415453222, 0.00110773335, -0.0172115453, -0.0179683827}, {-0.00830588862, -0.0141202826, -0.00874365587, 0.0119561506, -0.00361995841}}, {{0.00376761705, 0.00723458873, 0.00862975512, 0.0083748186, 0.00240009325}, {0.0110109756, 0.00385377277, 0.00709987758, -0.0107681416, 0.00915071089}, {0.00238904613, 0.0150677497, -0.000970624737, 0.00236533792, -0.0226931367}, {0.0103778597, 0.00102016062, -0.0127620995, 0.00501399627, 0.020913614}, {-0.0006340525, -0.00285137072, 0.00965894014, 0.00626914157, 0.000543520204}}, {{-0.00660278182, -0.0105276732, -0.0122599043, 0.0106715038, -0.00624770671}, {-0.0192503445, 0.00057446718, -0.0110585364, -0.00626901397, -0.0133806905}, {-0.00449155364, 0.00193798239, 0.00323495734, 0.000438056566, 0.00656806165}, {0.00191258453, -0.00993336551, -0.00690612709, 0.0146948593, 0.00179761578}, {-0.00540679973, -0.00354954391, -0.00182329281, 0.00483412016, 0.00127857912}}, {{-4.94654806e-008, -0.00751326699, -0.00795045402, 0.00720828259, 0.00533107342}, {-0.0139251715, -0.0056825201, -0.00757741695, -0.0105105741, -0.0101928469}, {-0.012828867, 0.00412609428, 0.00485926447, -0.0158933755, 0.0123702893}, {-0.0142004034, -0.0119898226, -0.0121839521, -0.00801362284, -0.00346802128}, {-0.0116530834, 0.0217373259, -0.00400317274, 0.000615313009, -0.00841467921}}, {{0.00955850631, -0.00121460075, -0.00513676973, -0.005697669, -0.0165232718}, {0.00283050607, -0.00689401384, -0.00627258746, 0.0138523038, 0.0042198915}, {0.011852297, 0.000922557781, -0.00490243221, -0.014292038, -0.000622527499}, {0.00480510294, 0.00806104671, 0.0137974815, 0.00386543688, 0.00574642746}, {-0.0123269828, 0.00265753176, -0.0163119473, -0.00991125964, -0.010237311}}, {{-0.00126473629, 0.0246529132, 0.00744519336, -0.00891943369, -0.0111170337}, {-0.0084454827, -0.000719116244, 0.00355457678, -0.00361106894, 0.0109708728}, {0.0200833008, 0.00647412986, -0.00881123077, 0.00469084783, -0.0058795861}, {0.0225351788, 0.00590795698, -0.00831917487, -0.00768270576, -0.0154143935}, {0.00364019303, 0.00450942153, 0.000485736207, -0.0101696858, 0.0121183144}}, {{-3.36973462e-005, -0.0129395099, 0.0184891094, 0.00231359946, 0.00743887946}, {0.0034584594, 0.0133888889, -0.00758635206, 0.0144578749, -0.00267735473}, {-0.0108578699, -0.0112157129, 0.0035747888, 0.00657148566, -0.0095778089}, {-0.0105088362, 0.0199637264, 0.00694537396, 0.000519880035, -0.00319376378}, {0.0195242725, -0.0132782282, -0.0134110777, 0.00249533029, -0.00590427406}}, {{-0.00186699128, 0.0182572883, 0.00367830042, 0.00613237638, -0.0168108363}, {0.0155008016, 0.0140026649, 0.00805297401, -0.00103260321, 0.00447573047}, {-0.0102807814, 0.00936651137, -0.0160350204, -0.0070462483, 0.00015852967}, {-0.011368732, -0.00405919459, -0.0202602446, -0.00340858079, 0.00257970486}, {-0.00347460876, 0.010009557, -0.00401857868, -0.000810079335, 0.0111874128}}, {{0.00454338221, 0.0214360189, 0.000901024614, -0.00661433442, -0.0151057458}, {-0.00223161862, 0.00111651723, -0.00840179529, 0.00397393759, -0.00834847894}, {-0.00446343794, 0.0140654054, -0.00529488549, -0.00743734511, -0.0137127927}, {-0.0115700038, -0.00795109011, 0.00554205058, 0.0289537087, 0.0188046843}, {0.00459493045, -0.00745946355, 0.0149337417, -0.00082076859, -0.00950523838}}, {{-0.000654971052, -0.000348881411, -0.0133168828, -0.00775889447, -0.000786038116}, {-0.00705338595, -0.0109241819, -0.00138862722, 0.006922381, 0.00879907981}, {0.00978745334, -0.00226558209, 0.0038289614, 0.014680218, -0.0110996859}, {0.0125210797, 0.00426091533, 0.00803792197, -0.00929756649, 0.00468054647}, {-0.0070020631, 0.0052203997, 0.000548355631, 0.00613474473, -0.00404445315}}, {{0.00858643744, -0.0102415988, -0.00147448864, -0.00649185712, 0.00593708502}, {0.00927317981, -7.87905446e-005, 0.00490553677, -0.00338359014, 0.00178315607}, {-0.00720501831, 0.00482049771, 0.00924776495, 0.00147248281, -0.0243731514}, {0.00405299244, -0.00419470156, 0.00454834243, -0.00385106774, -0.0116999038}, {-0.00284601981, 0.00859025121, 0.024179643, 0.00807776675, -0.0110678077}}, {{0.0136281932, -0.0121791326, -0.00936247874, 0.0164040662, 0.00406359881}, {-0.00496294582, -0.000210153594, -0.014169666, 0.00229283865, 0.000917077006}, {-0.00101982569, 0.0162013397, 0.00255097891, 0.0102498531, 0.0137414597}, {-0.00330047333, -0.0101443166, 0.000182277538, 0.0161248688, -0.00370161724}, {0.00098317978, -0.000752837339, -0.0100181121, -0.0111662941, -0.00405495102}}, {{0.00689239195, -0.00614195177, 0.00686964858, -0.0264123008, 0.00152551662}, {-0.00276628509, -0.00716954889, -0.00131105469, -0.0074015935, -0.011666609}, {-0.0045565879, -0.0158883445, 0.0101807527, -0.000783458701, -0.00958723295}, {-0.00705387117, -0.00460660225, 0.00735946419, 0.00388827082, 0.00932734646}, {0.00356836175, -0.00423615007, 0.00333750085, 0.00759558566, -0.0116595691}}, {{0.00934666302, -0.00287567289, -0.00523110898, 0.0100510623, -0.00429990701}, {-0.00731621217, 0.00245129806, -0.016196847, -0.00557161355, 0.00700944476}, {-0.000111757996, -0.000197087036, -0.0212265123, -0.0144851906, -0.00614910061}, {0.000505459204, 0.00827440992, -0.0111001674, 0.0206460562, 0.00259875786}, {-0.0151227564, -0.00723710936, 0.00461728079, 0.00328212953, 0.0091756219}}}, {{{-0.0102352519, -0.00180604879, 0.00611543469, 9.20880921e-005, 0.00793294422}, {-0.00263666059, 0.0117041487, 0.00759804342, 0.00209055562, -0.0107674263}, {-0.00565079879, -0.00798316579, -0.00276795495, -0.00134292536, -0.0208517574}, {-0.0103692878, -0.00277558272, 0.00395195093, -0.0045759338, -0.0067461119}, {-0.00536063779, -0.0040770974, 0.00699749636, -0.0136678824, 0.00155153417}}, {{-0.00302294292, -0.023497628, 0.0120196594, 0.0071792095, -0.00244297716}, {-0.0253100023, -0.0263498574, -0.00404579705, 0.000633170828, -0.016402375}, {-0.0155907823, -0.00717359781, -5.31624319e-005, -0.00330719771, -0.010047893}, {-0.0107044699, -0.0127819711, 0.00459181424, -0.00165358488, -0.00207083137}, {0.00254844711, -0.000582416716, -0.00103666971, 0.00891614892, -0.00749634625}}, {{-0.00663454505, 0.00383797451, 0.00651039137, 0.00182019034, -0.00198204187}, {-0.0063547655, 0.0161178634, -0.0169431027, 0.000564447779, 0.00100664829}, {0.00111684063, -0.0196213685, -0.00428142352, 0.0187666044, -0.00305688847}, {-0.00447215931, 0.00162779621, -0.00609459775, -0.017810585, -0.0159433819}, {-0.015959492, 0.00861793198, -0.00145499629, 0.0116565796, -0.00157958362}}, {{-0.00452353247, -0.0067609814, 0.00156687864, -0.0111146299, -0.00342806778}, {0.0013659884, 0.00701437611, 0.00593110081, -0.000477110065, 0.00510780141}, {0.0159115978, -0.00354068447, 0.0142810429, 0.0184582267, 0.00454271073}, {-0.0107106315, -0.000764142082, 0.00682834722, 0.0170161612, -0.00581826828}, {-0.00171034515, -0.00613783067, 0.00018506356, -0.00730211707, 0.00601469539}}, {{0.000671073853, 0.00307928119, -0.00429664692, 0.00170422939, 0.0118725924}, {0.000495002256, 0.00844841637, 0.0117326491, -0.00910118595, -0.004354259}, {0.00340382825, 0.0124329636, -0.00730214734, 0.0048179091, 0.00647412986}, {-0.0224237386, 0.013387505, -0.00996425841, 0.00429589115, -0.000703023805}, {-0.00797301903, 0.0111453952, -0.00414493354, 0.00654463517, -0.00759110507}}, {{-0.00163057831, -0.00871421304, -0.00400605099, 0.0226329137, -0.00438753329}, {0.00357383979, 0.00494252378, -0.0183208659, -0.0116887121, 0.00585902855}, {-0.00249780808, -0.00281993672, 0.00540288538, -0.00821426418, -0.00335935317}, {-0.00939345546, -0.000144942445, 0.00576663762, 0.000948926434, 0.00448892685}, {-0.0158421993, 1.30170257e-008, -0.00248889532, 0.00445056194, -0.00683418615}}, {{0.00847914349, 0.00582795404, -0.00833758432, 0.00439096754, -0.00949282944}, {-0.00615388062, 0.0124408677, -0.0120712817, -0.0106645115, -0.0164450593}, {0.00898620859, -0.00308290706, -0.0059178425, 0.00454336172, -0.00684396503}, {-0.00379316066, -0.00942389015, -0.00835399423, 0.0225771535, -0.00667572627}, {-0.0147741921, -0.00675222976, -0.00923634786, 0.00518929772, -0.00125853822}}, {{-0.00372882467, -0.0049177669, -0.00141389621, 0.00271150772, 0.0204019323}, {-0.0246816147, -0.00302335923, -0.0126382792, -0.00372221228, -0.00276448671}, {0.0126040243, -0.000258137879, 0.0201565828, 0.00078180019, 0.00931194052}, {-0.0120335817, -0.00991381705, -0.000823688228, -0.00288072205, -0.00184972724}, {0.00241183955, -0.0162880346, -0.0106786918, 0.00651039137, -0.00802073348}}, {{0.0023143983, -0.0128196133, -0.00396314822, -0.00461953366, -0.00584517978}, {-0.0216462538, -0.014470146, -0.0166653786, -0.00775049115, -0.00650084624}, {-0.00765213603, 0.00282781548, -0.0098429611, -0.00420649769, 0.00580184488}, {-0.00638256315, -0.00541578373, 0.00839319918, -0.00438934099, -0.00486268988}, {0.0149137294, 0.00990680046, 0.0177615825, -0.0128248353, 0.00393309817}}, {{-0.00752829108, -0.0169225316, -0.00674106879, -0.0133749703, -0.0124077825}, {-0.00536757195, 0.0143036889, -0.0114527335, 0.0171003789, 0.00442228792}, {0.00391823472, 0.0147446627, 0.0151438443, 0.0173870269, 0.0179650355}, {0.00559940841, -0.0140004028, -0.000445880782, 0.00584396766, 0.0102559458}, {-0.0159921069, -0.0151788145, -0.00133221259, -0.0272697415, 0.00124554941}}, {{0.00924365595, -0.0115663977, -0.00179215823, -0.0169052184, -0.0110188257}, {0.00716146082, -0.000427889696, -0.00753979385, -0.00397186773, -0.011886281}, {0.0124150524, -0.00160088285, 0.000239017871, -0.00636827759, 0.0136239314}, {-0.00828703959, 0.0144134788, 0.012717397, 0.0161731988, 0.016367225}, {0.00762783783, -0.00458559627, 0.00620996626, -0.000467789068, -0.0122031961}}, {{0.00196697284, 0.0117406491, 0.000164624478, 0.0175152458, 0.00782788731}, {0.0217337627, -0.00804563891, 0.00700164353, -0.0171366669, 0.00704813004}, {-0.000438403862, -0.000420578435, -0.0155228497, 0.0177226644, 0.00521005969}, {-0.00325956102, 0.0174847078, -0.00384286814, -0.00510214409, -0.00972267147}, {0.0131324157, 0.0182825532, 0.0096498467, -0.000708068372, 0.0196270049}}, {{-0.0026794828, 0.00730488915, 0.00567656476, -0.0084638577, -0.00183039194}, {-0.00525441626, -0.000610244228, 0.00365462736, 0.0339761712, 0.0128987469}, {-0.00548932143, 0.000881851127, 0.00413987599, 0.00942661241, 0.00495756092}, {-0.0147618018, 0.0156472083, 0.00495112222, -0.000889887218, 0.00831738673}, {-0.0035438647, -0.00848394074, -0.0105721112, -0.0235143378, 0.00429776218}}, {{0.00655218773, -0.00690876972, 0.000819221488, -0.00328128808, 0.00640063453}, {0.0082120318, 0.00283439178, -0.00104799983, -0.00972942263, -0.00376871484}, {-0.00250191963, -0.00577900279, 0.00714666955, 0.00749014923, -0.00776025746}, {-0.00949349441, -0.00540656783, 0.00679473532, 0.00743558258, 0.00697399024}, {-0.0205745213, 0.000560407527, -0.00487721432, -0.00436249143, 0.00667170482}}, {{0.013630922, -0.0044395728, -0.00925632194, 0.0130602559, 0.0137557723}, {0.0102810962, 0.00154584786, 0.00650467491, -0.00140309974, 0.0165632516}, {0.00595237315, 0.0162982922, 0.0221760273, -0.00835045986, 0.000774936809}, {-0.00619998993, 0.000896839134, 0.0140649397, -0.00251622102, -0.000157363073}, {0.011493369, 0.00390289351, -0.00408225507, 0.0145801622, 0.0112781404}}, {{-0.0111598102, 0.0103496015, 0.0145494575, 0.023132924, 0.00130219769}, {0.0059073437, -0.0104090068, 0.00335806911, 0.00179088861, 0.00782577135}, {0.0061271186, 0.0108936941, 0.00620285282, -0.00150466198, -0.0121840248}, {0.00887279678, 0.00528380368, -0.031624496, -0.00643859245, -0.0023534873}, {0.00757247163, 0.00039534684, -0.00246232795, -0.00188784825, 0.0220024195}}}}};
 static RBF_layer output={.wei={{-0.0114909075, -0.00506220525, -0.00587762147, -0.010146535, 0.0167743266, -0.00883114245, -0.00950561743, 0.00273872027, 0.00493028993, -0.00209853915}, {-0.00838079583, -0.0209610909, -0.00571279414, -0.0137569876, 0.00821869634, -0.00241460768, -0.000570634205, 0.0025946619, 0.000236796521, -0.00415619835}, {-0.00184705143, 0.00203837641, -0.00708751241, -0.00135038968, 0.00276366551, -0.018527614, -0.00624357164, 0.0191436093, -0.0135690682, -0.0085981302}, {-0.0182599779, -0.00915140286, -0.00817792024, 0.0166634154, -0.00830557104, 0.00595094357, -0.00826312508, 0.000502040552, -0.00504740886, -0.00742080621}, {0.0157104041, 0.0138947228, -0.00632992107, 0.000441151089, 0.00415735599, 3.14727977e-008, -0.000722586759, -0.00139618898, -0.00924092159, -0.000132097586}, {0.00505624432, -0.00825655553, 0.000621408515, -0.0104929786, 0.0118693402, 0.00742187677, 0.00658139726, 0.00524409581, -0.00523338467, -0.0100802137}, {-0.0281916037, 0.0223878864, -0.00254782662, -0.0155450366, 0.000537689077, 0.00784485973, 0.00622961204, 0.000971423055, -9.30308233e-005, 0.0129346447}, {0.0127517274, 0.0166206565, 0.00261023035, -0.0033710103, -0.00409662398, 0.00129366515, 0.00397430779, 0.00435038516, 0.0106223281, 0.00554549694}, {0.00588205457, 0.0202228446, 0.022513438, 0.00912378263, 0.0152747827, -0.00185587595, -0.00889044069, 0.00400657998, -0.000232331993, 0.00730819441}, {0.00874277018, 0.000530100777, 0.0121673038, 0.00341014704, -0.0211783182, -0.00532269292, 0.000902357628, -0.00741767231, -0.0154177705, -0.0127129899}, {-0.00030166356, -0.0077024335, -0.000506496872, -0.00226775859, -0.00587334298, 0.00516416878, -0.0104061598, -0.015567854, 0.00587375462, -0.0153213898}, {0.00278424053, -0.00840458088, -0.0228142701, 0.000377586868, -0.0298461448, 0.00332657876, 0.00191673683, -0.000599632272, 0.0042990665, -0.0109593952}, {-0.00613683648, -0.00840212684, -0.00405269116, 0.000783163472, 0.00352610159, 0.0108734826, 0.0030709079, -0.0277794413, 0.011921851, -0.01448528}, {0.00454967096, 0.00723727001, 0.00603625877, -0.00866185594, -0.000237819884, 0.0108025158, 0.00556614669, 0.00169830373, -0.00905808806, 0.00774577074}, {-0.00403672829, -0.0030561504, -0.00900552422, -0.000845990144, -0.0118328594, 0.0110683106, 0.0216681659, -0.0017898652, -0.000349490321, -0.0263786837}, {0.00743999146, -0.00332603976, -0.00102798897, -0.00395024801, -0.00605191244, -0.00082594651, 0.027355589, -0.00310183829, 0.000675141346, -0.00271002646}, {-0.00668113539, -0.00238733063, -0.00464872085, -0.00598909473, 0.0140336799, 0.00199018815, 0.00306126638, -0.022095155, 0.00274777226, 8.4056468e-005}, {0.00202561636, -0.00828091428, -0.00603115745, -0.0225731395, 0.0122685907, 0.00524317846, 0.00376046984, 0.0124752773, 0.00476598414, -0.000272736099}, {0.00294801476, -5.95526908e-005, -0.00310266879, 0.00558402669, 0.0009685767, -0.00551332487, -0.0161412656, 0.0079429308, 0.0150127374, -0.00390117965}, {0.00445736526, 0.000505782838, 0.003404574, -0.00307607977, -0.00495692389, -0.00763406185, 0.00190107408, 0.0076881689, -0.00487629557, -0.00688268477}, {-0.0119674597, -0.00155490579, 0.00597255351, -0.00702736294, -0.00465178862, -0.00432349974, -0.0103361215, 0.00296167308, -0.00651609711, 0.00432998873}, {0.0190999396, -0.00990638416, 0.00631187949, -0.0143975439, 0.0127298413, -0.00160739454, 0.0150161218, -0.00496656215, 0.00425198441, -0.00426986255}, {-0.00438458892, 0.0098797204, -0.00519978674, -0.000164419835, 0.0177842267, 0.00558447652, -0.00501176994, -0.00423734728, -0.00341740926, -0.00737773487}, {0.00662393868, -0.0128396275, 0.012481506, -0.000255926599, -0.00519732852, -0.0166696813, -0.000509539444, -0.00349278445, 0.00112324534, 0.00699658273}, {-0.00970595796, -0.00102043012, 0.00223163865, 0.00196994143, 0.000393236231, 0.0132054733, -0.0167463571, -0.00765741197, -0.012301825, 0.0251636263}, {-0.00529749552, -0.00399169466, 0.000867989438, -0.00231508352, 0.00471332017, 0.00751937926, -0.013751612, 0.0178024843, -0.00817426853, 0.0126766851}, {-0.0111414259, 0.00946911518, 0.00456218095, 0.00169923704, 0.0047760983, 0.0140094785, -0.0135355005, 0.0165495034, 0.00650377758, -0.00693998812}, {-0.0186403282, -0.00341299037, 0.0117417919, 0.000309629948, -0.00669044582, 0.00200642901, 0.00107039337, 0.0213786997, -0.00201394316, 0.0199425537}, {-5.03112315e-005, 0.00191007659, 0.00893830322, 0.00270882109, -0.00943799317, -0.0195668116, -0.0171954036, 0.000147650251, 0.00518825231, -0.0146344099}, {0.000577187573, -0.00147994363, 0.000199382703, 0.0134122269, -0.00674357451, -0.00775276124, -0.0158373583, 0.0175509155, -0.0106869154, -0.00400227727}}};
 static float input_img[32][32];
 static unsigned char resid[10][10]={{1,0,0,0,0,0,0,0,0,0},
   {0,1,0,0,0,0,0,0,0,0},
   {0,0,1,0,0,0,0,0,0,0},
   {0,0,0,1,0,0,0,0,0,0},
   {0,0,0,0,1,0,0,0,0,0},
   {0,0,0,0,0,1,0,0,0,0},
   {0,0,0,0,0,0,1,0,0,0},
   {0,0,0,0,0,0,0,1,0,0},
   {0,0,0,0,0,0,0,0,1,0},
   {0,0,0,0,0,0,0,0,0,1}};
 static unsigned char renew=1;

 void dateport(unsigned int date,unsigned char signal,unsigned short *led,unsigned char *signal_out)
 {
_ssdm_op_SpecInterface(signal_out, "s_axilite", 1, 1, 0, 0, "", "", "");
# 37 "Le_7/Lnet.c"

_ssdm_op_SpecInterface(led, "s_axilite", 1, 1, 0, 0, "", "", "");
# 37 "Le_7/Lnet.c"

_ssdm_op_SpecInterface(signal, "s_axilite", 1, 1, 0, 0, "", "", "");
# 37 "Le_7/Lnet.c"

_ssdm_op_SpecInterface(date, "s_axilite", 1, 1, 0, 0, "", "", "");
# 37 "Le_7/Lnet.c"

_ssdm_op_SpecInterface(0, "s_axilite", 1, 1, 0, 0, "", "", "");
# 37 "Le_7/Lnet.c"

  if(signal==3)
  {
   float *test=(float*)&date;
   input_img[input_i/32][input_i%32]=*test;
   input_i++;
   (*signal_out)=2;
   if(input_i==1024)
   {
    input_i=0;
     //CNNs(&C1,&S2,&C3,&S4,&C5,&output,input_img,acvau);
   }
  }
  else if(signal==2)
  {
   return ;
  }
  //else if(*signal==1)
  //{
  // datereadacv(date,signal);
  //}
  else if(signal==1)
  {
   CNNs(&C1,&S2,&C3,&S4,&C5,&output,input_img,date);
   correct(date);
   *led=righht_i;
   (*signal_out)=2;
  }
  else if(signal==0)
  {
   righht_i=0;
   (*signal_out)=2;
  }
  else
   (*signal_out)=2;
  /*switch(*signal)
		{
			//case 9:datereadc1(date,signal);return 0;
			//case 8:datereadc3(date,signal);return 0;
			//case 7:datereadc5(date,signal);return 0;
			//case 6:datereado(date,signal);return 0;
			case 5:datereadinput(date,signal);return 0;
			//case 4:return datewritec1(signal);
			//case 3:return datewritec3(signal);
			//case 2:return datewritec5(signal);
			//case 1:return datewriteo(signal);
			default:return 0;
		}*/

  //return 0;
 }
 /*void datereadacv(unsigned int date,unsigned char* signal)
 {
 	//float *test=(float*)&date;
 	*signal=2;
	 acvau[i]=date;
 	i++;
 	if(i==10)
 	{
 		(*signal)--;
 		i=0;
 		//CNNs(&C1,&S2,&C3,&S4,&C5,&output,input_img,acvau);
 	}
 }*/
 void datereadinput(unsigned int date,unsigned char* signal)
 {
  float *test=(float*)&date;
  input_img[input_i/32][input_i%32]=*test;
  input_i++;
  (*signal)--;
  if(input_i==1024)
  {
   input_i=0;
   //CNNs(&C1,&S2,&C3,&S4,&C5,&output,input_img,acvau);
  }
 }
 void correct(unsigned int right)
 {
  int j;
  float h,m;
  int offset=0;
  //h=;
  h=-1.0f;
  //h=outres[0]*outres[0];
  for(j=0;j<10;j++)
  {

   m=output.y[j];//*outres[j];

   if(m>h)
   {
    h=m;
    offset=j;
   }
  }
  if(offset==right)
  {
   righht_i++;
  }
 }
 /*void datereadc1(float date,unsigned char* signal)
 {
		//float *test=(float*)&date;
		*signal=3;
		if(stutas==0)
		{
			C1.mapData[i/25][(i/5)%5][i%5]=date;
			i++;
			if(i==150)
				stutas++;
		}
		else
		{
			C1.bias[j]=date;
			j++;
			if(j==6)
			{
				(*signal)--;
				i=0;j=0;
				stutas=0;
			}
		}
 }
void datereadc3(float date,unsigned char* signal)
{
	//float *test=(float*)&date;
	*signal=2;
	if(stutas==0)
	{
		C3.mapData[i/150][(i/25)%6][(i/5)%5][i%5]=date;
		i++;
		if(i==2400)
			stutas++;
	}
	else
	{
		C3.bias[j]=date;
		j++;
		if(j==16)
		{
			(*signal)--;
			i=0;j=0;
			stutas=0;
		}
	}
}
void datereadc5(float date,unsigned char* signal)
{
	//float *test=(float*)&date;
	*signal=2;
	if(stutas==0)
	{
		//C5.mapData[i/400][(i/25)%16][(i/5)%5][i%5]=date;
		i++;
		if(i==48000)
			stutas++;
	}
	else
	{
		C5.bias[j]=date;
		j++;
		if(j==50)
		{
			(*signal)--;
			i=0;j=0;
			stutas=0;
		}
	}
}
void datereado(float date,unsigned char* signal)
{
	//float *test=(float*)&date;
	*signal=2;
	if(stutas==0)
	{
		output.wei[i/50][i%10]=date;
		i++;
		if(i==1200)
			stutas++;
	}
	else
	{
		output.bias[j]=date;
		j++;
		if(j==10)
		{
			(*signal)--;
			i=0;j=0;
			stutas=0;
		}
	}
}

float datewritec1(unsigned char* signal)
{
	//unsigned int *date;
	float temp;
	if(stutas==0)
	{
		temp=C1.mapData[i/25][(i/5)%5][i%5];
		//int *date=(int*)&temp;

		i++;
		if(i==150)
			stutas++;
	}
	else
	{

		temp=C1.bias[j];
		//int *date=(int*)&temp;
		j++;
		if(j==6)
		{
			(*signal)--;
			i=0;j=0;
			stutas=0;
		}

	}
	return temp;

}
float datewritec3(unsigned char* signal)
{
	//unsigned int *date;
	float temp;
	if(stutas==0)
	{
		temp=C3.mapData[i/150][(i/25)%6][(i/5)%5][i%5];
		//int *date=(int*)&(temp);
		i++;
		if(i==2400)
			stutas++;
	}
	else
	{
		temp=C3.bias[j];
		//int *date=(int*)&(temp);
		j++;
		if(j==16)
		{
			(*signal)--;
			i=0;j=0;
			stutas=0;
		}

	}
	return temp;

}
float datewritec5(unsigned char* signal)
{
	//unsigned int *date;
	float temp;
	if(stutas==0)
	{
		//temp=C5.mapData[i/150][(i/25)%6][(i/5)%5][i%5];
		//int *date=(int*)&(temp);
		i++;
		if(i==48000)
			stutas++;

	}
	else
	{
		temp=C5.bias[j];
		//int *date=(int*)&(temp);
		j++;
		if(j==50)
		{
			(*signal)--;
			i=0;j=0;
			stutas=0;
		}
		//return (unsigned int)*date;
	}
	return temp;
}
float datewriteo(unsigned char* signal)
{
	//unsigned int *date;
	float temp;
	if(stutas==0)
	{
		temp=output.wei[i/50][i%10];
		int *date=(int*)&(temp);
		i++;
		if(i==1200)
			stutas++;
		//return (unsigned int)*date;
	}
	else
	{
		temp=output.bias[j];
		//int *date=(int*)&(temp);
		j++;
		if(j==50)
		{
			(*signal)--;
			i=0;j=0;
			stutas=0;
		}
	}
	return temp;

}*/
 //void CNNs(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output,float input_img[32][32],float acvau[10],float eF[10],int renew,float *JL)
void CNNs(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output,float input_img[32][32],unsigned int right)
{_ssdm_SpecArrayDimSize(input_img,32);
 //C1卷积层正向传播
  C1_conv(C1,input_img);
 //S2池化层正向传播
  S2_pool(C1,S2);
 //C3卷积层正向传播
  C3_conv(S2,C3);
 //S4池化层正向传播
  S4_pool(C3,S4);
 //C5卷积层正向传播
  C5_conv(S4,C5);
 //F6输出层正向传播
  //f6_layer(C5,F6);
  O_layer(C5,output);

  //O_layer(F6,output);
  //DO_layer(output,acvau,eF);
  DO_layer(output,right);
  //update_OUT(F6,output);
 // DO_c(output,acvau,eF);
  //F6的反向网络梯度δ求解
  //DF6_layer(F6,output);
  //F5权重及偏置更新
  //update_F6(C5,F6);
 //C5的反向网络梯度δ求解

  DC5_layer(C5,output);
  //DC5_c(C5,output,acvau,eF);
  //DC5_layer(C5,F6);
 //S4的反向网络梯度δ求解
  DS4_layer(S4,C5);
  //DS4_c(S4,C5,output,acvau,eF);
 //C3的反向网络梯度δ求解
  DC3_layer(C3,S4);
  //DC3_c(C3,S4,C5,output,acvau,eF);
  //S2的反向网络梯度δ求解
  DS2_layer(S2,C3);
  //DS2_c(S2,C3,S4,C5,output,acvau,eF);
 //C1的反向网络梯度δ求解
  DC1_layer(C1,S2);
 // DC1_c(C1,S2,C3,S4,C5,output,acvau,eF);
  update_C1(C1,input_img);
  //in_layer(cn);
  //S2权重及偏置更新
 // update_S2(C1,S2);
  //C3卷积核及偏置更新
  update_C3(S2,C3);
  //S4权重及偏置更新
  //update_S4(C3,S4);
  //C5卷积核及偏置更新
  update_C5(S4,C5);
  update_OUT(C5,output);
  if(!renew)
   upadteall(C1,S2,C3,S4,C5,output);
   //upadteall(C1,S2,C3,S4,C5,output,JL);
  renew++;
  renew=(renew)%50;
}


void C1_conv(c1_layer* C1,float inputimg[32][32])
{_ssdm_SpecArrayDimSize(inputimg,32);
 unsigned char i,j,k,m,n,p,q;
 //float tmp;
 for(i=0;i<6;i++)
 {
  for(j=0;j<28;j++)
  {
   C1_conv_label3:for(k=0;k<28;k++)
   {
_ssdm_op_SpecPipeline(1, 1, 1, 0, "");
# 415 "Le_7/Lnet.c"

    C1->v[i][j][k]=0.0;//C3层16X10X10输出清零
   }
  }
 }
 for(i=0;i<6;i++)//6个特征图
 {
  for(j=0;j<28;j++)//28X28
  {
   for(k=0;k<28;k++)
   {
    //tmp=0;
    C1_conv_label0:for(m=0;m<5;m++)//5X5卷积
    {
_ssdm_op_SpecPipeline(1, 1, 1, 0, "");
# 428 "Le_7/Lnet.c"

_ssdm_op_SpecPipeline(1, 1, 1, 0, "");
# 428 "Le_7/Lnet.c"

     C1_conv_label2:for(n=0;n<5;n++)
     {
_ssdm_op_SpecPipeline(1, 1, 1, 0, "");
# 430 "Le_7/Lnet.c"

      C1->v[i][j][k]=C1->v[i][j][k]+inputimg[j+m][k+n]*C1->mapData[i][4-m][4-n];
      /*for(p=0;p<5;p++)
						{
							//卷积结果求和,卷积方式为输入的部分5X5乘以对应卷积核转置相加
							tmp+=(inputimg[j+m][k+p]*C1->mapData[i][p][n]);
						}*/
     }
    }
    //=tmp;//卷积输出值
    C1->y[i][j][k]=Sigma_3(C1->v[i][j][k],C1->bias[i]);//激活值
    //C1->y[i][j][k]=C1->v[i][j][k]+C1->bias[i];
   }
  }
 }
}

void S2_pool(c1_layer* C1,s2_layer* S2)
{
 unsigned char i,j,k,m,n;
 //float tmp;
 for(i=0;i<6;i++)//6个C2特征图pooling
 {

  for(j=0;j<28;j=j+2)//28X28,步长2,不重叠
  {

   for(k=0;k<28;k=k+2)
   {
    //2X2平均池化
    S2->v[i][j/2][k/2]=(C1->y[i][j][k]+C1->y[i][j][k+1]+C1->y[i][j+1][k]+C1->y[i][j+1][k+1])/4;//*S2->weig[i];
    //tmp=(tmp/4);//乘以权值
    //=tmp;
    S2->y[i][j/2][k/2]=S2->v[i][j/2][k/2];
    //S2->y[i][j/2][k/2]=Sigma_2(S2->v[i][j/2][k/2],S2->bias[i]);//激活值
   }
  }
 }
}

void C3_conv(s2_layer* S2,c3_layer* C3)
{
 unsigned char i,j,k,m,n,p,q;
 //float tmp;
 for(i=0;i<16;i++)
 {
  for(j=0;j<10;j++)
  {
   for(k=0;k<10;k++)
   {
    C3->v[i][j][k]=0.0f;//C3层16X10X10输出清零
   }
  }
 }
 for(i=0;i<16;i++)//遍历网络表
 {

  for(j=0;j<6;j++)
  {

   //if(table[j][i])//查表
   //{
    for(k=0;k<10;k++)//卷积
    {

     for(m=0;m<10;m++)
     {

      //tmp=0;//卷积运算结果清零
      C3_conv_label1:for(n=0;n<5;n++)//5X5卷积
      {
_ssdm_op_SpecPipeline(1, 1, 1, 0, "");
# 500 "Le_7/Lnet.c"


       C3_conv_label4:for(p=0;p<5;p++)
       {
_ssdm_op_SpecPipeline(1, 1, 1, 0, "");
# 503 "Le_7/Lnet.c"


        C3->v[i][k][m]=C3->v[i][k][m]+S2->y[j][k+n][m+p]*C3->mapData[i][j][4-n][4-p];

        /*for(q=0;q<5;q++)
								{

									//卷积方式与以上相同
									tmp+=(S2->y[j][k+n][m+q]*C3->mapData[i][j][q][p]);
									//if(isnan(tmp))
										//printf("error");
								}*/
       }
      }
      //+=tmp;//同一特征图相加
     }
    }
   //}
  }
 }
 for(i=0;i<16;i++)
 {

  for(j=0;j<10;j++)
  {

   for(k=0;k<10;k++)
   {

    C3->y[i][j][k]=Sigma_3(C3->v[i][j][k],C3->bias[i]);//激活
    //C3->y[i][j][k]=C3->v[i][j][k]+C3->bias[i];
   }
  }
 }
}

void S4_pool(c3_layer* C3,s4_layer* S4)//同s2
{
 unsigned char i,j,k;
 //float tmp;
 for(i=0;i<16;i++)
 {
  for(j=0;j<10;j=j+2)
  {
   for(k=0;k<10;k=k+2)
   {
    //2X2平均池化
    S4->v[i][j/2][k/2]=(C3->y[i][j][k]+C3->y[i][j][k+1]+C3->y[i][j+1][k]+C3->y[i][j+1][k+1])/4;//*S4->weig[i];
    //tmp=tmp*S4->weig[i];
    //S4->v[i][j/2][k/2]=tmp;
    S4->y[i][j/2][k/2]=S4->v[i][j/2][k/2];
    //S4->y[i][j/2][k/2]=Sigma_2(S4->v[i][j/2][k/2],S4->bias[i]);
   }
  }
 }
}

void C5_conv(s4_layer* S4,c5_layer* C5)
{
 unsigned char i,j,k,m;
 //float tmp;
 for(i=0;i<30;i++)
 {
  C5->v[i]=0.0f;
 }
 for(i=0;i<30;i++)
 {
  for(j=0;j<16;j++)
  {
   //全连接不用查表直接计算
   //tmp=0;
   for(k=0;k<5;k++)
   {
    C5_conv_label2:for(m=0;m<5;m++)
    {
_ssdm_op_SpecPipeline(1, 1, 1, 0, "");
# 577 "Le_7/Lnet.c"

     C5->v[i]=C5->v[i]+S4->y[j][k][m]*C5->mapData[i][j][4-k][4-m];
     /*for(n=0;n<5;n++)
					{
						//卷积方式与上相同
						tmp+=(S4->y[j][k][n]*C5->mapData[i][j][n][m]);
					}*/
    }
   }
   //+=tmp;
  }
  C5->y[i]=Sigma_3(C5->v[i],C5->bias[i]);
 }
 /*for(i=0;i<120;i++)
	{

	}*/
}

/*void f6_layer(c5_layer* C5,F6_layer* F6)
{
	int i,j,k,m,n,p,q;float tmp;
	for(i=0;i<84;i++)
	{
		for(j=0;j<120;j++)
		{
			tmp+=C5->y[j]*F6->weig[j][i];//一维全连接神经网络
		}
		F6->v[i]=tmp;
		F6->y[i]=Sigma(tmp,F6->bias[i]);
	}
}*/

/*void O_layer(F6_layer* F6,RBF_layer* output)
{
	int i,j,k,m,n,p,q;float tmp;
	for(i=0;i<10;i++)
	{

		tmp=0;
		for(j=0;j<84;j++)
		{
			tmp+=F6->y[j]*output->wei[j][i];
		}
		output->v[i]=tmp;
		output->y[i]=Sigma(tmp,output->bias[i]);
	}
}*/
void O_layer(c5_layer* C5,RBF_layer* output)
{
 unsigned char i,j;
 //float tmp;
 for(i=0;i<10;i++)
  output->v[i]=0.0f;
 for(i=0;i<10;i++)
 {

  //tmp=0;
  for(j=0;j<30;j++)
  {
   output->v[i]=output->v[i]+C5->y[j]*output->wei[j][i];
  }
  //=tmp;
  //
 }
 for(i=0;i<10;i++)
 {
  //output->y[i]=sig(output->v[i]+output->bias[i]);
  output->y[i]=Sigma(output->v[i],output->bias[i]);
 }


}

void DO_layer(RBF_layer* output,unsigned int right)
{
 unsigned char i;//float tmp;

 for(i=0;i<10;i++)
 {
  //eF[i]=output->y[i]-acvau[i];
  //output->d[i]=eF[i]*Dsigma(output->y[i]);
  //output->d[i]=eF[i];
  output->d[i]=output->y[i]-(float)resid[right][i];
  //tmp+=eF[i]*eF[i];
  //tmp+=(acvau[i]*log(output->y[i])+(1-acvau[i])*log(1-output->y[i]));
 }
 //output->jtemp=-tmp;
 //output->jtemp=tmp/(float)2.0;
 //for(i=0;i<10;i++)
 //{

 //}
}

/*void DF6_layer(F6_layer* F6,RBF_layer* output)
{
	int i,j,k,m,n,p,q;float tmp;
	for(i=0;i<84;i++)
	{
		tmp=0;
		for(j=0;j<10;j++)
		{
			tmp+=output->d[j]*output->wei[i][j];
		}
		F6->d[i]=tmp*Dsigma(F6->y[i]);
	}
}*/

/*void DC5_layer(c5_layer* C5,F6_layer* F6)
{
	int i,j,k,m,n,p,q;float tmp;
	for(i=0;i<120;i++)
	{
		tmp=0;
		for(j=0;j<84;j++)
		{
			tmp+=F6->d[j]*F6->weig[i][j];
		}
		C5->d[i]=tmp*Dsigma(C5->y[i]);
	}
}*/
void DC5_layer(c5_layer* C5,RBF_layer* output)
{
 unsigned char i,j;
 //float tmp;
 for(i=0;i<30;i++)
  C5->d[i]=0.0f;
 for(i=0;i<30;i++)
 {
  //tmp=0;
  for(j=0;j<10;j++)
  {
   C5->d[i]=C5->d[i]+output->d[j]*output->wei[i][j];//*Dsigma(C5->y[i]);
  }
  //C5->d[i]=C5->d[i]*Dsigma_2(C5->y[i]);
  C5->d[i]=C5->d[i]*Dsigma_3(C5->v[i],C5->bias[i]);
  //+=tmp;
 }
}

void DS4_layer(s4_layer* S4,c5_layer* C5)
{
 unsigned char i,j,k,m,n,p,q;
 //float tmp[5][5];
 for(i=0;i<16;i++)
 {
  for(p=0;p<5;p++)
  {
   for(q=0;q<5;q++)
   {
    //tmp[p][q]=0;
    S4->d[i][p][q]=0.0f;
   }
  }
 }
 for(i=0;i<16;i++)
 {
  for(j=0;j<30;j++)
  {
   DS4_layer_label3:for(k=0;k<5;k++)
   {
_ssdm_op_SpecPipeline(1, 1, 1, 0, "");
# 738 "Le_7/Lnet.c"

    DS4_layer_label1:for(m=0;m<5;m++)
    {
_ssdm_op_SpecPipeline(1, 1, 1, 0, "");
# 740 "Le_7/Lnet.c"

     //tmp[k][m]+=(C5->d[j]*C5->mapData[j][i][k][m]);
     S4->d[i][k][m]+=(C5->d[j]*C5->mapData[j][i][k][m]);
    }
   }

  }
  /*for(k=0;k<5;k++)
		{
			for(m=0;m<5;m++)
			{
				S4->d[i][k][m]=tmp[k][m];*Dsigma(S4->y[i][k][m]);
			}
		}*/
 }
}

void DC3_layer(c3_layer* C3,s4_layer* S4)
{
 unsigned char i,j,k;
 for(i=0;i<16;i++)
 {
  for(j=0;j<10;j=j+2)
  {
   for(k=0;k<10;k=k+2)
   {
    /*C3->d[i][j][k]=(S4->d[i][j/2][k/2])*S4->weig[i]*Dsigma(C3->y[i][j][k]);
				C3->d[i][j][k+1]=(S4->d[i][j/2][k/2])*S4->weig[i]*Dsigma(C3->y[i][j][k+1]);
				C3->d[i][j+1][k]=(S4->d[i][j/2][k/2])*S4->weig[i]*Dsigma(C3->y[i][j+1][k]);
				C3->d[i][j+1][k+1]=(S4->d[i][j/2][k/2])*S4->weig[i]*Dsigma(C3->y[i][j+1][k+1]);*/
    /*C3->d[i][j][k]=(S4->d[i][j/2][k/2])*(float)0.25*Dsigma_2(C3->y[i][j][k]);
				C3->d[i][j][k+1]=(S4->d[i][j/2][k/2])*(float)0.25*Dsigma_2(C3->y[i][j][k+1]);
				C3->d[i][j+1][k]=(S4->d[i][j/2][k/2])*(float)0.25*Dsigma_2(C3->y[i][j+1][k]);
				C3->d[i][j+1][k+1]=(S4->d[i][j/2][k/2])*(float)0.25*Dsigma_2(C3->y[i][j+1][k+1]);*/
    C3->d[i][j][k]=(S4->d[i][j/2][k/2])*Dsigma_3(C3->y[i][j][k],C3->bias[i])/4;
    C3->d[i][j][k+1]=(S4->d[i][j/2][k/2])*Dsigma_3(C3->y[i][j][k+1],C3->bias[i])/4;
    C3->d[i][j+1][k]=(S4->d[i][j/2][k/2])*Dsigma_3(C3->y[i][j+1][k],C3->bias[i])/4;
    C3->d[i][j+1][k+1]=(S4->d[i][j/2][k/2])*Dsigma_3(C3->y[i][j+1][k+1],C3->bias[i])/4;
   }
  }
 }
}

void DS2_layer(s2_layer* S2,c3_layer* C3)
{
 unsigned char i,j,k,m,n,p,q;
 //float tmp[6][14][14];
 float tmp1[16][18][18];
 for(i=0;i<6;i++)
 {
  for(p=0;p<14;p++)
  {
   for(q=0;q<14;q++)
   {
    //tmp[i][p][q]=0;
    S2->d[i][p][q]=0.0f;
   }
  }
 }
 for(i=0;i<16;i++)
 {
  for(p=0;p<18;p++)
  {
   for(q=0;q<18;q++)
   {
    tmp1[i][p][q]=0.0f;
   }
  }
 }
 for(i=0;i<16;i++)
 {
  for(p=2;p<11;p++)
  {
   for(q=2;q<11;q++)
   {
    tmp1[i][p][q]=C3->d[i][p-2][q-2];
   }
  }
 }
 for(i=0;i<6;i++)
 {
  for(j=0;j<16;j++)
  {
   //if(table[i][j])
   //{
    for(k=0;k<14;k++)
    {
     for(m=0;m<14;m++)
     {
      DS2_layer_label4:for(p=0;p<5;p++)
      {
_ssdm_op_SpecPipeline(1, 1, 1, 0, "");
# 830 "Le_7/Lnet.c"

       DS2_layer_label1:for(q=0;q<5;q++)
       {
_ssdm_op_SpecPipeline(1, 1, 1, 0, "");
# 832 "Le_7/Lnet.c"

        //tmp[i][k][m]+=(((k>1)&&(k<12)&&(m>1)&&(m<12))?C3->d[j][k][m])
        //if((k+p>1)&&(k+p<12)&&(m+q>1)&&(m+q<12))
        //	a=;
        //else
        //	a=0;
        S2->d[i][k][m]+=(tmp1[j][k+p][m+q]*C3->mapData[j][i][p][q]);
        //tmp[i][k][m]+=(tmp1[j][k+p][m+q]*C3->mapData[j][i][p][q]);
       }
      }
     }
    }
    /*for(k=0;k<10;k++)
				{
					for(m=0;m<10;m++)
					{
						for(p=0;p<5;p++)
						{
							for(q=0;q<5;q++)
							{
								tmp[i][k+p][m+q]+=C3->d[j][k][m]*C3->mapData[j][i][p][q];
							}
						}

					}
				}*/
   //}
  }
  //for(k=0;k<14;k++)
  //{
   //for(m=0;m<14;m++)
   //{
    //S2->d[i][k][m]=tmp[i][k][m];//*Dsigma(S2->y[i][k][m]);
   //}
  //}
 }
}

void DC1_layer(c1_layer* C1,s2_layer* S2)
{
 int i,j,k,m,n,p,q;float tmp[6][28][28];
 for(i=0;i<6;i++)
 {
  for(j=0;j<28;j=j+2)
  {
   for(k=0;k<28;k=k+2)
   {
    /*C1->d[i][j][k]=S2->d[i][j/2][k/2]*S2->weig[i]*Dsigma(C1->y[i][j][k]);
				C1->d[i][j][k+1]=S2->d[i][j/2][k/2]*S2->weig[i]*Dsigma(C1->y[i][j][k+1]);
				C1->d[i][j+1][k]=S2->d[i][j/2][k/2]*S2->weig[i]*Dsigma(C1->y[i][j+1][k]);
				C1->d[i][j+1][k+1]=S2->d[i][j/2][k/2]*S2->weig[i]*Dsigma(C1->y[i][j+1][k+1]);*/
    /*C1->d[i][j][k]=S2->d[i][j/2][k/2]*(float)0.25*Dsigma_2(C1->y[i][j][k]);
				C1->d[i][j][k+1]=S2->d[i][j/2][k/2]*(float)0.25*Dsigma_2(C1->y[i][j][k+1]);
				C1->d[i][j+1][k]=S2->d[i][j/2][k/2]*(float)0.25*Dsigma_2(C1->y[i][j+1][k]);
				C1->d[i][j+1][k+1]=S2->d[i][j/2][k/2]*(float)0.25*Dsigma_2(C1->y[i][j+1][k+1]);*/
    C1->d[i][j][k]=S2->d[i][j/2][k/2]*Dsigma_3(C1->v[i][j][k],C1->bias[i])/4;
    C1->d[i][j][k+1]=S2->d[i][j/2][k/2]*Dsigma_3(C1->v[i][j][k+1],C1->bias[i])/4;
    C1->d[i][j+1][k]=S2->d[i][j/2][k/2]*Dsigma_3(C1->v[i][j+1][k],C1->bias[i])/4;
    C1->d[i][j+1][k+1]=S2->d[i][j/2][k/2]*Dsigma_3(C1->v[i][j+1][k+1],C1->bias[i])/4;
   }
  }
 }
}

/*void in_layer(CNN *cn)
{
	int i,j,k,m,n,p,q;float tmp[32][32];
	for(i=0;i<6;i++)
	{

		for(j=0;j<32;j++)
		{
			for(k=0;k<32;k++)
			{
				C1->d0[j][k]=0;
			}
		}
		for(j=0;j<28;j++)
		{
			for(k=0;k<28;k++)
			{
				for(m=0;m<5;m++)
				{
					for(n=0;n<5;n++)
					{
						C1->d0[j+m][k+n]+=C1->d[i][j][k]*C1->mapData[i][m][n];
					}
				}
			}
		}
	}
}*/

void update_C1(c1_layer* C1,float inputimg[32][32])
{_ssdm_SpecArrayDimSize(inputimg,32);
 int i,j,k,m,n,p;float tmp[5][5];
 float q;
 for(p=0;p<6;p++)
 {
  for(i=0;i<5;i++)
  {
   for(j=0;j<5;j++)
   {
    tmp[i][j]=0.0f;
   }
  }
  for(i=0;i<5;i++)
  {
   for(j=0;j<5;j++)
   {

    update_C1_label5:for(k=0;k<28;k++)
    {
_ssdm_op_SpecPipeline(1, 1, 1, 0, "");
# 944 "Le_7/Lnet.c"

     update_C1_label0:for(m=0;m<28;m++)
     {
_ssdm_op_SpecPipeline(1, 1, 1, 0, "");
# 946 "Le_7/Lnet.c"

      tmp[i][j]+=(inputimg[(i+k)][(j+m)]*C1->d[p][k][m]);
     }
    }
   }
  }
  for(i=0;i<5;i++)
  {
   for(j=0;j<5;j++)
   {
    //C1->mapData[p][i][j]=C1->mapData[p][i][j]-eta3*tmp[i][j];
    //if(renew==0)
    //{
     //C1->mapData[p][i][j]=C1->mapData[p][i][j]-eta3*renewonece*C1->dmapData[p][i][j];
     //C1->dmapData[p][i][j]=tmp[i][j];
    //}
    //else
     C1->dmapData[p][i][j]=C1->dmapData[p][i][j]+tmp[4-i][4-j];
    //if(renew==49)
     //C1->mapData[p][i][j]=C1->mapData[p][i][j]-eta3*renewonece*C1->dmapData[p][i][j];
   }
  }
 }
 for(i=0;i<6;i++)
 {
  q=0;
  for(j=0;j<28;j++)
  {
   for(k=0;k<28;k++)
   {
    q+=C1->d[i][j][k];
   }
  }
  //C1->bias[i]=C1->bias[i]-(q*eta3);
  //if(renew==0)
  //	C1->dbias[i]=q;
  //else
   C1->dbias[i]=C1->dbias[i]+q;
  //if(renew==49)
  //	C1->bias[i]=C1->bias[i]-(C1->dbias[i]*eta3*renewonece);
 }

}

/*void update_S2(c1_layer* C1,s2_layer* S2)
{
	int i,j,k,m,n,p;float tmp;
	float q;
	for(i=0;i<6;i++)
	{
		//tmp=0;
		q=0;
		for(j=0;j<28;j=j+2)
		{
			for(k=0;k<28;k=k+2)
			{
				//tmp+=(C1->y[i][j][k]+C1->y[i][j][k+1]+C1->y[i][j+1][k]+C1->y[i][j+1][k+1])*S2->d[i][j/2][k/2];
				q+=S2->d[i][j/2][k/2];
			}
		}

		//S2->weig[i]-=(tmp*eta3);
		//S2->bias[i]-=(q*eta3);
		//if(renew==0)
		//{
			//S2->dweig[i]=tmp;
		//	S2->dbias[i]=q;
		//}
		//else
		//{
			//S2->dweig[i]=S2->dweig[i]+tmp;
			S2->dbias[i]=S2->dbias[i]+q;
		//}
		//if(renew==49)
		//{
			//S2->weig[i]=S2->weig[i]-(S2->dweig[i]*eta3*renewonece);
		//	S2->bias[i]=S2->bias[i]-(S2->dbias[i]*eta*renewonece);
		//}
	}
}*/

void update_C3(s2_layer* S2,c3_layer* C3)
{
 int i,j,k,m,n,p;float tmp[5][5];

 float q;
 for(i=0;i<16;i++)
 {
  for(j=0;j<6;j++)
  {
   //if(table[j][i])
   //{
    for(k=0;k<5;k++)
    {
     for(m=0;m<5;m++)
     {
      tmp[k][m]=0;
     }
    }
    for(k=0;k<5;k++)
    {
     for(m=0;m<5;m++)
     {
      update_C3_label6:for(n=0;n<10;n++)
      {
_ssdm_op_SpecPipeline(1, 1, 1, 0, "");
# 1050 "Le_7/Lnet.c"

       update_C3_label3:for(p=0;p<10;p++)
       {
_ssdm_op_SpecPipeline(1, 1, 1, 0, "");
# 1052 "Le_7/Lnet.c"

        //tmp=conv_1(S2->y[j],5,5,C3->d[i],5,5);
        tmp[k][m]+=(S2->y[j][(k+n)][(m+p)]*C3->d[i][n][p]);
       }
      }

     }
    }
    for(k=0;k<5;k++)
    {
     for(m=0;m<5;m++)
     {
      //C3->mapData[i][j][k][m]=C3->mapData[i][j][k][m]-(eta2*tmp[k][m]);
      //if(renew==0)
       //C3->dmapData[i][j][k][m]=tmp[k][m];
      //else
       C3->dmapData[i][j][k][m]=C3->dmapData[i][j][k][m]+tmp[4-k][4-m];
      //if(renew==49)
      //	C3->mapData[i][j][k][m]=C3->mapData[i][j][k][m]-(eta3*renewonece*C3->dmapData[i][j][k][m]);
     }
    }
   //}
  }
 }
 for(i=0;i<16;i++)
 {
  q=0;
  for(j=0;j<10;j++)
  {
   for(k=0;k<10;k++)
   {
    q+=C3->d[i][j][k];
   }
  }
  //C3->bias[i]=C3->bias[i]-(q*eta2);
  //if(renew==0)
   //C3->dbias[i]=q;
  //else
   C3->dbias[i]=C3->dbias[i]+q;
  //if(renew==49)
   //C3->bias[i]=C3->bias[i]-(C3->dbias[i]*eta3*renewonece);
 }
}

/*void update_S4(c3_layer* C3,s4_layer* S4)
{
	int i,j,k,m,n,p;float tmp;

	float q;
	for(i=0;i<16;i++)
	{
		//tmp=0;
		q=0;
		for(j=0;j<10;j=j+2)
		{
			for(k=0;k<10;k=k+2)
			{
				//tmp+=(C3->y[i][j][k]+C3->y[i][j][k+1]+C3->y[i][j+1][k]+C3->y[i][j+1][k+1])*S4->d[i][j/2][k/2];
				q+=S4->d[i][j/2][k/2];
			}
		}
		//S4->weig[i]=S4->weig[i]-(tmp*eta2);
		//S4->bias[i]=S4->bias[i]-(q*eta2);
		//if(renew==0)
		//{
		//	//S4->dweig[i]=tmp;
		//	S4->dbias[i]=q;
		//}
		//else
		//{
			//S4->dweig[i]=S4->dweig[i]+tmp;
			S4->dbias[i]=S4->dbias[i]+q;
		//}
		//if(renew==49)
		//{
			//S4->weig[i]=S4->weig[i]-(S4->dweig[i]*eta2*renewonece);
		//	S4->bias[i]=S4->bias[i]-(S4->dbias[i]*eta*renewonece);
		//}
	}
}*/

void update_C5(s4_layer* S4,c5_layer* C5)
{
 int i,j,k,m,n,p,q;float tmp[5][5];
 for(i=0;i<30;i++)
 {
  for(j=0;j<16;j++)
  {
   update_C5_label8:for(k=0;k<5;k++)
   {
_ssdm_op_SpecPipeline(1, 1, 1, 0, "");
# 1141 "Le_7/Lnet.c"

    update_C5_label7:for(m=0;m<5;m++)
    {
_ssdm_op_SpecPipeline(1, 1, 1, 0, "");
# 1143 "Le_7/Lnet.c"

     tmp[k][m]=(S4->y[j][k][m]*C5->d[i]);
    }
   }
   for(k=0;k<5;k++)
   {
    for(m=0;m<5;m++)
    {
     //C5->mapData[i][j][k][m]=C5->mapData[i][j][k][m]-(eta*tmp[k][m]);
     //if(renew==0)
    //		C5->dmapData[i][j][k][m]=tmp[k][m];
     //else
      C5->dmapData[i][j][k][m]=C5->dmapData[i][j][k][m]+tmp[4-k][4-m];
     //if(renew==49)
     //	C5->mapData[i][j][k][m]=C5->mapData[i][j][k][m]-(eta*renewonece*C5->dmapData[i][j][k][m]);
    }
   }
  }
 }
 for(i=0;i<30;i++)
 {
  //C5->bias[i]=C5->bias[i]-(eta*C5->d[i]);
  //if(renew==0)
  //	C5->dbias[i]=C5->d[i];
  //else
   C5->dbias[i]=C5->dbias[i]+C5->d[i];
  //if(renew==49)
  //	C5->bias[i]=C5->bias[i]-(C5->dbias[i]*eta*renewonece);
 }
}

/*void update_F6(c5_layer* C5,F6_layer* F6)
{
	int i,j,k,m,n,p,q;float tmp;
	for(i=0;i<84;i++)
	{
		for(j=0;j<120;j++)
		{
			tmp=C5->y[j]*F6->d[i];
			F6->weig[j][i]-=eta*tmp;
		}
	}
	for(i=0;i<84;i++)
	{
		F6->bias[i]-=eta*F6->d[i];
	}
}*/

/*void update_OUT(F6_layer* F6,RBF_layer* output)
{
	int i,j,k,m,n,p,q;float tmp;
	for(i=0;i<10;i++)
	{
		for(j=0;j<84;j++)
		{
			tmp=F6->y[j]*output->d[i];
			output->wei[j][i]-=eta*tmp;
		}
	}
	for(i=0;i<10;i++)
	{
		output->bias[i]-=eta*output->d[i];
	}
}*/
void update_OUT(c5_layer* C5,RBF_layer* output)
{
 int i,j,k,m,n,p,q;//float tmp;
 for(i=0;i<10;i++)
 {
  for(j=0;j<30;j++)
  {
   //tmp=C5->y[j]*output->d[i];
   //output->wei[j][i]-=(eta*tmp);
   //if(renew==0)
   //	output->dwei[j][i]=C5->y[j]*output->d[i];
   //else
    output->dwei[j][i]=output->dwei[j][i]+C5->y[j]*output->d[i];
   //if(renew==49)
   //	output->wei[j][i]=output->wei[j][i]-(eta*renewonece*output->dwei[j][i]);
  }
 }
 for(i=0;i<10;i++)
 {
  //output->bias[i]-=(eta*output->d[i]);
  //if(renew==0)
  //	output->dbias[i]=output->d[i];
  //else
   output->dbias[i]=output->dbias[i]+output->d[i];
  //if(renew==49)
  //	output->bias[i]=output->bias[i]-(eta*renewonece*output->dbias[i]);
 }
}
//void upadteall(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output,float *JL)
void upadteall(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output)
{

 int i,j,k,m,n,p;
 for(i=0;i<6;i++)
 {
  for(j=0;j<5;j++)
  {
   for(k=0;k<5;k++)
   {
    C1->mapData[i][j][k]=C1->mapData[i][j][k]-0.002f*0.02f*C1->dmapData[i][j][k];
    C1->dmapData[i][j][k]=0.0f;
   }
  }
  C1->bias[i]=C1->bias[i]-(C1->dbias[i]*0.025f*0.02f);
  C1->dbias[i]=0.0f;
  //S2->bias[i]=S2->bias[i]-(S2->dbias[i]*eta*renewonece);
  //S2->dbias[i]=0;
 }
 for(i=0;i<16;i++)
 {
  for(j=0;j<6;j++)
  {
   for(k=0;k<5;k++)
   {
    upadteall_label2:for(m=0;m<5;m++)
    {
_ssdm_op_SpecPipeline(1, 1, 1, 0, "");
# 1262 "Le_7/Lnet.c"

     C3->mapData[i][j][k][m]=C3->mapData[i][j][k][m]-(0.002f*0.02f*C3->dmapData[i][j][k][m]);
     C3->dmapData[i][j][k][m]=0.0f;
    }
   }
  }
  C3->bias[i]=C3->bias[i]-(C3->dbias[i]*0.025f*0.02f);
  C3->dbias[i]=0;
  //S4->bias[i]=S4->bias[i]-(S4->dbias[i]*eta*renewonece);
  //S4->dbias[i]=0;
 }
 for(i=0;i<30;i++)
 {
  for(j=0;j<16;j++)
  {
   for(k=0;k<5;k++)
   {
    for(m=0;m<5;m++)
    {
     C5->mapData[i][j][k][m]=C5->mapData[i][j][k][m]-(0.002f*0.02f*C5->dmapData[i][j][k][m]);
     C5->dmapData[i][j][k][m]=0.0f;
    }
   }
  }
  C5->bias[i]=C5->bias[i]-(C5->dbias[i]*0.025f*0.02f);
  C5->dbias[i]=0.0f;
 }
 for(i=0;i<10;i++)
  {
   for(j=0;j<30;j++)
   {
    //tmp=C5->y[j]*output->d[i];
    //output->wei[j][i]-=(eta*tmp);
    //if(renew==0)

    //else
    //	output->dwei[j][i]=output->dwei[j][i]+C5->y[j]*output->d[i];
    //if(renew==49)
    output->wei[j][i]=output->wei[j][i]-(0.001f*0.02f*output->dwei[j][i]);
    output->dwei[j][i]=0.0f;
   }
  }
  for(i=0;i<10;i++)
  {
   //output->bias[i]-=(eta*output->d[i]);
   //if(renew==0)

   //else
   //	output->dbias[i]=output->dbias[i]+output->d[i];
   //if(renew==49)
   output->bias[i]=output->bias[i]-(0.001f*0.02f*output->dbias[i]);
   output->dbias[i]=0.0f;
  }
  //output->jtemp=output->jtemp/(float)50;
  //*JL=(*JL)*0.99+0.01*(output->jtemp);
  //output->jtemp=0;
  //if((*JL)<2.0f)
   //eta=0.00001;
}

float Sigma(float input,float bas) // sigma激活函数
{
 float temp=input+bas;

 float dtemp=-temp;

  /*&if(isnan(bas))
					printf("error");
	if(isnan(temp))
				printf("error");
	if(isinf(temp))
				printf("error");*/
 /* if(temp>15.0f)
		return 1.0f;
	if(dtemp>15.0f)
		return -1.0f;
	float temp1=(float)exp(temp)-(float)exp(dtemp);
	float temp2=(float)exp(temp)+(float)exp(dtemp);
	float temp3=temp1/temp2;*/
 //printf("%f %f %f\n",temp1,temp2,temp3);
 //if(isnan(temp3))
  //	printf("error");

 //return temp3;
 return 1.0f/((1.0f+expf(dtemp)));//激活函数:1/(1+exp{x})*/

 //if(temp>15)
  //temp=0;
 //return (temp>0)?temp:0.1;
 //if(temp>0)
  //return temp;
 //else
  //return 0;
}
/*float sig(float j)
{
	if(j>1.0)
		j=-0.04685*j*j+0.2904*j+0.4875;
	else if(j>0.8)
		j=-0.0433*j*j+0.2834*j+0.491;
	else if(j>0.5)
		j=-0.03528*j*j+0.271*j+0.4958;
	else if(j>0.3)
		j=-0.02368*j*j+0.2591*j+0.4988;
	else if(j>0.0)
		j=-0.009274*j*j+0.2511*j+0.5;
	else if(j>-0.3)
		j=0.009274*j*j+0.2511*j+0.5;
	else if(j>-0.5)
		j=0.02368*j*j+0.2591*j+0.5012;
	else if(j>-0.8)
		j=0.03528*j*j+0.271*j+0.5043;
	else if(j>-1.0)
		j=0.0433*j*j+0.2834*j+0.509;
	else
		j=0.04685*j*j+0.2904*j+0.5125;
	return j;
}
float Sigma_2(float input,float bas)
{
	float temp=input+bas;
	float dtemp=-temp;
	if(temp>15.0f)
		return 1.0f;
	if(dtemp>15.0f)
		return -1.0f;
	float temp1=(float)exp(temp)-(float)exp(dtemp);
	float temp2=(float)exp(temp)+(float)exp(dtemp);
	float temp3=temp1/temp2;
	return temp3;
}*/
float Sigma_3(float input,float bas)
{
 float temp=input+bas;
 if(temp>0.0f)
  return temp;
 else
  return 0.0f;
  //return (float)0.1*temp;
}
float Dsigma(float y){ // Logic激活函数的自变量微分
 //return (float)(1-y*y);
 /*if(isnan(y))
		//		printf("error");
	//if(isinf(y))
				printf("error");
	if(y>15)
			printf("error");
	if(y>0)
		return 1;
	else
		return 0;*/
 /*if(isnan(y))
				printf("error");
	return (y>0)?1:0;*/
 return y*(1.0f-y); // 这里y是指经过激活函数的输出值，而不是自变量
}
float Dsigma_2(float y)
{
 return (1.0f-y*y);
}
float Dsigma_3(float input,float bas)
{
 float temp=input+bas;
 if(temp>0.0f)
  return 1.0f;
 else
  return 0.0f;
  //return (float)0.1;
}
/*float **conv_1(float **a,int a_rows,int a_cols,float **b,int b_rows,int b_cols)
{
	float **c;
	return c;
}*/
/*void DO_c(RBF_layer* output,float acvau[10],float eF[10])
{
	int i,j,k,m,n,p,q;float tmp1,tmp2;
	for(i=0;i<10;i++)
	{
		tmp1=0;tmp2=0;

		//tmp1=Sigma(output->v[i]+EPSILON,output->bias[i])-acvau[i];
		tmp1=Sigma(output->v[i]+EPSILON,output->bias[i]);
		tmp1=-(acvau[i]*log(tmp1)+(1-acvau[i])*log(1-tmp1));
		//tmp1=tmp1*tmp1/2.0;
		//tmp2=Sigma(output->v[i]-EPSILON,output->bias[i])-acvau[i];
		tmp2=Sigma(output->v[i]-EPSILON,output->bias[i]);
		tmp2=-(acvau[i]*log(tmp2)+(1-acvau[i])*log(1-tmp2));
		//tmp2=tmp2*tmp2/2.0;
		output->d_c[i]=(tmp1-tmp2)/((float)2.0*EPSILON);
		output->ef[i]=output->d[i]-output->d_c[i];
		//eF[i]=output->y[i]-acvau[i];
		//output->d[i]=eF[i]*Dsigma(output->y[i]);
		//tmp+=eF[i]*eF[i];
	}
	//output->jtemp+=(tmp/(float)2.0);
}
void DC5_c(c5_layer* C5,RBF_layer* output,float acvau[10],float eF[10])
{
	int i,j,k,m,n,p,q;
	float tmp1,tmp2,tmp3;
	for(i=0;i<120;i++)
	{
		tmp1=C5->v[i]+EPSILON;
		tmp2=C5->v[i]-EPSILON;
		tmp3=C5->y[i];
		C5->v[i]=tmp1;
		//C5->y[i]=tmp1;
		C5->y[i]=Sigma_2(tmp1,C5->bias[i]);
		O_layer(C5,output);
		for(j=0,tmp1=0;j<10;j++)
			tmp1=tmp1-(acvau[j]*log(output->y[j])+(1-acvau[j])*log(1-output->y[j]));
			//tmp1=tmp1+((output->y[j]-acvau[j])*(output->y[j]-acvau[j]))/(float)2.0;
		//C5->y[i]=tmp2;//
		C5->y[i]=Sigma_2(tmp2,C5->bias[i]);
		O_layer(C5,output);
		for(j=0,tmp2=0;j<10;j++)
			tmp2=tmp2-(acvau[j]*log(output->y[j])+(1-acvau[j])*log(1-output->y[j]));
			//tmp2=tmp2+((output->y[j]-acvau[j])*(output->y[j]-acvau[j]))/(float)2.0;
		C5->d_c[i]=(tmp1-tmp2)/((float)2.0*EPSILON);
		C5->y[i]=tmp3;
		C5->ef[i]=C5->d_c[i]-C5->d[i];
		//O_layer(C5,output);
		//for(j=0;j<120;j++)

	}
	O_layer(C5,output);
}
void DS4_c(s4_layer* S4,c5_layer* C5,RBF_layer* output,float acvau[10],float eF[10])
{
	int i,j,k,m,n,p,q;
	float tmp1,tmp2,tmp3;
	for(i=0;i<16;i++)
	{
		for(j=0;j<5;j++)
		{
			for(k=0;k<5;k++)
			{
				tmp1=S4->y[i][j][k]+(EPSILON/10.0);
				tmp2=S4->y[i][j][k]-(EPSILON/10.0);
				tmp3=S4->y[i][j][k];
				S4->y[i][j][k]=tmp1;
				C5_conv(S4,C5);
				O_layer(C5,output);
				for(m=0,tmp1=0;m<10;m++)
					tmp1=tmp1-(acvau[m]*log(output->y[m])+(1-acvau[m])*log(1-output->y[m]));
					//tmp1=tmp1+((output->y[m]-acvau[m])*(output->y[m]-acvau[m]))/(float)2.0;
				S4->y[i][j][k]=tmp2;
				C5_conv(S4,C5);
				O_layer(C5,output);
				for(m=0,tmp2=0;m<10;m++)
					tmp2=tmp2-(acvau[m]*log(output->y[m])+(1-acvau[m])*log(1-output->y[m]));
					//tmp2=tmp2+((output->y[m]-acvau[m])*(output->y[m]-acvau[m]))/(float)2.0;
				S4->d_c[i][j][k]=(tmp1-tmp2)/((float)2.0*(EPSILON/10.0));
				S4->y[i][j][k]=tmp3;
				S4->ef[i][j][k]=S4->d_c[i][j][k]-S4->d[i][j][k];
			}
		}
	}
	C5_conv(S4,C5);
	O_layer(C5,output);
}
DC3_c(c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output,float acvau[10],float eF[10])
{
	int i,j,k,m,n,p,q;
	float tmp1,tmp2,tmp3;
	for(i=0;i<16;i++)
	{
		for(j=0;j<10;j++)
		{
			for(k=0;k<10;k++)
			{
				tmp1=C3->v[i][j][k]+EPSILON;
				tmp2=C3->v[i][j][k]-EPSILON;
				tmp3=C3->y[i][j][k];
				//C3->y[i][j][k]=tmp1;
				C3->y[i][j][k]=Sigma_2(tmp1,C3->bias[i]);
				S4_pool(C3,S4);
				C5_conv(S4,C5);
				O_layer(C5,output);
				for(m=0,tmp1=0;m<10;m++)
					tmp1=tmp1-(acvau[m]*log(output->y[m])+(1-acvau[m])*log(1-output->y[m]));
					//tmp1=tmp1+((output->y[m]-acvau[m])*(output->y[m]-acvau[m]))/(float)2.0;
				//C3->y[i][j][k]=tmp2;
				C3->y[i][j][k]=Sigma_2(tmp2,C3->bias[i]);
				S4_pool(C3,S4);
				C5_conv(S4,C5);
				O_layer(C5,output);
				for(m=0,tmp2=0;m<10;m++)
					tmp2=tmp2-(acvau[m]*log(output->y[m])+(1-acvau[m])*log(1-output->y[m]));
					//tmp2=tmp2+((output->y[m]-acvau[m])*(output->y[m]-acvau[m]))/(float)2.0;
				C3->d_c[i][j][k]=(tmp1-tmp2)/((float)2.0*EPSILON);
				C3->ef[i][j][k]=C3->d_c[i][j][k]-C3->d[i][j][k];
				C3->y[i][j][k]=tmp3;
			}
		}
	}
	S4_pool(C3,S4);
	C5_conv(S4,C5);
	O_layer(C5,output);
}
DS2_c(s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output,float acvau[10],float eF[10])
{
	int i,j,k,m,n,p,q;
	float tmp1,tmp2,tmp3;
	for(i=0;i<6;i++)
	{
		for(j=0;j<14;j++)
		{
			for(k=0;k<14;k++)
			{
				tmp1=S2->y[i][j][k]+EPSILON;
				tmp2=S2->y[i][j][k]-EPSILON;
				tmp3=S2->y[i][j][k];
				S2->y[i][j][k]=tmp1;
				C3_conv(S2,C3);
				S4_pool(C3,S4);
				C5_conv(S4,C5);
				O_layer(C5,output);
				for(m=0,tmp1=0;m<10;m++)
					tmp1=tmp1-(acvau[m]*log(output->y[m])+(1-acvau[m])*log(1-output->y[m]));
				S2->y[i][j][k]=tmp2;
				C3_conv(S2,C3);
				S4_pool(C3,S4);
				C5_conv(S4,C5);
				O_layer(C5,output);
				for(m=0,tmp2=0;m<10;m++)
					tmp2=tmp2-(acvau[m]*log(output->y[m])+(1-acvau[m])*log(1-output->y[m]));
				S2->d_c[i][j][k]=(tmp1-tmp2)/((float)2.0*EPSILON);
				S2->ef[i][j][k]=S2->d_c[i][j][k]-S2->d[i][j][k];
				S2->y[i][j][k]=tmp3;
			}
		}
	}
	C3_conv(S2,C3);
	S4_pool(C3,S4);
	C5_conv(S4,C5);
	O_layer(C5,output);
}
void DC1_c(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output,float acvau[10],float eF[10])
{
	int i,j,k,m,n,p,q;
	float tmp1,tmp2,tmp3;
	for(i=0;i<6;i++)
	{
		for(j=0;j<28;j++)
		{
			for(k=0;k<28;k++)
			{
				tmp1=C1->v[i][j][k]+EPSILON;
				tmp2=C1->v[i][j][k]-EPSILON;
				tmp3=C1->y[i][j][k];
				C1->y[i][j][k]=Sigma_3(tmp1,C1->bias[i]);
				S2_pool(C1,S2);
				C3_conv(S2,C3);
				S4_pool(C3,S4);
				C5_conv(S4,C5);
				O_layer(C5,output);
				for(m=0,tmp1=0;m<10;m++)
					tmp1=tmp1+((output->y[m]-acvau[m])*(output->y[m]-acvau[m]))/(float)2.0;
				C1->y[i][j][k]=Sigma_3(tmp2,C1->bias[i]);
				S2_pool(C1,S2);
				C3_conv(S2,C3);
				S4_pool(C3,S4);
				C5_conv(S4,C5);
				O_layer(C5,output);
				for(m=0,tmp2=0;m<10;m++)
					tmp2=tmp2+((output->y[m]-acvau[m])*(output->y[m]-acvau[m]))/(float)2.0;
				C1->d_c[i][j][k]=(tmp1-tmp2)/((float)2.0*EPSILON);
				C1->ef[i][j][k]=C1->d_c[i][j][k]-C1->d[i][j][k];
				C1->y[i][j][k]=tmp3;
			}
		}
	}
	S2_pool(C1,S2);
	C3_conv(S2,C3);
	S4_pool(C3,S4);
	C5_conv(S4,C5);
	O_layer(C5,output);
}*/
