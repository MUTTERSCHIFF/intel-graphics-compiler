/*===================== begin_copyright_notice ==================================

Copyright (c) 2017 Intel Corporation

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


======================= end_copyright_notice ==================================*/

/*
 * !!! DO NOT EDIT THIS FILE !!!
 *
 * This file was automagically crafted by GED's model parser.
 */

#include "ged_enum_tables.h"
#include "ged_restrictions.h"
static ged_field_restriction_t RestrictionVar0 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { AccessModeTable0 } };
static ged_field_restriction_t RestrictionVar1 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { MaskCtrlTable0 } };
static ged_field_restriction_t RestrictionVar2 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { DepCtrlTable0 } };
static ged_field_restriction_t RestrictionVar3 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { ChannelOffsetTable0 } };
static ged_field_restriction_t RestrictionVar4 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { ThreadCtrlTable2 } };
static ged_field_restriction_t RestrictionVar5 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { PredInvTable0 } };
static ged_field_restriction_t RestrictionVar6 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { unsignedTable0 } };
static ged_field_restriction_t RestrictionVar7 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { CondModifierTable0 } };
static ged_field_restriction_t RestrictionVar8 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { AccWrCtrlTable0 } };
static ged_field_restriction_t RestrictionVar9 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { DebugCtrlTable0 } };
static ged_field_restriction_t RestrictionVar10 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { SaturateTable0 } };
static ged_field_restriction_t RestrictionVar11 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { RegFileTable0 } };
static ged_field_restriction_t RestrictionVar12 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { DataTypeTable9 } };
static ged_field_restriction_t RestrictionVar13 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { RegFileTable3 } };
static ged_field_restriction_t RestrictionVar14 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { AddrModeTable0 } };
static ged_field_restriction_t RestrictionVar15 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { SrcModTable0 } };
static ged_field_restriction_t RestrictionVar16 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { unsignedTable12 } };
static ged_field_restriction_t RestrictionVar17 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { ExecMaskOffsetCtrlTable0 } };
static ged_field_restriction_t RestrictionVar18 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { ExecMaskOffsetCtrlTable1 } };
static ged_field_restriction_t RestrictionVar19 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { ExecMaskOffsetCtrlTable2 } };
static ged_field_restriction_t RestrictionVar20 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { PredCtrlTable0 } };
static ged_field_restriction_t RestrictionVar21 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { PredCtrlTable1 } };
static ged_field_restriction_t RestrictionVar22 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { DataTypeTable12 } };
static ged_field_restriction_t RestrictionVar23 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { DstChanEnTable0 } };
static ged_field_restriction_t RestrictionVar24 = { GED_FIELD_RESTRICTIONS_TYPE_PADDING,    { /* { 0, 0xf } */ (void*)(g_uintptr_t)0xf00000000 } };
static ged_field_restriction_t RestrictionVar25 = { GED_FIELD_RESTRICTIONS_TYPE_MASK,       { (void*)(g_uintptr_t)0xffffff80 } };
static ged_field_restriction_t RestrictionVar26 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { unsignedTable2 } };
static ged_field_restriction_t RestrictionVar27 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { unsignedTable5 } };
static ged_field_restriction_t RestrictionVar28 = { GED_FIELD_RESTRICTIONS_TYPE_FIELD_TYPE, { /* { 32, unsigned, not duplicated,  } */ (void*)(g_uintptr_t)0x20 } };
static ged_field_restriction_t RestrictionVar29 = { GED_FIELD_RESTRICTIONS_TYPE_FIELD_TYPE, { /* { 32, signed  , not duplicated,  } */ (void*)(g_uintptr_t)0x120 } };
static ged_field_restriction_t RestrictionVar30 = { GED_FIELD_RESTRICTIONS_TYPE_FIELD_TYPE, { /* { 16, unsigned, duplicated    ,  } */ (void*)(g_uintptr_t)0x10010 } };
static ged_field_restriction_t RestrictionVar31 = { GED_FIELD_RESTRICTIONS_TYPE_FIELD_TYPE, { /* { 16, signed  , duplicated    ,  } */ (void*)(g_uintptr_t)0x10110 } };
static ged_field_restriction_t RestrictionVar32 = { GED_FIELD_RESTRICTIONS_TYPE_VALUE,      { (void*)(g_uintptr_t)0 } };
static ged_field_restriction_t RestrictionVar33 = { GED_FIELD_RESTRICTIONS_TYPE_VALUE,      { (void*)(g_uintptr_t)1 } };
static ged_field_restriction_t RestrictionVar34 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { RegFileTable1 } };
static ged_field_restriction_t RestrictionVar35 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { DataTypeTable13 } };
static ged_field_restriction_t RestrictionVar36 = { GED_FIELD_RESTRICTIONS_TYPE_PADDING,    { /* { 0, 0x3 } */ (void*)(g_uintptr_t)0x300000000 } };
static ged_field_restriction_t RestrictionVar37 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { RepCtrlTable0 } };
static ged_field_restriction_t RestrictionVar38 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { RegFileTable5 } };
static ged_field_restriction_t RestrictionVar39 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { AddrModeTable1 } };
static ged_field_restriction_t RestrictionVar40 = { GED_FIELD_RESTRICTIONS_TYPE_VALUE,      { (void*)(g_uintptr_t)228 } };
static ged_field_restriction_t RestrictionVar41 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { SFIDTable1 } };
static ged_field_restriction_t RestrictionVar42 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { RegFileTable2 } };
static ged_field_restriction_t RestrictionVar43 = { GED_FIELD_RESTRICTIONS_TYPE_PADDING,    { /* { 0, 0x10 } */ (void*)(g_uintptr_t)0x1000000000 } };
static ged_field_restriction_t RestrictionVar44 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { EOTTable0 } };
static ged_field_restriction_t RestrictionVar45 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { DataTypeTable10 } };
static ged_field_restriction_t RestrictionVar46 = { GED_FIELD_RESTRICTIONS_TYPE_VALUE,      { (void*)(g_uintptr_t)16 } };
static ged_field_restriction_t RestrictionVar47 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { MathFCTable1 } };
static ged_field_restriction_t RestrictionVar48 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { RegFileTable4 } };
static ged_field_restriction_t RestrictionVar49 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { MaskCtrlTable1 } };
static ged_field_restriction_t RestrictionVar50 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { unsignedTable1 } };
static ged_field_restriction_t RestrictionVar51 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { DataTypeTable11 } };
static ged_field_restriction_t RestrictionVar52 = { GED_FIELD_RESTRICTIONS_TYPE_VALUE,      { (void*)(g_uintptr_t)160 } };
static ged_field_restriction_t RestrictionVar53 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { ArchRegTable1 } };
static ged_field_restriction_t RestrictionVar54 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { SwizzleTable0 } };
static ged_field_restriction_t RestrictionVar55 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { HeaderPresentTable0 } };
static ged_field_restriction_t RestrictionVar56 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { MessageTypeTable6 } };
static ged_field_restriction_t RestrictionVar57 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { MessageTypeTable7 } };
static ged_field_restriction_t RestrictionVar58 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { MessageTypeTable8 } };
static ged_field_restriction_t RestrictionVar59 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { MessageTypeTable9 } };
static ged_field_restriction_t RestrictionVar60 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { SlotGroupTable0 } };
static ged_field_restriction_t RestrictionVar61 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { SlotGroupTable1 } };
static ged_field_restriction_t RestrictionVar62 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { SIMDModeTable0 } };
static ged_field_restriction_t RestrictionVar63 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { SIMDModeTable1 } };
static ged_field_restriction_t RestrictionVar64 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { BlockSizeTable0 } };
static ged_field_restriction_t RestrictionVar65 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { ChannelMaskTable0 } };
static ged_field_restriction_t RestrictionVar66 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { ChannelMaskTable2 } };
static ged_field_restriction_t RestrictionVar67 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { ChannelMaskTable1 } };
static ged_field_restriction_t RestrictionVar68 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { ChannelMaskTable3 } };
static ged_field_restriction_t RestrictionVar69 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { ReturnDataControlTable0 } };
static ged_field_restriction_t RestrictionVar70 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { AtomicOperationTypeTable0 } };
static ged_field_restriction_t RestrictionVar71 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { AtomicOperationTypeTable1 } };
static ged_field_restriction_t RestrictionVar72 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { SubFuncIDTable1 } };
static ged_field_restriction_t RestrictionVar73 = { GED_FIELD_RESTRICTIONS_TYPE_FIELD_TYPE, { /* { 64, signed  , not duplicated,  } */ (void*)(g_uintptr_t)0x140 } };
static ged_field_restriction_t RestrictionVar74 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { SFIDTable2 } };
static ged_field_restriction_t RestrictionVar75 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { SrcModTable1 } };
static ged_field_restriction_t RestrictionVar76 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { unsignedTable11 } };
static ged_field_restriction_t RestrictionVar77 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { unsignedTable9 } };
static ged_field_restriction_t RestrictionVar78 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { unsignedTable10 } };
static ged_field_restriction_t RestrictionVar79 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { ArchRegTable2 } };
static ged_field_restriction_t RestrictionVar80 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { MessageTypeTable10 } };
static ged_field_restriction_t RestrictionVar81 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { MessageTypeTable11 } };
static ged_field_restriction_t RestrictionVar82 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { MessageTypeTable1 } };
static ged_field_restriction_t RestrictionVar83 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { MessageTypeTable12 } };
static ged_field_restriction_t RestrictionVar84 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { DataTypeTable0 } };
static ged_field_restriction_t RestrictionVar85 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { DataTypeTable3 } };
static ged_field_restriction_t RestrictionVar86 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { DataTypeTable4 } };
static ged_field_restriction_t RestrictionVar87 = { GED_FIELD_RESTRICTIONS_TYPE_FIELD_TYPE, { /* { 64, unsigned, not duplicated,  } */ (void*)(g_uintptr_t)0x40 } };
static ged_field_restriction_t RestrictionVar88 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { AccessModeTable1 } };
static ged_field_restriction_t RestrictionVar89 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { DataTypeTable5 } };
static ged_field_restriction_t RestrictionVar90 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { SpecialAccTable0 } };
static ged_field_restriction_t RestrictionVar91 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { DataTypeTable1 } };
static ged_field_restriction_t RestrictionVar92 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { MathFCTable0 } };
static ged_field_restriction_t RestrictionVar93 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { unsignedTable7 } };
static ged_field_restriction_t RestrictionVar94 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { unsignedTable3 } };
static ged_field_restriction_t RestrictionVar95 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { unsignedTable6 } };
static ged_field_restriction_t RestrictionVar96 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { DataTypeTable2 } };
static ged_field_restriction_t RestrictionVar97 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { BranchCtrlTable0 } };
static ged_field_restriction_t RestrictionVar98 = { GED_FIELD_RESTRICTIONS_TYPE_PADDING,    { /* { 0, 0x80 } */ (void*)(g_uintptr_t)0x8000000000 } };
static ged_field_restriction_t RestrictionVar99 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { ArchRegTable0 } };
static ged_field_restriction_t RestrictionVar100 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { MessageTypeTable13 } };
static ged_field_restriction_t RestrictionVar101 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { MessageTypeTable0 } };
static ged_field_restriction_t RestrictionVar102 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { MessageTypeTable14 } };
static ged_field_restriction_t RestrictionVar103 = { GED_FIELD_RESTRICTIONS_TYPE_PADDING,    { /* { 0, 0x1 } */ (void*)(g_uintptr_t)0x100000000 } };
static ged_field_restriction_t RestrictionVar104 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { DataTypeTable6 } };
static ged_field_restriction_t RestrictionVar105 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { SFIDTable0 } };
static ged_field_restriction_t RestrictionVar106 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { NoSrcDepSetTable0 } };
static ged_field_restriction_t RestrictionVar107 = { GED_FIELD_RESTRICTIONS_TYPE_PADDING,    { /* { 0, 0xffd0 } */ (void*)(g_uintptr_t)0xffd000000000 } };
static ged_field_restriction_t RestrictionVar108 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { RegFileTable6 } };
static ged_field_restriction_t RestrictionVar109 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { RegFileTable10 } };
static ged_field_restriction_t RestrictionVar110 = { GED_FIELD_RESTRICTIONS_TYPE_PADDING,    { /* { 0, 0xfc10 } */ (void*)(g_uintptr_t)0xfc1000000000 } };
static ged_field_restriction_t RestrictionVar111 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { MessageTypeTable5 } };
static ged_field_restriction_t RestrictionVar112 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { MessageTypeTable15 } };
static ged_field_restriction_t RestrictionVar113 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { MessageTypeTable3 } };
static ged_field_restriction_t RestrictionVar114 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { MessageTypeTable4 } };
static ged_field_restriction_t RestrictionVar115 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { SubFuncIDTable0 } };
static ged_field_restriction_t RestrictionVar116 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { ThreadCtrlTable1 } };
static ged_field_restriction_t RestrictionVar117 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { RegFileTable8 } };
static ged_field_restriction_t RestrictionVar118 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { RegFileTable7 } };
static ged_field_restriction_t RestrictionVar119 = { GED_FIELD_RESTRICTIONS_TYPE_PADDING,    { /* { 0, 0x7 } */ (void*)(g_uintptr_t)0x700000000 } };
static ged_field_restriction_t RestrictionVar120 = { GED_FIELD_RESTRICTIONS_TYPE_RANGE,      { /* { 32, 47 } */ (void*)(g_uintptr_t)0x2f00000020 } };
static ged_field_restriction_t RestrictionVar121 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { unsignedTable4 } };
static ged_field_restriction_t RestrictionVar122 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { unsignedTable8 } };
static ged_field_restriction_t RestrictionVar123 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { ExecutionDataTypeTable0 } };
static ged_field_restriction_t RestrictionVar124 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { DataTypeTable8 } };
static ged_field_restriction_t RestrictionVar125 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { DataTypeTable7 } };
static ged_field_restriction_t RestrictionVar126 = { GED_FIELD_RESTRICTIONS_TYPE_FIELD_TYPE, { /* { 16, unsigned, not duplicated,  } */ (void*)(g_uintptr_t)0x10 } };
static ged_field_restriction_t RestrictionVar127 = { GED_FIELD_RESTRICTIONS_TYPE_FIELD_TYPE, { /* { 16, signed  , not duplicated,  } */ (void*)(g_uintptr_t)0x110 } };
static ged_field_restriction_t RestrictionVar128 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { ThreadCtrlTable0 } };
static ged_field_restriction_t RestrictionVar129 = { GED_FIELD_RESTRICTIONS_TYPE_ENUM,       { MessageTypeTable2 } };
const ged_field_restriction_t* RestrictionTable0[2] =
{
    &RestrictionVar0, // 0
    NULL // 1
}; // RestrictionTable0[]
const ged_field_restriction_t* RestrictionTable1[2] =
{
    &RestrictionVar1, // 0
    NULL // 1
}; // RestrictionTable1[]
const ged_field_restriction_t* RestrictionTable2[2] =
{
    &RestrictionVar2, // 0
    NULL // 1
}; // RestrictionTable2[]
const ged_field_restriction_t* RestrictionTable3[2] =
{
    &RestrictionVar3, // 0
    NULL // 1
}; // RestrictionTable3[]
const ged_field_restriction_t* RestrictionTable4[2] =
{
    &RestrictionVar4, // 0
    NULL // 1
}; // RestrictionTable4[]
const ged_field_restriction_t* RestrictionTable5[2] =
{
    &RestrictionVar5, // 0
    NULL // 1
}; // RestrictionTable5[]
const ged_field_restriction_t* RestrictionTable6[2] =
{
    &RestrictionVar6, // 0
    NULL // 1
}; // RestrictionTable6[]
const ged_field_restriction_t* RestrictionTable7[2] =
{
    &RestrictionVar7, // 0
    NULL // 1
}; // RestrictionTable7[]
const ged_field_restriction_t* RestrictionTable8[2] =
{
    &RestrictionVar8, // 0
    NULL // 1
}; // RestrictionTable8[]
const ged_field_restriction_t* RestrictionTable9[2] =
{
    &RestrictionVar9, // 0
    NULL // 1
}; // RestrictionTable9[]
const ged_field_restriction_t* RestrictionTable10[2] =
{
    &RestrictionVar10, // 0
    NULL // 1
}; // RestrictionTable10[]
const ged_field_restriction_t* RestrictionTable11[2] =
{
    &RestrictionVar11, // 0
    NULL // 1
}; // RestrictionTable11[]
const ged_field_restriction_t* RestrictionTable12[2] =
{
    &RestrictionVar12, // 0
    NULL // 1
}; // RestrictionTable12[]
const ged_field_restriction_t* RestrictionTable13[2] =
{
    &RestrictionVar13, // 0
    NULL // 1
}; // RestrictionTable13[]
const ged_field_restriction_t* RestrictionTable14[2] =
{
    &RestrictionVar14, // 0
    NULL // 1
}; // RestrictionTable14[]
const ged_field_restriction_t* RestrictionTable15[2] =
{
    &RestrictionVar15, // 0
    NULL // 1
}; // RestrictionTable15[]
const ged_field_restriction_t* RestrictionTable16[2] =
{
    &RestrictionVar16, // 0
    NULL // 1
}; // RestrictionTable16[]
const ged_field_restriction_t* RestrictionTable17[2] =
{
    &RestrictionVar17, // 0
    NULL // 1
}; // RestrictionTable17[]
const ged_field_restriction_t* RestrictionTable18[2] =
{
    &RestrictionVar18, // 0
    NULL // 1
}; // RestrictionTable18[]
const ged_field_restriction_t* RestrictionTable19[2] =
{
    &RestrictionVar19, // 0
    NULL // 1
}; // RestrictionTable19[]
const ged_field_restriction_t* RestrictionTable20[2] =
{
    &RestrictionVar20, // 0
    NULL // 1
}; // RestrictionTable20[]
const ged_field_restriction_t* RestrictionTable21[2] =
{
    &RestrictionVar21, // 0
    NULL // 1
}; // RestrictionTable21[]
const ged_field_restriction_t* RestrictionTable22[2] =
{
    &RestrictionVar22, // 0
    NULL // 1
}; // RestrictionTable22[]
const ged_field_restriction_t* RestrictionTable23[2] =
{
    &RestrictionVar23, // 0
    NULL // 1
}; // RestrictionTable23[]
const ged_field_restriction_t* RestrictionTable24[2] =
{
    &RestrictionVar24, // 0
    NULL // 1
}; // RestrictionTable24[]
const ged_field_restriction_t* RestrictionTable25[2] =
{
    &RestrictionVar25, // 0
    NULL // 1
}; // RestrictionTable25[]
const ged_field_restriction_t* RestrictionTable26[2] =
{
    &RestrictionVar26, // 0
    NULL // 1
}; // RestrictionTable26[]
const ged_field_restriction_t* RestrictionTable27[2] =
{
    &RestrictionVar27, // 0
    NULL // 1
}; // RestrictionTable27[]
const ged_field_restriction_t* RestrictionTable28[2] =
{
    &RestrictionVar28, // 0
    NULL // 1
}; // RestrictionTable28[]
const ged_field_restriction_t* RestrictionTable29[2] =
{
    &RestrictionVar29, // 0
    NULL // 1
}; // RestrictionTable29[]
const ged_field_restriction_t* RestrictionTable30[2] =
{
    &RestrictionVar30, // 0
    NULL // 1
}; // RestrictionTable30[]
const ged_field_restriction_t* RestrictionTable31[2] =
{
    &RestrictionVar31, // 0
    NULL // 1
}; // RestrictionTable31[]
const ged_field_restriction_t* RestrictionTable32[2] =
{
    &RestrictionVar32, // 0
    NULL // 1
}; // RestrictionTable32[]
const ged_field_restriction_t* RestrictionTable33[2] =
{
    &RestrictionVar33, // 0
    NULL // 1
}; // RestrictionTable33[]
const ged_field_restriction_t* RestrictionTable34[2] =
{
    &RestrictionVar34, // 0
    NULL // 1
}; // RestrictionTable34[]
const ged_field_restriction_t* RestrictionTable35[2] =
{
    &RestrictionVar35, // 0
    NULL // 1
}; // RestrictionTable35[]
const ged_field_restriction_t* RestrictionTable36[2] =
{
    &RestrictionVar36, // 0
    NULL // 1
}; // RestrictionTable36[]
const ged_field_restriction_t* RestrictionTable37[2] =
{
    &RestrictionVar37, // 0
    NULL // 1
}; // RestrictionTable37[]
const ged_field_restriction_t* RestrictionTable38[2] =
{
    &RestrictionVar38, // 0
    NULL // 1
}; // RestrictionTable38[]
const ged_field_restriction_t* RestrictionTable39[2] =
{
    &RestrictionVar39, // 0
    NULL // 1
}; // RestrictionTable39[]
const ged_field_restriction_t* RestrictionTable40[2] =
{
    &RestrictionVar40, // 0
    NULL // 1
}; // RestrictionTable40[]
const ged_field_restriction_t* RestrictionTable41[2] =
{
    &RestrictionVar41, // 0
    NULL // 1
}; // RestrictionTable41[]
const ged_field_restriction_t* RestrictionTable42[2] =
{
    &RestrictionVar42, // 0
    NULL // 1
}; // RestrictionTable42[]
const ged_field_restriction_t* RestrictionTable43[2] =
{
    &RestrictionVar43, // 0
    NULL // 1
}; // RestrictionTable43[]
const ged_field_restriction_t* RestrictionTable44[2] =
{
    &RestrictionVar44, // 0
    NULL // 1
}; // RestrictionTable44[]
const ged_field_restriction_t* RestrictionTable45[2] =
{
    &RestrictionVar45, // 0
    NULL // 1
}; // RestrictionTable45[]
const ged_field_restriction_t* RestrictionTable46[2] =
{
    &RestrictionVar46, // 0
    NULL // 1
}; // RestrictionTable46[]
const ged_field_restriction_t* RestrictionTable47[2] =
{
    &RestrictionVar47, // 0
    NULL // 1
}; // RestrictionTable47[]
const ged_field_restriction_t* RestrictionTable48[2] =
{
    &RestrictionVar48, // 0
    NULL // 1
}; // RestrictionTable48[]
const ged_field_restriction_t* RestrictionTable49[2] =
{
    &RestrictionVar49, // 0
    NULL // 1
}; // RestrictionTable49[]
const ged_field_restriction_t* RestrictionTable50[2] =
{
    &RestrictionVar50, // 0
    NULL // 1
}; // RestrictionTable50[]
const ged_field_restriction_t* RestrictionTable51[2] =
{
    &RestrictionVar51, // 0
    NULL // 1
}; // RestrictionTable51[]
const ged_field_restriction_t* RestrictionTable52[2] =
{
    &RestrictionVar52, // 0
    NULL // 1
}; // RestrictionTable52[]
const ged_field_restriction_t* RestrictionTable53[2] =
{
    &RestrictionVar53, // 0
    NULL // 1
}; // RestrictionTable53[]
const ged_field_restriction_t* RestrictionTable54[2] =
{
    &RestrictionVar54, // 0
    NULL // 1
}; // RestrictionTable54[]
const ged_field_restriction_t* RestrictionTable55[2] =
{
    &RestrictionVar55, // 0
    NULL // 1
}; // RestrictionTable55[]
const ged_field_restriction_t* RestrictionTable56[2] =
{
    &RestrictionVar56, // 0
    NULL // 1
}; // RestrictionTable56[]
const ged_field_restriction_t* RestrictionTable57[2] =
{
    &RestrictionVar57, // 0
    NULL // 1
}; // RestrictionTable57[]
const ged_field_restriction_t* RestrictionTable58[2] =
{
    &RestrictionVar58, // 0
    NULL // 1
}; // RestrictionTable58[]
const ged_field_restriction_t* RestrictionTable59[2] =
{
    &RestrictionVar59, // 0
    NULL // 1
}; // RestrictionTable59[]
const ged_field_restriction_t* RestrictionTable60[2] =
{
    &RestrictionVar60, // 0
    NULL // 1
}; // RestrictionTable60[]
const ged_field_restriction_t* RestrictionTable61[2] =
{
    &RestrictionVar61, // 0
    NULL // 1
}; // RestrictionTable61[]
const ged_field_restriction_t* RestrictionTable62[2] =
{
    &RestrictionVar62, // 0
    NULL // 1
}; // RestrictionTable62[]
const ged_field_restriction_t* RestrictionTable63[2] =
{
    &RestrictionVar63, // 0
    NULL // 1
}; // RestrictionTable63[]
const ged_field_restriction_t* RestrictionTable64[2] =
{
    &RestrictionVar64, // 0
    NULL // 1
}; // RestrictionTable64[]
const ged_field_restriction_t* RestrictionTable65[2] =
{
    &RestrictionVar65, // 0
    NULL // 1
}; // RestrictionTable65[]
const ged_field_restriction_t* RestrictionTable66[2] =
{
    &RestrictionVar66, // 0
    NULL // 1
}; // RestrictionTable66[]
const ged_field_restriction_t* RestrictionTable67[2] =
{
    &RestrictionVar67, // 0
    NULL // 1
}; // RestrictionTable67[]
const ged_field_restriction_t* RestrictionTable68[2] =
{
    &RestrictionVar68, // 0
    NULL // 1
}; // RestrictionTable68[]
const ged_field_restriction_t* RestrictionTable69[2] =
{
    &RestrictionVar69, // 0
    NULL // 1
}; // RestrictionTable69[]
const ged_field_restriction_t* RestrictionTable70[2] =
{
    &RestrictionVar70, // 0
    NULL // 1
}; // RestrictionTable70[]
const ged_field_restriction_t* RestrictionTable71[2] =
{
    &RestrictionVar71, // 0
    NULL // 1
}; // RestrictionTable71[]
const ged_field_restriction_t* RestrictionTable72[2] =
{
    &RestrictionVar72, // 0
    NULL // 1
}; // RestrictionTable72[]
const ged_field_restriction_t* RestrictionTable73[2] =
{
    &RestrictionVar73, // 0
    NULL // 1
}; // RestrictionTable73[]
const ged_field_restriction_t* RestrictionTable74[2] =
{
    &RestrictionVar74, // 0
    NULL // 1
}; // RestrictionTable74[]
const ged_field_restriction_t* RestrictionTable75[2] =
{
    &RestrictionVar75, // 0
    NULL // 1
}; // RestrictionTable75[]
const ged_field_restriction_t* RestrictionTable76[2] =
{
    &RestrictionVar76, // 0
    NULL // 1
}; // RestrictionTable76[]
const ged_field_restriction_t* RestrictionTable77[2] =
{
    &RestrictionVar77, // 0
    NULL // 1
}; // RestrictionTable77[]
const ged_field_restriction_t* RestrictionTable78[2] =
{
    &RestrictionVar78, // 0
    NULL // 1
}; // RestrictionTable78[]
const ged_field_restriction_t* RestrictionTable79[2] =
{
    &RestrictionVar79, // 0
    NULL // 1
}; // RestrictionTable79[]
const ged_field_restriction_t* RestrictionTable80[2] =
{
    &RestrictionVar80, // 0
    NULL // 1
}; // RestrictionTable80[]
const ged_field_restriction_t* RestrictionTable81[2] =
{
    &RestrictionVar81, // 0
    NULL // 1
}; // RestrictionTable81[]
const ged_field_restriction_t* RestrictionTable82[2] =
{
    &RestrictionVar82, // 0
    NULL // 1
}; // RestrictionTable82[]
const ged_field_restriction_t* RestrictionTable83[2] =
{
    &RestrictionVar83, // 0
    NULL // 1
}; // RestrictionTable83[]
const ged_field_restriction_t* RestrictionTable84[2] =
{
    &RestrictionVar84, // 0
    NULL // 1
}; // RestrictionTable84[]
const ged_field_restriction_t* RestrictionTable85[2] =
{
    &RestrictionVar85, // 0
    NULL // 1
}; // RestrictionTable85[]
const ged_field_restriction_t* RestrictionTable86[2] =
{
    &RestrictionVar86, // 0
    NULL // 1
}; // RestrictionTable86[]
const ged_field_restriction_t* RestrictionTable87[2] =
{
    &RestrictionVar87, // 0
    NULL // 1
}; // RestrictionTable87[]
const ged_field_restriction_t* RestrictionTable88[2] =
{
    &RestrictionVar88, // 0
    NULL // 1
}; // RestrictionTable88[]
const ged_field_restriction_t* RestrictionTable89[2] =
{
    &RestrictionVar89, // 0
    NULL // 1
}; // RestrictionTable89[]
const ged_field_restriction_t* RestrictionTable90[2] =
{
    &RestrictionVar90, // 0
    NULL // 1
}; // RestrictionTable90[]
const ged_field_restriction_t* RestrictionTable91[2] =
{
    &RestrictionVar91, // 0
    NULL // 1
}; // RestrictionTable91[]
const ged_field_restriction_t* RestrictionTable92[2] =
{
    &RestrictionVar92, // 0
    NULL // 1
}; // RestrictionTable92[]
const ged_field_restriction_t* RestrictionTable93[2] =
{
    &RestrictionVar93, // 0
    NULL // 1
}; // RestrictionTable93[]
const ged_field_restriction_t* RestrictionTable94[2] =
{
    &RestrictionVar94, // 0
    NULL // 1
}; // RestrictionTable94[]
const ged_field_restriction_t* RestrictionTable95[2] =
{
    &RestrictionVar95, // 0
    NULL // 1
}; // RestrictionTable95[]
const ged_field_restriction_t* RestrictionTable96[2] =
{
    &RestrictionVar96, // 0
    NULL // 1
}; // RestrictionTable96[]
const ged_field_restriction_t* RestrictionTable97[2] =
{
    &RestrictionVar97, // 0
    NULL // 1
}; // RestrictionTable97[]
const ged_field_restriction_t* RestrictionTable98[2] =
{
    &RestrictionVar98, // 0
    NULL // 1
}; // RestrictionTable98[]
const ged_field_restriction_t* RestrictionTable99[2] =
{
    &RestrictionVar99, // 0
    NULL // 1
}; // RestrictionTable99[]
const ged_field_restriction_t* RestrictionTable100[2] =
{
    &RestrictionVar100, // 0
    NULL // 1
}; // RestrictionTable100[]
const ged_field_restriction_t* RestrictionTable101[2] =
{
    &RestrictionVar101, // 0
    NULL // 1
}; // RestrictionTable101[]
const ged_field_restriction_t* RestrictionTable102[2] =
{
    &RestrictionVar102, // 0
    NULL // 1
}; // RestrictionTable102[]
const ged_field_restriction_t* RestrictionTable103[2] =
{
    &RestrictionVar103, // 0
    NULL // 1
}; // RestrictionTable103[]
const ged_field_restriction_t* RestrictionTable104[2] =
{
    &RestrictionVar104, // 0
    NULL // 1
}; // RestrictionTable104[]
const ged_field_restriction_t* RestrictionTable105[2] =
{
    &RestrictionVar105, // 0
    NULL // 1
}; // RestrictionTable105[]
const ged_field_restriction_t* RestrictionTable106[2] =
{
    &RestrictionVar106, // 0
    NULL // 1
}; // RestrictionTable106[]
const ged_field_restriction_t* RestrictionTable107[2] =
{
    &RestrictionVar107, // 0
    NULL // 1
}; // RestrictionTable107[]
const ged_field_restriction_t* RestrictionTable108[2] =
{
    &RestrictionVar108, // 0
    NULL // 1
}; // RestrictionTable108[]
const ged_field_restriction_t* RestrictionTable109[2] =
{
    &RestrictionVar109, // 0
    NULL // 1
}; // RestrictionTable109[]
const ged_field_restriction_t* RestrictionTable110[2] =
{
    &RestrictionVar110, // 0
    NULL // 1
}; // RestrictionTable110[]
const ged_field_restriction_t* RestrictionTable111[2] =
{
    &RestrictionVar111, // 0
    NULL // 1
}; // RestrictionTable111[]
const ged_field_restriction_t* RestrictionTable112[2] =
{
    &RestrictionVar112, // 0
    NULL // 1
}; // RestrictionTable112[]
const ged_field_restriction_t* RestrictionTable113[2] =
{
    &RestrictionVar113, // 0
    NULL // 1
}; // RestrictionTable113[]
const ged_field_restriction_t* RestrictionTable114[2] =
{
    &RestrictionVar114, // 0
    NULL // 1
}; // RestrictionTable114[]
const ged_field_restriction_t* RestrictionTable115[2] =
{
    &RestrictionVar115, // 0
    NULL // 1
}; // RestrictionTable115[]
const ged_field_restriction_t* RestrictionTable116[2] =
{
    &RestrictionVar116, // 0
    NULL // 1
}; // RestrictionTable116[]
const ged_field_restriction_t* RestrictionTable117[2] =
{
    &RestrictionVar117, // 0
    NULL // 1
}; // RestrictionTable117[]
const ged_field_restriction_t* RestrictionTable118[2] =
{
    &RestrictionVar118, // 0
    NULL // 1
}; // RestrictionTable118[]
const ged_field_restriction_t* RestrictionTable119[2] =
{
    &RestrictionVar119, // 0
    NULL // 1
}; // RestrictionTable119[]
const ged_field_restriction_t* RestrictionTable120[2] =
{
    &RestrictionVar120, // 0
    NULL // 1
}; // RestrictionTable120[]
const ged_field_restriction_t* RestrictionTable121[2] =
{
    &RestrictionVar121, // 0
    NULL // 1
}; // RestrictionTable121[]
const ged_field_restriction_t* RestrictionTable122[2] =
{
    &RestrictionVar122, // 0
    NULL // 1
}; // RestrictionTable122[]
const ged_field_restriction_t* RestrictionTable123[2] =
{
    &RestrictionVar123, // 0
    NULL // 1
}; // RestrictionTable123[]
const ged_field_restriction_t* RestrictionTable124[2] =
{
    &RestrictionVar124, // 0
    NULL // 1
}; // RestrictionTable124[]
const ged_field_restriction_t* RestrictionTable125[2] =
{
    &RestrictionVar125, // 0
    NULL // 1
}; // RestrictionTable125[]
const ged_field_restriction_t* RestrictionTable126[2] =
{
    &RestrictionVar126, // 0
    NULL // 1
}; // RestrictionTable126[]
const ged_field_restriction_t* RestrictionTable127[2] =
{
    &RestrictionVar127, // 0
    NULL // 1
}; // RestrictionTable127[]
const ged_field_restriction_t* RestrictionTable128[2] =
{
    &RestrictionVar128, // 0
    NULL // 1
}; // RestrictionTable128[]
const ged_field_restriction_t* RestrictionTable129[2] =
{
    &RestrictionVar129, // 0
    NULL // 1
}; // RestrictionTable129[]