/*
 * Generated C-like pseudocode from official Monoprice MP10 v72 update.bin.
 * This is decompiler output, not original vendor source code.
 */

/* FUN_08008194 at 08008194 */

/* WARNING: Removing unreachable block (ram,0x08008726) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08008194(void)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 in_r3;
  byte bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 local_48;
  float local_44;
  float local_40 [2];
  
  iVar5 = FUN_08008c6c();
  if (iVar5 != 0) {
    return in_r3;
  }
  iVar5 = FUN_0800a88c(1,1,1);
  if (iVar5 != 0) {
    iVar5 = FUN_0800b020(0x50);
    if (iVar5 == 0) {
      cVar3 = -1;
    }
    else {
      cVar3 = FUN_0800b038();
    }
    if (((cVar3 == '\x01' || cVar3 == '\x02') || cVar3 == '\x04') ||
       (iVar5 = FUN_0800b04c(0x4a), iVar5 != 0)) {
      FUN_0800b0ac(1);
    }
  }
  iVar5 = FUN_0800b04c(0x49);
  pcVar6 = DAT_08008e10;
  uVar17 = DAT_08008454;
  if (iVar5 != 0) {
    bVar12 = 0;
    if (*_DAT_08008e14 == 0) {
      pcVar6[0xc] = '\x01';
      pcVar6[0xd] = '\0';
      pcVar6[0xe] = '\0';
      pcVar6[0xf] = '\0';
LAB_08008226:
      while (iVar5 = *(int *)(pcVar6 + 0xc), *(int *)(pcVar6 + 0xc) = iVar5 + -1, iVar5 != 0) {
        if (0x14 < bVar12) {
          FUN_0800b806(0);
          bVar12 = 0;
        }
        local_44 = 0.0;
        local_48 = 0;
        FUN_0800991c(local_40,1,pcVar6 + 0x18,pcVar6 + 0x1c);
        if (local_40[0]._0_1_ < '\0') {
          FUN_0800b3b4(uVar17);
          FUN_0800bb0c(s_Entire_Mesh_invalidated__08008770);
          break;
        }
        uVar20 = FUN_0800892a();
        bVar12 = bVar12 + 1;
        *(undefined4 *)((int)uVar20 + (int)((ulonglong)uVar20 >> 0x20) * 4) = uVar17;
      }
    }
    else {
      sVar4 = FUN_0800b038();
      *(int *)(pcVar6 + 0xc) = (int)sVar4;
      if (sVar4 < 0x19) goto LAB_08008226;
      FUN_0800b3b4(uVar17);
    }
    FUN_0800bb0c(s_Locations_invalidated__0800878c);
  }
  iVar5 = FUN_0800b04c(0x51);
  if (iVar5 != 0) {
    if (*_DAT_08008e14 == 0) {
      iVar5 = -99;
    }
    else {
      sVar4 = FUN_0800b038();
      iVar5 = (int)sVar4;
    }
    iVar15 = DAT_0800900c;
    if (3 < iVar5 + 1U) {
      pcVar6 = s_Invalid_test_pattern_value____1_t_080087a8;
      goto LAB_08008728;
    }
    FUN_0800bb0c(s_Loading_test_pattern_values__080087d0);
    switch(iVar5) {
    case 0:
      uVar13 = 0;
      do {
        iVar5 = iVar15 + uVar13 * 0x14;
        fVar18 = (float)FUN_0800a1be(uVar13 & 0xff);
        uVar16 = 0;
        do {
          fVar19 = (float)FUN_0800a1be(uVar16 & 0xff);
          uVar20 = FUN_0800bca0(*(undefined4 *)(iVar5 + uVar16 * 4));
          FUN_0800bce8((2.5 - fVar18) * (2.5 - fVar18) + (2.5 - fVar19) * (2.5 - fVar19));
          FUN_08009c0e();
          uVar21 = FUN_08009bfc();
          FUN_0800bd80((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar20,
                       (int)((ulonglong)uVar20 >> 0x20));
          uVar17 = FUN_0800bef8();
          *(undefined4 *)(iVar5 + uVar16 * 4) = uVar17;
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < 5);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < 5);
      break;
    case 1:
      iVar5 = 0;
      do {
        iVar14 = iVar15 + iVar5 * 0x14;
        FUN_0800bca0(*(undefined4 *)(iVar14 + iVar5 * 4));
        FUN_08008918();
        uVar17 = FUN_0800bef8();
        *(undefined4 *)(iVar15 + iVar5 * 0x18) = uVar17;
        iVar10 = -4;
        if (iVar5 + (uint)(iVar5 < 4) != 0) {
          iVar10 = 4;
        }
        iVar5 = iVar5 + 1;
        FUN_0800bca0(*(undefined4 *)(iVar14 + iVar10));
        FUN_08008918();
        uVar17 = FUN_0800bef8();
        *(undefined4 *)(iVar14 + iVar10) = uVar17;
      } while (iVar5 < 5);
      break;
    case 2:
      iVar5 = 1;
      do {
        iVar14 = 1;
        iVar10 = iVar15 + iVar5 * 0x14;
        do {
          iVar7 = FUN_0800b04c(0x43);
          if (iVar7 != 0) {
            FUN_0800bca0(*(undefined4 *)(pcVar6 + 0x20));
          }
          FUN_0800bca0(*(undefined4 *)(iVar10 + iVar14 * 4));
          FUN_08008918();
          uVar17 = FUN_0800bef8();
          *(undefined4 *)(iVar10 + iVar14 * 4) = uVar17;
          iVar14 = iVar14 + 1;
        } while (iVar14 < 3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      break;
    case -1:
      FUN_080095ac();
    }
  }
  iVar5 = FUN_0800b04c(0x4a);
  if (iVar5 != 0) {
    iVar5 = *(int *)(pcVar6 + 0x24);
    if (iVar5 == 0) {
      FUN_08008f78();
    }
    else {
      FUN_08008f78();
    }
    FUN_08009cb0(iVar5 == 0);
    FUN_08008fe8();
    local_48 = 0;
    local_40[0] = DAT_0800862c;
    local_44 = DAT_0800862c;
    FUN_0800a76c(local_40,&local_44,&local_48);
  }
  iVar5 = FUN_0800b04c(0x50);
  uVar17 = DAT_080091ac;
  pcVar2 = DAT_0800901c;
  if (iVar5 == 0) goto switchD_0800843a_caseD_7;
  if ((*(uint *)(pcVar6 + 8) < 2) && (*DAT_0800901c == -1)) {
    *DAT_0800901c = '\0';
    FUN_0800bb0c(s_Default_storage_slot_0_selected__080087f0);
  }
  switch(*(undefined4 *)(pcVar6 + 8)) {
  case 0:
    FUN_0800b368();
    FUN_0800bb0c(s_Mesh_zeroed__08008814);
    break;
  case 1:
    iVar5 = FUN_0800b04c(0x43);
    if (iVar5 == 0) {
      FUN_0800b3a4();
      FUN_0800bb0c(s_Mesh_invalidated__Probing_mesh__08008824);
    }
    if (1 < *(int *)(pcVar6 + 4)) {
      uVar11 = FUN_0800bb78(*(undefined4 *)(pcVar6 + 0x18),
                            s_Probing_Mesh_Points_Closest_to___08008848);
      FUN_08008902(uVar11,0x2c);
      uVar11 = FUN_0800bca0(*(undefined4 *)(pcVar6 + 0x1c));
      FUN_0800bfd0(uVar11,uVar17,2);
      FUN_0800bb0c(&DAT_0800886c);
    }
    local_40[0] = *(float *)(pcVar6 + 0x18) + 25.0;
    local_44 = *(float *)(pcVar6 + 0x1c) + 10.0;
    uVar11 = FUN_0800b04c(0x55);
    uVar8 = FUN_0800b04c(0x45);
    uVar9 = FUN_0800b04c(0x54);
    local_48 = uVar11;
    FUN_08008aec(local_40,&local_44,uVar9,uVar8);
    break;
  case 2:
    pcVar6 = s__P2_is_only_available_when_an_LC_08008874;
    goto LAB_08008728;
  case 3:
    if (*pcVar6 == '\0') {
      fVar18 = (float)FUN_0800c204();
      fVar19 = (float)FUN_0800c258(fVar18 * 10.0);
      if ((int)fVar19 == 0x1f) {
        uVar20 = FUN_0800bca0(fVar18);
        uVar20 = FUN_0800bd80((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_08009020,DAT_08009024
                             );
        FUN_0800c284((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0,_DAT_08009028);
        fVar18 = (float)FUN_0800bef8();
        if (fVar18 == 0.0) {
          local_48 = 0;
        }
        else {
          local_48 = FUN_0800c804(0x41200000);
        }
        FUN_0800a1dc(&local_48);
      }
      else {
        FUN_08009c16();
      }
    }
    else {
      if (*(int *)(pcVar6 + 0xc) < 0x19) {
LAB_08008506:
        iVar5 = *(int *)(pcVar6 + 0xc);
        *(int *)(pcVar6 + 0xc) = iVar5 + -1;
        if (iVar5 != 0) {
          local_44 = 0.0;
          local_48 = 0;
          FUN_0800991c(local_40,0,pcVar6 + 0x18,pcVar6 + 0x1c);
          iVar5 = DAT_0800900c;
          if (-1 < local_40[0]._0_1_) goto LAB_080084fc;
          iVar15 = 0;
          do {
            iVar10 = 0;
            iVar14 = iVar5 + iVar15 * 0x14;
            do {
              iVar7 = FUN_08009afa(iVar14 + iVar10 * 4);
              if (iVar7 != 0) {
                *(undefined4 *)(iVar14 + iVar10 * 4) = *(undefined4 *)(pcVar6 + 0x20);
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < 5);
            iVar15 = iVar15 + 1;
          } while (iVar15 < 5);
        }
        break;
      }
      FUN_0800b3b4(*(undefined4 *)(pcVar6 + 0x20));
    }
    break;
  case 4:
    pcVar6 = s__P4_is_only_available_when_an_LC_080088a4;
LAB_08008728:
    FUN_0800bb0c(pcVar6);
    return in_r3;
  case 5:
    FUN_08008944();
    break;
  case 6:
    FUN_08008aac();
  }
switchD_0800843a_caseD_7:
  iVar5 = FUN_0800b04c(0x57);
  if (iVar5 != 0) {
    FUN_0800906c();
  }
  iVar5 = FUN_0800b04c(0x4b);
  if (iVar5 != 0) {
    FUN_08009628();
  }
  iVar5 = FUN_0800b04c(0x4c);
  uVar8 = DAT_080092f4;
  uVar11 = DAT_080092f0;
  piVar1 = _DAT_08008e14;
  if (iVar5 == 0) {
LAB_0800866a:
    iVar5 = FUN_0800b04c(0x53);
    if (iVar5 != 0) {
      if (*piVar1 == 0) {
        iVar5 = (int)*pcVar2;
      }
      else {
        sVar4 = FUN_0800b038();
        iVar5 = (int)sVar4;
      }
      *(int *)(pcVar6 + 0x10) = iVar5;
      iVar15 = DAT_0800900c;
      if (iVar5 == -1) {
        FUN_0800bb0c(s_G29_I_999_080088dc);
        uVar13 = 0;
        do {
          uVar16 = 0;
          iVar5 = iVar15 + uVar13 * 0x14;
          do {
            iVar10 = FUN_08009afa(iVar5 + uVar16 * 4);
            if (iVar10 == 0) {
              FUN_0800bb4c(s_M421_I_080088e8,uVar13);
              FUN_0800bb4c(&DAT_0800893c,uVar16);
              FUN_0800bb0c(&DAT_08008940);
              uVar11 = FUN_0800bca0(*(undefined4 *)(iVar5 + uVar16 * 4));
              FUN_0800bfd0(uVar11,uVar17,6);
              FUN_08008908(s___X_080088f0,DAT_08009300,uVar13 & 0xff);
              FUN_08008908(&DAT_080088f8,DAT_08009308,uVar16 & 0xff);
              FUN_08008900();
            }
            uVar16 = uVar16 + 1;
          } while ((int)uVar16 < 5);
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < 5);
        return in_r3;
      }
      iVar5 = *(int *)(pcVar6 + 0x10);
      uVar17 = 0;
      if ((iVar5 < 0) || (0 < iVar5)) {
        FUN_0800bb0c(uVar8);
        goto LAB_08008744;
      }
      FUN_0800d3bc((int)(char)iVar5);
      FUN_08008920();
    }
    iVar5 = FUN_0800b04c(0x54);
    if (iVar5 != 0) {
      FUN_0800b3e4(*(undefined4 *)(pcVar6 + 0x14));
    }
  }
  else {
    if (*_DAT_08008e14 == 0) {
      iVar5 = (int)*pcVar2;
    }
    else {
      sVar4 = FUN_0800b038();
      iVar5 = (int)sVar4;
    }
    *(int *)(pcVar6 + 0x10) = iVar5;
    iVar5 = *(int *)(pcVar6 + 0x10);
    local_48 = 0;
    if ((-1 < iVar5) && (iVar5 < 1)) {
      FUN_0800d3fe((int)(char)iVar5,0);
      FUN_08008920();
      goto LAB_0800866a;
    }
    FUN_0800bb0c(uVar8);
    uVar17 = local_48;
LAB_08008744:
    FUN_0800bb4c(uVar11,uVar17);
    FUN_08008900();
  }
  return in_r3;
LAB_080084fc:
  uVar20 = FUN_0800892a();
  *(undefined4 *)((int)uVar20 + (int)((ulonglong)uVar20 >> 0x20) * 4) =
       *(undefined4 *)(pcVar6 + 0x20);
  goto LAB_08008506;
}



/* FUN_08008900 at 08008900 */

void FUN_08008900(void)

{
  FUN_0800de78();
  return;
}



/* FUN_08008902 at 08008902 */

void FUN_08008902(void)

{
  FUN_0800de78();
  return;
}



/* FUN_08008908 at 08008908 */

void FUN_08008908(undefined4 param_1,float param_2,undefined4 param_3,int param_4,int param_5)

{
  FUN_0800bb78(*(float *)(param_4 + param_5 * 4) + param_2);
  return;
}



/* FUN_08008918 at 08008918 */

void FUN_08008918(void)

{
  FUN_0800bd80();
  return;
}



/* FUN_08008920 at 08008920 */

void FUN_08008920(void)

{
  undefined1 *unaff_r4;
  int unaff_r6;
  
  *unaff_r4 = (char)*(undefined4 *)(unaff_r6 + 0x10);
  FUN_0800bb0c();
  return;
}



/* FUN_0800892a at 0800892a */

undefined8 FUN_0800892a(short param_1)

{
  undefined4 in_stack_00000008;
  
  return CONCAT44((int)in_stack_00000008._1_1_,param_1 * 0x14 + DAT_0800900c);
}



/* FUN_08008944 at 08008944 */

undefined4 FUN_08008944(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 in_r3;
  int iVar4;
  int iVar5;
  int unaff_r7;
  int unaff_r9;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  iVar4 = 0;
  iVar5 = 0;
  fVar9 = DAT_08008c54;
  do {
    FUN_08008a8c();
    do {
      iVar2 = FUN_08009af6();
      if (iVar2 == 0) {
        iVar4 = iVar4 + 1;
        fVar9 = fVar9 + *(float *)(unaff_r9 + unaff_r7 * 4);
      }
      unaff_r7 = unaff_r7 + 1;
    } while (unaff_r7 < 5);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 5);
  fVar6 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = fVar9 / fVar6;
  iVar5 = 0;
  fVar6 = DAT_08008c54;
  do {
    FUN_08008a8c();
    do {
      iVar3 = FUN_08009af6();
      iVar2 = DAT_080096c8;
      if (iVar3 == 0) {
        fVar7 = *(float *)(unaff_r9 + unaff_r7 * 4) - fVar9;
        fVar6 = fVar6 + fVar7 * fVar7;
      }
      unaff_r7 = unaff_r7 + 1;
    } while (unaff_r7 < 5);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 5);
  FUN_0800bb4c(s___of_samples__08008a50,iVar4);
  FUN_08008a98();
  FUN_0800bb0c(s_Mean_Mesh_Height__08008a60);
  FUN_0800bca0(fVar9);
  FUN_08008aa0();
  FUN_08008a98();
  fVar7 = (float)VectorSignedToFloat(iVar4 + 1,(byte)(in_fpscr >> 0x15) & 3);
  uVar8 = FUN_0800bce8(fVar6 / fVar7);
  pcVar1 = DAT_08008e10;
  FUN_0800bb0c(s_Standard_Deviation__08008a74);
  FUN_0800bca0(uVar8);
  FUN_08008aa0();
  FUN_08008a98();
  if (*pcVar1 != '\0') {
    iVar4 = 0;
    do {
      FUN_08008a8c();
      do {
        iVar5 = FUN_08009af6();
        if (iVar5 == 0) {
          *(float *)(unaff_r9 + iVar2 * 4) =
               *(float *)(unaff_r9 + iVar2 * 4) - (fVar9 + *(float *)(pcVar1 + 0x20));
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 5);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 5);
  }
  return in_r3;
}



/* FUN_08008a8c at 08008a8c */

int FUN_08008a8c(void)

{
  int unaff_r5;
  int unaff_r6;
  
  return unaff_r6 * unaff_r5;
}



/* FUN_08008a98 at 08008a98 */

void FUN_08008a98(void)

{
  FUN_0800de78();
  return;
}



/* FUN_08008aa0 at 08008aa0 */

void FUN_08008aa0(undefined4 param_1)

{
  FUN_0800bfd0(param_1);
  return;
}



/* FUN_08008aac at 08008aac */

undefined4 FUN_08008aac(void)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  undefined4 in_r3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar1 = DAT_08008e10;
  iVar4 = 0;
  do {
    uVar7 = FUN_08009aee();
    iVar5 = 0;
    iVar6 = (int)uVar7 + iVar4 * (int)((ulonglong)uVar7 >> 0x20);
    do {
      iVar2 = FUN_08009afa(iVar6 + iVar5 * 4);
      if (iVar2 == 0) {
        pfVar3 = (float *)(iVar6 + iVar5 * 4);
        *pfVar3 = *pfVar3 + *(float *)(iVar1 + 0x20);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 5);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  return in_r3;
}



/* FUN_08008aec at 08008aec */

undefined4
FUN_08008aec(float *param_1,float *param_2,undefined1 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  char cVar6;
  char cVar7;
  uint extraout_s0;
  undefined4 uVar8;
  float fVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  
  FUN_08008f78();
  FUN_0800df0c(1);
  iVar2 = DAT_08009300;
  iVar1 = DAT_08008e10;
  local_40 = CONCAT31(CONCAT21(local_40._2_2_,param_3),(char)param_4);
  sVar5 = 0x19;
  do {
    if (local_40._1_1_ != '\0') {
      FUN_0800b3e4(*(undefined4 *)(iVar1 + 0x14));
    }
    if (param_5 == 0) {
      local_44 = (undefined4 *)0x0;
      local_48 = 1;
      FUN_0800991c(&local_3c,0,param_1,param_2);
    }
    else {
      FUN_08009764(&local_3c);
    }
    cVar6 = (char)local_3c;
    if (-1 < (char)local_3c) {
      uVar3 = local_3c & 0xff;
      if (uVar3 < 5) {
        local_34 = *(undefined4 *)(iVar2 + uVar3 * 4);
      }
      else {
        local_34 = FUN_08008c5c(uVar3);
      }
      iVar4 = (int)(char)local_3c._1_1_;
      uVar3 = (uint)local_3c._1_1_;
      if (uVar3 < 5) {
        local_3c = *(uint *)(DAT_08009308 + uVar3 * 4);
      }
      else {
        iVar4 = FUN_08008c5c(uVar3);
        local_3c = extraout_s0;
      }
      local_44 = (undefined4 *)(DAT_0800900c + (short)cVar6 * 0x14 + iVar4 * 4);
      local_48 = 1;
      uVar8 = FUN_0800e058(&local_34,&local_3c,local_40 & 0xff,*(uint *)(iVar1 + 4) & 0xff);
      *local_44 = uVar8;
    }
    FUN_0800dece(DAT_080096c8);
  } while ((-1 < cVar6) && (sVar5 = sVar5 + -1, sVar5 != 0));
  FUN_0800df0c(0);
  FUN_08008fe8();
  uVar10 = CONCAT44(DAT_08008e08,0x41a00000);
  fVar9 = *param_1 + -25.0;
  cVar6 = fVar9 < 20.0;
  cVar7 = NAN(fVar9);
  if (!(bool)cVar6) {
    uVar10 = FUN_08008f6e(fVar9,DAT_08008e08,DAT_08008e0c);
    uVar8 = (undefined4)((ulonglong)uVar10 >> 0x20);
    if (cVar6 == cVar7) {
      uVar10 = CONCAT44(uVar8,uVar8);
    }
  }
  local_48 = (undefined4)uVar10;
  fVar9 = *param_2 + -10.0;
  cVar6 = fVar9 < 20.0;
  cVar7 = NAN(fVar9);
  puVar11 = (undefined4 *)0x41a00000;
  if (!(bool)cVar6) {
    uVar10 = FUN_08008f6e(fVar9,(int)((ulonglong)uVar10 >> 0x20));
    puVar11 = (undefined4 *)((ulonglong)uVar10 >> 0x20);
    if (cVar6 != cVar7) {
      puVar11 = (undefined4 *)uVar10;
    }
  }
  local_40 = 0;
  local_44 = puVar11;
  FUN_0800a76c(&local_48,&local_44,&local_40);
  return param_4;
}



/* FUN_08008c5c at 08008c5c */

float FUN_08008c5c(undefined4 param_1)

{
  uint in_fpscr;
  float fVar1;
  float unaff_s16;
  float unaff_s17;
  
  fVar1 = (float)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
  return unaff_s16 + fVar1 * unaff_s17;
}



/* FUN_08008c6c at 08008c6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08008c6c(void)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  short sVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  char cVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  
  puVar3 = DAT_080098fc;
  puVar1 = DAT_08008e10;
  *(undefined4 *)(DAT_08008e10 + 0x20) = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  iVar5 = FUN_0800b020(0x58);
  puVar1[1] = (char)iVar5;
  if (iVar5 == 0) {
    uVar12 = *puVar3;
  }
  else {
    uVar12 = FUN_0800c204();
  }
  *(undefined4 *)(puVar1 + 0x18) = uVar12;
  iVar5 = FUN_0800b020(0x59);
  puVar1[2] = (char)iVar5;
  if (iVar5 == 0) {
    uVar12 = puVar3[1];
  }
  else {
    uVar12 = FUN_0800c204();
  }
  *(undefined4 *)(puVar1 + 0x1c) = uVar12;
  iVar5 = FUN_0800b04c(0x52);
  piVar2 = _DAT_08008e14;
  if (iVar5 != 0) {
    if (*_DAT_08008e14 == 0) {
LAB_08008cc2:
      iVar5 = 0x19;
    }
    else {
      sVar4 = FUN_0800b038();
      iVar5 = (int)sVar4;
      if (0x19 < iVar5) goto LAB_08008cc2;
    }
    *(int *)(puVar1 + 0xc) = iVar5;
    if (iVar5 < 1) {
      pcVar6 = s___R_epetition_count_invalid__1___08008e17 + 1;
      goto LAB_08008dfa;
    }
  }
  uVar7 = FUN_0800b04c(0x56);
  if (uVar7 != 0) {
    sVar4 = FUN_0800b038();
    uVar7 = (uint)sVar4;
  }
  bVar10 = 4 < uVar7;
  *(uint *)(puVar1 + 4) = uVar7;
  if (bVar10) {
    FUN_0800bb0c(s___V_erbose_level_is_implausible___08008e3c);
  }
  iVar5 = FUN_0800b04c(0x50);
  if (iVar5 != 0) {
    sVar4 = FUN_0800b038();
    *(int *)(puVar1 + 8) = (int)sVar4;
    if (6 < (uint)(int)sVar4) {
      FUN_0800bb0c(s___P_hase_value_invalid__0_6___08008e68);
      bVar10 = true;
    }
  }
  iVar5 = FUN_0800b04c(0x4a);
  if (iVar5 != 0) {
    iVar5 = *piVar2;
    if (iVar5 != 0) {
      sVar4 = FUN_0800b038();
      iVar5 = (int)sVar4;
    }
    *(int *)(puVar1 + 0x24) = iVar5;
    if ((iVar5 != 0) && (7 < iVar5 - 2U)) {
      FUN_0800bb0c(s__Invalid_grid_size__J__specified_08008e88);
      bVar10 = true;
    }
  }
  uVar7 = (uint)(byte)puVar1[1];
  uVar8 = (uint)(byte)puVar1[2];
  cVar11 = SBORROW4(uVar7,uVar8);
  if (uVar7 != uVar8) {
    FUN_0800bb0c(s_Both_X___Y_locations_must_be_spe_08008eb4);
    bVar10 = true;
  }
  cVar9 = uVar7 == uVar8 && (int)(uVar7 - uVar8) < 0;
  uVar13 = FUN_08008f64(*(undefined4 *)(puVar1 + 0x18));
  uVar12 = DAT_08009010;
  if ((cVar9 != cVar11) ||
     (FUN_08008f6e(uVar13,DAT_08009010,DAT_08009014), uVar12 = extraout_s1, cVar9 == '\0')) {
    *(undefined4 *)(puVar1 + 0x18) = uVar12;
  }
  FUN_08008f64(*(undefined4 *)(puVar1 + 0x1c));
  uVar12 = extraout_s1_00;
  if ((cVar9 != cVar11) || (FUN_08008f6e(), uVar12 = extraout_s1_01, cVar9 == '\0')) {
    *(undefined4 *)(puVar1 + 0x1c) = uVar12;
  }
  cVar11 = '\0';
  if (bVar10) {
    return 1;
  }
  iVar5 = FUN_0800b04c(0x41);
  if (iVar5 == 0) {
    iVar5 = FUN_0800b04c(0x44);
    if (iVar5 != 0) {
      uVar12 = 0;
      goto LAB_08008d9c;
    }
  }
  else {
    iVar5 = FUN_0800b04c(0x44);
    if (iVar5 != 0) {
      pcVar6 = s__Can_t_activate_and_deactivate_a_08008ee0;
      goto LAB_08008dfa;
    }
    uVar12 = 1;
LAB_08008d9c:
    FUN_0800e4d4(uVar12);
    FUN_0800b2e2();
  }
  iVar5 = FUN_0800b04c(0x43);
  *puVar1 = (char)iVar5;
  if (iVar5 != 0) {
    uVar12 = FUN_0800c204();
    *(undefined4 *)(puVar1 + 0x20) = uVar12;
  }
  cVar9 = '\0';
  iVar5 = FUN_0800b020();
  if (iVar5 != 0) {
    FUN_0800c204();
    fVar14 = (float)FUN_08008f64();
    if ((cVar9 != cVar11) || (-1 < (int)((uint)(fVar14 < DAT_08009018) << 0x1f))) {
      pcVar6 = s___F_ade_height_for_Bed_Level_Cor_08008f14;
      goto LAB_08008dfa;
    }
    FUN_0800e500(1);
  }
  iVar5 = FUN_0800b020(0x54);
  if (iVar5 != 0) {
    iVar5 = FUN_0800b038();
  }
  *(int *)(puVar1 + 0x14) = (int)(short)iVar5;
  if ((uint)(int)(short)iVar5 < 3) {
    return 0;
  }
  pcVar6 = s_Invalid_map_type__08008f50;
LAB_08008dfa:
  FUN_0800bb0c(pcVar6);
  return 1;
}



/* FUN_08008f64 at 08008f64 */

void FUN_08008f64(void)

{
  return;
}



/* FUN_08008f6e at 08008f6e */

void FUN_08008f6e(void)

{
  return;
}



/* FUN_08008f78 at 08008f78 */

undefined4 FUN_08008f78(void)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 in_r3;
  char *pcVar4;
  
  puVar2 = DAT_08009be0;
  cVar1 = DAT_08009be0[1];
  DAT_08009be0[1] = cVar1 + '\x01';
  uVar3 = DAT_0800bc8c;
  if ((char)(cVar1 + '\x01') == '\x01') {
    *puVar2 = *DAT_08009be4;
    uVar3 = FUN_0800e4d4(0);
    return uVar3;
  }
  pcVar4 = s_save_ubl_active_state_and_disabl_08008fa0;
  while( true ) {
    if (*pcVar4 == '\0') break;
    FUN_0800de78(uVar3,*pcVar4);
    pcVar4 = pcVar4 + 1;
  }
  return in_r3;
}



/* FUN_08008fe8 at 08008fe8 */

undefined4 FUN_08008fe8(void)

{
  char cVar1;
  undefined4 in_r3;
  char *pcVar3;
  undefined4 uVar2;
  
  pcVar3 = DAT_08009be0;
  cVar1 = DAT_08009be0[1];
  DAT_08009be0[1] = cVar1 + -1;
  uVar2 = DAT_0800bc8c;
  if ((char)(cVar1 + -1) == '\0') {
    cVar1 = *pcVar3;
    if (cVar1 != '\0') {
      cVar1 = '\x01';
    }
    uVar2 = FUN_0800e4d4(cVar1);
    return uVar2;
  }
  pcVar3 = s_Y_restore_ubl_active_state_and_l_0800902a + 2;
  while( true ) {
    if (*pcVar3 == '\0') break;
    FUN_0800de78(uVar2,*pcVar3);
    pcVar3 = pcVar3 + 1;
  }
  return in_r3;
}



/* FUN_0800906c at 0800906c */

void FUN_0800906c(void)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  
  FUN_0800b2e2();
  if (*DAT_08009be8 == -1) {
    pcVar2 = s_No_Mesh_Loaded__08009310;
  }
  else {
    FUN_0800bb4c(s_Mesh_08009320);
    pcVar2 = s_Loaded__08009328;
  }
  iVar5 = DAT_08009300;
  uVar4 = DAT_080091ac;
  FUN_0800bb0c(pcVar2);
  FUN_08009620();
  FUN_0800959a();
  FUN_0800bb4c(s_UBL_object_count__08009334,*DAT_08009bec);
  FUN_08009620();
  FUN_0800bb0c(s_planner_z_fade_height___08009348);
  uVar3 = FUN_0800bca0(*DAT_08009bf0);
  FUN_0800bfd0(uVar3,uVar4,4);
  FUN_08009620();
  FUN_08008944();
  FUN_0800bb0c(s_zprobe_zoffset__08009364);
  uVar3 = FUN_0800bca0(*DAT_08009bf4);
  FUN_0800bfd0(uVar3,uVar4,7);
  FUN_08009620();
  FUN_0800bb4c(s_MESH_MIN_X_______300____2_____30_08009378,0x14);
  FUN_08009620();
  FUN_0800959a();
  FUN_0800bb4c(s_MESH_MIN_Y_______300____2_____30_080093d4,0x14);
  FUN_08009620();
  FUN_0800959a();
  FUN_0800bb4c(s_MESH_MAX_X_290__08009430,0x122);
  FUN_08009620();
  FUN_0800959a();
  FUN_0800bb4c(s_MESH_MAX_Y_290__08009444,0x122);
  FUN_08009620();
  FUN_0800959a();
  FUN_0800bb4c(s_GRID_MAX_POINTS_X_08009458,5);
  FUN_08009620();
  FUN_0800959a();
  FUN_0800bb4c(s_GRID_MAX_POINTS_Y_0800946c,5);
  FUN_08009620();
  FUN_0800959a();
  uVar4 = DAT_08009304;
  FUN_0800bb78(DAT_08009304,s_MESH_X_DIST_08009480);
  FUN_08009620();
  FUN_0800bb78(uVar4,s_MESH_Y_DIST_08009490);
  FUN_08009620();
  FUN_0800959a();
  FUN_0800bb0c(s_X_Axis_Mesh_Points_at__080094a0);
  bVar6 = 0;
  do {
    FUN_08009c06(iVar5 + (uint)bVar6 * 4);
    FUN_080095a0();
    FUN_0800bb0c(&DAT_0800930c);
    FUN_08009594();
    bVar6 = bVar6 + 1;
  } while (bVar6 < 5);
  FUN_08009620();
  iVar5 = DAT_08009308;
  FUN_0800bb0c(s_Y_Axis_Mesh_Points_at__080094b8);
  bVar6 = 0;
  do {
    FUN_08009c06(iVar5 + (uint)bVar6 * 4);
    FUN_080095a0();
    FUN_0800bb0c(&DAT_0800930c);
    FUN_08009594();
    bVar6 = bVar6 + 1;
  } while (bVar6 < 5);
  FUN_08009620();
  FUN_08009620();
  FUN_0800959a();
  puVar1 = DAT_08009be0;
  FUN_0800bb4c(s_ubl_state_at_invocation___080094d0,*DAT_08009be0);
  FUN_08009620();
  FUN_08009620();
  FUN_0800bb4c(s_ubl_state_recursion_chk___080094ec,puVar1[1]);
  FUN_08009620();
  FUN_08009620();
  FUN_0800959a();
  uVar4 = FUN_0800e690(0x1f0);
  FUN_0800bb28(s_Meshes_go_from_08009508,uVar4);
  uVar4 = FUN_0800e690(0x264);
  FUN_0800bb28(&DAT_08009518,uVar4);
  FUN_08009620();
  FUN_0800959a();
  FUN_0800bb4c(s_sizeof_ubl____08009520,1);
  FUN_08009620();
  FUN_08009620();
  FUN_0800bb4c(s_z_value_____size__08009530,100);
  FUN_08009620();
  FUN_08009620();
  FUN_08009594();
  uVar4 = FUN_0800e690(0x74);
  FUN_0800bb28(s_EEPROM_free_for_UBL__08009544,uVar4);
  FUN_08009620();
  FUN_0800959a();
  FUN_0800bb4c(s_EEPROM_can_hold_0800955c,1);
  FUN_0800bb0c(s_meshes__08009570);
  FUN_08009594();
  iVar5 = FUN_0800b65c();
  if (iVar5 != 0) {
    return;
  }
  FUN_0800b2da();
  FUN_0800bb0c(s_sanity_checks_passed__0800957c);
  return;
}



/* FUN_08009594 at 08009594 */

void FUN_08009594(void)

{
  FUN_0800e6c8(0x19);
  return;
}



/* FUN_0800959a at 0800959a */

void FUN_0800959a(void)

{
  FUN_0800e6c8(0x32);
  return;
}



/* FUN_080095a0 at 080095a0 */

void FUN_080095a0(undefined4 param_1)

{
  FUN_0800bfd0(param_1);
  return;
}



/* FUN_080095ac at 080095ac */

uint FUN_080095ac(void)

{
  undefined4 uVar1;
  uint in_r3;
  uint uVar2;
  ushort uVar3;
  uint local_18;
  
  uVar1 = DAT_080096c8;
  local_18 = in_r3;
  FUN_0800bb0c(DAT_0800a14c);
  FUN_0800bb0c(s_EEPROM_Dump__08009610);
  uVar2 = 0;
  do {
    FUN_0800b806();
    FUN_0800e6a8(uVar2 & 0xffff);
    FUN_0800bb0c(&DAT_080098f8);
    uVar3 = 0;
    do {
      FUN_0800eaee(&local_18,uVar2 + uVar3,1);
      FUN_0800e69a(local_18 & 0xff);
      FUN_0800bf64(uVar1,0x20);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x10);
    FUN_08009620();
    uVar2 = uVar2 + 0x10;
  } while (uVar2 < 0x65);
  FUN_08009620();
  return local_18;
}



/* FUN_08009620 at 08009620 */

void FUN_08009620(void)

{
  FUN_0800de78();
  return;
}



/* FUN_08009628 at 08009628 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08009628(void)

{
  int iVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float local_78 [25];
  
  sVar2 = FUN_0800d3b8();
  if (sVar2 == 0) {
    FUN_0800bb0c(s__EEPROM_storage_not_available__080096cf + 1);
  }
  else {
    iVar6 = sVar2 + -1;
    if (*DAT_0800a150 == 0) {
      pcVar4 = s__Storage_slot___required__08009714;
    }
    else {
      sVar2 = FUN_0800b038();
      iVar5 = _DAT_080096cc;
      iVar3 = (int)sVar2;
      *(int *)(_DAT_080096cc + 0x10) = iVar3;
      if ((-1 < iVar3) && (iVar3 <= iVar6)) {
        FUN_0800d3fe((int)(char)sVar2,local_78);
        FUN_0800bb4c(s_Subtracting_mesh_in_slot_08009730,*(undefined4 *)(iVar5 + 0x10));
        FUN_0800bb0c(s_from_current_mesh__0800974c);
        iVar6 = 0;
        do {
          iVar5 = 0;
          iVar3 = iVar6 * 0x14 + DAT_0800a350;
          do {
            pfVar7 = (float *)(iVar3 + iVar5 * 4);
            iVar1 = iVar6 * 5 + iVar5;
            iVar5 = iVar5 + 1;
            *pfVar7 = *pfVar7 - local_78[iVar1];
          } while (iVar5 < 5);
          iVar6 = iVar6 + 1;
        } while (iVar6 < 5);
        return;
      }
      pcVar4 = s__Invalid_storage_slot__080096fc;
    }
    FUN_0800bb0c(pcVar4);
    FUN_0800bb4c(s__Use_0_to_080096f0,iVar6);
    FUN_08009620();
  }
  return;
}



/* FUN_08009764 at 08009764 */

undefined4 * FUN_08009764(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  char cVar11;
  bool bVar12;
  uint in_fpscr;
  undefined4 uVar13;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  
  bVar1 = false;
  bVar10 = false;
  local_4c = CONCAT22(local_4c._2_2_,0xff00);
  local_4c = CONCAT31(local_4c._1_3_,0xff);
  uVar6 = 0;
  local_48 = DAT_0800a354;
  do {
    uVar15 = FUN_08009aee();
    local_40 = (int)uVar15 + uVar6 * (int)((ulonglong)uVar15 >> 0x20);
    uVar4 = 0;
    do {
      iVar2 = FUN_08009afa(local_40 + uVar4 * 4);
      bVar12 = iVar2 == 0;
      if (!bVar12) {
        if ((uVar6 & 0xff) < 5) {
          local_50 = *(undefined4 *)(DAT_0800a35c + (uVar6 & 0xff) * 4);
        }
        else {
          FUN_08009908(uVar6 & 0xff);
          local_50 = extraout_s1;
        }
        if ((uVar4 & 0xff) < 5) {
          local_54 = *(undefined4 *)(DAT_08009904 + (uVar4 & 0xff) * 4);
        }
        else {
          FUN_08009908(uVar4 & 0xff);
          local_54 = extraout_s1_00;
        }
        iVar2 = FUN_0800eb1c(&local_50,&local_54);
        bVar12 = iVar2 == 0;
      }
      if (!bVar12) {
        uVar7 = 0xffffffff;
        bVar1 = true;
        uVar8 = 0xffffffff;
        iVar2 = 0;
        uVar14 = DAT_08009ae0;
        do {
          local_44 = (uVar6 - iVar2) * (uVar6 - iVar2);
          iVar5 = 0;
          do {
            uVar15 = FUN_08009aee();
            iVar3 = FUN_08009afa((int)uVar15 + iVar2 * (int)((ulonglong)uVar15 >> 0x20) + iVar5 * 4)
            ;
            if (iVar3 == 0) {
              uVar13 = VectorSignedToFloat((uVar4 - iVar5) * (uVar4 - iVar5) + local_44,
                                           (byte)(in_fpscr >> 0x15) & 3);
              FUN_0800bce8(uVar13);
              uVar9 = *DAT_0800a360;
              uVar15 = FUN_08009c0e();
              uVar16 = FUN_0800eb6c(uVar9 % 0x2f + 0xd);
              cVar11 = '\0';
              uVar16 = FUN_0800eb88(0,DAT_0800a364,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
              FUN_0800bd80((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar15,
                           (int)((ulonglong)uVar15 >> 0x20));
              uVar13 = FUN_0800bef8();
              uVar13 = FUN_08009ae4(uVar13);
              bVar10 = true;
              if (cVar11 != '\0') {
                uVar7 = uVar6;
                uVar8 = uVar4;
                uVar14 = uVar13;
              }
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < 5);
          iVar2 = iVar2 + 1;
        } while (iVar2 < 5);
        if (bVar10) {
          cVar11 = (char)uVar7 < '\0';
          if ((!(bool)cVar11) && (FUN_08009ae4(local_48), cVar11 != '\0')) {
            local_4c._0_2_ = CONCAT11((char)uVar8,(char)uVar7);
            local_48 = uVar14;
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 5);
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 5);
  if (bVar1 && !bVar10) {
    local_4c = CONCAT22(local_4c._2_2_,0x202);
    local_48 = 0x3f800000;
  }
  *param_1 = local_4c;
  param_1[1] = local_48;
  return param_1;
}



/* FUN_08009908 at 08009908 */

void FUN_08009908(undefined4 param_1)

{
  uint in_fpscr;
  
  VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
  return;
}



/* FUN_0800991c at 0800991c */

undefined4 *
FUN_0800991c(undefined4 *param_1,char param_2,float *param_3,float *param_4,int param_5,int param_6)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  float extraout_s1;
  float extraout_s1_00;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 uVar11;
  
  fVar1 = DAT_08009bd4;
  local_58 = CONCAT22(local_58._2_2_,0xff00);
  local_58 = CONCAT31(local_58._1_3_,0xff);
  local_54 = DAT_0800a368;
  uVar11 = DAT_08009bcc;
  if (param_5 == 1) {
    uVar11 = 0x19;
  }
  fVar9 = (float)VectorSignedToFloat(uVar11,(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = *param_3;
  uVar11 = DAT_08009bcc;
  if (param_5 == 1) {
    uVar11 = 10;
  }
  fVar10 = (float)VectorSignedToFloat(uVar11,(byte)(in_fpscr >> 0x15) & 3);
  fVar13 = *param_4;
  uVar3 = 0;
  fVar14 = DAT_08009bd0;
  do {
    uVar4 = 0;
    do {
      uVar17 = FUN_08009aee();
      iVar6 = (int)uVar17 + uVar3 * (int)((ulonglong)uVar17 >> 0x20);
      uVar5 = uVar4 & 0xff;
      if ((param_2 == '\0') && (iVar2 = FUN_08009afa(iVar6 + uVar4 * 4), iVar2 != 0)) {
LAB_080099d0:
        if ((uVar3 & 0xff) < 5) {
          local_5c = *(float *)(DAT_0800a35c + (uVar3 & 0xff) * 4);
        }
        else {
          FUN_08009b02(uVar3 & 0xff);
          local_5c = extraout_s1;
        }
        cVar8 = SBORROW4(uVar5,4);
        cVar7 = (int)(uVar5 - 4) < 0;
        if (uVar5 < 5) {
          local_60 = *(float *)(DAT_08009bf8 + uVar5 * 4);
        }
        else {
          FUN_08009b02(uVar4 & 0xff);
          local_60 = extraout_s1_00;
        }
        if (param_5 == 0) {
          fVar15 = (float)FUN_08009ae4(local_5c);
          if (cVar7 == cVar8) {
            cVar7 = fVar15 < fVar1;
            cVar8 = NAN(fVar15) || NAN(fVar1);
            if ((((bool)cVar7) && (fVar15 = (float)FUN_08009ae4(local_60), cVar7 == cVar8)) &&
               ((int)((uint)(fVar15 < fVar1) << 0x1f) < 0)) goto LAB_08009a3e;
          }
        }
        else {
          iVar6 = FUN_0800eb1c(&local_5c,&local_60);
          if (iVar6 != 0) {
LAB_08009a3e:
            FUN_0800a398((fVar12 - fVar9) - local_5c,(fVar13 - fVar10) - local_60);
            fVar15 = DAT_0800a36c[1] - local_60;
            fVar16 = *DAT_0800a36c - local_5c;
            uVar17 = FUN_08009c0e();
            FUN_0800bce8(fVar16 * fVar16 + fVar15 * fVar15);
            uVar18 = FUN_08009c0e();
            uVar18 = FUN_0800c284((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),DAT_0800a370,
                                  DAT_0800a374);
            FUN_0800bd80((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar17,
                         (int)((ulonglong)uVar17 >> 0x20));
            fVar15 = (float)FUN_0800bef8();
            if ((int)((uint)(fVar15 < fVar14) << 0x1f) < 0) {
              local_58._0_2_ = CONCAT11((char)uVar4,(char)uVar3);
              local_54 = fVar15;
              fVar14 = fVar15;
            }
          }
        }
      }
      else if (param_2 == '\x01') {
        iVar6 = FUN_08009afa(iVar6 + uVar4 * 4);
        if (iVar6 == 0) goto LAB_080099d0;
      }
      else if ((param_2 == '\x02') &&
              (((uint)*(ushort *)(param_6 + uVar5 * 2) & 1 << (uVar3 & 0xff)) != 0))
      goto LAB_080099d0;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 5);
    uVar3 = uVar3 + 1;
    if (4 < (int)uVar3) {
      *param_1 = local_58;
      param_1[1] = local_54;
      return param_1;
    }
  } while( true );
}



/* FUN_08009ae4 at 08009ae4 */

void FUN_08009ae4(void)

{
  return;
}



/* FUN_08009aee at 08009aee */

undefined8 FUN_08009aee(void)

{
  return CONCAT44(0x14,DAT_0800a350);
}



/* FUN_08009af6 at 08009af6 */

void FUN_08009af6(void)

{
  int unaff_r7;
  int unaff_r9;
  
  FUN_0800edce(*(undefined4 *)(unaff_r9 + unaff_r7 * 4));
  return;
}



/* FUN_08009afa at 08009afa */

void FUN_08009afa(undefined4 *param_1)

{
  FUN_0800edce(*param_1);
  return;
}



/* FUN_08009b02 at 08009b02 */

void FUN_08009b02(undefined4 param_1)

{
  uint in_fpscr;
  
  VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
  return;
}



/* FUN_08009b14 at 08009b14 */

undefined8 FUN_08009b14(short param_1,int param_2,char param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  iVar8 = DAT_0800a350;
  cVar1 = param_3 + (char)param_1;
  iVar9 = DAT_0800a350 + param_1 * 0x14;
  cVar2 = (char)param_4 + (char)param_2;
  iVar3 = FUN_0800edce(*(undefined4 *)(iVar9 + param_2 * 4));
  iVar5 = (int)cVar2;
  if (iVar3 != 0) {
    iVar6 = (short)cVar1 * 0x14 + iVar8;
    iVar3 = FUN_08009afa(iVar6 + iVar5 * 4);
    if (iVar3 == 0) {
      iVar7 = (int)(char)((char)param_4 + cVar2);
      iVar8 = (short)(char)(param_3 + cVar1) * 0x14 + iVar8;
      iVar3 = FUN_08009afa(iVar8 + iVar7 * 4);
      if (iVar3 == 0) {
        if ((int)((uint)(*(float *)(iVar6 + iVar5 * 4) < *(float *)(iVar8 + iVar7 * 4)) << 0x1f) < 0
           ) {
          *(undefined4 *)(iVar9 + param_2 * 4) = *(undefined4 *)(iVar6 + iVar5 * 4);
        }
        else {
          FUN_08009c0e();
          uVar10 = FUN_08009bfc();
          uVar11 = FUN_0800bca0(*(undefined4 *)(iVar8 + iVar7 * 4));
          FUN_0800ede8((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,
                       (int)((ulonglong)uVar11 >> 0x20));
          uVar4 = FUN_0800bef8();
          *(undefined4 *)(iVar9 + param_2 * 4) = uVar4;
        }
        uVar4 = 1;
        goto LAB_08009bc8;
      }
    }
  }
  uVar4 = 0;
LAB_08009bc8:
  return CONCAT44(param_4,uVar4);
}



/* FUN_08009bfc at 08009bfc */

void FUN_08009bfc(undefined4 param_1,undefined4 param_2)

{
  FUN_0800c284(param_1,param_2,0,0x40000000);
  return;
}



/* FUN_08009c06 at 08009c06 */

void FUN_08009c06(undefined4 param_1,float param_2,float *param_3)

{
  FUN_0800bca0(*param_3 + param_2);
  return;
}



/* FUN_08009c0a at 08009c0a */

void FUN_08009c0a(float param_1,float param_2)

{
  FUN_0800bca0(param_1 + param_2);
  return;
}



/* FUN_08009c0e at 08009c0e */

void FUN_08009c0e(undefined4 param_1)

{
  FUN_0800bca0(param_1);
  return;
}



/* FUN_08009c16 at 08009c16 */

undefined4 FUN_08009c16(void)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined4 in_r3;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  
  bVar6 = 0;
  do {
    pbVar2 = (byte *)(&DAT_0800a4f0)[bVar6];
    bVar7 = *pbVar2;
    uVar5 = (uint)pbVar2[2];
    uVar9 = (uint)(char)pbVar2[1];
    uVar8 = (uint)(char)pbVar2[3];
    if (pbVar2[4] == 0) {
      if ((int)(char)pbVar2[2] < (int)uVar8) {
        iVar3 = 1;
      }
      else {
        iVar3 = -1;
      }
      for (; uVar11 = uVar5, bVar7 != uVar9; bVar7 = bVar7 + 1) {
        while (((uVar11 & 0xff) != uVar8 &&
               (iVar4 = FUN_08009b14(bVar7,uVar11 & 0xff,0,iVar3), iVar4 == 0))) {
          uVar11 = uVar11 + iVar3;
        }
      }
    }
    else {
      if ((int)(char)bVar7 < (int)uVar9) {
        cVar1 = '\x01';
      }
      else {
        cVar1 = -1;
      }
      for (; bVar10 = bVar7, (uVar5 & 0xff) != uVar8; uVar5 = uVar5 + 1) {
        while ((bVar10 != uVar9 &&
               (iVar3 = FUN_08009b14((uint)bVar10,uVar5 & 0xff,(int)cVar1,0), iVar3 == 0))) {
          bVar10 = bVar10 + cVar1;
        }
      }
    }
    bVar6 = bVar6 + 1;
  } while (bVar6 < 4);
  return in_r3;
}



/* FUN_08009cb0 at 08009cb0 */

undefined4 FUN_08009cb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  char cVar13;
  char cVar14;
  uint in_fpscr;
  undefined4 uVar15;
  float fVar16;
  int iVar17;
  undefined8 uVar18;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec [2];
  undefined4 *local_e4;
  undefined4 *local_e0;
  float *local_dc;
  float local_d8;
  float local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 auStack_bc [44];
  undefined4 local_90;
  undefined4 local_8c;
  float local_88;
  undefined1 auStack_80 [36];
  undefined1 auStack_5c [36];
  
  iVar3 = DAT_0800a378;
  uVar18 = FUN_0800eecc(*(undefined4 *)(DAT_0800a378 + 0x24));
  uVar18 = FUN_0800bd80((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0,DAT_0800a380);
  uVar15 = (undefined4)((ulonglong)uVar18 >> 0x20);
  FUN_0800eb88(0,DAT_0800a384,(int)uVar18,uVar15);
  fVar6 = (float)FUN_0800bef8();
  FUN_0800eb88(0,DAT_0800a388,(int)uVar18,uVar15);
  fVar7 = (float)FUN_0800bef8();
  FUN_0800eeee(auStack_bc);
  fVar2 = DAT_08009ee8;
  fVar16 = DAT_08009ee4;
  iVar11 = 0;
  if (param_1 == 0) {
    bVar1 = false;
    local_f4 = (float)((uint)local_f4 & 0xffffff00);
    while ((int)((uint)local_f4 & 0xff) < *(int *)(iVar3 + 0x24)) {
      fVar16 = (float)FUN_0800a1be((uint)local_f4 & 0xff);
      local_f0 = fVar16 * fVar6 + 25.0;
      for (iVar10 = 0; iVar10 < *(int *)(iVar3 + 0x24); iVar10 = (int)(char)((char)iVar10 + '\x01'))
      {
        iVar17 = iVar10;
        if (bVar1) {
          iVar17 = (*(int *)(iVar3 + 0x24) + -1) - iVar10;
        }
        fVar16 = (float)VectorSignedToFloat(iVar17,(byte)(in_fpscr >> 0x15) & 3);
        local_ec[0] = fVar16 * fVar7 + 20.0;
        if (iVar11 == 0) {
          uVar15 = FUN_0800b04c(0x45);
          pbVar4 = DAT_0800a38c;
          local_f8 = 1.4013e-45;
          FUN_0800a1d4(*(uint *)(iVar3 + 4),local_ec,uVar15,*(uint *)(iVar3 + 4) & 0xff);
          iVar11 = FUN_0800a180();
          uVar12 = (uint)*pbVar4;
          if ((int)(uVar12 << 0x1a) < 0) {
            FUN_0800a18a(uVar12,0x28);
            puVar5 = DAT_0800a390;
            FUN_0800bca0(local_f0);
            FUN_0800a190();
            FUN_0800a1b6();
            FUN_0800bca0(local_ec[0]);
            FUN_0800a190();
            uVar15 = FUN_0800bb0c(s___logical__0800a3e0);
            FUN_0800a18a(uVar15,0x28);
            FUN_08009c0a(local_f0,*puVar5);
            FUN_0800a190();
            FUN_0800a1b6();
            FUN_08009c0a(local_ec[0],puVar5[1]);
            FUN_0800a190();
            FUN_0800bb0c(s___measured__0800a3f0);
            FUN_0800bca0(local_d8);
            FUN_0800a190();
            FUN_0800bb0c(s_correction__0800a400);
            FUN_0800eef4(&local_f0,local_ec);
            FUN_08009c0e();
            FUN_0800a190();
          }
          fVar16 = (float)FUN_0800eef4(&local_f0,local_ec);
          local_d8 = local_d8 - fVar16;
          if ((int)((uint)*pbVar4 << 0x1a) < 0) {
            FUN_0800bb0c(s_final_>>>___>_0800a410);
            FUN_0800bca0(local_d8);
            FUN_0800a190();
            FUN_0800a188();
          }
          FUN_0800f17c(auStack_bc,&local_f0,local_ec,&local_d8);
        }
      }
      bVar1 = (bool)(bVar1 ^ 1);
      if (bVar1) {
        bVar1 = true;
      }
      local_f4 = (float)CONCAT31(local_f4._1_3_,local_f4._0_1_ + '\x01');
    }
    if (iVar11 == 0) {
LAB_08009eee:
      iVar11 = FUN_0800f268(auStack_bc);
      if (iVar11 == 0) {
        FUN_0800a154();
        uVar15 = FUN_0800f384(&local_f8);
        FUN_0800f3d6(&local_c8,uVar15);
        if (2 < *(int *)(iVar3 + 4)) {
          FUN_0800bb0c(s_bed_plane_normal_____0800a43c);
          FUN_0800bca0(local_c8);
          FUN_0800a190();
          FUN_0800a1b6();
          FUN_0800bca0(local_c4);
          FUN_0800a190();
          FUN_0800a1b6();
          FUN_0800bca0(local_c0);
          FUN_0800a190();
          FUN_0800bb0c(&DAT_0800a148);
        }
        FUN_0800a154();
        iVar3 = DAT_0800a35c;
        FUN_0800f384(&local_f8);
        FUN_0800f534(auStack_5c,local_f8,local_f4,local_f0);
        FUN_0800f64c(auStack_80,auStack_5c,0x24);
        uVar12 = 0;
        do {
          uVar18 = FUN_08009aee();
          uVar9 = 0;
          iVar11 = (int)uVar18 + uVar12 * (int)((ulonglong)uVar18 >> 0x20);
          do {
            pbVar4 = DAT_0800a38c;
            local_cc = *(undefined4 *)(iVar3 + (uVar12 & 0xff) * 4);
            local_d0 = *(undefined4 *)(DAT_0800a394 + (uVar9 & 0xff) * 4);
            local_d4 = *(float *)(iVar11 + uVar9 * 4);
            if ((int)((uint)*DAT_0800a38c << 0x1a) < 0) {
              FUN_0800bb0c(s_before_rotation_____0800a454);
              FUN_0800bca0(local_cc);
              FUN_0800a190();
              FUN_0800a1b6();
              FUN_0800bca0(local_d0);
              FUN_0800a190();
              FUN_0800a1b6();
              FUN_0800bca0(local_d4);
              FUN_0800a190();
              FUN_0800bb0c(s______>_0800a468);
              FUN_0800e6c8(0x14);
            }
            local_dc = &local_d4;
            local_e0 = &local_d0;
            local_e4 = &local_cc;
            FUN_0800f64c(&uStack_108,auStack_80,0x24);
            FUN_0800f4bc(uStack_108,uStack_104,uStack_100,uStack_fc);
            if ((int)((uint)*pbVar4 << 0x1a) < 0) {
              FUN_0800bb0c(s_after_rotation_____0800a474);
              FUN_0800bca0(local_cc);
              FUN_0800a190();
              FUN_0800a1b6();
              FUN_0800bca0(local_d0);
              FUN_0800a190();
              FUN_0800a1b6();
              FUN_0800bca0(local_d4);
              FUN_0800a190();
              FUN_0800bb0c(&DAT_0800a148);
              FUN_0800e6c8(0x37);
            }
            iVar10 = uVar9 * 4;
            iVar17 = uVar9 * 4;
            uVar9 = uVar9 + 1;
            *(float *)(iVar11 + iVar17) = (local_d4 - local_88) + *(float *)(iVar11 + iVar10);
          } while ((int)uVar9 < 5);
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < 5);
        if (-1 < (int)((uint)*DAT_0800a38c << 0x1a)) {
          return param_4;
        }
        FUN_0800f5be(auStack_80,s_rotation_matrix__0800a488);
        FUN_0800bb0c(s_LSF_Results_A__0800a49c);
        FUN_0800bca0(local_90);
        FUN_0800a190();
        FUN_0800bb0c(&DAT_0800a4ac);
        FUN_0800bca0(local_8c);
        FUN_0800a190();
        FUN_0800bb0c(&DAT_0800a4b4);
        FUN_0800bca0(local_88);
        FUN_0800a190();
        FUN_0800a188();
        FUN_0800e6c8(0x37);
        FUN_0800bb0c(s_bed_plane_normal_____0800a43c);
        FUN_0800bca0(local_c8);
        FUN_0800a190();
        FUN_0800a1b6();
        FUN_0800bca0(local_c4);
        FUN_0800a190();
        FUN_0800a1b6();
        FUN_0800bca0(local_c0);
        FUN_0800a190();
        FUN_0800bb0c(&DAT_0800a148);
        FUN_0800a188();
        return param_4;
      }
    }
    pcVar8 = s_Could_not_complete_LSF__0800a424;
  }
  else {
    local_f8 = 1.4013e-45;
    local_f0 = DAT_08009ee4;
    FUN_0800a1c8();
    iVar11 = FUN_0800a180();
    cVar14 = iVar11 < 0;
    cVar13 = '\0';
    if (iVar11 == 0) {
      local_f4 = fVar16;
      uVar15 = FUN_0800a162();
      FUN_0800a172(uVar15,local_d8);
      if (cVar14 == cVar13) {
        FUN_0800bbf0(0x10);
        FUN_0800a19c();
        FUN_0800a188();
      }
      local_f4 = fVar16;
      FUN_0800a1a6();
      local_f8 = 1.4013e-45;
      local_f0 = fVar2;
      FUN_0800a1c8();
      iVar11 = FUN_0800a180();
      cVar14 = iVar11 < 0;
      cVar13 = '\0';
      if (iVar11 == 0) {
        local_f4 = fVar2;
        FUN_0800a162();
        FUN_0800a16e();
        if (cVar14 == cVar13) {
          FUN_0800bbf0(0x10);
          FUN_0800a19c();
          FUN_0800a188();
        }
        local_f4 = fVar2;
        FUN_0800a1a6();
        local_f8 = 1.4013e-45;
        local_f0 = fVar2;
        local_f4 = fVar16;
        cVar14 = '\0';
        FUN_0800a1ce();
        iVar11 = FUN_0800a180();
        if (iVar11 == 0) {
          local_f4 = fVar2;
          local_f8 = fVar16;
          FUN_0800a166();
          FUN_0800a16e();
          if (cVar14 == cVar13) {
            FUN_0800bbf0(0x10);
            FUN_0800a19c();
            FUN_0800a188();
          }
          local_f4 = fVar2;
          local_f8 = fVar16;
          FUN_0800a1aa();
          goto LAB_08009eee;
        }
      }
    }
    pcVar8 = s__Error_probing_point__Aborting_o_0800a3b4;
  }
  FUN_0800bb0c(pcVar8);
  return param_4;
}



/* FUN_0800a154 at 0800a154 */

undefined8 FUN_0800a154(void)

{
  undefined8 in_stack_00000068;
  
  return in_stack_00000068;
}



/* FUN_0800a162 at 0800a162 */

void FUN_0800a162(void)

{
  FUN_0800eef4(&stack0x00000004);
  return;
}



/* FUN_0800a166 at 0800a166 */

void FUN_0800a166(void)

{
  FUN_0800eef4(&stack0x00000004);
  return;
}



/* FUN_0800a16e at 0800a16e */

undefined4 FUN_0800a16e(void)

{
  int unaff_r4;
  
  return *(undefined4 *)(unaff_r4 + 4);
}



/* FUN_0800a172 at 0800a172 */

undefined4 FUN_0800a172(void)

{
  int unaff_r4;
  
  return *(undefined4 *)(unaff_r4 + 4);
}



/* FUN_0800a180 at 0800a180 */

void FUN_0800a180(undefined4 param_1)

{
  undefined4 uStack00000020;
  
  uStack00000020 = param_1;
  FUN_0800edce();
  return;
}



/* FUN_0800a188 at 0800a188 */

void FUN_0800a188(void)

{
  FUN_0800de78();
  return;
}



/* FUN_0800a18a at 0800a18a */

void FUN_0800a18a(void)

{
  FUN_0800de78();
  return;
}



/* FUN_0800a190 at 0800a190 */

void FUN_0800a190(undefined4 param_1)

{
  FUN_0800bfd0(param_1);
  return;
}



/* FUN_0800a19c at 0800a19c */

void FUN_0800a19c(void)

{
  undefined4 in_stack_00000020;
  
  FUN_0800bb78(in_stack_00000020);
  return;
}



/* FUN_0800a1a6 at 0800a1a6 */

void FUN_0800a1a6(void)

{
  FUN_0800f17c(&stack0x0000003c,&stack0x00000004);
  return;
}



/* FUN_0800a1aa at 0800a1aa */

void FUN_0800a1aa(void)

{
  FUN_0800f17c(&stack0x0000003c,&stack0x00000004);
  return;
}



/* FUN_0800a1b6 at 0800a1b6 */

void FUN_0800a1b6(void)

{
  FUN_0800de78();
  return;
}



/* FUN_0800a1be at 0800a1be */

undefined4 FUN_0800a1be(undefined4 param_1)

{
  uint in_fpscr;
  undefined4 uVar1;
  
  uVar1 = VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
  return uVar1;
}



/* FUN_0800a1c8 at 0800a1c8 */

void FUN_0800a1c8(void)

{
  int unaff_r4;
  
  FUN_0800e058(&stack0x00000008,&stack0x00000004,0,*(uint *)(unaff_r4 + 4) & 0xff);
  return;
}



/* FUN_0800a1ce at 0800a1ce */

void FUN_0800a1ce(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_r4;
  
  FUN_0800e058(&stack0x00000008,&stack0x00000004,param_3,*(uint *)(unaff_r4 + 4) & 0xff);
  return;
}



/* FUN_0800a1d4 at 0800a1d4 */

void FUN_0800a1d4(void)

{
  FUN_0800e058(&stack0x00000008);
  return;
}



/* FUN_0800a1dc at 0800a1dc */

undefined4 FUN_0800a1dc(float *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_94;
  float local_90;
  int local_8c;
  ushort local_88 [6];
  float local_7c;
  undefined4 local_78;
  undefined1 auStack_74 [44];
  float local_48;
  float local_44;
  float local_40;
  
  iVar1 = DAT_0800a350;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  FUN_0800bb0c(s_Extrapolating_mesh____0800a4bc);
  fVar11 = *param_1 * DAT_0800a358;
  iVar7 = 0;
  do {
    uVar4 = 0;
    do {
      iVar2 = FUN_08009afa(iVar1 + iVar7 * 0x14 + uVar4 * 4);
      if (iVar2 == 0) {
        local_88[iVar7] = local_88[iVar7] | (ushort)(1 << (uVar4 & 0xff));
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 5);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 5);
  uVar4 = 0;
  do {
    fVar12 = *(float *)(DAT_0800a35c + (uVar4 & 0xff) * 4);
    local_8c = iVar1 + uVar4 * 0x14;
    bVar8 = 0;
    do {
      uVar9 = (uint)bVar8;
      fVar13 = *(float *)(DAT_0800a394 + uVar9 * 4);
      iVar7 = FUN_08009afa(local_8c + uVar9 * 4);
      if (iVar7 != 0) {
        FUN_0800eeee(auStack_74);
        uVar5 = 0;
        do {
          local_94 = *(float *)(DAT_0800a35c + (uVar5 & 0xff) * 4);
          bVar6 = 0;
          do {
            if (((uint)local_88[uVar5] & 1 << (uint)bVar6) != 0) {
              local_90 = *(float *)(DAT_0800a394 + (uint)bVar6 * 4);
              local_78 = *(undefined4 *)(iVar1 + uVar5 * 0x14 + (uint)bVar6 * 4);
              fVar10 = (float)FUN_0800a398(local_94 - fVar12,local_90 - fVar13);
              local_7c = fVar11 / fVar10 + 1.0;
              FUN_0800f6d2(auStack_74,&local_94,&local_90,&local_78,&local_7c);
            }
            bVar6 = bVar6 + 1;
          } while (bVar6 < 5);
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < 5);
        iVar7 = FUN_0800f268(auStack_74);
        if (iVar7 != 0) {
          pcVar3 = s_Insufficient_data_0800a4d4;
          goto LAB_080098f0;
        }
        *(float *)(local_8c + uVar9 * 4) = (-local_40 - local_48 * fVar12) - local_44 * fVar13;
        FUN_0800b806(0);
      }
      bVar8 = bVar8 + 1;
    } while (bVar8 < 5);
    uVar4 = uVar4 + 1;
    if (4 < (int)uVar4) {
      pcVar3 = s_done_0800a4e8;
LAB_080098f0:
      FUN_0800bb0c(pcVar3);
      return param_4;
    }
  } while( true );
}



/* FUN_0800a398 at 0800a398 */

void FUN_0800a398(float param_1,float param_2)

{
  FUN_0800bce8(param_1 * param_1 + param_2 * param_2);
  return;
}



/* FUN_0800a500 at 0800a500 */

void FUN_0800a500(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_0800bb0c(&DAT_0800a7c0);
  iVar1 = DAT_0800ad28;
  FUN_0800a564(*(undefined4 *)(DAT_0800ad28 + 8),*(undefined4 *)(DAT_0800ad28 + 0x34));
  FUN_0800a570();
  FUN_0800bb0c(&DAT_0800a7c4);
  FUN_0800a564(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x38));
  FUN_0800a570();
  FUN_0800bb0c(&DAT_0800a7c8);
  FUN_0800a564(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x3c));
  FUN_0800a570();
  FUN_0800bb0c(&DAT_0800a888);
  FUN_0800bca0(*(undefined4 *)(iVar1 + 0x14));
  FUN_0800a570();
  uVar2 = DAT_08010214;
  disableIRQinterrupts();
  uVar3 = *(undefined4 *)(DAT_080101d8 + 0x10);
  uVar4 = *(undefined4 *)(DAT_080101d8 + 0x14);
  uVar5 = *(undefined4 *)(DAT_080101d8 + 0x18);
  enableIRQinterrupts();
  FUN_0800bb0c(s_Count_X__08010238);
  FUN_0800bf84(uVar2,uVar3,10);
  FUN_0800bb0c(&DAT_080101c8);
  FUN_0800bf84(uVar2,uVar4,10);
  FUN_0800bb0c(&DAT_080101cc);
  FUN_0800bf84(uVar2,uVar5,10);
  FUN_0800de78(uVar2,10,in_r3);
  return;
}



/* FUN_0800a564 at 0800a564 */

void FUN_0800a564(float param_1,float param_2)

{
  FUN_0800bca0(param_1 + param_2);
  return;
}



/* FUN_0800a570 at 0800a570 */

void FUN_0800a570(undefined4 param_1)

{
  FUN_0800bfd0(param_1);
  return;
}



/* FUN_0800a57c at 0800a57c */

undefined8 FUN_0800a57c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int unaff_r4;
  char in_NG;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  uStack_c = param_4;
  uVar1 = FUN_0800a7b0();
  if (in_NG != '\0') {
    FUN_0800aacc(uVar1,s___sync_plan_position_0800ad90,unaff_r4 + 8);
  }
  local_10 = *(undefined4 *)(unaff_r4 + 0x10);
  local_14 = *(undefined4 *)(unaff_r4 + 0xc);
  local_18 = *(undefined4 *)(unaff_r4 + 8);
  FUN_08010812(&local_18,&local_14,&local_10);
  FUN_08011088(&local_18,&local_14,&local_10,unaff_r4 + 0x14);
  return CONCAT44(local_14,local_18);
}



/* FUN_0800a5b6 at 0800a5b6 */

void FUN_0800a5b6(void)

{
  FUN_0801113c(3,DAT_0800ad30);
  return;
}



/* FUN_0800a5c0 at 0800a5c0 */

void FUN_0800a5c0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_0800ad28;
  uVar2 = FUN_0801009a(0);
  *(undefined4 *)(iVar1 + 0x28) = uVar2;
  uVar2 = FUN_0801009a(1);
  *(undefined4 *)(iVar1 + 0x2c) = uVar2;
  uVar2 = FUN_0801009a(2);
  *(undefined4 *)(iVar1 + 0x30) = uVar2;
  return;
}



/* FUN_0800a5e6 at 0800a5e6 */

undefined4 FUN_0800a5e6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_0800a5c0();
  iVar2 = DAT_0800ad28;
  FUN_08010854(DAT_0800ad28 + 0x28);
  if (param_1 == 100) {
    uVar1 = FUN_0800f62c(iVar2 + 8,iVar2 + 0x28,0xc,param_4);
    return uVar1;
  }
  iVar2 = iVar2 + param_1 * 4;
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar2 + 0x28);
  return param_4;
}



/* FUN_0800a61a at 0800a61a */

void FUN_0800a61a(void)

{
  int unaff_r4;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_0800a688();
  local_14 = *(undefined4 *)(unaff_r4 + 0x10);
  local_18 = *(undefined4 *)(unaff_r4 + 0xc);
  FUN_0800a64c(*(undefined4 *)(unaff_r4 + 8),&local_18);
  FUN_0800a694();
  return;
}



/* FUN_0800a64c at 0800a64c */

void FUN_0800a64c(undefined4 param_1)

{
  undefined4 uStack0000000c;
  
  uStack0000000c = param_1;
  FUN_08010812(&stack0x0000000c);
  return;
}



/* FUN_0800a64e at 0800a64e */

void FUN_0800a64e(void)

{
  FUN_08010812(&stack0x0000000c);
  return;
}



/* FUN_0800a654 at 0800a654 */

void FUN_0800a654(undefined4 param_1)

{
  int unaff_r4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_10;
  
  uStack_10 = param_1;
  FUN_0800a688();
  local_1c = *(undefined4 *)(unaff_r4 + 0x20);
  local_20 = *(undefined4 *)(unaff_r4 + 0x1c);
  FUN_0800a64c(*(undefined4 *)(unaff_r4 + 0x18),&local_20);
  FUN_0800a694();
  return;
}



/* FUN_0800a688 at 0800a688 */

void FUN_0800a688(void)

{
  return;
}



/* FUN_0800a694 at 0800a694 */

void FUN_0800a694(void)

{
  FUN_08010f84(&stack0x0000000c,&stack0x00000010,&stack0x00000014);
  return;
}



/* FUN_0800a6a0 at 0800a6a0 */

float * FUN_0800a6a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,float *param_4)

{
  int iVar1;
  byte *pbVar2;
  float *pfVar3;
  char cVar4;
  float fVar5;
  undefined4 uVar6;
  
  pbVar2 = DAT_0800ad34;
  iVar1 = DAT_0800ad28;
  uVar6 = *(undefined4 *)(DAT_0800ad28 + 0x40);
  if ((int)((uint)*DAT_0800ad34 << 0x1a) < 0) {
    FUN_0800bc14(*param_1,*param_2,*param_3,s_>>>_do_blocking_move_to_0800ada8,0);
  }
  cVar4 = *param_4 < 0.0;
  FUN_0800ac8e(*(undefined4 *)(iVar1 + 0x10),*param_3);
  if (cVar4 != '\0') {
    FUN_0800a752();
  }
  fVar5 = *param_4;
  cVar4 = fVar5 < 0.0;
  if (fVar5 == 0.0) {
    fVar5 = DAT_0800a9d8;
  }
  *(float *)(iVar1 + 0x40) = fVar5;
  *(undefined4 *)(iVar1 + 8) = *param_1;
  *(undefined4 *)(iVar1 + 0xc) = *param_2;
  FUN_0800a61a();
  FUN_0800ac8e(*param_3,*(undefined4 *)(iVar1 + 0x10));
  if (cVar4 != '\0') {
    FUN_0800a752();
  }
  FUN_08010028();
  *(undefined4 *)(iVar1 + 0x40) = uVar6;
  if ((int)((uint)*pbVar2 << 0x1a) < 0) {
    pfVar3 = (float *)FUN_0800bb0c(s_<<<_do_blocking_move_to_0800adc0,param_4);
    return pfVar3;
  }
  return param_4;
}



/* FUN_0800a752 at 0800a752 */

void FUN_0800a752(void)

{
  undefined4 *unaff_r6;
  int unaff_r7;
  undefined4 unaff_s17;
  
  *(undefined4 *)(unaff_r7 + 0x40) = unaff_s17;
  *(undefined4 *)(unaff_r7 + 0x10) = *unaff_r6;
  FUN_0800a61a();
  return;
}



/* FUN_0800a75c at 0800a75c */

void FUN_0800a75c(undefined4 param_1,undefined4 param_2)

{
  FUN_0800a6a0(DAT_0800ad28 + 8,DAT_0800ad28 + 0xc,param_1,param_2);
  return;
}



/* FUN_0800a76c at 0800a76c */

void FUN_0800a76c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0800a6a0(param_1,param_2,DAT_0800ad38,param_3);
  return;
}



/* FUN_0800a7b0 at 0800a7b0 */

void FUN_0800a7b0(void)

{
  return;
}



/* FUN_0800a7cc at 0800a7cc */

/* WARNING: Removing unreachable block (ram,0x0800a79c) */

undefined4 FUN_0800a7cc(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  int unaff_r4;
  char cVar3;
  
  cVar3 = '\0';
  uVar2 = FUN_0800a7b0();
  if (cVar3 != '\0') {
    FUN_0800aacc(uVar2,s___bracket_probe_move_0800addc,unaff_r4 + 8);
  }
  puVar1 = DAT_0800ad3c;
  *(undefined4 *)(unaff_r4 + 0x5c) = *(undefined4 *)(unaff_r4 + 0x40);
  *(undefined2 *)(unaff_r4 + 4) = *(undefined2 *)(unaff_r4 + 2);
  *DAT_0800ad40 = *puVar1;
  *(undefined2 *)(unaff_r4 + 2) = 100;
  return in_r3;
}



/* FUN_0800a7d0 at 0800a7d0 */

/* WARNING: Removing unreachable block (ram,0x0800a790) */

undefined4 FUN_0800a7d0(void)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 in_r3;
  int unaff_r4;
  char cVar4;
  
  cVar4 = '\0';
  uVar3 = FUN_0800a7b0();
  if (cVar4 != '\0') {
    FUN_0800aacc(uVar3,s___bracket_probe_move_0800addc,unaff_r4 + 8);
  }
  puVar2 = DAT_0800ad3c;
  *(undefined4 *)(unaff_r4 + 0x40) = *(undefined4 *)(unaff_r4 + 0x5c);
  uVar1 = *(undefined2 *)(unaff_r4 + 4);
  *DAT_0800ad40 = *puVar2;
  *(undefined2 *)(unaff_r4 + 2) = uVar1;
  return in_r3;
}



/* FUN_0800a88c at 0800a88c */

uint FUN_0800a88c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = -(uint)(*DAT_0800ad50 == '\0') >> 0x1f;
  }
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = -(uint)(DAT_0800ad50[1] == '\0') >> 0x1f;
  }
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = -(uint)(DAT_0800ad50[2] == '\0') >> 0x1f;
  }
  uVar1 = uVar3 | uVar2 | uVar4;
  if (uVar1 != 0) {
    FUN_0800a8f4();
    FUN_0800bb0c(s_Home_0800ae14);
    if (uVar2 != 0) {
      FUN_0800bb0c(&DAT_0800aabc);
    }
    if (uVar3 != 0) {
      FUN_0800bb0c(&DAT_0800aac0);
    }
    if (uVar4 != 0) {
      FUN_0800bb0c(&DAT_0800aac4);
    }
    FUN_0800bb0c(s_first_0800ae1c);
    uVar1 = 1;
  }
  return uVar1;
}



/* FUN_0800a8f4 at 0800a8f4 */

void FUN_0800a8f4(void)

{
  FUN_0800bb0c(DAT_0800ad54);
  return;
}



/* FUN_0800a8fc at 0800a8fc */

undefined4
FUN_0800a8fc(undefined4 param_1,float param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  
  pbVar2 = DAT_0800ad34;
  if ((int)((uint)*DAT_0800ad34 << 0x1a) < 0) {
    FUN_0800bb3a(s_>>>_do_homing_move__0800ae24,(int)(char)(&DAT_0800afcc)[param_3]);
    FUN_0800bb78(param_1,&DAT_0800aac8);
    FUN_0800bb78(param_2,&DAT_0800aac8);
    uVar3 = FUN_0800a9dc();
    FUN_0800a9de(uVar3,10);
  }
  iVar1 = DAT_0800ad28;
  iVar4 = DAT_0800ad28 + param_3 * 4;
  *(undefined4 *)(iVar4 + 8) = 0;
  FUN_0800a57c();
  *(undefined4 *)(iVar4 + 8) = param_1;
  local_30 = param_2;
  if (param_2 == 0.0) {
    local_30 = *(float *)(&DAT_0800b010 + param_3 * 4);
  }
  local_2c = 0;
  local_34 = *(undefined4 *)(iVar1 + 0x10);
  local_38 = *(undefined4 *)(iVar1 + 0xc);
  FUN_0800a64e(*(undefined4 *)(iVar1 + 8),&local_38,&local_34);
  FUN_0800a694();
  FUN_08010028();
  *DAT_0800ad58 = 0;
  if ((int)((uint)*pbVar2 << 0x1a) < 0) {
    FUN_0800bb3a(s_<<<_do_homing_move(_0800ae38,(int)(char)(&DAT_0800afcc)[param_3]);
    uVar3 = FUN_0800a9dc();
    FUN_0800a9de(uVar3,10);
  }
  return param_6;
}



/* FUN_0800a9dc at 0800a9dc */

void FUN_0800a9dc(void)

{
  FUN_0800de78();
  return;
}



/* FUN_0800a9de at 0800a9de */

void FUN_0800a9de(void)

{
  FUN_0800de78();
  return;
}



/* FUN_0800a9e4 at 0800a9e4 */

void FUN_0800a9e4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  float *pfVar5;
  undefined4 uVar6;
  int iVar7;
  
  pbVar4 = DAT_0800ad34;
  uVar3 = DAT_0800ad2c;
  if ((int)((uint)*DAT_0800ad34 << 0x1a) < 0) {
    FUN_0800bb3a(s_>>>_set_axis_is_at_home__0800ae4c,(int)(char)(&DAT_0800afcc)[param_1]);
    FUN_0800ac86();
    FUN_0800ac7e();
  }
  iVar7 = DAT_0800ad5c;
  iVar2 = DAT_0800ad28;
  *(undefined1 *)(DAT_0800ad50 + param_1) = 1;
  *(undefined1 *)(iVar7 + param_1) = 1;
  iVar7 = iVar2 + param_1 * 4;
  *(undefined4 *)(iVar7 + 0x44) = 0;
  FUN_0800ac98(param_1);
  *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(&DAT_0800afe8 + param_1 * 4);
  pfVar5 = DAT_0800ad60;
  if (param_1 == 2) {
    *(float *)(iVar2 + 0x10) = *(float *)(iVar2 + 0x10) - *DAT_0800ad60;
    if (-1 < (int)((uint)*pbVar4 << 0x1a)) {
      return;
    }
    FUN_0800bb0c(s_____Z_HOMED_WITH_PROBE__Z_MIN_PR_0800ae68);
    FUN_0800bb78(*pfVar5,s_>_zprobe_zoffset___0800aeac);
    FUN_0800ac7e();
  }
  if (-1 < (int)((uint)*pbVar4 << 0x1a)) {
    return;
  }
  cVar1 = (&DAT_0800afcc)[param_1];
  FUN_0800bb3a(s_>_home_offset__0800aec0,(int)cVar1);
  FUN_0800bb78(*(undefined4 *)(iVar7 + 0x50),&DAT_0800aed0);
  uVar6 = FUN_0800ac7e();
  FUN_0800aacc(uVar6,&DAT_0800aed8,iVar2 + 8);
  FUN_0800bb3a(s_<<<_set_axis_is_at_home(_0800aee0,(int)cVar1);
  FUN_0800ac86();
  FUN_0800de78(uVar3,10);
  return;
}



/* FUN_0800aacc at 0800aacc */

void FUN_0800aacc(void)

{
  thunk_FUN_0800bc92(s_current_position__0800ad7b + 1);
  return;
}



/* FUN_0800aad4 at 0800aad4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800aad4(uint param_1)

{
  undefined4 uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined *unaff_r6;
  byte *unaff_r7;
  undefined4 unaff_r8;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  uint in_fpscr;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined8 unaff_d8;
  undefined8 uVar13;
  undefined8 uVar14;
  
  pbVar2 = DAT_0800ad34;
  uVar1 = DAT_0800ad2c;
  iVar3 = (int)((ulonglong)unaff_d8 >> 0x20);
  bVar9 = param_1 < 3;
  if (bVar9) {
    unaff_r6 = &DAT_0800afcc;
    if ((int)((uint)*DAT_0800ad34 << 0x1a) < 0) {
      FUN_0800bb3a(s_>>>_homeaxis__0800aefc,(int)(char)(&DAT_0800afcc)[param_1]);
      FUN_0800ac86();
      FUN_0800ac7e();
    }
    iVar3 = (int)(char)(&DAT_0800b00c)[param_1];
    unaff_r7 = pbVar2;
    unaff_r8 = uVar1;
    if (param_1 != 2) goto LAB_0800ab28;
    iVar4 = FUN_0800df0c(1);
    bVar9 = iVar4 == 0;
  }
  if (!bVar9) {
    return;
  }
LAB_0800ab28:
  if ((int)((uint)*unaff_r7 << 0x1a) < 0) {
    FUN_0800bb0c(s_Home_1_Fast__0800af0c);
  }
  uVar1 = DAT_0800ad20;
  uVar13 = FUN_0800bca0(*(undefined4 *)(&DAT_0800aff4 + param_1 * 4));
  uVar13 = FUN_0800c284((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0,DAT_0800ad64);
  uVar14 = FUN_0800eecc(iVar3);
  FUN_0800c284((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar13,
               (int)((ulonglong)uVar13 >> 0x20));
  uVar5 = FUN_0800bef8();
  FUN_0800a8fc(uVar5,uVar1,param_1);
  fVar11 = 2.0;
  if (param_1 != 2) {
    fVar11 = *(float *)(param_1 * 4 + 0x800b000);
  }
  fVar12 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = fVar12 * fVar11;
  uVar6 = in_fpscr & 0xfffffff | (uint)(fVar12 == 0.0) << 0x1e;
  uVar10 = uVar6 | (uint)NAN(fVar12) << 0x1c;
  bVar7 = (byte)(uVar10 >> 0x1c) & 1;
  if ((byte)(uVar6 >> 0x1e) == 0) {
    if ((int)((uint)*unaff_r7 << 0x1a) < 0) {
      FUN_0800bb0c(s_Move_Away__0800af1c);
    }
    FUN_0800a8fc(-fVar12,DAT_0800ad20,param_1);
    if ((int)((uint)*unaff_r7 << 0x1a) < 0) {
      FUN_0800bb0c(s_Home_2_Slow__0800af28);
    }
    uVar6 = (uint)*(byte *)(DAT_0800ad68 + param_1);
    if (uVar6 == 0) {
      FUN_0800a8f4();
      FUN_0800bb0c(DAT_0800ad6c);
      uVar6 = 10;
    }
    fVar11 = (float)VectorUnsignedToFloat(uVar6,(byte)(uVar10 >> 0x15) & 3);
    FUN_0800a8fc(fVar12 * 2.0,*(float *)(&DAT_0800b010 + param_1 * 4) / fVar11,param_1);
  }
  FUN_0800a9e4(param_1);
  FUN_0800a57c();
  iVar3 = DAT_0800ad28;
  iVar4 = DAT_0800ad28 + param_1 * 4;
  *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(iVar4 + 8);
  bVar8 = (int)((uint)*unaff_r7 << 0x1a) < 0;
  if ((bool)bVar8) {
    FUN_0800aacc(iVar3,s___>_AFTER_set_axis_is_at_home_0800af38,iVar3 + 8);
  }
  FUN_0800ac8e(*DAT_0800ad70,DAT_0800ad24);
  if ((bVar8 == bVar7) || (*DAT_0800ad74 != 0)) {
    if ((param_1 == 2) && (iVar3 = FUN_0800df0c(0), iVar3 != 0)) {
      return;
    }
  }
  else {
    *_DAT_0800ad78 = 0;
  }
  if (-1 < (int)((uint)*unaff_r7 << 0x1a)) {
    return;
  }
  FUN_0800bb3a(s_<<<_homeaxis(_0800af58,(int)(char)unaff_r6[param_1]);
  FUN_0800ac86();
  FUN_0800de78(unaff_r8,10);
  return;
}



/* FUN_0800ac7e at 0800ac7e */

void FUN_0800ac7e(void)

{
  FUN_0800de78();
  return;
}



/* FUN_0800ac86 at 0800ac86 */

void FUN_0800ac86(void)

{
  FUN_0800de78();
  return;
}



/* FUN_0800ac8e at 0800ac8e */

void FUN_0800ac8e(void)

{
  return;
}



/* FUN_0800ac98 at 0800ac98 */

void FUN_0800ac98(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0800ad28 + param_1 * 4;
  *(float *)(iVar1 + 0x34) = *(float *)(iVar1 + 0x50) + *(float *)(iVar1 + 0x44);
  *(undefined4 *)(iVar1 + 0x60) = *(undefined4 *)(&DAT_0800afd0 + param_1 * 4);
  *(undefined4 *)(iVar1 + 0x6c) = *(undefined4 *)(&DAT_0800afdc + param_1 * 4);
  if ((int)((uint)*DAT_0800ad34 << 0x1a) < 0) {
    FUN_0800bb3a(&DAT_0800af68,(int)(char)(&DAT_0800afcc)[param_1]);
    FUN_0800bb78(*(undefined4 *)(iVar1 + 0x50),s_axis__home_offset___0800af70);
    FUN_0800bb78(*(undefined4 *)(iVar1 + 0x44),s_position_shift___0800af88);
    FUN_0800bb78(*(undefined4 *)(iVar1 + 0x60),s_soft_endstop_min___0800af9c);
    FUN_0800bb78(*(undefined4 *)(iVar1 + 0x6c),s_soft_endstop_max___0800afb4);
    FUN_0800de78(DAT_0800ad2c,10);
    return;
  }
  return;
}



/* FUN_0800ad14 at 0800ad14 */

void FUN_0800ad14(undefined4 param_1,int param_2)

{
  *(undefined4 *)(DAT_0800ad28 + param_2 * 4 + 0x50) = param_1;
  FUN_0800ac98();
  return;
}



/* FUN_0800b020 at 0800b020 */

undefined8 FUN_0800b020(void)

{
  int iVar1;
  undefined4 unaff_r7;
  bool bVar2;
  
  iVar1 = FUN_0800b04c();
  bVar2 = iVar1 != 0;
  if (bVar2) {
    iVar1 = *DAT_0800b034;
  }
  if (bVar2 && iVar1 != 0) {
    iVar1 = 1;
  }
  return CONCAT44(unaff_r7,iVar1);
}



/* FUN_0800b038 at 0800b038 */

void FUN_0800b038(void)

{
  if (*DAT_0800b048 != 0) {
    FUN_08011748(*DAT_0800b048,0,10);
    return;
  }
  return;
}



/* FUN_0800b04c at 0800b04c */

longlong FUN_0800b04c(undefined4 param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar2 = FUN_0801174c(*DAT_0800b0a4,param_1);
  if (iVar2 == 0) {
    return (ulonglong)param_3 << 0x20;
  }
  pcVar3 = (char *)(iVar2 + 1);
  iVar4 = (int)*pcVar3;
  if (iVar4 - 0x30U < 10) goto LAB_0800b076;
  if (iVar4 == 0x2e) {
    cVar1 = *(char *)(iVar2 + 2);
joined_r0x0800b09e:
    if ((int)cVar1 - 0x30U < 10) goto LAB_0800b076;
  }
  else if (iVar4 == 0x2d || iVar4 == 0x2b) {
    if ((int)*(char *)(iVar2 + 2) - 0x30U < 10) goto LAB_0800b076;
    if (*(char *)(iVar2 + 2) == 0x2e) {
      cVar1 = *(char *)(iVar2 + 3);
      goto joined_r0x0800b09e;
    }
  }
  pcVar3 = (char *)0x0;
LAB_0800b076:
  *DAT_0800b0a8 = (int)pcVar3;
  return CONCAT44(param_3,1);
}



/* FUN_0800b0ac at 0800b0ac */

undefined8 FUN_0800b0ac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  pbVar2 = DAT_0800b218;
  local_2c = param_3;
  uStack_28 = param_4;
  if ((int)((uint)*DAT_0800b218 << 0x1a) < 0) {
    FUN_0800bb0c(s_>>>_G28_0800b234);
    FUN_0800e7bc();
  }
  FUN_08010028();
  uVar1 = *DAT_0800b21c;
  local_30 = CONCAT31((int3)((uint)param_2 >> 8),uVar1);
  FUN_0800e4d4(0);
  FUN_0800a7cc();
  if ((int)((uint)*pbVar2 << 0x1a) < 0) {
    FUN_0800bb0c(s_>_endstops_enable_true__0800b240);
  }
  puVar3 = DAT_0800b220;
  *DAT_0800b220 = 1;
  if (param_1 == 0) {
    uVar6 = FUN_0800b04c(0x58);
    if (uVar6 != 0) {
      uVar6 = 1;
    }
    uVar7 = FUN_0800b04c(0x59);
    if (uVar7 != 0) {
      uVar7 = 1;
    }
    uVar8 = FUN_0800b04c(0x5a);
    if (uVar8 == 0) goto LAB_0800b124;
  }
  else {
    uVar6 = 1;
    uVar7 = 1;
  }
  uVar8 = 1;
LAB_0800b124:
  puVar5 = DAT_0800b228;
  puVar4 = DAT_0800b224;
  uVar12 = (uVar7 | uVar6 | uVar8) ^ 1 | uVar7 & uVar6 & uVar8;
  uVar9 = DAT_0800b224[1];
  uVar10 = DAT_0800b224[2];
  uVar11 = DAT_0800b224[3];
  *DAT_0800b228 = *DAT_0800b224;
  puVar5[1] = uVar9;
  puVar5[2] = uVar10;
  puVar5[3] = uVar11;
  if ((((uVar7 | uVar6 | uVar12) & uVar8) != 0) &&
     (fVar14 = (float)puVar4[2], fVar13 = fVar14 + 1.0, puVar5[2] = fVar13,
     (int)((uint)(fVar14 < fVar13) << 0x1f) < 0)) {
    if ((int)((uint)*pbVar2 << 0x1a) < 0) {
      FUN_0800bb78(s_Raise_Z__before_homing__to_0800b25c);
      FUN_0800de78(DAT_0800b22c,10);
    }
    local_2c = 0;
    FUN_0800a75c(puVar5 + 2,&local_2c);
  }
  if (((uVar6 | uVar12) != 0) && (FUN_0800aad4(0), (int)((uint)*pbVar2 << 0x1a) < 0)) {
    thunk_FUN_0800bc92(s_current_position__0800b278,s___>_homeX_0800b28c,puVar4);
  }
  if ((uVar7 != 0 || uVar12 != 0) && (FUN_0800aad4(1), (int)((uint)*pbVar2 << 0x1a) < 0)) {
    thunk_FUN_0800bc92(s_current_position__0800b278,s___>_homeY_0800b298,puVar4);
  }
  if ((uVar8 != 0 || uVar12 != 0) && (FUN_08011764(), (int)((uint)*pbVar2 << 0x1a) < 0)) {
    thunk_FUN_0800bc92(s_current_position__0800b278,s___>__home_all____homeZ__>_final_0800b2a4,
                       puVar4);
  }
  FUN_0800a57c();
  *puVar3 = *DAT_0800b230;
  FUN_0800e4d4(uVar1);
  FUN_0800a7d0();
  FUN_0800a500();
  if ((int)((uint)*pbVar2 << 0x1a) < 0) {
    FUN_0800bb0c(0x800b2c8);
  }
  FUN_08011926();
  return CONCAT44(local_2c,local_30);
}



/* FUN_0800b2da at 0800b2da */

void FUN_0800b2da(void)

{
  FUN_0800bb0c(s_Unified_Bed_Leveling_0800b674);
  return;
}



/* FUN_0800b2e2 at 0800b2e2 */

void FUN_0800b2e2(void)

{
  undefined4 unaff_r7;
  
  FUN_0800bb0c(s_Unified_Bed_Leveling_0800b674);
  FUN_0800bb0c(s_System_v1_01_0800b68c);
  if (*DAT_0800b5f4 == '\0') {
    FUN_0800bb0c(&DAT_0800b3e0);
  }
  FUN_0800bb0c(s_active__0800b69c);
  FUN_0800e6c8(0x32,unaff_r7);
  return;
}



/* FUN_0800b314 at 0800b314 */

void FUN_0800b314(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0800b5fc;
  FUN_0800de78(DAT_0800b5fc,0x28);
  FUN_0800bf72(uVar1,param_1,10);
  FUN_0800de78(uVar1,0x2c);
  FUN_0800bf72(uVar1,param_2,10);
  FUN_0800de78(uVar1,0x29);
  FUN_0800e6c8(10);
  return;
}



/* FUN_0800b354 at 0800b354 */

undefined4 FUN_0800b354(undefined4 param_1)

{
  *DAT_0800b634 = *DAT_0800b634 + '\x01';
  FUN_0800b368();
  return param_1;
}



/* FUN_0800b368 at 0800b368 */

void FUN_0800b368(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  
  cVar1 = *DAT_0800b5f4;
  FUN_0800e4d4(0);
  uVar3 = DAT_0800b608;
  uVar2 = DAT_0800b604;
  puVar5 = DAT_0800b600 + 4;
  *DAT_0800b600 = 0xff;
  *DAT_0800b60c = uVar2;
  puVar4 = DAT_0800b614;
  *DAT_0800b610 = uVar3;
  *puVar4 = DAT_0800b638;
  FUN_08012510(puVar5,100);
  if (cVar1 != '\0') {
    FUN_0800a500();
    return;
  }
  return;
}



/* FUN_0800b3a4 at 0800b3a4 */

void FUN_0800b3a4(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  
  FUN_0800e4d4(0);
  uVar2 = DAT_0800b618;
  iVar1 = DAT_0800b600;
  iVar3 = 0;
  do {
    bVar4 = 0;
    do {
      uVar5 = (uint)bVar4;
      bVar4 = bVar4 + 1;
      *(undefined4 *)(iVar1 + 4 + iVar3 * 0x14 + uVar5 * 4) = uVar2;
    } while (bVar4 < 5);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  return;
}



/* FUN_0800b3b4 at 0800b3b4 */

void FUN_0800b3b4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  iVar1 = DAT_0800b600;
  iVar2 = 0;
  do {
    bVar3 = 0;
    do {
      uVar4 = (uint)bVar3;
      bVar3 = bVar3 + 1;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 0x14 + uVar4 * 4) = param_1;
    } while (bVar3 < 5);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  return;
}



/* FUN_0800b3e4 at 0800b3e4 */

void FUN_0800b3e4(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  
  uVar3 = DAT_0800b5fc;
  FUN_0800bb0c(s_Bed_Topography_Report_0800b6a8);
  if (param_1 == 0) {
    FUN_0800bb0c(&DAT_0800b61c);
    FUN_0800b314(0,4);
    FUN_0800bbf0(0x1b);
    FUN_0800b314(4,4);
    FUN_0800b63c();
    FUN_0800b314(0x14,0x122);
    FUN_0800bbf0(0x18);
    FUN_0800b314(0x122);
    FUN_0800b63c();
  }
  else {
    FUN_0800bb0c(s_for_0800b6c0);
    if (param_1 == 1) {
      uVar8 = 0x800b6c8;
    }
    else {
      uVar8 = 0x800b6d0;
    }
    FUN_0800bb0c(uVar8);
  }
  puVar2 = DAT_0800b5f8;
  uVar16 = FUN_0800b644(*DAT_0800b5f8);
  uVar8 = (undefined4)((ulonglong)DAT_0800b624 >> 0x20);
  uVar7 = (undefined4)DAT_0800b624;
  FUN_0800c284((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),uVar7,uVar8);
  cVar5 = FUN_08012518();
  if (cVar5 < '\0') {
    cVar5 = '\0';
  }
  else if ('\x04' < cVar5) {
    cVar5 = '\x04';
  }
  fVar15 = (float)VectorSignedToFloat((int)cVar5,(byte)(in_fpscr >> 0x15) & 3);
  uVar16 = FUN_0800b644(puVar2[1]);
  FUN_0800c284((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),uVar7,uVar8);
  cVar5 = FUN_08012518();
  iVar4 = DAT_0800b600;
  if (cVar5 < '\0') {
    cVar5 = '\0';
  }
  else if ('\x04' < cVar5) {
    cVar5 = '\x04';
  }
  fVar13 = (float)VectorSignedToFloat((int)cVar5,(byte)(in_fpscr >> 0x15) & 3);
  iVar10 = 4;
  do {
    uVar9 = 0;
    fVar14 = (float)VectorSignedToFloat((int)(char)iVar10,(byte)(in_fpscr >> 0x15) & 3);
    do {
      fVar12 = (float)VectorUnsignedToFloat(uVar9 & 0xff,(byte)(in_fpscr >> 0x15) & 3);
      uVar1 = in_fpscr & 0xfffffff;
      in_fpscr = uVar1 | (uint)(fVar12 == fVar15) << 0x1e;
      bVar11 = (byte)(in_fpscr >> 0x1e);
      if (bVar11 != 0) {
        in_fpscr = uVar1 | (uint)(fVar14 == fVar13) << 0x1e;
        bVar11 = (byte)(in_fpscr >> 0x1e);
      }
      if (param_1 == 0) {
        if (bVar11 != 0) {
          uVar8 = 0x5b;
        }
        else {
          uVar8 = 0x20;
        }
        FUN_0800b63e(uVar9 & 0xff,uVar8);
      }
      fVar12 = *(float *)(uVar9 * 0x14 + iVar4 + 4 + iVar10 * 4);
      iVar6 = (((int)fVar12 << 1) >> 0x18) + 1;
      if ((iVar6 == 0) && (((uint)fVar12 & 0x7fffff) != 0)) {
        if (param_1 == 0) {
          uVar8 = 0x800b6d8;
        }
        else {
          uVar8 = 0x800b62c;
        }
        FUN_0800bb0c(uVar8);
      }
      else if (param_1 < 2) {
        if ((param_1 == 0) &&
           (uVar1 = in_fpscr & 0xfffffff | (uint)(fVar12 < 0.0) << 0x1f,
           in_fpscr = uVar1 | (uint)NAN(fVar12) << 0x1c,
           (byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1))) {
          FUN_0800b63e(iVar6,0x20);
        }
        uVar8 = FUN_0800bca0(fVar12);
        FUN_0800bfd0(uVar8,uVar3,3);
      }
      uVar8 = FUN_0800b806(0);
      if ((param_1 == 1) && ((int)uVar9 < 4)) {
        FUN_0800b63e(uVar8,0x2c);
      }
      uVar8 = FUN_0800e6c8(0xf);
      if (param_1 == 0) {
        if (bVar11 != 0) {
          uVar7 = 0x5d;
        }
        else {
          uVar7 = 0x20;
        }
        uVar8 = FUN_0800b63e(uVar8,uVar7);
        FUN_0800b63e(uVar8,0x20);
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < 5);
    uVar8 = FUN_0800b63c();
    if ((iVar10 != 0) && (param_1 == 0)) {
      FUN_0800b63e(uVar8,0x20);
      FUN_0800b63c();
    }
    iVar10 = iVar10 + -1;
  } while (-1 < iVar10);
  if (param_1 != 0) {
    return;
  }
  FUN_0800b314(0x14,0x14);
  FUN_0800bbf0(0x1c);
  FUN_0800b314(0x122,0x14);
  FUN_0800b63c();
  FUN_0800b314(0,0);
  FUN_0800bbf0(0x1d);
  FUN_0800b314(4,0);
  FUN_0800de78(uVar3,10);
  return;
}



/* FUN_0800b63c at 0800b63c */

void FUN_0800b63c(void)

{
  FUN_0800de78();
  return;
}



/* FUN_0800b63e at 0800b63e */

void FUN_0800b63e(void)

{
  FUN_0800de78();
  return;
}



/* FUN_0800b644 at 0800b644 */

void FUN_0800b644(float param_1)

{
  float unaff_s19;
  float unaff_s20;
  
  FUN_0800bca0(param_1 + unaff_s20 + unaff_s19);
  return;
}



/* FUN_0800b65c at 0800b65c */

bool FUN_0800b65c(void)

{
  int iVar1;
  
  iVar1 = FUN_0800d3b8();
  if (iVar1 == 0) {
    FUN_0800bb0c(s__Mesh_too_big_for_EEPROM__0800b6e4);
  }
  return iVar1 == 0;
}



/* FUN_0800b706 at 0800b706 */

longlong FUN_0800b706(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  uint local_10;
  
  bVar1 = 0;
  local_10 = param_4;
  do {
    local_10 = CONCAT31(local_10._1_3_,(&DAT_0800bae4)[bVar1]);
    if (param_1 == (char)(&DAT_0800bae4)[bVar1]) {
      return CONCAT44(local_10,1);
    }
    bVar1 = bVar1 + 1;
  } while (bVar1 < 0x26);
  return (ulonglong)local_10 << 0x20;
}



/* FUN_0800b730 at 0800b730 */

void FUN_0800b730(void)

{
  undefined4 unaff_r7;
  
  FUN_080100c8();
  FUN_08010028();
  FUN_0800a5e6(100);
  FUN_0800a57c(unaff_r7);
  return;
}



/* FUN_0800b748 at 0800b748 */

void FUN_0800b748(void)

{
  int *piVar1;
  
  piVar1 = DAT_0800b9b0;
  *(int *)(DAT_0800b9b0[0x18] + 0x18) = DAT_0800b9b0[0x19] << 0x10;
  *(int *)(piVar1[8] + 0x18) = piVar1[9] << 0x10;
  *(int *)(*piVar1 + 0x18) = piVar1[1] << 0x10;
  *(int *)(piVar1[0x16] + 0x18) = piVar1[0x17] << 0x10;
  return;
}



/* FUN_0800b76c at 0800b76c */

void FUN_0800b76c(void)

{
  int *piVar1;
  undefined1 *puVar2;
  
  piVar1 = DAT_0800b9b0;
  *(int *)(DAT_0800b9b0[0x18] + 0x18) = DAT_0800b9b0[0x19];
  puVar2 = DAT_0800b9b4;
  *DAT_0800b9b4 = 0;
  *(int *)(piVar1[8] + 0x18) = piVar1[9];
  puVar2[1] = 0;
  *(int *)(*piVar1 + 0x18) = piVar1[1];
  puVar2[2] = 0;
  *(int *)(piVar1[0x16] + 0x18) = piVar1[0x17];
  return;
}



/* FUN_0800b798 at 0800b798 */

undefined4 FUN_0800b798(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  
  if (*DAT_0800b9b8 < 6) {
    FUN_080135d8();
  }
  piVar2 = DAT_0800b9c4;
  piVar1 = DAT_0800b9c0;
  iVar4 = *DAT_0800b9bc;
  if (*DAT_0800b9c0 != 0) {
    if (-1 < (iVar4 - *DAT_0800b9c4) - *DAT_0800b9c0) {
      FUN_0800b83a();
      FUN_0800bb28(s_KILL_caused_by_too_much_inactive_0800b9f7 + 1,*DAT_0800b9c8);
      FUN_0800de78(DAT_0800b9cc,10);
      FUN_0800b824(s_KILLED__0800ba34);
    }
  }
  pcVar3 = DAT_0800b9d0;
  if ((((*DAT_0800b9d0 == '\0') && (piVar1[1] != 0)) &&
      (pcVar3 = (char *)(iVar4 - *piVar2), -1 < (int)pcVar3 - piVar1[1])) && (param_1 == 0)) {
    pcVar3 = (char *)(uint)*DAT_0800b9d4;
  }
  if (-1 < iVar4 - piVar1[2]) {
    FUN_08010728(iVar4 - piVar1[2],pcVar3);
    piVar1[2] = iVar4 + 100;
  }
  return param_4;
}



/* FUN_0800b806 at 0800b806 */

void FUN_0800b806(undefined4 param_1)

{
  FUN_0801208c();
  FUN_08013ce4();
  FUN_080149ae();
  FUN_0800b798(param_1);
  FUN_0801441c();
  return;
}



/* FUN_0800b824 at 0800b824 */

void FUN_0800b824(void)

{
  undefined4 unaff_r7;
  
  FUN_0800b83a();
  FUN_0800bb0c(s_Printer_halted__kill___called__0800ba40);
  FUN_0801477a(unaff_r7);
  return;
}



/* FUN_0800b83a at 0800b83a */

void FUN_0800b83a(void)

{
  FUN_0800bb0c(DAT_0800b9dc);
  return;
}



/* FUN_0800b840 at 0800b840 */

/* WARNING: Removing unreachable block (ram,0x0800b8b0) */
/* WARNING: Removing unreachable block (ram,0x0800b8a4) */
/* WARNING: Removing unreachable block (ram,0x0800b898) */
/* WARNING: Removing unreachable block (ram,0x0800b88c) */
/* WARNING: Removing unreachable block (ram,0x0800b860) */
/* WARNING: Removing unreachable block (ram,0x0800b890) */
/* WARNING: Removing unreachable block (ram,0x0800b89c) */
/* WARNING: Removing unreachable block (ram,0x0800b8a8) */
/* WARNING: Removing unreachable block (ram,0x0800b8b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800b840(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_28 [5];
  undefined4 uStack_14;
  
  uVar3 = DAT_0800b9e0;
  uStack_14 = in_r3;
  FUN_0800bb0c(s_start_0800ba60,0x7d000);
  FUN_0800bb0c(uVar3);
  FUN_0800bb0c(s_PowerUp_0800ba68);
  FUN_08014cf2();
  uVar2 = FUN_0800bb0c(s_Marlin_0800bac4);
  FUN_0800b958(uVar2,0x20);
  FUN_0800bb0c(&DAT_0800b9a8);
  FUN_0800b956();
  FUN_0800bb0c(uVar3);
  FUN_0800bb4c(s_PlannerBufferBytes__0800bacc,0x2a0);
  FUN_0800b956();
  FUN_080133f8();
  FUN_0800d37e();
  puVar1 = DAT_0800b9e8;
  uVar3 = DAT_0800b9e4[1];
  uVar2 = DAT_0800b9e4[2];
  *DAT_0800b9e8 = *DAT_0800b9e4;
  puVar1[1] = uVar3;
  puVar1[2] = uVar2;
  FUN_0800a57c();
  iVar4 = DAT_0800b9f0;
  FUN_0801464c(DAT_0800b9ec);
  FUN_0800fe06();
  *_DAT_0800b9f4 = 0;
  FUN_0800b96c();
  FUN_0800b974();
  FUN_0800b95e();
  FUN_0800b968();
  FUN_0800b974();
  FUN_0800b95e();
  FUN_0800b968();
  FUN_0800b974();
  iVar5 = *(int *)(iVar4 + 0x3c);
  iVar4 = *(int *)(iVar4 + 0x38);
  local_28[0] = iVar5;
  FUN_08014fe4(iVar4,local_28);
  *(int *)(iVar4 + 0x18) = iVar5 << 0x10;
  FUN_080121ca();
  return;
}



/* FUN_0800b956 at 0800b956 */

void FUN_0800b956(void)

{
  FUN_0800de78();
  return;
}



/* FUN_0800b958 at 0800b958 */

void FUN_0800b958(void)

{
  FUN_0800de78();
  return;
}



/* FUN_0800b95e at 0800b95e */

void FUN_0800b95e(void)

{
  FUN_08014fe4();
  return;
}



/* FUN_0800b968 at 0800b968 */

void FUN_0800b968(void)

{
  int unaff_r5;
  int unaff_r6;
  
  *(int *)(unaff_r6 + 0x18) = unaff_r5 << 0x10;
  FUN_08012510();
  return;
}



/* FUN_0800b96c at 0800b96c */

void FUN_0800b96c(void)

{
  FUN_08012510();
  return;
}



/* FUN_0800b974 at 0800b974 */

void FUN_0800b974(void)

{
  return;
}



/* FUN_0800b982 at 0800b982 */

void FUN_0800b982(void)

{
  undefined4 unaff_r7;
  
  if (*DAT_0800b9b8 < 6) {
    FUN_080135d8();
  }
  FUN_08012e8c(DAT_0800b9ac,0);
  FUN_08013628();
  FUN_08015310();
  FUN_0800b806(0,unaff_r7);
  return;
}



/* FUN_0800bb0c at 0800bb0c */

undefined4 FUN_0800bb0c(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0800bc8c;
  while( true ) {
    if (*param_1 == '\0') break;
    FUN_0800de78(uVar1,*param_1);
    param_1 = param_1 + 1;
  }
  return param_4;
}



/* FUN_0800bb28 at 0800bb28 */

void FUN_0800bb28(void)

{
  FUN_0800bb74();
  FUN_0800bf6c(DAT_0800bc8c);
  return;
}



/* FUN_0800bb3a at 0800bb3a */

void FUN_0800bb3a(void)

{
  undefined1 unaff_r4;
  
  FUN_0800bb74();
  FUN_0800de78(DAT_0800bc8c,unaff_r4);
  return;
}



/* FUN_0800bb4c at 0800bb4c */

void FUN_0800bb4c(void)

{
  FUN_0800bb74();
  FUN_0800bf72(DAT_0800bc8c);
  return;
}



/* FUN_0800bb60 at 0800bb60 */

void FUN_0800bb60(void)

{
  FUN_0800bb74();
  FUN_0800bf84(DAT_0800bc8c);
  return;
}



/* FUN_0800bb74 at 0800bb74 */

void FUN_0800bb74(void)

{
  FUN_0800bb0c();
  return;
}



/* FUN_0800bb78 at 0800bb78 */

void FUN_0800bb78(void)

{
  undefined4 uVar1;
  undefined4 unaff_r7;
  
  FUN_0800bb0c();
  uVar1 = FUN_0800bca0();
  FUN_0800bfd0(uVar1,DAT_0800bc8c,2,unaff_r7);
  return;
}



/* FUN_0800bb9e at 0800bb9e */

void FUN_0800bb9e(undefined4 param_1,undefined4 param_2)

{
  undefined4 unaff_r7;
  
  FUN_0800bb0c();
  FUN_0800bfd0(param_1,param_2,DAT_0800bc8c,2,unaff_r7);
  return;
}



/* FUN_0800bbc8 at 0800bbc8 */

void FUN_0800bbc8(void)

{
  FUN_0800bb74();
  FUN_0800bf76(DAT_0800bc8c);
  return;
}



/* FUN_0800bbdc at 0800bbdc */

void FUN_0800bbdc(void)

{
  FUN_0800bb74();
  FUN_0800bfc2(DAT_0800bc8c);
  return;
}



/* FUN_0800bbf0 at 0800bbf0 */

undefined4 FUN_0800bbf0(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 in_r3;
  
  FUN_0800eb6c();
  cVar2 = FUN_08012518();
  uVar1 = DAT_0800bc8c;
  while (cVar2 != '\0') {
    FUN_0800de78(uVar1,0x20);
    cVar2 = cVar2 + -1;
  }
  return in_r3;
}



/* FUN_0800bc14 at 0800bc14 */

void FUN_0800bc14(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_0800bb0c();
  uVar1 = DAT_0800bc8c;
  FUN_0800de78(DAT_0800bc8c,0x28);
  uVar2 = FUN_0800bca0();
  FUN_0800bfd0(uVar2,uVar1,2);
  FUN_0800bb78(&DAT_0800bc88);
  FUN_0800bb78(&DAT_0800bc88);
  FUN_0800de78(uVar1,0x29);
  if (param_2 != 0) {
    FUN_0800bb0c(param_2);
    return;
  }
  FUN_0800de78(uVar1,10);
  return;
}



/* thunk_FUN_0800bc92 at 0800bc90 */

void thunk_FUN_0800bc92(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  FUN_0800bc14(*param_3,param_3[1],param_3[2]);
  return;
}



/* FUN_0800bc92 at 0800bc92 */

void FUN_0800bc92(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  FUN_0800bc14(*param_3,param_3[1],param_3[2]);
  return;
}



/* FUN_0800bca0 at 0800bca0 */

longlong FUN_0800bca0(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (param_1 << 1) >> 0x18;
  if (uVar3 == 0) {
    uVar3 = param_1 & 0x80000000;
    iVar1 = param_1 << 8;
    if (iVar1 != 0) {
      uVar2 = iVar1 << LZCOUNT(iVar1);
      uVar3 = uVar3 + 0x38000000 + LZCOUNT(iVar1) * -0x100000 + (uVar2 >> 0xb);
      iVar1 = uVar2 << 0x15;
    }
    return CONCAT44(uVar3,iVar1);
  }
  if (uVar3 == 0xff) {
    if ((param_1 & 0x7fffff) == 0) {
      param_1 = param_1 | 0x700000;
    }
    else {
      param_1 = 0x7fffffff;
    }
    return (ulonglong)param_1 << 0x20;
  }
  return CONCAT44(((int)param_1 >> 3 & 0x8fffffffU) + 0x38000000,param_1 << 0x1d);
}



/* FUN_0800bce8 at 0800bce8 */

float FUN_0800bce8(float param_1)

{
  if (-1 < (int)((uint)(param_1 < 0.0) << 0x1f)) {
    return SQRT(param_1);
  }
  return NAN;
}



/* FUN_0800bd06 at 0800bd06 */

int * FUN_0800bd06(int *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  int unaff_r9;
  
  pbVar9 = (byte *)param_1[2];
  pbVar6 = (byte *)((int)param_1 + *param_1);
  uVar2 = param_1[1];
  pbVar7 = pbVar6;
  if ((int)(uVar2 << 0x1f) < 0) {
    pbVar9 = pbVar9 + unaff_r9;
  }
  while (pbVar7 != pbVar6 + (uVar2 >> 1)) {
    bVar1 = *pbVar7;
    uVar5 = bVar1 & 3;
    pbVar8 = pbVar7 + 1;
    if ((bVar1 & 3) == 0) {
      pbVar8 = pbVar7 + 2;
      uVar5 = pbVar7[1] + 3;
    }
    uVar4 = (uint)(bVar1 >> 4);
    if (uVar4 == 0xf) {
      uVar4 = *pbVar8 + 0xf;
      pbVar8 = pbVar8 + 1;
    }
    while (uVar5 = uVar5 - 1, uVar5 != 0) {
      *pbVar9 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 1;
    }
    pbVar7 = pbVar8;
    if (uVar4 != 0) {
      uVar5 = bVar1 >> 2 & 3;
      pbVar7 = pbVar8 + 1;
      if (uVar5 == 3) {
        pbVar7 = pbVar8 + 2;
        uVar5 = (uint)pbVar8[1];
      }
      pbVar8 = pbVar9 + -((uint)*pbVar8 + uVar5 * 0x100);
      for (iVar3 = uVar4 + 2; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pbVar9 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        pbVar9 = pbVar9 + 1;
      }
    }
  }
  return param_1 + 3;
}



/* FUN_0800bd80 at 0800bd80 */

longlong FUN_0800bd80(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  
  if (-1 < (int)(param_2 ^ param_4)) {
    uVar6 = param_1 - param_3;
    iVar11 = (param_2 - param_4) - (uint)(param_3 > param_1);
    if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
      bVar12 = param_1 < uVar6;
      param_1 = param_1 - uVar6;
      param_2 = (param_2 - iVar11) - (uint)bVar12;
      bVar12 = CARRY4(param_3,uVar6);
      param_3 = param_3 + uVar6;
      param_4 = param_4 + iVar11 + (uint)bVar12;
    }
    bVar12 = 0xffdfffff < param_2 << 1;
    if (!bVar12) {
      bVar12 = param_4 * 2 < 0x200000 || param_4 * -2 + 0x200000 < (uint)bVar12;
    }
    if (bVar12) {
      if (0xffdfffff < param_2 << 1) {
        return CONCAT44(param_2,param_1);
      }
      if (param_3 == 0 && (param_4 & 0x7fffffff) == 0) {
LAB_0800eec2:
        return CONCAT44(param_2,param_1);
      }
      if (param_2 * 2 < 0x200000) {
        bVar12 = CARRY4(param_1,param_3);
        param_1 = param_1 + param_3;
        param_2 = param_2 + (param_4 & 0x7fffffff) + (uint)bVar12;
        goto LAB_0800eec2;
      }
      param_4 = param_4 & 0x7fffffff;
      uVar6 = (param_2 >> 0x14) - 1;
      if (0x34 < (int)uVar6) goto LAB_0800eec2;
    }
    else {
      uVar6 = (param_2 >> 0x14) - (param_4 >> 0x14);
      if (0x35 < (int)uVar6) goto LAB_0800eec2;
      param_4 = (param_4 << 0xb | 0x80000000) >> 0xb;
    }
    uVar10 = (int)(param_2 << 0xb | 0x80000000) >> 0xb;
    uVar5 = uVar6 - 0x20;
    if (uVar5 == 0 || (int)uVar6 < 0x20) {
      uVar7 = param_3 >> (uVar6 & 0xff);
      uVar4 = (param_3 >> (uVar6 & 0x1f) | param_3 << 0x20 - (uVar6 & 0x1f)) ^ uVar7;
      uVar5 = param_4 >> (uVar6 & 0x1f) | param_4 << 0x20 - (uVar6 & 0x1f);
      uVar8 = (uVar5 << (uVar6 & 0xff)) >> (uVar6 & 0xff);
      uVar7 = uVar7 ^ uVar5 ^ uVar8;
      uVar6 = param_1 + uVar7;
      uVar5 = uVar10 + uVar8 + (uint)CARRY4(param_1,uVar7);
      if (!CARRY4(uVar10,uVar8) && !CARRY4(uVar10 + uVar8,(uint)CARRY4(param_1,uVar7)))
      goto LAB_0800ee78;
    }
    else {
      uVar7 = param_4 >> (uVar5 & 0xff);
      uVar4 = (param_4 >> (uVar5 & 0x1f) | param_4 << 0x20 - (uVar5 & 0x1f)) ^ uVar7;
      if (param_3 != 0) {
        uVar4 = uVar4 | 1;
      }
      uVar6 = param_1 + uVar7;
      uVar5 = uVar10 + CARRY4(param_1,uVar7);
      if (!CARRY4(uVar10,(uint)CARRY4(param_1,uVar7))) goto LAB_0800ee78;
    }
    uVar10 = uVar5 & 1;
    uVar5 = uVar5 >> 1;
    bVar2 = (byte)uVar6;
    uVar6 = (uint)(uVar10 != 0) << 0x1f | uVar6 >> 1;
    uVar10 = uVar4 & 1;
    uVar4 = (uint)(bVar2 & 1) << 0x1f | uVar4 >> 1;
    if (uVar10 != 0) {
      uVar4 = uVar4 | 1;
    }
LAB_0800ee78:
    bVar12 = 0x80000000 < uVar4 || uVar4 + 0x80000000 < (uint)((uVar6 & 1) != 0);
    uVar10 = uVar5 + 0x100000 + (param_2 & 0xfff00000) + (uint)CARRY4(uVar6,(uint)bVar12);
    if (0xffdfffff < uVar10 * 2) {
      return (ulonglong)(uVar10 & 0xfff00000) << 0x20;
    }
    return CONCAT44(uVar10,uVar6 + bVar12);
  }
  param_4 = param_4 ^ 0x80000000;
  uVar6 = param_1 - param_3;
  if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
    uVar10 = (param_2 - param_4) - (uint)(param_3 > param_1) ^ 0x80000000;
    bVar12 = param_1 < uVar6;
    param_1 = param_1 - uVar6;
    param_2 = (param_2 - uVar10) - (uint)bVar12;
    bVar12 = CARRY4(param_3,uVar6);
    param_3 = param_3 + uVar6;
    param_4 = param_4 + uVar10 + (uint)bVar12;
  }
  bVar12 = 0xffdfffff < param_2 << 1;
  if (!bVar12) {
    bVar12 = param_4 * 2 < 0x200000 || param_4 * -2 + 0x200000 < (uint)bVar12;
  }
  if (bVar12) {
    bVar12 = 0xffdfffff < param_2 * 2;
    if (bVar12) {
      if (param_2 * 2 == 0xffe00000) {
        bVar12 = 0xffdfffff < param_4 << 1;
      }
      if (bVar12) {
        param_2 = 0xffffffff;
      }
      goto LAB_0800beb4;
    }
    uVar5 = param_4 & 0x7fffffff;
    if (param_3 != 0 || (param_4 & 0x7fffffff) != 0) {
      if (0x3fffff < param_2 * 2) {
        uVar10 = (param_2 >> 0x14) - 1;
        if (0x34 < (int)uVar10) goto LAB_0800beb4;
        goto LAB_0800be4a;
      }
      bVar12 = param_1 < param_3;
      param_1 = param_1 - param_3;
      param_2 = (param_2 - uVar5) - (uint)bVar12;
    }
    if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
      param_2 = 0;
    }
  }
  else {
    uVar6 = param_2 >> 0x14;
    uVar10 = uVar6 - (param_4 >> 0x14);
    if (0x36 < (int)uVar10) goto LAB_0800beb4;
    uVar5 = param_4 << 0xb | 0x80000000;
    if ((int)uVar10 < 2) {
      uVar5 = uVar5 | param_3 >> 0x15;
      if (uVar10 == 1) {
        param_3 = param_3 << 10;
        uVar5 = uVar5 >> 1;
      }
      else {
        param_3 = param_3 << 0xb;
      }
      uVar7 = param_1 >> 0x15;
      uVar10 = param_1 * 0x800;
      param_1 = uVar10 - param_3;
      param_2 = ((param_2 << 0xb | 0x80000000 | uVar7) - uVar5) - (uint)(uVar10 < param_3);
      uVar10 = uVar6 << 0x14;
      if (-1 < (int)param_2) {
        if (param_2 == 0) {
          iVar11 = LZCOUNT(param_1);
          param_2 = param_1 << iVar11;
          if (param_2 == 0) goto LAB_0800beb4;
          param_1 = 0;
          iVar11 = iVar11 + 0x20;
        }
        else {
          iVar11 = LZCOUNT(param_2);
          param_2 = param_2 << iVar11 | param_1 >> (0x20U - iVar11 & 0xff);
          param_1 = param_1 << iVar11;
        }
        iVar3 = (int)(uVar6 << 0x14) >> 0x1f;
        uVar5 = -iVar3 | uVar6 << 0x15;
        uVar10 = uVar5 + iVar11 * -0x200000;
        uVar7 = uVar10 & 0xfffffffe;
        uVar6 = iVar3 * -0x80000000;
        uVar10 = uVar10 >> 1 | uVar6;
        if (uVar5 < (uint)(iVar11 * 0x200000) || uVar7 == 0) {
          uVar7 = 0x200000 - uVar7 >> 0x15;
          uVar10 = param_2 >> (uVar7 & 0x1f);
          uVar5 = param_2 << 0x20 - (uVar7 & 0x1f);
          param_2 = param_2 >> (uVar7 & 0xff);
          param_1 = param_1 >> (uVar7 & 0xff) ^ (uVar10 | uVar5) ^ param_2;
          uVar10 = uVar6;
        }
      }
      uVar6 = param_1 >> 0xb | param_2 << 0x15;
      bVar12 = (param_1 >> 10 & 1) != 0 && (param_1 >> 0xb & 1) != 0;
      param_1 = uVar6 + bVar12;
      param_2 = uVar10 + ((param_2 & 0x7fffffff) >> 0xb) + (uint)CARRY4(uVar6,(uint)bVar12);
      goto LAB_0800beb4;
    }
    uVar5 = uVar5 >> 0xb;
LAB_0800be4a:
    uVar7 = param_2 >> 0x14;
    uVar6 = (param_2 << 0xb | 0x80000000) >> 0xb;
    uVar8 = uVar10 - 0x20;
    if (uVar8 == 0 || (int)uVar10 < 0x20) {
      uVar8 = param_3 >> (uVar10 & 0xff);
      uVar9 = (param_3 >> (uVar10 & 0x1f) | param_3 << 0x20 - (uVar10 & 0x1f)) ^ uVar8;
      uVar4 = uVar5 >> (uVar10 & 0xff);
      uVar5 = uVar8 ^ (uVar5 >> (uVar10 & 0x1f) | uVar5 << 0x20 - (uVar10 & 0x1f)) ^ uVar4;
      uVar10 = (param_1 - uVar5) - (uint)(uVar9 != 0);
      uVar6 = (uVar6 - uVar4) - (uint)(param_1 <= uVar5 && (uint)(uVar9 == 0) <= param_1 - uVar5);
    }
    else {
      uVar4 = uVar5 >> (uVar8 & 0xff);
      uVar9 = (param_3 | param_3 << 0x10) >> 0x10 | uVar5 << (0x20 - uVar8 & 0xff);
      uVar10 = (param_1 - uVar4) - (uint)(uVar9 != 0);
      uVar6 = uVar6 - (param_1 <= uVar4 && (uint)(uVar9 == 0) <= param_1 - uVar4);
    }
    uVar5 = -uVar9;
    if (((uVar6 & 0x100000) == 0) && (uVar7 = uVar7 - 1, (uVar7 & 0x7ff) != 0)) {
      bVar1 = (uVar5 & 0x80000000) != 0;
      uVar5 = uVar9 * -2;
      uVar8 = uVar10 * 2;
      bVar12 = CARRY4(uVar10,uVar10);
      uVar10 = uVar10 * 2 + (uint)bVar1;
      uVar6 = uVar6 * 2 + (uint)(bVar12 || CARRY4(uVar8,(uint)bVar1));
    }
    bVar12 = 0x80000000 < uVar5 || uVar5 + 0x80000000 < (uint)((uVar10 & 1) != 0);
    param_1 = uVar10 + bVar12;
    param_2 = (uVar6 & 0xffefffff) + uVar7 * 0x100000 + (uint)CARRY4(uVar10,(uint)bVar12);
  }
LAB_0800beb4:
  return CONCAT44(param_2,param_1);
}



/* FUN_0800bef8 at 0800bef8 */

ulonglong FUN_0800bef8(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  
  uVar6 = param_2 & 0x80000000;
  uVar1 = (param_2 - uVar6) + 0xc8000000;
  if ((int)uVar1 < 0x100000) {
    uVar2 = 9 - ((int)uVar1 >> 0x14);
    if (uVar2 < 0x21) {
      uVar3 = param_2 * 0x400 | param_1 >> 0x16;
      bVar8 = (param_1 & 0x3fffff) != 0;
      bVar7 = CARRY4(uVar3 * 2,(uint)bVar8);
      uVar4 = uVar3 * 2 + (uint)bVar8 | 0x80000000;
      uVar1 = 0x20 - uVar2 & 0xff;
      bVar8 = (uVar4 << uVar1 - 1 & 0x80000000) != 0;
      uVar5 = uVar4 << uVar1;
      return CONCAT44((uVar5 + 0x80000000) -
                      (uint)((uVar1 != 0 || !CARRY4(uVar3,uVar3) && !bVar7) &&
                            (uVar1 == 0 || !bVar8)),
                      (uVar4 >> (uVar2 & 0xff)) + uVar6 +
                      (uint)(0x80000000 < uVar5 ||
                            uVar5 + 0x80000000 <
                            (uint)(uVar1 == 0 && (CARRY4(uVar3,uVar3) || bVar7) ||
                                  uVar1 != 0 && bVar8)));
    }
    return CONCAT44(uVar1,param_2) & 0xffffffff80000000;
  }
  if (uVar1 < 0xff00000) {
    bVar7 = (param_1 & 0x20000000) != 0;
    uVar2 = param_1 * 8;
    return CONCAT44((uVar2 + 0x80000000) - (uint)!bVar7,
                    (uVar6 | uVar1 * 8) +
                    (param_1 >> 0x1d) +
                    (uint)(0x80000000 < uVar2 || uVar2 + 0x80000000 < (uint)bVar7));
  }
  uVar2 = 0xffffffff;
  bVar7 = -1 < (int)((param_2 - uVar6) + 0xfffff);
  if (bVar7) {
    uVar2 = 0xff;
  }
  if (bVar7) {
    uVar2 = uVar6 | uVar2 << 0x17;
  }
  return CONCAT44(uVar1,uVar2);
}



/* FUN_0800bf60 at 0800bf60 */

void FUN_0800bf60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0800bfc2(param_1,param_2,param_2,0,param_3);
  return;
}



/* FUN_0800bf64 at 0800bf64 */

void FUN_0800bf64(undefined4 *param_1,undefined1 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0800bf6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,param_2);
  return;
}



/* FUN_0800bf6c at 0800bf6c */

void FUN_0800bf6c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0800bf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}



/* FUN_0800bf72 at 0800bf72 */

void FUN_0800bf72(undefined4 param_1,int param_2,undefined4 param_3)

{
  FUN_0800bf96(param_1,param_2,param_2,param_2 >> 0x1f,param_3);
  return;
}



/* FUN_0800bf76 at 0800bf76 */

void FUN_0800bf76(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0800bfc2(param_1,param_2,param_2,0,param_3);
  return;
}



/* FUN_0800bf84 at 0800bf84 */

void FUN_0800bf84(undefined4 param_1,int param_2,undefined4 param_3)

{
  FUN_0800bf96(param_1,param_2,param_2,param_2 >> 0x1f,param_3);
  return;
}



/* FUN_0800bf96 at 0800bf96 */

void FUN_0800bf96(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined1 param_5)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  bool bVar2;
  
  uVar1 = 0;
  if (param_4 < 0) {
    FUN_0800bf64(param_1,0x2d,param_3,param_4,param_3,param_4);
    bVar2 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -param_4 - (uint)bVar2;
    uVar1 = extraout_r1;
  }
  FUN_0800c030(param_1,uVar1,param_3,param_4,param_5);
  return;
}



/* FUN_0800bfc2 at 0800bfc2 */

void FUN_0800bfc2(void)

{
  FUN_0800c030();
  return;
}



/* FUN_0800bfd0 at 0800bfd0 */

void FUN_0800bfd0(undefined4 param_1,undefined1 param_2)

{
  FUN_0800c0a8(param_1,param_2);
  return;
}



/* FUN_0800bfd4 at 0800bfd4 */

undefined8 FUN_0800bfd4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0800bf64(param_1,0xd);
  iVar2 = FUN_0800bf64(param_1,10);
  return CONCAT44(param_4,iVar2 + iVar1);
}



/* FUN_0800bfec at 0800bfec */

undefined8 FUN_0800bfec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0800bf6c();
  iVar2 = FUN_0800bfd4(param_1);
  return CONCAT44(param_4,iVar2 + iVar1);
}



/* FUN_0800bff0 at 0800bff0 */

undefined8 FUN_0800bff0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0800bf72();
  iVar2 = FUN_0800bfd4(param_1);
  return CONCAT44(param_4,iVar2 + iVar1);
}



/* FUN_0800bffa at 0800bffa */

undefined8 FUN_0800bffa(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0800bf76();
  iVar2 = FUN_0800bfd4(param_1);
  return CONCAT44(param_4,iVar2 + iVar1);
}



/* FUN_0800c004 at 0800c004 */

undefined8 FUN_0800c004(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0800bf96(param_1,param_2,param_2,param_2 >> 0x1f);
  iVar2 = FUN_0800bfd4(param_1);
  return CONCAT44(param_3,iVar2 + iVar1);
}



/* FUN_0800c014 at 0800c014 */

undefined8 FUN_0800c014(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0800bfd0();
  iVar2 = FUN_0800bfd4(param_1);
  return CONCAT44(param_4,iVar2 + iVar1);
}



/* FUN_0800c030 at 0800c030 */

int FUN_0800c030(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  byte abStack_69 [65];
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  
  lVar8 = CONCAT44(param_4,param_3);
  iVar5 = 0;
  iVar6 = 0;
  uStack_28 = param_2;
  iStack_24 = param_3;
  iStack_20 = param_4;
  if (param_4 == 0 && param_3 == 0) {
    FUN_0800bf64(param_1,0x30);
    iVar6 = 1;
  }
  else {
    do {
      uVar7 = (undefined4)((ulonglong)lVar8 >> 0x20);
      uVar4 = param_5;
      FUN_080155bc((int)lVar8,uVar7,param_5,0);
      abStack_69[iVar5 + 1] = (byte)uVar4;
      iVar5 = iVar5 + 1;
      lVar8 = FUN_080155bc((int)lVar8,uVar7,param_5,0);
    } while (lVar8 != 0);
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      bVar1 = abStack_69[iVar5];
      if (bVar1 < 10) {
        cVar3 = bVar1 + 0x30;
      }
      else {
        cVar3 = bVar1 + 0x37;
      }
      iVar2 = FUN_0800bf64(param_1,(int)cVar3);
      iVar6 = iVar6 + iVar2;
    }
  }
  return iVar6;
}



/* FUN_0800c0a8 at 0800c0a8 */

int FUN_0800c0a8(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  char in_CY;
  undefined1 uVar7;
  undefined4 extraout_s0;
  undefined8 in_d0;
  uint extraout_s1;
  undefined8 uVar8;
  undefined8 uVar9;
  
  iVar6 = 0;
  uVar7 = 1;
  uVar4 = (uint)((ulonglong)in_d0 >> 0x20);
  uVar8 = FUN_080157ec();
  uVar2 = extraout_s0;
  uVar3 = extraout_s1;
  if (in_CY != '\0') {
    uVar3 = (uint)((ulonglong)uVar8 >> 0x20) ^ 0x80000000;
    uVar2 = (int)uVar8;
  }
  FUN_080157ec(uVar2,uVar3,DAT_0800c1d0,DAT_0800c1d4);
  if ((bool)in_CY && !(bool)uVar7) {
    FUN_0801581c();
    if (in_CY == '\0') {
      iVar6 = FUN_0800bf64(param_1,0x2d);
      uVar4 = uVar4 ^ 0x80000000;
    }
    bVar5 = 0;
    uVar8 = DAT_0800c1d8;
    while( true ) {
      uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if (param_2 <= bVar5) break;
      uVar8 = FUN_0800eb88((int)uVar8,uVar2,0,DAT_0800c1e4);
      bVar5 = bVar5 + 1;
    }
    FUN_0800bd80((int)uVar8,uVar2,(int)in_d0,uVar4);
    uVar9 = FUN_0801584c();
    FUN_080158a8();
    uVar8 = FUN_0800c1e8();
    iVar1 = FUN_0800bf96(param_1,(int)((ulonglong)uVar8 >> 0x20),(int)uVar9,
                         (int)((ulonglong)uVar9 >> 0x20),10);
    iVar1 = iVar1 + iVar6;
    if (param_2 != 0) {
      iVar6 = FUN_0800bf6c(param_1,&DAT_0800c1e0);
      iVar1 = iVar6 + iVar1;
    }
    while( true ) {
      if ((param_2 & 0xff) == 0) break;
      FUN_0800c284((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0,DAT_0800c1e4);
      uVar2 = FUN_08012518();
      iVar6 = FUN_0800bf72(param_1,uVar2,10);
      iVar1 = iVar6 + iVar1;
      FUN_0800eecc(uVar2);
      uVar8 = FUN_0800c1e8();
      param_2 = param_2 - 1;
    }
  }
  else {
    FUN_0801581c();
    if (in_CY == '\0') {
      iVar6 = FUN_0800bf64(param_1,0x2d);
    }
    iVar1 = FUN_0800bf6c(param_1,s_<large_double>_0800c1f4);
    iVar1 = iVar1 + iVar6;
  }
  return iVar1;
}



/* FUN_0800c1e8 at 0800c1e8 */

void FUN_0800c1e8(void)

{
  FUN_0800ede8();
  return;
}



/* FUN_0800c204 at 0800c204 */

undefined4 FUN_0800c204(void)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 in_r3;
  char *pcVar4;
  undefined8 uVar5;
  
  puVar2 = DAT_0800c254;
  pcVar3 = (char *)*DAT_0800c254;
  pcVar4 = pcVar3;
  if (pcVar3 == (char *)0x0) {
    return in_r3;
  }
  for (; (cVar1 = *pcVar4, cVar1 != '\0' && (cVar1 != ' ')); pcVar4 = pcVar4 + 1) {
    if (cVar1 == 'E' || cVar1 == 'e') {
      *pcVar4 = '\0';
      uVar5 = FUN_08015900(*puVar2,0);
      *pcVar4 = cVar1;
      goto LAB_0800c230;
    }
  }
  uVar5 = FUN_08015900(pcVar3,0);
LAB_0800c230:
  FUN_0800bef8((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
  return in_r3;
}



/* FUN_0800c258 at 0800c258 */

undefined4 FUN_0800c258(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0800c268(param_1);
  return uVar1;
}



/* FUN_0800c268 at 0800c268 */

uint FUN_0800c268(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (param_1 << 1) >> 0x18;
  uVar2 = uVar1 - 0x7e;
  if (uVar2 == 0 || uVar1 < 0x7e) {
    param_1 = param_1 & 0x80000000;
  }
  else if ((int)uVar2 < 0x18) {
    return param_1 & ~(0xffffffU >> (uVar2 & 0xff));
  }
  return param_1;
}



/* FUN_0800c284 at 0800c284 */

longlong FUN_0800c284(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint unaff_r7;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  
  uVar11 = (param_2 ^ param_4) & 0x80000000;
  uVar7 = param_2 >> 0x14 & 0x7ff;
  bVar12 = uVar7 == 0;
  if (!bVar12) {
    unaff_r7 = param_4 >> 0x14 & 0x7ff;
    bVar12 = unaff_r7 == 0;
  }
  if (!bVar12) {
    bVar12 = uVar7 == 0x7ff;
  }
  if (!bVar12) {
    bVar12 = unaff_r7 == 0x7ff;
  }
  if (bVar12) {
    uVar9 = param_4 >> 0x14 & 0x7ff;
    if (uVar7 == 0x7ff || uVar9 == 0x7ff) {
      bVar12 = (param_2 & 0x7fffffff) == 0;
      bVar13 = param_1 == 0 && bVar12;
      if (param_1 != 0 || !bVar12) {
        bVar13 = param_3 == 0 && (param_4 & 0x7fffffff) == 0;
      }
      if (bVar13) {
        param_2 = 0xffffffff;
      }
      uVar7 = param_4 * 2;
      if (uVar7 < 0xffe00001) {
        uVar7 = param_2 * 2;
        param_4 = param_2;
      }
      if (uVar7 < 0xffe00001) {
        return (ulonglong)(uVar11 | 0x7ff00000) << 0x20;
      }
      goto LAB_0800c332;
    }
    bVar13 = (param_2 & 0x7fffffff) == 0;
    bVar12 = param_1 == 0 && bVar13;
    if (param_1 != 0 || !bVar13) {
      bVar12 = param_3 == 0 && (param_4 & 0x7fffffff) == 0;
    }
    if (!bVar12) {
      if (uVar7 != 0) {
        param_4 = param_4 & 0x7fffffff;
        iVar8 = LZCOUNT(param_4);
        if (param_4 == 0) {
          iVar8 = iVar8 + LZCOUNT(param_3);
        }
        uVar5 = iVar8 - 0xb;
        if (uVar5 < 0x20) {
          uVar3 = param_4 << (uVar5 & 0xff) | param_3 >> (0x20 - uVar5 & 0xff);
        }
        else {
          uVar3 = param_3 << (iVar8 - 0x2bU & 0xff);
        }
        param_3 = param_3 << (uVar5 & 0xff);
        iVar8 = ((uVar7 + uVar9) - uVar5) + 1;
        goto LAB_0800c2ac;
      }
      if (uVar9 != 0) {
        uVar7 = param_2 << 0xc;
        uVar3 = param_1;
        if (param_2 << 0xc == 0) {
          uVar3 = 0;
          uVar9 = uVar9 - 0x14;
          uVar7 = param_1;
        }
        iVar10 = LZCOUNT(uVar7);
        iVar8 = uVar9 - iVar10;
        param_1 = uVar3 << iVar10 + 0xc;
        uVar7 = uVar7 << iVar10 | uVar3 >> (0x20U - (iVar10 + 0xc) & 0xff);
        uVar3 = param_4 & 0x1fffff | 0x100000;
        goto LAB_0800c2b8;
      }
    }
  }
  else {
    iVar8 = uVar7 + unaff_r7;
    uVar3 = param_4 & 0x1fffff | 0x100000;
LAB_0800c2ac:
    uVar7 = param_2 << 0xb | 0x80000000 | param_1 >> 0x15;
    param_1 = param_1 << 0xb;
LAB_0800c2b8:
    uVar1 = (ulonglong)uVar7 * (ulonglong)param_3 +
            ((ulonglong)param_1 * (ulonglong)param_3 >> 0x20);
    uVar9 = (uint)(uVar1 >> 0x20);
    lVar2 = (ulonglong)uVar3 * (ulonglong)param_1 + (uVar1 & 0xffffffff);
    uVar6 = (uint)lVar2;
    uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
    if ((int)((ulonglong)param_1 * (ulonglong)param_3) != 0) {
      uVar6 = uVar6 | 1;
    }
    uVar1 = (ulonglong)uVar3 * (ulonglong)uVar7 +
            (ulonglong)CONCAT14(CARRY4(uVar9,uVar5),uVar9 + uVar5);
    uVar7 = (uint)uVar1;
    uVar3 = (uint)(uVar1 >> 0x20);
    bVar12 = (uVar1 & 0x10000000000000) != 0;
    if (!bVar12) {
      bVar13 = (uVar6 & 0x80000000) != 0;
      uVar6 = uVar6 << 1;
      bVar14 = CARRY4(uVar7,uVar7) || CARRY4(uVar7 * 2,(uint)bVar13);
      bVar12 = CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)bVar14);
      uVar1 = CONCAT44(uVar3 * 2 + (uint)bVar14,uVar7 * 2 + (uint)bVar13);
    }
    uVar3 = (uint)(uVar1 >> 0x20);
    uVar7 = (uint)uVar1;
    iVar10 = iVar8 + -0x3ff + (uint)bVar12;
    if (iVar10 != 0 &&
        iVar10 < 0 == (SCARRY4(iVar8 + -0x400,1) != SCARRY4(iVar8 + -0x3ff,(uint)bVar12))) {
      bVar12 = 0x80000000 < uVar6 || uVar6 + 0x80000000 < (uint)((uVar1 & 1) != 0);
      iVar8 = uVar3 + iVar10 * 0x100000 + (uint)CARRY4(uVar7,(uint)bVar12);
      if (iVar8 < 0) {
        return (ulonglong)(uVar11 | 0x7ff00000) << 0x20;
      }
      return CONCAT44(iVar8 - 0x100000U | uVar11,uVar7 + bVar12);
    }
    uVar9 = -iVar10 + 1;
    uVar5 = -iVar10 - 0x1f;
    if ((int)uVar9 < 0x20) {
      bVar12 = (uVar6 & 1) != 0;
      uVar6 = uVar6 >> 1;
      if (bVar12) {
        uVar6 = uVar6 | 1;
      }
      uVar5 = 0x20 - uVar9 & 0xff;
      bVar12 = uVar5 == 0 && bVar12 || uVar5 != 0 && (uVar7 << uVar5 - 1 & 0x80000000) != 0;
      uVar6 = uVar6 | uVar7 << uVar5;
      uVar4 = uVar7 >> (uVar9 & 0xff) | uVar3 << (0x20 - uVar9 & 0xff);
      uVar3 = uVar3 >> (uVar9 & 0xff);
LAB_0800c418:
      bVar12 = 0x80000000 < uVar6 || uVar6 + 0x80000000 < (uint)bVar12;
      return CONCAT44(uVar3 + uVar11 + CARRY4(uVar4,(uint)bVar12),uVar4 + bVar12);
    }
    if ((int)uVar9 < 0x36) {
      uVar7 = uVar7 >> (uVar5 & 0xff);
      if (uVar6 != 0 || (uVar1 & 0x7fffffff) != 0) {
        uVar7 = uVar7 | 1;
      }
      uVar6 = uVar5 & 0xff;
      uVar4 = uVar3 >> uVar6;
      uVar9 = 0x20 - uVar5 & 0xff;
      bVar12 = uVar9 == 0 &&
               (uVar6 == 0 && (bool)((byte)(uVar1 >> 0x18) >> 7) ||
               uVar6 != 0 && (uVar3 >> uVar6 - 1 & 1) != 0) ||
               uVar9 != 0 && (uVar3 << uVar9 - 1 & 0x80000000) != 0;
      uVar6 = uVar7 | uVar3 << uVar9;
      uVar3 = 0;
      goto LAB_0800c418;
    }
  }
  param_1 = 0;
  param_4 = uVar11;
LAB_0800c332:
  return CONCAT44(param_4,param_1);
}



/* FUN_0800c804 at 0800c804 */

/* WARNING: Removing unreachable block (ram,0x0800c442) */
/* WARNING: Removing unreachable block (ram,0x0800c440) */
/* WARNING: Removing unreachable block (ram,0x0800c786) */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0800c804(float param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  undefined4 in_r3;
  bool bVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int local_20 [2];
  
  bVar4 = (int)param_2 << 1 == 0;
  if (!bVar4) {
    in_fpscr = in_fpscr & 0xfffffff | (uint)(param_1 == 1.0) << 0x1e;
    bVar4 = SUB41(in_fpscr >> 0x1e,0);
  }
  if (bVar4 == false) {
    uVar5 = in_fpscr & 0xfffffff | (uint)(param_1 == -1.0) << 0x1e;
    if ((((byte)(uVar5 >> 0x1e) == 0) || (((int)param_2 << 1) >> 0x18 != -1)) ||
       (((uint)param_2 & 0x7fffff) != 0)) {
      if (((((int)param_1 << 1) >> 0x18 == -1) || (ABS(param_1) == 0.0)) ||
         (((int)param_2 << 1) >> 0x18 == -1)) {
        if ((((((int)param_1 << 1) >> 0x18 != -1) || (((uint)param_1 & 0x7fffff) == 0)) &&
            ((((int)param_2 << 1) >> 0x18 != -1 || (((uint)param_2 & 0x7fffff) == 0)))) &&
           (((((((int)param_1 << 1) >> 0x18 != -1 || (((uint)param_1 & 0x7fffff) != 0)) &&
              (((int)param_2 << 1) >> 0x18 == -1)) &&
             ((((uint)param_2 & 0x7fffff) == 0 && ((uint)ABS(param_1) < 0x800000)))) &&
            (local_20[0] = 0, ABS(param_1) != 0.0)))) {
          FUN_08015908(local_20);
        }
      }
      else {
        fVar3 = param_2;
        if ((int)param_2 << 1 != 0) {
          iVar1 = -((uint)((int)param_2 << 1) >> 0x18);
          uVar2 = iVar1 + 0x96;
          if (0x17 < (int)uVar2) {
            fVar3 = (float)((uint)param_2 & 0x80000000);
          }
          if ((iVar1 + 0x7e < 0 != SBORROW4(uVar2,0x18)) && (0 < (int)uVar2)) {
            fVar3 = (float)(((uint)fVar3 >> (uVar2 & 0xff)) << (uVar2 & 0xff));
          }
        }
        bVar4 = -1 < (int)param_1;
        if (!bVar4) {
          uVar5 = in_fpscr & 0xfffffff | (uint)(param_2 == fVar3) << 0x1e;
          bVar4 = SUB41(uVar5 >> 0x1e,0);
        }
        if (bVar4 != false) {
          fVar3 = ABS(param_1);
          if ((uint)fVar3 < 0x800000) {
            local_20[0] = 0;
            if (fVar3 != 0.0) {
              param_1 = (float)FUN_08015908(local_20);
            }
          }
          else {
            local_20[0] = ((uint)fVar3 >> 0x17) - 0x7e;
            param_1 = (float)((uint)param_1 & 0x807fffff | 0x3f000000);
          }
          if ((int)param_1 < 0) {
            param_1 = ABS(param_1);
            uVar5 = uVar5 & 0xfffffff;
          }
          if (param_1 < DAT_0800c7e4) {
            local_20[0] = local_20[0] + -1;
            param_1 = param_1 * 2.0;
          }
          fVar6 = param_1 + -1.0;
          fVar3 = fVar6 / (param_1 + 1.0);
          fVar7 = fVar3 * fVar3;
          fVar6 = fVar6 + ((DAT_0800c7f0 + (DAT_0800c7ec + fVar7 * DAT_0800c7e8) * fVar7) * fVar7 -
                          fVar6) * fVar3;
          fVar3 = (float)VectorSignedToFloat(local_20[0],(byte)((uVar5 & 0xfffffff) >> 0x15) & 3);
          fVar7 = (fVar3 + fVar6 * DAT_0800c7f4) * param_2;
          if ((DAT_0800c7f8 <= fVar7) && (fVar7 < DAT_0800c7fc != (NAN(fVar7) || NAN(DAT_0800c7fc)))
             ) {
            if ((int)fVar7 < 0) {
              fVar8 = -0.5;
            }
            else {
              fVar8 = 0.5;
            }
            fVar9 = (float)VectorSignedToFloat((int)(fVar7 + fVar8),
                                               (byte)((uVar5 & 0xfffffff) >> 0x15) & 3);
            FUN_08015950(fVar6 * param_2 + (fVar3 * param_2 - fVar9) * DAT_0800c800,0x3f800000,
                         (int)(fVar7 + fVar8));
          }
        }
      }
    }
  }
  return in_r3;
}



/* FUN_0800c808 at 0800c808 */

undefined8 FUN_0800c808(void)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  puVar1 = DAT_0800d450;
  local_14 = DAT_0800d450[1];
  local_18 = *DAT_0800d450;
  bVar3 = 0;
  local_10 = DAT_0800d450[2];
  FUN_08011194();
  FUN_08010774();
  do {
    FUN_0800ac98((int)(char)bVar3);
    bVar3 = bVar3 + 1;
  } while (bVar3 < 3);
  FUN_0800e500(*(undefined4 *)(DAT_0800d454 + 4),0);
  FUN_08010172();
  FUN_080111ec();
  iVar2 = FUN_08015bc8(&local_18,puVar1,0xc);
  if (iVar2 != 0) {
    FUN_0800a500();
  }
  return CONCAT44(local_14,local_18);
}



/* FUN_0800c85c at 0800c85c */

longlong FUN_0800c85c(int param_1)

{
  uint unaff_r7;
  
  if (param_1 != 0x1d2) {
    FUN_0800bb0c(DAT_0800d5dc);
    FUN_0800bb0c(s_EEPROM_datasize_error__0800c87c);
    return CONCAT44(unaff_r7,1);
  }
  return (ulonglong)unaff_r7 << 0x20;
}



/* FUN_0800c894 at 0800c894 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0800c894(void)

{
  byte *pbVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  char cVar12;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  uint local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined2 local_3c [2];
  undefined1 auStack_38 [24];
  
  pbVar1 = DAT_0800d454;
  local_48 = 0;
  *DAT_0800d454 = 0;
  local_58 = 0;
  local_50 = 6;
  local_54 = 1;
  uVar7 = FUN_0800cc8c(1,&local_54,1,&local_58);
  uVar7 = FUN_0800cc8c(uVar7,DAT_0800d458,0x10,&local_58);
  uVar7 = FUN_0800cc8c(uVar7,DAT_0800d45c,0x10,&local_58);
  uVar7 = FUN_0800cc8c(uVar7,DAT_0800d460,0x10,&local_58);
  uVar7 = FUN_0800cc8c(uVar7,DAT_0800d464,4,&local_58);
  uVar7 = FUN_0800cc8c(uVar7,DAT_0800d468,4,&local_58);
  uVar7 = FUN_0800cc8c(uVar7,DAT_0800d46c,4,&local_58);
  uVar7 = FUN_0800cc8c(uVar7,DAT_0800d470,4,&local_58);
  uVar7 = FUN_0800cc8c(uVar7,DAT_0800d474,4,&local_58);
  uVar7 = FUN_0800cc8c(uVar7,DAT_0800d478,4,&local_58);
  uVar7 = FUN_0800cc8c(uVar7,DAT_0800d47c,0x10,&local_58);
  FUN_0800cc8c(uVar7,DAT_0800d480,0xc,&local_58);
  local_44 = *DAT_0800d484;
  FUN_0800cc8c(DAT_0800d484,&local_44,4,&local_58);
  local_48 = 0;
  local_55 = 3;
  local_56 = 3;
  uVar7 = FUN_0800cc8c(3,&local_48,4,&local_58);
  uVar7 = FUN_0800cc8c(uVar7,&local_55,1,&local_58);
  uVar7 = FUN_0800cc8c(uVar7,&local_56,1,&local_58);
  uVar7 = FUN_0800cc8c(uVar7,DAT_0800d488,4,&local_58);
  FUN_0800cc8c(uVar7,DAT_0800d48c,1,&local_58);
  local_48 = 0;
  cVar12 = '\0';
  while (FUN_0800d2e8(), cVar12 == '\0') {
    FUN_0800cc92();
  }
  local_52 = 3;
  local_53 = 3;
  local_48 = 0;
  uVar7 = FUN_0800cc8c(0,&local_52,1,&local_58);
  uVar8 = FUN_0800cc8c(uVar7,&local_53,1,&local_58);
  uVar4 = DAT_0800d5ec;
  uVar3 = DAT_0800d5e8;
  uVar7 = DAT_0800d5e4;
  pcVar2 = DAT_0800d5e0;
  uVar8 = FUN_0800cc8c(uVar8,&DAT_0800cc3c,8,&local_58);
  uVar8 = FUN_0800cc8c(uVar8,&DAT_0800cc44,8,&local_58);
  uVar8 = FUN_0800cc8c(uVar8,DAT_0800d5f0,1,&local_58);
  uVar8 = FUN_0800cc8c(uVar8,pcVar2,1,&local_58);
  uVar8 = FUN_0800cc8c(uVar8,&DAT_0800cc4c,4,&local_58);
  uVar8 = FUN_0800cc8c(uVar8,&DAT_0800cc50,4,&local_58);
  uVar9 = FUN_0800cc8c(uVar8,&DAT_0800cc54,4,&local_58);
  bVar10 = 0;
  do {
    uVar8 = FUN_0800cc8c(uVar9,uVar4,4,&local_58);
    uVar8 = FUN_0800cc8c(uVar8,uVar3,4,&local_58);
    FUN_0800cc8c(uVar8,uVar7,4,&local_58);
    FUN_0800cc9e(0x3f800000);
    while( true ) {
      bVar10 = bVar10 + 1;
      uVar9 = (uint)bVar10;
      if (1 < uVar9) {
        local_40 = 0x14;
        uVar7 = FUN_0800cc8c(0x14,&local_40,4,&local_58);
        puVar5 = DAT_0800d5fc;
        uVar7 = FUN_0800cc8c(uVar7,DAT_0800d5f8,4,&local_58);
        uVar7 = FUN_0800cc8c(uVar7,DAT_0800d600,4,&local_58);
        FUN_0800cc8c(uVar7,DAT_0800d604,4,&local_58);
        local_4c = 0x24;
        FUN_0800cc8c(0x24,&local_4c,2,&local_58);
        local_51 = 0;
        uVar7 = FUN_0800cc8c(0,&local_51,1,&local_58);
        uVar7 = FUN_0800cc8c(uVar7,&DAT_0800cc58,0x20,&local_58);
        FUN_0800cc8c(uVar7,DAT_0800d608,1,&local_58);
        iVar11 = 0;
        do {
          local_48 = *puVar5;
          do {
            FUN_0800cc92();
            iVar11 = iVar11 + 1;
            if (1 < iVar11) {
              uVar7 = FUN_08012510(auStack_38,0x18);
              FUN_0800cc8c(uVar7,auStack_38,0x16,&local_58);
              local_4a = 0;
              cVar12 = '\0';
              while (uVar7 = FUN_0800d2e8(), cVar12 == '\0') {
                cVar12 = '\0';
                FUN_0800cc8c(uVar7,&local_4a,2,&local_58);
              }
              FUN_0800cc9e();
              FUN_0800cc92();
              iVar11 = DAT_0800d60c;
              cVar12 = '\0';
              while (uVar7 = FUN_0800d2e8(), cVar12 == '\0') {
                cVar12 = '\0';
                FUN_0800cc8c(3,iVar11 + 0xc,4,&local_58);
              }
              cVar12 = '\0';
              local_48 = uVar7;
              while (uVar7 = FUN_0800d2e8(), cVar12 == '\0') {
                FUN_0800cc92();
              }
              cVar12 = '\0';
              local_48 = uVar7;
              while (FUN_0800d2e8(), puVar5 = DAT_0800d610, cVar12 == '\0') {
                FUN_0800cc92();
              }
              iVar11 = 0;
              do {
                local_48 = *puVar5;
                do {
                  FUN_0800cc92();
                  puVar6 = DAT_0800d614;
                  iVar11 = iVar11 + 1;
                  if (1 < iVar11) {
                    iVar11 = 0;
                    do {
                      local_48 = *puVar6;
                      do {
                        FUN_0800cc92();
                        uVar9 = local_50;
                        iVar11 = iVar11 + 1;
                        if (1 < iVar11) {
                          if (*pbVar1 == 0) {
                            local_3c[0] = local_58;
                            local_50 = 0;
                            uVar7 = FUN_0800cc8c(local_58,&DAT_0800d284,4,&local_58);
                            FUN_0800cc8c(uVar7,local_3c,2,&local_58);
                            FUN_0800bb0c(DAT_0800d618);
                            FUN_0800bb4c(s_ASettings_Stored___0800cc77 + 1,uVar9 & 0xffff);
                            FUN_0800bbc8(s_bytes__crc_0800d2a8,local_3c[0]);
                            FUN_0800bb0c(&DAT_0800cc38);
                            uVar9 = FUN_0800c85c(uVar9 & 0xffff);
                            uVar9 = uVar9 | *pbVar1;
                            if (uVar9 != 0) {
                              uVar9 = 1;
                            }
                            *pbVar1 = (byte)uVar9;
                          }
                          if (-1 < *pcVar2) {
                            FUN_0800d3bc();
                          }
                          FUN_0800ea18();
                          return -(uint)(*pbVar1 == 0) >> 0x1f;
                        }
                      } while (iVar11 != 0);
                    } while( true );
                  }
                } while (iVar11 != 0);
              } while( true );
            }
          } while (iVar11 != 0);
        } while( true );
      }
      if (uVar9 == 0) break;
      FUN_0800cc9e(_DAT_0800d1d0);
      local_48 = 0;
      cVar12 = '\x03';
      while( true ) {
        if (cVar12 == '\0') break;
        FUN_0800cc92();
        cVar12 = cVar12 + -1;
      }
    }
  } while( true );
}



/* FUN_0800cc8c at 0800cc8c */

void FUN_0800cc8c(void)

{
  FUN_0800ea2c(&stack0x00000008);
  return;
}



/* FUN_0800cc92 at 0800cc92 */

void FUN_0800cc92(void)

{
  FUN_0800ea2c(&stack0x00000008,&stack0x00000010,4);
  return;
}



/* FUN_0800cc9e at 0800cc9e */

void FUN_0800cc9e(undefined4 param_1)

{
  undefined4 uStack00000010;
  
  uStack00000010 = param_1;
  FUN_0800ea2c(&stack0x00000008,&stack0x00000010,4);
  return;
}



/* FUN_0800ccac at 0800ccac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0800ccac(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  char *pcVar12;
  char *pcVar13;
  undefined4 in_r3;
  byte bVar14;
  byte bVar15;
  int iVar16;
  undefined4 *puVar17;
  char cVar18;
  undefined8 uVar19;
  short local_8c;
  byte local_8a;
  undefined1 uStack_89;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  uint local_84;
  short local_80;
  undefined1 auStack_7e [2];
  int local_7c;
  undefined1 auStack_78 [2];
  undefined1 auStack_76 [2];
  undefined1 local_74;
  undefined1 local_73;
  char local_71;
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [8];
  undefined1 auStack_64 [4];
  undefined4 auStack_60 [4];
  undefined4 auStack_50 [4];
  undefined4 auStack_40 [4];
  
  local_8c = 0;
  local_84 = 0;
  uVar7 = FUN_0800d33c(1);
  FUN_0800d2c8(uVar7,&local_74);
  uVar7 = FUN_0800d30a(1);
  FUN_0800d2c8(uVar7,&local_80);
  uVar7 = DAT_0800d998;
  pcVar1 = DAT_0800d454;
  iVar8 = thunk_FUN_08015c3c(&DAT_0800d284,&local_74,3);
  if (iVar8 != 0) {
    if (local_71 != '\0') {
      local_74 = 0x3f;
      local_73 = 0;
    }
    FUN_0800bb0c(uVar7);
    FUN_0800bb0c(s__EEEPROM_version_mismatch_0800d1d2 + 2);
    FUN_0800bb28(s__EEPROM__0800d1f0,&local_74);
    FUN_0800bb0c(s_Marlin_V51__0800d1fc);
    if (pcVar1[1] == '\0') {
      FUN_0800d490();
    }
    *pcVar1 = '\x01';
    goto LAB_0800d1b0;
  }
  local_8c = 0;
  local_7c = iVar8;
  FUN_0800d2c8(0,&local_8a,1,&local_8c,1);
  uVar9 = FUN_0800d2f2();
  FUN_0800d2c8(uVar9,auStack_40);
  uVar9 = FUN_0800d2f2();
  FUN_0800d2c8(uVar9,auStack_50);
  uVar9 = FUN_0800d2f2();
  FUN_0800d2c8(uVar9,auStack_60);
  iVar3 = DAT_0800d460;
  iVar2 = DAT_0800d45c;
  iVar8 = DAT_0800d458;
  if (pcVar1[1] == '\0') {
    iVar16 = 0;
    iVar10 = local_8a + 3;
    do {
      if (iVar16 < iVar10) {
        puVar17 = auStack_40 + iVar16;
      }
      else {
        puVar17 = (undefined4 *)(iVar16 * 4 + 0x800d22c);
      }
      *(undefined4 *)(iVar8 + iVar16 * 4) = *puVar17;
      if (iVar16 < iVar10) {
        puVar17 = auStack_50 + iVar16;
      }
      else {
        puVar17 = (undefined4 *)(iVar16 * 4 + 0x800d21c);
      }
      *(undefined4 *)(iVar2 + iVar16 * 4) = *puVar17;
      if (iVar16 < iVar10) {
        uVar9 = auStack_60[iVar16];
      }
      else {
        uVar9 = *(undefined4 *)(&DAT_0800d20c + iVar16 * 4);
      }
      *(undefined4 *)(iVar3 + iVar16 * 4) = uVar9;
      iVar16 = iVar16 + 1;
    } while (iVar16 < 4);
    uVar9 = 1;
  }
  else {
    uVar9 = 0;
  }
  uVar9 = FUN_0800d33c(uVar9);
  FUN_0800d2c8(uVar9,DAT_0800d464);
  FUN_0800d344(pcVar1[1],DAT_0800d468);
  FUN_0800d344(pcVar1[1],DAT_0800d46c);
  FUN_0800d344(pcVar1[1],DAT_0800d470);
  FUN_0800d344(pcVar1[1],DAT_0800d474);
  FUN_0800d344(pcVar1[1],DAT_0800d478);
  FUN_0800d2f4(pcVar1[1],DAT_0800d47c);
  FUN_0800d2c8();
  uVar19 = FUN_0800d2ce(pcVar1[1],DAT_0800d480);
  FUN_0800d2c8((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),0xc);
  uVar9 = FUN_0800d334();
  FUN_0800d2c8(uVar9,pcVar1 + 4);
  FUN_0800d356();
  uVar9 = FUN_0800d31a(1);
  FUN_0800d2c8(uVar9,&uStack_88);
  uVar9 = FUN_0800d31a(1);
  FUN_0800d2c8(uVar9,&uStack_89);
  FUN_0800d344(pcVar1[1],DAT_0800d488);
  FUN_0800d322(pcVar1[1],DAT_0800d48c);
  cVar18 = '\0';
  while (FUN_0800d2e8(), cVar18 == '\0') {
    FUN_0800d356();
  }
  uVar9 = FUN_0800d31a(1);
  FUN_0800d2c8(uVar9,&uStack_85);
  uVar9 = FUN_0800d31a(1);
  FUN_0800d2c8(uVar9,&uStack_86);
  piVar5 = DAT_0800d5ec;
  uVar4 = DAT_0800d5e8;
  uVar9 = DAT_0800d5e4;
  pcVar13 = DAT_0800d5e0;
  FUN_0800d2da(pcVar1[1]);
  FUN_0800d2c6();
  uVar11 = FUN_0800d2da(pcVar1[1]);
  FUN_0800d2c8(uVar11,auStack_70);
  FUN_0800d322(pcVar1[1],DAT_0800d5f0);
  uVar11 = FUN_0800d312();
  FUN_0800d2c8(uVar11,pcVar13);
  FUN_0800d334();
  FUN_0800d2c6();
  uVar11 = FUN_0800d334();
  FUN_0800d2c8(uVar11,auStack_6c);
  uVar11 = FUN_0800d334();
  FUN_0800d2c8(uVar11,auStack_70);
  bVar14 = 0;
  cVar18 = true;
  do {
    FUN_0800d356();
    if ((bVar14 == 0) && (FUN_0800d2b8(), cVar18 == '\0')) {
      cVar18 = pcVar1[1];
      if (cVar18 == '\0') {
        *piVar5 = local_7c;
      }
      uVar11 = FUN_0800d33c(cVar18 == '\0');
      FUN_0800d2c8(uVar11,uVar4);
      uVar11 = FUN_0800d334();
      FUN_0800d2c8(uVar11,uVar9);
      FUN_0800d356();
    }
    else {
      cVar18 = '\x03';
      while (cVar18 != '\0') {
        FUN_0800d356();
        cVar18 = cVar18 + -1;
      }
    }
    bVar14 = bVar14 + 1;
    cVar18 = bVar14 == 1;
  } while (bVar14 < 2);
  uVar9 = FUN_0800d334();
  FUN_0800d2c8(uVar9,auStack_64);
  FUN_0800d356();
  FUN_0800d2b8();
  if (cVar18 == '\0') {
    cVar18 = pcVar1[1];
    if (cVar18 == '\0') {
      *DAT_0800d5f8 = local_7c;
    }
    uVar9 = FUN_0800d33c(cVar18 == '\0');
    FUN_0800d2c8(uVar9,DAT_0800d600);
    FUN_0800d344(pcVar1[1],DAT_0800d604);
  }
  uVar9 = FUN_0800d302();
  FUN_0800d2c8(uVar9,auStack_7e);
  uVar9 = FUN_0800d312();
  FUN_0800d2c8(uVar9,&uStack_87);
  cVar18 = '\b';
  while( true ) {
    if (cVar18 == '\0') break;
    FUN_0800d358(pcVar1[1]);
    cVar18 = cVar18 + -1;
  }
  uVar9 = FUN_0800d314();
  piVar5 = DAT_0800d5fc;
  FUN_0800d2c8(uVar9,DAT_0800d608);
  iVar8 = 0;
  do {
    FUN_0800d356();
    if (pcVar1[1] == '\0' && iVar8 == 0) {
      *piVar5 = local_7c;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 2);
  cVar18 = '\0';
  while (FUN_0800d2e8(), cVar18 == '\0') {
    uVar9 = FUN_0800d302();
    FUN_0800d2c8(uVar9,auStack_78);
  }
  iVar8 = 3;
  do {
    uVar9 = FUN_0800d302();
    FUN_0800d2c8(uVar9,auStack_76);
    iVar2 = DAT_0800d60c;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  FUN_0800d358(pcVar1[1]);
  FUN_0800d356();
  bVar14 = 3;
  while (bVar15 = bVar14 - 1, bVar14 != 0) {
    FUN_0800d2ce(pcVar1[1]);
    FUN_0800d2c8((uint)bVar15,iVar2 + (uint)bVar15 * 4,4);
    bVar14 = bVar15;
  }
  cVar18 = '\0';
  while (FUN_0800d2e8(), cVar18 == '\0') {
    FUN_0800d356();
  }
  cVar18 = '\0';
  while (FUN_0800d2e8(), piVar5 = DAT_0800d610, cVar18 == '\0') {
    FUN_0800d356();
  }
  iVar8 = 0;
  do {
    FUN_0800d356();
    if (pcVar1[1] == '\0' && iVar8 == 0) {
      *piVar5 = local_7c;
    }
    piVar6 = DAT_0800d614;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 2);
  iVar8 = 0;
  do {
    FUN_0800d356();
    if (pcVar1[1] == '\0' && iVar8 == 0) {
      *piVar6 = local_7c;
    }
    uVar9 = DAT_0800d9b8;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 2);
  iVar8 = FUN_0800c85c(local_84 & 0xffff);
  *pcVar1 = (char)iVar8;
  if (iVar8 == 0) {
    if (local_8c == local_80) {
      if (pcVar1[1] != '\0') goto LAB_0800d134;
      FUN_0800bb0c(uVar7);
      FUN_0800bf6c(uVar9,&DAT_0800d284);
      FUN_0800bb4c(s_stored_settings_retrieved___0800d288,local_84);
      FUN_0800bbc8(s_bytes__crc_0800d2a8,local_8c);
      pcVar12 = &DAT_0800d448;
    }
    else {
      *pcVar1 = '\x01';
      FUN_0800bb0c(DAT_0800d5dc);
      FUN_0800bb0c(s_EEPROM_CRC_mismatch____stored__0800d24c);
      FUN_0800bf72(uVar9,local_80,10);
      FUN_0800bb0c(&DAT_0800d26c);
      FUN_0800bf72(uVar9,local_8c,10);
      pcVar12 = s__calculated___0800d274;
    }
    FUN_0800bb0c(pcVar12);
  }
  else {
    FUN_0800bb0c(uVar7);
    FUN_0800bb4c(s_BIndex__0800d23b + 1,local_84);
    FUN_0800bb4c(s_Size__0800d244,0x1d2);
    FUN_0800de78(uVar9,10);
  }
LAB_0800d134:
  if (pcVar1[1] == '\0') {
    if (*pcVar1 == '\0') {
      FUN_0800c808();
    }
    else {
      FUN_0800d490();
    }
  }
  FUN_0800b2e2();
  if (pcVar1[1] == '\0') {
    iVar8 = FUN_0800b65c();
    if (iVar8 == 0) {
      FUN_0800de78(uVar9,10);
      FUN_0800b2da();
      FUN_0800bb0c(s_initialized__0800dda8);
    }
    else {
      *pcVar1 = '\x01';
      FUN_0800bb0c(s__Can_t_enable_0800ddb8);
      FUN_0800b2da();
      FUN_0800bb0c(&DAT_0800d44c);
      FUN_0800b368();
    }
    if (*pcVar13 < 0) {
      FUN_0800b368();
      pcVar13 = s_UBL_System_reset___0800dde8;
    }
    else {
      FUN_0800d3fe((int)*pcVar13,0);
      FUN_0800bb4c(s_Mesh_0800ddc8,(int)*pcVar13);
      pcVar13 = s_loaded_from_storage__0800ddd0;
    }
    FUN_0800bb0c(pcVar13);
  }
LAB_0800d1b0:
  if (pcVar1[1] == '\0') {
    FUN_0800d61c();
  }
  FUN_0800ea18();
  return CONCAT44(in_r3,-(uint)(*pcVar1 == '\0') >> 0x1f);
}



/* FUN_0800d2b8 at 0800d2b8 */

undefined4 FUN_0800d2b8(void)

{
  undefined4 in_stack_00000014;
  
  return in_stack_00000014;
}



/* FUN_0800d2c6 at 0800d2c6 */

void FUN_0800d2c6(void)

{
  FUN_0800eaaa(&stack0x0000000c,&stack0x00000028);
  return;
}



/* FUN_0800d2c8 at 0800d2c8 */

void FUN_0800d2c8(void)

{
  FUN_0800eaaa(&stack0x0000000c);
  return;
}



/* FUN_0800d2ce at 0800d2ce */

void FUN_0800d2ce(void)

{
  return;
}



/* FUN_0800d2da at 0800d2da */

void FUN_0800d2da(void)

{
  return;
}



/* FUN_0800d2e8 at 0800d2e8 */

undefined1 FUN_0800d2e8(void)

{
  undefined1 unaff_r4;
  
  return unaff_r4;
}



/* FUN_0800d2f2 at 0800d2f2 */

void FUN_0800d2f2(void)

{
  return;
}



/* FUN_0800d2f4 at 0800d2f4 */

void FUN_0800d2f4(void)

{
  return;
}



/* FUN_0800d302 at 0800d302 */

void FUN_0800d302(void)

{
  return;
}



/* FUN_0800d30a at 0800d30a */

void FUN_0800d30a(void)

{
  return;
}



/* FUN_0800d312 at 0800d312 */

void FUN_0800d312(void)

{
  return;
}



/* FUN_0800d314 at 0800d314 */

void FUN_0800d314(void)

{
  return;
}



/* FUN_0800d31a at 0800d31a */

void FUN_0800d31a(void)

{
  return;
}



/* FUN_0800d322 at 0800d322 */

void FUN_0800d322(int param_1,undefined4 param_2)

{
  uint uStack00000000;
  
  uStack00000000 = -(uint)(param_1 == 0) >> 0x1f;
  FUN_0800eaaa(&stack0x0000000c,param_2,1,&stack0x00000004);
  return;
}



/* FUN_0800d334 at 0800d334 */

void FUN_0800d334(void)

{
  return;
}



/* FUN_0800d33c at 0800d33c */

void FUN_0800d33c(void)

{
  return;
}



/* FUN_0800d344 at 0800d344 */

void FUN_0800d344(int param_1,undefined4 param_2)

{
  uint uStack00000000;
  
  uStack00000000 = -(uint)(param_1 == 0) >> 0x1f;
  FUN_0800eaaa(&stack0x0000000c,param_2,4,&stack0x00000004);
  return;
}



/* FUN_0800d356 at 0800d356 */

void FUN_0800d356(void)

{
  int unaff_r5;
  uint uStack00000000;
  
  uStack00000000 = -(uint)(*(char *)(unaff_r5 + 1) == '\0') >> 0x1f;
  FUN_0800eaaa(&stack0x0000000c,&stack0x00000014,4,&stack0x00000004);
  return;
}



/* FUN_0800d358 at 0800d358 */

void FUN_0800d358(int param_1)

{
  uint uStack00000000;
  
  uStack00000000 = -(uint)(param_1 == 0) >> 0x1f;
  FUN_0800eaaa(&stack0x0000000c,&stack0x00000014,4,&stack0x00000004);
  return;
}



/* FUN_0800d36c at 0800d36c */

void FUN_0800d36c(void)

{
  int iVar1;
  
  iVar1 = DAT_0800d454;
  *(undefined1 *)(DAT_0800d454 + 1) = 1;
  FUN_0800ccac();
  *(undefined1 *)(iVar1 + 1) = 0;
  return;
}



/* FUN_0800d37e at 0800d37e */

undefined4 FUN_0800d37e(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r7;
  
  iVar1 = FUN_0800d36c();
  if (iVar1 != 0) {
    uVar2 = FUN_0800ccac(unaff_r7);
    return uVar2;
  }
  FUN_0800d490();
  return 1;
}



/* FUN_0800d394 at 0800d394 */

void FUN_0800d394(undefined4 param_1)

{
  FUN_0800bb0c(s__Invalid_slot__0800da88);
  FUN_0800bf72(DAT_0800d9b8,param_1,10);
  FUN_0800bb0c(s_mesh_slots_available__0800da98);
  return;
}



/* FUN_0800d3b8 at 0800d3b8 */

undefined4 FUN_0800d3b8(void)

{
  return 1;
}



/* FUN_0800d3bc at 0800d3bc */

undefined8 FUN_0800d3bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined4 local_14;
  undefined4 uStack_10;
  
  uVar1 = DAT_0800d9b8;
  local_18 = (undefined2)param_2;
  uStack_16 = (undefined2)((uint)param_2 >> 0x10);
  uStack_10 = param_4;
  if (param_1 == 0) {
    local_18 = 0;
    local_14 = 0x200;
    iVar2 = FUN_0800ea2c(&local_14,DAT_0800d9bc,100,&local_18);
    if (iVar2 != 0) goto LAB_0800d3fc;
    FUN_0800bb4c(s_Mesh_saved_in_slot_0800dae0,0);
  }
  else {
    local_14 = param_3;
    FUN_0800d394(1);
  }
  FUN_0800de78(uVar1,10);
LAB_0800d3fc:
  return CONCAT44(local_14,CONCAT22(uStack_16,local_18));
}



/* FUN_0800d3fe at 0800d3fe */

undefined8 FUN_0800d3fe(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 local_14;
  undefined2 uStack_12;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_14 = (undefined2)param_2;
  uStack_12 = (undefined2)((uint)param_2 >> 0x10);
  uStack_c = param_4;
  if (param_1 != 0) {
    local_10 = param_3;
    FUN_0800d394(1);
    return CONCAT26(uStack_12,CONCAT24(local_14,param_1));
  }
  local_14 = 0;
  local_10 = 0x200;
  if (param_2 == 0) {
    param_2 = DAT_0800d9bc;
  }
  FUN_0800eaaa(&local_10,param_2,100,&local_14);
  FUN_0800bb4c(s_Mesh_loaded_from_slot_0800daf4,0);
  FUN_0800de78(DAT_0800d9b8,10);
  FUN_0800ea18();
  return CONCAT26(uStack_12,CONCAT24(local_14,1));
}



/* FUN_0800d490 at 0800d490 */

undefined8 FUN_0800d490(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 unaff_r4;
  char cVar9;
  
  iVar6 = DAT_0800d9c8;
  iVar5 = DAT_0800d9c4;
  iVar4 = DAT_0800d9c0;
  iVar8 = 0;
  do {
    *(undefined4 *)(iVar6 + iVar8 * 4) = (&DAT_0800ddfc)[iVar8];
    *(undefined4 *)(iVar5 + iVar8 * 4) = (&DAT_0800de0c)[iVar8];
    *(undefined4 *)(iVar4 + iVar8 * 4) = (&DAT_0800de1c)[iVar8];
    uVar3 = DAT_0800d5f4;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 4);
  *DAT_0800d9cc = DAT_0800d5f4;
  *DAT_0800d9d0 = uVar3;
  *DAT_0800d9d4 = uVar3;
  *DAT_0800d9d8 = 0;
  *DAT_0800d9dc = 0;
  uVar3 = DAT_0800d9e4;
  *DAT_0800d9e0 = 20000;
  puVar1 = DAT_0800d9e8;
  DAT_0800d9e8[2] = uVar3;
  *puVar1 = 0x41200000;
  puVar1[1] = 0x41200000;
  puVar1[3] = DAT_0800d9ec;
  puVar1 = DAT_0800d9f0;
  *DAT_0800d9f0 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(DAT_0800d9f4 + 4) = 0;
  FUN_0800e5a8();
  *DAT_0800d9f8 = 9;
  puVar1 = DAT_0800d5ec;
  *DAT_0800d9fc = 0;
  puVar2 = DAT_0800d5e8;
  *puVar1 = DAT_0800da00;
  puVar1 = DAT_0800d5e4;
  *puVar2 = DAT_0800da04;
  puVar2 = DAT_0800d5f8;
  *puVar1 = DAT_0800da08;
  puVar1 = DAT_0800d600;
  *puVar2 = DAT_0800da0c;
  puVar2 = DAT_0800d604;
  *puVar1 = DAT_0800da10;
  *puVar2 = DAT_0800da14;
  puVar1 = DAT_0800d5fc;
  *DAT_0800d608 = 0;
  *puVar1 = DAT_0800da18;
  *DAT_0800da1c = 0;
  *DAT_0800da20 = 0;
  uVar7 = DAT_0800dab4;
  uVar3 = DAT_0800dab0;
  iVar4 = DAT_0800d60c;
  cVar9 = '\0';
  while (FUN_0800d2e8(), cVar9 == '\0') {
    *(undefined4 *)(iVar4 + 0xc) = unaff_r4;
    FUN_0801019a(3,(int)(short)unaff_r4);
  }
  *DAT_0800d610 = DAT_0800da24;
  *DAT_0800d614 = 0;
  FUN_0800c808();
  FUN_0800bb0c(DAT_0800d998);
  FUN_0800bb0c(s_Hardcoded_Default_Settings_Loade_0800dabc);
  return CONCAT44(uVar7,uVar3);
}



/* FUN_0800d61c at 0800d61c */

void FUN_0800d61c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char cVar5;
  
  uVar1 = DAT_0800d998;
  if (param_1 == 0) {
    FUN_0800bb0c(DAT_0800d998);
  }
  pcVar4 = DAT_0800da28;
  uVar2 = DAT_0800d9b8;
  FUN_0800bb0c(s_G21___Units_in_mm_0800db0c);
  FUN_0800da6a();
  if (param_1 == 0) {
    FUN_0800da80();
    FUN_0800bb0c(s_Filament_settings__0800db24);
    if (*pcVar4 == '\0') {
      FUN_0800bb0c(s_Disabled_0800db38);
    }
    else {
      FUN_0800da6a();
    }
    FUN_0800da80();
  }
  FUN_0800bb78(*DAT_0800da2c,s_M200_D_0800db44);
  FUN_0800da6a();
  if (*pcVar4 == '\0') {
    if (param_1 == 0) {
      FUN_0800bb0c(uVar1);
    }
    FUN_0800bb0c(s_M200_D0_0800db50);
  }
  if (param_1 == 0) {
    FUN_0800da80();
    FUN_0800bb0c(s_Steps_per_unit__0800db5c);
    FUN_0800da80();
  }
  FUN_0800d96c(s_M92_X_0800db70);
  FUN_0800da60();
  FUN_0800d97e();
  FUN_0800d974();
  FUN_0800da6a();
  if (param_1 == 0) {
    FUN_0800da80();
    FUN_0800bb0c(s_Maximum_feedrates__units_s___0800db78);
    FUN_0800da80();
  }
  FUN_0800d96c(s_M203_X_0800db98);
  FUN_0800da60();
  FUN_0800d97e();
  FUN_0800d974();
  FUN_0800da6a();
  if (param_1 == 0) {
    FUN_0800da80();
    FUN_0800bb0c(s_Maximum_Acceleration__units_s2___0800dba4);
    FUN_0800da80();
  }
  puVar3 = DAT_0800d9c0;
  FUN_0800bbc8(s_M201_X_0800dbc8,*DAT_0800d9c0);
  FUN_0800bbc8(&DAT_0800d958,puVar3[1]);
  FUN_0800bbc8(&DAT_0800d95c,puVar3[2]);
  FUN_0800bbc8(&DAT_0800d960,puVar3[3]);
  FUN_0800da6a();
  if (param_1 == 0) {
    FUN_0800da80();
    FUN_0800bb0c(s_Acceleration__units_s2___P<print_0800dbd4);
    FUN_0800da80();
  }
  FUN_0800bb78(*DAT_0800d9cc,s_M204_P_0800dc20);
  FUN_0800bb78(*DAT_0800d9d0,&DAT_0800d964);
  FUN_0800da7a(*DAT_0800d9d4);
  FUN_0800da6a();
  if (param_1 == 0) {
    FUN_0800da80();
    FUN_0800bb0c(s_Advanced__S<min_feedrate>_T<min__0800dc2c);
    FUN_0800da80();
  }
  FUN_0800bb78(*DAT_0800d9d8,s_M205_S_0800dca0);
  FUN_0800da7a(*DAT_0800d9dc);
  puVar3 = DAT_0800d9e8;
  FUN_0800bbc8(&DAT_0800d99c,*DAT_0800d9e0);
  FUN_0800bb78(*puVar3,&DAT_0800d9a0);
  FUN_0800da60();
  FUN_0800d97e();
  FUN_0800d974();
  FUN_0800da6a();
  if (param_1 == 0) {
    FUN_0800da80();
    FUN_0800bb0c(s_Home_offset__0800dcac);
    FUN_0800da80();
  }
  FUN_0800d96c(s_M206_X_0800dcbc);
  FUN_0800da60();
  FUN_0800d97e();
  FUN_0800da6a();
  if (param_1 == 0) {
    FUN_0800da80();
    FUN_0800b2da();
    FUN_0800bb0c(&DAT_0800d9a4);
    FUN_0800da80();
  }
  cVar5 = *DAT_0800da30;
  if (cVar5 != '\0') {
    cVar5 = '\x01';
  }
  FUN_0800bb4c(s_M420_S_0800dcc8,cVar5);
  FUN_0800bb78(*DAT_0800da34,&DAT_0800d95c);
  FUN_0800da6a();
  if (param_1 == 0) {
    FUN_0800da6a();
    FUN_0800b2e2();
    FUN_0800bb4c(s_Active_Mesh_Slot__0800dcd4,(int)*DAT_0800da38);
    FUN_0800da6a();
    FUN_0800bb4c(s_EEPROM_can_hold_0800dce8,1);
    FUN_0800bb0c(s_meshes__0800dcfc);
    FUN_0800da80();
    FUN_0800bb0c(s_PID_settings__0800dd08);
    FUN_0800da80();
  }
  FUN_0800bb78(*DAT_0800da3c,s_M301_P_0800dd18);
  FUN_0800d988(DAT_0800da40);
  FUN_0800da64();
  FUN_0800da72(DAT_0800da44);
  FUN_0800da6a();
  if (param_1 == 0) {
    FUN_0800bb0c(uVar1);
  }
  FUN_0800bb78(*DAT_0800da48,s_M304_P_0800dd24);
  FUN_0800d988(DAT_0800da4c);
  FUN_0800da64();
  FUN_0800da72(DAT_0800da50);
  FUN_0800da6a();
  FUN_08015c58();
  if (param_1 == 0) {
    FUN_0800da80();
    FUN_0800bb0c(s_Z_Probe_Offset__mm___0800dd30);
    FUN_0800da80();
  }
  FUN_0800bb78(*DAT_0800d9fc,s_M851_Z_0800dd48);
  FUN_0800da6a();
  if (param_1 == 0) {
    FUN_0800da80();
    FUN_0800bb0c(s_Stepper_motor_currents__0800dd54);
    FUN_0800da80();
  }
  puVar3 = DAT_0800da54;
  FUN_0800bbc8(s_M907_X_0800dd70,*DAT_0800da54);
  FUN_0800bbc8(&DAT_0800d95c,puVar3[1]);
  FUN_0800bbc8(&DAT_0800d960,puVar3[2]);
  FUN_0800da6a();
  if (param_1 == 0) {
    FUN_0800da80();
    FUN_0800bb0c(s_Filament_load_unload_lengths__0800dd7c);
    FUN_0800da80();
  }
  FUN_0800bb78(*DAT_0800da58,s_M603_L_0800dd9c);
  FUN_0800bb78(*DAT_0800da5c,&DAT_0800d9b4);
  FUN_0800de78(uVar2,10);
  return;
}



/* FUN_0800d96c at 0800d96c */

void FUN_0800d96c(void)

{
  undefined4 *unaff_r6;
  
  FUN_0800bb78(*unaff_r6);
  return;
}



/* FUN_0800d974 at 0800d974 */

void FUN_0800d974(void)

{
  int unaff_r6;
  
  FUN_0800bb78(*(undefined4 *)(unaff_r6 + 0xc));
  return;
}



/* FUN_0800d97e at 0800d97e */

void FUN_0800d97e(void)

{
  int unaff_r6;
  
  FUN_0800bb78(*(undefined4 *)(unaff_r6 + 8));
  return;
}



/* FUN_0800d988 at 0800d988 */

float FUN_0800d988(float *param_1)

{
  return *param_1 / DAT_0800d9b0;
}



/* FUN_0800da60 at 0800da60 */

void FUN_0800da60(void)

{
  int unaff_r6;
  
  FUN_0800bb78(*(undefined4 *)(unaff_r6 + 4));
  return;
}



/* FUN_0800da64 at 0800da64 */

void FUN_0800da64(void)

{
  FUN_0800bb78();
  return;
}



/* FUN_0800da6a at 0800da6a */

void FUN_0800da6a(void)

{
  FUN_0800de78();
  return;
}



/* FUN_0800da72 at 0800da72 */

void FUN_0800da72(float *param_1)

{
  float unaff_s16;
  
  FUN_0800bb78(*param_1 * unaff_s16);
  return;
}



/* FUN_0800da7a at 0800da7a */

void FUN_0800da7a(void)

{
  FUN_0800bb78();
  return;
}



/* FUN_0800da80 at 0800da80 */

void FUN_0800da80(void)

{
  FUN_0800bb0c();
  return;
}



/* FUN_0800de30 at 0800de30 */

void FUN_0800de30(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  undefined1 uVar1;
  int extraout_r1;
  undefined4 unaff_r4;
  char in_ZR;
  
  uVar1 = FUN_0800de4c();
  if (in_ZR == '\0') {
    *(undefined1 *)(extraout_r1 + param_4) = uVar1;
    *param_3 = unaff_r4;
  }
  return;
}



/* FUN_0800de3e at 0800de3e */

void FUN_0800de3e(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  undefined1 uVar1;
  int extraout_r1;
  undefined4 unaff_r4;
  char in_ZR;
  
  uVar1 = FUN_0800de4c();
  if (in_ZR == '\0') {
    *(undefined1 *)(extraout_r1 + param_4) = uVar1;
    *param_3 = unaff_r4;
  }
  return;
}



/* FUN_0800de4c at 0800de4c */

void FUN_0800de4c(void)

{
  return;
}



/* FUN_0800de78 at 0800de78 */

longlong FUN_0800de78(undefined4 param_1,uint param_2)

{
  uint auStack_8 [2];
  
  auStack_8[0] = param_2;
  FUN_0800dea0(param_1,auStack_8,1);
  return (ulonglong)auStack_8[0] << 0x20;
}



/* FUN_0800de86 at 0800de86 */

longlong FUN_0800de86(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08015d58(param_2);
  FUN_0800dea0(param_1,param_2,uVar1);
  return (ulonglong)param_4 << 0x20;
}



/* FUN_0800dea0 at 0800dea0 */

uint FUN_0800dea0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x400;
  while( true ) {
    iVar1 = FUN_08015e0e(param_2,param_3 & 0xffff);
    if (iVar1 == 0) {
      return param_3;
    }
    if (iVar1 == 2) break;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return param_3;
    }
  }
  return param_3;
}



/* FUN_0800dec0 at 0800dec0 */

uint FUN_0800dec0(void)

{
  return *DAT_0800df00 - DAT_0800df00[1] & 0xff;
}



/* FUN_0800dece at 0800dece */

void FUN_0800dece(void)

{
  *DAT_0800df00 = DAT_0800df00[1];
  return;
}



/* FUN_0800df0c at 0800df0c */

undefined4 FUN_0800df0c(uint param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  undefined4 uVar4;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28 [2];
  
  puVar2 = DAT_0800e358;
  pbVar1 = DAT_0800e350;
  if ((int)((uint)*DAT_0800e350 << 0x1a) < 0) {
    thunk_FUN_0800bc92(s_current_position__0800e3d0,s___set_probe_deployed_0800e3e4,DAT_0800e358);
    FUN_0800bb4c(s_deploy__0800e3fc,param_1);
    FUN_0800dfd4();
  }
  pbVar3 = DAT_0800e35c;
  if (*DAT_0800e35c != param_1) {
    if ((int)((uint)*pbVar1 << 0x1a) < 0) {
      uVar4 = FUN_0800bb78(0x40a00000,DAT_0800e360);
      FUN_0800dfd6(uVar4,0x29);
      FUN_0800dfd4();
    }
    local_30 = 5.0;
    if ((int)((uint)(*DAT_0800e364 < 0.0) << 0x1f) < 0) {
      local_30 = 5.0 - *DAT_0800e364;
    }
    if ((int)((uint)((float)puVar2[2] < local_30) << 0x1f) < 0) {
      local_2c = 0;
      FUN_0800a75c(&local_30,&local_2c);
    }
    local_28[0] = *puVar2;
    local_2c = puVar2[1];
    local_30 = 0.0;
    FUN_0800a6a0(local_28,&local_2c,puVar2 + 2,&local_30);
    *pbVar3 = (byte)param_1;
  }
  return 0;
}



/* FUN_0800dfd4 at 0800dfd4 */

void FUN_0800dfd4(void)

{
  FUN_0800de78();
  return;
}



/* FUN_0800dfd6 at 0800dfd6 */

void FUN_0800dfd6(void)

{
  FUN_0800de78();
  return;
}



/* FUN_0800dfdc at 0800dfdc */

ulonglong FUN_0800dfdc(void)

{
  char cVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined4 in_r3;
  
  uVar3 = DAT_0800e358;
  pbVar2 = DAT_0800e350;
  if ((int)((uint)*DAT_0800e350 << 0x1a) < 0) {
    thunk_FUN_0800bc92(s_current_position__0800e3d0,s___>>>_do_probe_move_0800e408,DAT_0800e358);
  }
  FUN_0800e3ae();
  cVar1 = *DAT_0800e368;
  *DAT_0800e368 = '\0';
  FUN_0800a5e6(2);
  FUN_0800a57c();
  if ((int)((uint)*pbVar2 << 0x1a) < 0) {
    thunk_FUN_0800bc92(s_current_position__0800e3d0,s___<<<_do_probe_move_0800e420,uVar3);
  }
  return CONCAT44(in_r3,(uint)((int)cVar1 << 0x18) >> 0x1a) & 0xffffffff00000001 ^ 1;
}



/* FUN_0800e058 at 0800e058 */

undefined8 FUN_0800e058(float *param_1,float *param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  byte *pbVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char cVar8;
  bool bVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 local_60;
  float local_58;
  float local_54;
  undefined4 local_50 [2];
  undefined4 uStack_30;
  
  pfVar3 = DAT_0800e36c;
  iVar6 = DAT_0800e358;
  pbVar2 = DAT_0800e350;
  if ((int)((uint)*DAT_0800e350 << 0x1a) < 0) {
    FUN_0800bb78(*param_1 + *DAT_0800e36c,s_>>>_probe_pt__0800e47c);
    FUN_0800bb78(*param_2 + pfVar3[1],&DAT_0800e328);
    if (param_3 == 0) {
      uVar7 = 0x800e330;
    }
    else {
      uVar7 = 0x800e32c;
    }
    FUN_0800bb28(&DAT_0800e328,uVar7);
    FUN_0800bb0c(s_stow__0800e48c);
    thunk_FUN_0800bc92(s_current_position__0800e3d0,&DAT_0800e494,iVar6);
  }
  fVar1 = DAT_0800e334;
  local_54 = *param_1;
  local_58 = *param_2;
  if (param_5 == 0) {
    if ((((local_54 < DAT_0800e34c != (NAN(local_54) || NAN(DAT_0800e34c))) ||
         (-1 < (int)((uint)(local_54 < DAT_0800e338) << 0x1f))) ||
        (cVar8 = local_58 < DAT_0800e34c, (bool)cVar8 != (NAN(local_58) || NAN(DAT_0800e34c)))) ||
       (FUN_0800e39c(DAT_0800e338,local_58), cVar8 == '\0')) goto LAB_0800e31e;
  }
  else {
    cVar8 = *param_1 < DAT_0800e33c;
    bVar9 = NAN(*param_1) || NAN(DAT_0800e33c);
    if ((bool)cVar8 == bVar9) {
      FUN_0800e39c();
      if (cVar8 != '\0') {
        cVar8 = *param_2 < DAT_0800e340;
        bVar9 = NAN(*param_2) || NAN(DAT_0800e340);
        goto LAB_0800e114;
      }
    }
    else {
LAB_0800e114:
      if ((bool)cVar8 != bVar9) goto LAB_0800e31e;
      FUN_0800e39c();
    }
    if (cVar8 == '\0') goto LAB_0800e31e;
    local_54 = local_54 + -25.0;
    local_58 = local_58 + -10.0;
  }
  puVar4 = DAT_0800e370;
  local_50[0] = *(undefined4 *)(iVar6 + 8);
  uVar7 = *DAT_0800e370;
  *DAT_0800e370 = DAT_0800e374;
  local_60._0_4_ = 0;
  FUN_0800a6a0(&local_54,&local_58,local_50,&local_60);
  iVar5 = FUN_0800df0c(1);
  fVar12 = fVar1;
  if (iVar5 == 0) {
    if ((int)((uint)*pbVar2 << 0x1a) < 0) {
      thunk_FUN_0800bc92(s_current_position__0800e3d0,s___>>>_run_z_probe_0800e438,iVar6);
    }
    *DAT_0800e37c = *DAT_0800e378;
    iVar5 = FUN_0800dfdc(0xc1200000,DAT_0800e344);
    uVar14 = CONCAT44(local_60._4_4_,(undefined4)local_60);
    fVar13 = fVar1;
    if (iVar5 == 0) {
      fVar12 = *(float *)(iVar6 + 8);
      if ((int)((uint)*pbVar2 << 0x1a) < 0) {
        FUN_0800bb78(fVar12,s_1st_Probe_Z__0800e44c);
        FUN_0800e3b6();
      }
      local_60._0_4_ = 0x40400000;
      FUN_0800e3a6(*(undefined4 *)(iVar6 + 8),0x3f800000);
      iVar5 = FUN_0800dfdc(0xc1200000,DAT_0800e348);
      uVar14 = CONCAT44(local_60._4_4_,(undefined4)local_60);
      if (iVar5 == 0) {
        fVar13 = *(float *)(iVar6 + 8);
        if ((int)((uint)*pbVar2 << 0x1a) < 0) {
          FUN_0800bb78(fVar13,s_2nd_Probe_Z__0800e45c);
          FUN_0800bb78(fVar12 - fVar13,s_Discrepancy__0800e46c);
          FUN_0800e3b6();
        }
        uVar14 = FUN_0800bca0(fVar13);
        local_60 = FUN_0800c284((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0,DAT_0800e380);
        uVar14 = FUN_0800bca0(fVar12);
        uVar14 = FUN_0800c284((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0,0x40000000);
        uVar14 = FUN_0800bd80((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(undefined4)local_60,
                              local_60._4_4_);
        FUN_0800c284((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_0800e384,DAT_0800e388);
        fVar13 = (float)FUN_0800bef8();
        uVar14 = local_60;
      }
    }
    local_60._4_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
    fVar11 = *DAT_0800e364;
    fVar12 = fVar13 + fVar11;
    if (param_3 == 0) {
      local_60._0_4_ = 0x40400000;
      FUN_0800e3a6(*(undefined4 *)(iVar6 + 8),0x40000000);
    }
    else {
      local_60 = uVar14;
      iVar6 = FUN_0800df0c(0);
      if (iVar6 != 0) {
        fVar12 = fVar1;
      }
    }
  }
  if (2 < param_4) {
    uVar10 = FUN_0800bb0c(s_Bed_X__0800e49c);
    FUN_0800e3be(uVar10,*pfVar3,param_1);
    FUN_0800e390();
    uVar10 = FUN_0800bb0c(&DAT_0800e4a4);
    FUN_0800e3be(uVar10,pfVar3[1],param_2);
    FUN_0800e390();
    FUN_0800bb0c(&DAT_0800e4ac);
    FUN_0800bca0(fVar12);
    FUN_0800e390();
    FUN_0800e3b6();
  }
  if ((int)((uint)*pbVar2 << 0x1a) < 0) {
    FUN_0800bb0c(s_<<<_probe_pt_0800e4b4);
  }
  *puVar4 = uVar7;
  if ((((int)fVar12 << 1) >> 0x18 == -1) && (((uint)fVar12 & 0x7fffff) != 0)) {
    FUN_0800bb0c(DAT_0800e38c);
    FUN_0800bb0c(s_Probing_failed_0800e4c4);
  }
LAB_0800e31e:
  return CONCAT44(param_1,uStack_30);
}



/* FUN_0800e390 at 0800e390 */

void FUN_0800e390(undefined4 param_1)

{
  FUN_0800bfd0(param_1);
  return;
}



/* FUN_0800e39c at 0800e39c */

void FUN_0800e39c(void)

{
  return;
}



/* FUN_0800e3a6 at 0800e3a6 */

void FUN_0800e3a6(float param_1,float param_2)

{
  float fStack00000004;
  
  fStack00000004 = param_1 + param_2;
  FUN_0800a75c(&stack0x00000004);
  return;
}



/* FUN_0800e3ae at 0800e3ae */

void FUN_0800e3ae(void)

{
  FUN_0800a75c(&stack0x00000004);
  return;
}



/* FUN_0800e3b6 at 0800e3b6 */

void FUN_0800e3b6(void)

{
  FUN_0800de78();
  return;
}



/* FUN_0800e3be at 0800e3be */

void FUN_0800e3be(undefined4 param_1,float param_2,float *param_3)

{
  FUN_0800bca0(*param_3 + param_2);
  return;
}



/* FUN_0800e4d4 at 0800e4d4 */

void FUN_0800e4d4(uint param_1)

{
  byte *pbVar1;
  
  pbVar1 = DAT_0800e5d4;
  if (param_1 == *DAT_0800e5d4) {
    return;
  }
  if (*DAT_0800e5d4 != 0) {
    FUN_08010812(DAT_0800e5d8,DAT_0800e5d8 + 4,DAT_0800e5d8 + 8);
    *pbVar1 = 0;
    return;
  }
  *DAT_0800e5d4 = 1;
  FUN_08010854();
  return;
}



/* FUN_0800e500 at 0800e500 */

void FUN_0800e500(float param_1,char param_2)

{
  char cVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  pfVar3 = DAT_0800e5dc;
  if (*DAT_0800e5dc == param_1) {
    return;
  }
  cVar1 = *DAT_0800e5d4;
  if (cVar1 != '\0') {
    FUN_0800e4d4(0);
  }
  if (param_1 == 0.0 || param_1 < 0.0 != NAN(param_1)) {
    param_1 = DAT_0800e5c8;
  }
  *pfVar3 = param_1;
  uVar4 = DAT_0800e5e4;
  fVar6 = *pfVar3;
  if ((fVar6 < DAT_0800e5cc != (NAN(fVar6) || NAN(DAT_0800e5cc))) ||
     (fVar7 = DAT_0800e5c8, -1 < (int)((uint)(fVar6 < DAT_0800e5d0) << 0x1f))) {
    fVar7 = 1.0 / fVar6;
  }
  *DAT_0800e5e0 = fVar7;
  *DAT_0800e5e8 = uVar4;
  puVar2 = DAT_0800e5d8;
  if (cVar1 != '\0') {
    local_24 = DAT_0800e5d8[1];
    local_28 = *DAT_0800e5d8;
    local_20 = DAT_0800e5d8[2];
    FUN_0800e4d4(1);
    if ((param_2 != '\0') && (iVar5 = FUN_08015bc8(&local_28,puVar2,0xc), iVar5 != 0)) {
      FUN_0800a500();
    }
  }
  return;
}



/* FUN_0800e5a8 at 0800e5a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800e5a8(void)

{
  undefined4 unaff_r7;
  
  if ((int)((uint)*_DAT_0800e5ec << 0x1a) < 0) {
    FUN_0800bb0c(s_reset_bed_level_0800e5ef + 1);
  }
  FUN_0800e4d4(0);
  FUN_0800b368(unaff_r7);
  return;
}



/* FUN_0800e604 at 0800e604 */

int FUN_0800e604(uint param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = DAT_0800e6bc;
  if (param_1 >> 4 < 10) {
    cVar2 = '0';
  }
  else {
    cVar2 = '7';
  }
  *(char *)(DAT_0800e6bc + 8) = cVar2 + (char)(param_1 >> 4);
  if ((param_1 & 0xf) < 10) {
    cVar2 = '0';
  }
  else {
    cVar2 = '7';
  }
  *(byte *)(iVar1 + 9) = cVar2 + ((byte)param_1 & 0xf);
  return iVar1 + 8;
}



/* FUN_0800e62e at 0800e62e */

int FUN_0800e62e(uint param_1)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = DAT_0800e6bc;
  if (param_1 >> 0x1c < 10) {
    cVar3 = '0';
  }
  else {
    cVar3 = '7';
  }
  bVar1 = (byte)(param_1 >> 0x18);
  *(byte *)(DAT_0800e6bc + 2) = cVar3 + (bVar1 >> 4);
  if ((param_1 >> 0x18 & 0xf) < 10) {
    cVar3 = '0';
  }
  else {
    cVar3 = '7';
  }
  *(byte *)(iVar2 + 3) = cVar3 + (bVar1 & 0xf);
  if ((param_1 >> 0x14 & 0xf) < 10) {
    cVar3 = '0';
  }
  else {
    cVar3 = '7';
  }
  *(byte *)(iVar2 + 4) = cVar3 + ((byte)(param_1 >> 0x14) & 0xf);
  if ((param_1 >> 0x10 & 0xf) < 10) {
    cVar3 = '0';
  }
  else {
    cVar3 = '7';
  }
  *(byte *)(iVar2 + 5) = cVar3 + ((byte)(param_1 >> 0x10) & 0xf);
  FUN_08015eac(param_1 & 0xffff);
  return iVar2 + 2;
}



/* FUN_0800e690 at 0800e690 */

undefined8 FUN_0800e690(void)

{
  undefined4 unaff_r7;
  
  FUN_0800e62e();
  return CONCAT44(unaff_r7,DAT_0800e6bc);
}



/* FUN_0800e69a at 0800e69a */

void FUN_0800e69a(void)

{
  undefined4 uVar1;
  undefined4 unaff_r7;
  
  uVar1 = FUN_0800e604();
  FUN_0800bf6c(DAT_0800e6c4,uVar1,unaff_r7);
  return;
}



/* FUN_0800e6a8 at 0800e6a8 */

void FUN_0800e6a8(void)

{
  undefined4 unaff_r7;
  
  FUN_08015eac();
  FUN_0800bf6c(DAT_0800e6c4,DAT_0800e6c0,unaff_r7);
  return;
}



/* FUN_0800e6c8 at 0800e6c8 */

void FUN_0800e6c8(uint param_1)

{
  for (; 0x32 < param_1; param_1 = param_1 - 0x32) {
    FUN_08014ce4(0x32);
    FUN_0801441c();
  }
  FUN_08014ce4(param_1);
  FUN_0801441c();
  return;
}



/* FUN_0800e6ec at 0800e6ec */

undefined4 FUN_0800e6ec(ushort *param_1,byte *param_2,short param_3,undefined4 param_4)

{
  byte *pbVar1;
  short sVar2;
  int iVar3;
  ushort uVar4;
  
  while( true ) {
    sVar2 = param_3 + -1;
    if (param_3 == 0) break;
    pbVar1 = param_2 + 1;
    *param_1 = *param_1 ^ (ushort)*param_2 << 8;
    iVar3 = 8;
    do {
      uVar4 = *param_1 << 1;
      if ((int)((uint)*param_1 << 0x10) < 0) {
        uVar4 = uVar4 ^ 0x1021;
      }
      iVar3 = iVar3 + -1;
      *param_1 = uVar4;
      param_2 = pbVar1;
      param_3 = sVar2;
    } while (iVar3 != 0);
  }
  return param_4;
}



/* FUN_0800e720 at 0800e720 */

int FUN_0800e720(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 extraout_r1;
  undefined1 uVar3;
  char extraout_r1_00;
  char extraout_r1_01;
  int iVar4;
  char cVar5;
  char in_NG;
  char in_ZR;
  
  iVar2 = FUN_0800e77e(*param_1,DAT_0800e79c);
  iVar4 = DAT_0800e910;
  if (in_ZR == '\0') {
    uVar3 = extraout_r1;
    if (in_NG != '\0') {
      iVar2 = -iVar2;
      uVar3 = 0x2d;
    }
  }
  else {
    uVar3 = 0x20;
  }
  *(undefined1 *)(DAT_0800e910 + 1) = uVar3;
  uVar3 = (undefined1)(iVar2 / 1000);
  FUN_0800e7ae(iVar2,10);
  *(undefined1 *)(iVar4 + 2) = uVar3;
  *(undefined1 *)(iVar4 + 3) = 0x2e;
  cVar5 = 'd';
  FUN_0800e792();
  cVar5 = cVar5 + extraout_r1_00 * -10 + '0';
  *(char *)(iVar4 + 4) = cVar5;
  cVar1 = FUN_0800e78e();
  *(char *)(iVar4 + 6) = (cVar1 - extraout_r1_01 * cVar5) + '0';
  *(char *)(iVar4 + 5) = cVar5 + extraout_r1_01 * -10 + '0';
  return iVar4 + 1;
}



/* FUN_0800e77e at 0800e77e */

int FUN_0800e77e(float param_1,float param_2)

{
  return (int)(param_1 * param_2);
}



/* FUN_0800e78e at 0800e78e */

void FUN_0800e78e(void)

{
  return;
}



/* FUN_0800e792 at 0800e792 */

void FUN_0800e792(void)

{
  return;
}



/* FUN_0800e7a0 at 0800e7a0 */

undefined4 FUN_0800e7a0(void)

{
  undefined4 *unaff_r5;
  
  return *unaff_r5;
}



/* FUN_0800e7a4 at 0800e7a4 */

void FUN_0800e7a4(void)

{
  return;
}



/* FUN_0800e7ae at 0800e7ae */

void FUN_0800e7ae(void)

{
  return;
}



/* FUN_0800e7bc at 0800e7bc */

undefined8 FUN_0800e7bc(undefined4 param_1,undefined4 param_2,float param_3,float param_4)

{
  undefined4 *puVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  char cVar7;
  char in_OV;
  undefined1 uVar8;
  float fVar9;
  float fVar10;
  float local_18;
  float local_14;
  
  puVar1 = DAT_0800e914;
  local_18 = param_3;
  local_14 = param_4;
  FUN_0800bb0c(s_Machine_Type__0800e93c);
  FUN_0800bb0c(s_Cartesian_0800e94c);
  FUN_0800bb0c(s_Probe__0800e958);
  FUN_0800bb0c(s_FIX_MOUNTED_PROBE_0800e960);
  FUN_0800bb4c(s_Probe_Offset_X__0800e974,0x19);
  uVar8 = 0;
  cVar7 = '\0';
  FUN_0800bb4c(&DAT_0800e8fc);
  FUN_0800bb78(*puVar1,&DAT_0800e900);
  FUN_0800bb0c(s__Right_0800e984);
  FUN_0800bb0c(s__Back_0800e98c);
  uVar4 = FUN_0800e7a4(*puVar1);
  if (cVar7 == '\0') {
    FUN_0800e7a4(uVar4);
    if ((bool)uVar8 || cVar7 != in_OV) {
      pcVar5 = s___Same_Z_as_0800e9ac;
    }
    else {
      pcVar5 = s___Above_0800e9a0;
    }
  }
  else {
    pcVar5 = s___Below_0800e994;
  }
  FUN_0800bb0c(pcVar5);
  uVar4 = DAT_0800e918;
  FUN_0800bb0c(s_Nozzle__0800e9bc);
  FUN_0800bb0c(s_Auto_Bed_Leveling__0800e9c8);
  FUN_0800bb0c(&DAT_0800e904);
  cVar7 = *DAT_0800e91c == '\0';
  if ((bool)cVar7) {
    FUN_0800bb0c(s__disabled__0800ea08);
  }
  else {
    FUN_0800bb0c(s__enabled__0800e9dc);
    FUN_0800e7a0();
    if (cVar7 == '\0') {
      FUN_0800bb78(s_Z_Fade__0800e9e8);
      FUN_0800e934();
    }
    iVar2 = DAT_0800e924;
    FUN_0800bb0c(s_UBL_Adjustment_Z_0800e9f4);
    local_18 = (float)FUN_0800eef4(iVar2,iVar2 + 4);
    cVar7 = '\0';
    uVar6 = FUN_0800e720(&local_18);
    FUN_0800bf6c(uVar4,uVar6);
    fVar9 = (float)FUN_0800e7a0();
    pfVar3 = DAT_0800e92c;
    if (cVar7 == '\0') {
      fVar10 = *(float *)(iVar2 + 8);
      local_14 = DAT_0800e908;
      if (fVar10 < fVar9 != (NAN(fVar10) || NAN(fVar9))) {
        if (*DAT_0800e928 != fVar10) {
          *DAT_0800e928 = fVar10;
          *pfVar3 = 1.0 - fVar10 * *DAT_0800e930;
        }
        local_14 = *pfVar3;
      }
      local_14 = local_18 * local_14;
      uVar4 = FUN_0800e720(&local_14,0x2b);
      uVar4 = FUN_0800bb28(&DAT_0800e90c,uVar4);
      FUN_0800e936(uVar4,0x29);
    }
  }
  FUN_0800e934();
  return CONCAT44(local_14,local_18);
}



/* FUN_0800e934 at 0800e934 */

void FUN_0800e934(void)

{
  FUN_0800de78();
  return;
}



/* FUN_0800e936 at 0800e936 */

void FUN_0800e936(void)

{
  FUN_0800de78();
  return;
}



/* FUN_0800ea18 at 0800ea18 */

undefined4 FUN_0800ea18(void)

{
  *DAT_0800eb08 = 1;
  *DAT_0800eb0c = *DAT_0800eb0c | 0x400;
  return 1;
}



/* FUN_0800ea2c at 0800ea2c */

undefined8 FUN_0800ea2c(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  puVar2 = DAT_0800eb0c;
  pcVar1 = DAT_0800eb08;
  iVar4 = param_3;
  uVar6 = param_4;
  if (*DAT_0800eb08 != '\0') {
    *DAT_0800eb0c = *DAT_0800eb0c & 0xfffffbff;
    FUN_08015f70();
    puVar2[3] = 0xf3;
    FUN_080160dc(1,2);
    *pcVar1 = '\0';
  }
  iVar3 = DAT_0800eb10;
  uVar5 = CONCAT22((short)((uint)iVar4 >> 0x10),(short)param_3);
  for (iVar4 = 0; iVar4 < param_3; iVar4 = iVar4 + 1) {
    FUN_08015f00(0,iVar4 + *param_1 + iVar3,*(undefined1 *)(param_2 + iVar4),0,uVar5,uVar6);
    if (*(char *)(iVar3 + iVar4 + *param_1) != *(char *)(param_2 + iVar4)) {
      FUN_0800bb0c(0x800eb14);
    }
  }
  FUN_0800e6ec(param_4,param_2,uVar5 & 0xffff);
  *param_1 = *param_1 + param_3;
  return CONCAT44(uVar5,1);
}



/* FUN_0800eaaa at 0800eaaa */

undefined8 FUN_0800eaaa(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int local_28;
  undefined4 uStack_24;
  
  iVar2 = DAT_0800eb10;
  local_28 = param_3;
  uStack_24 = param_4;
  for (iVar3 = 0; iVar3 < param_3; iVar3 = iVar3 + 1) {
    uVar1 = *(undefined1 *)(iVar2 + iVar3 + *param_1);
    local_28 = CONCAT31(local_28._1_3_,uVar1);
    if (param_5 != 0) {
      *(undefined1 *)(param_2 + iVar3) = uVar1;
    }
    FUN_0800e6ec(param_4,&local_28,1);
  }
  *param_1 = *param_1 + param_3;
  return CONCAT44(local_28,1);
}



/* FUN_0800eaee at 0800eaee */

void FUN_0800eaee(undefined1 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_0800eb10;
  while (param_3 != 0) {
    *param_1 = *(undefined1 *)(iVar1 + param_2);
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    param_3 = param_3 + -1;
  }
  return;
}



/* FUN_0800eb1c at 0800eb1c */

undefined4 FUN_0800eb1c(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *param_1;
  if ((((fVar1 < DAT_0800eb60 == (NAN(fVar1) || NAN(DAT_0800eb60))) &&
       ((int)((uint)(fVar1 < DAT_0800eb64) << 0x1f) < 0)) &&
      (fVar1 = *param_2, fVar1 < DAT_0800eb68 == (NAN(fVar1) || NAN(DAT_0800eb68)))) &&
     ((int)((uint)(fVar1 < DAT_0800eb64) << 0x1f) < 0)) {
    return 1;
  }
  return 0;
}



/* FUN_0800eb6c at 0800eb6c */

undefined8 FUN_0800eb6c(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (param_1 != 0) {
    uVar1 = param_1 << LZCOUNT(param_1);
    iVar2 = (0x420 - (LZCOUNT(param_1) + 3)) * 0x100000 + (uVar1 >> 0xb);
    param_1 = uVar1 << 0x15;
  }
  return CONCAT44(iVar2,param_1);
}



/* FUN_0800eb88 at 0800eb88 */

ulonglong FUN_0800eb88(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_r7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 in_CY;
  bool bVar14;
  
  uVar11 = param_2 ^ param_4;
  uVar12 = uVar11 & 0x80000000;
  uVar4 = param_2 >> 0x14 & 0x7ff;
  bVar14 = uVar4 == 0;
  if (!bVar14) {
    unaff_r7 = param_4 >> 0x14 & 0x7ff;
    bVar14 = unaff_r7 == 0;
  }
  if (!bVar14) {
    in_CY = 0x7fe < uVar4;
    bVar14 = uVar4 == 0x7ff;
  }
  if (!bVar14) {
    in_CY = 0x7fe < unaff_r7;
    bVar14 = unaff_r7 == 0x7ff;
  }
  if (bVar14) {
    if (uVar4 != 0x7ff) {
      unaff_r7 = param_4 >> 0x14 & 0x7ff;
    }
    if (uVar4 == 0x7ff || unaff_r7 == 0x7ff) {
      uVar4 = param_2 * 2;
      if (uVar4 < 0xffe00001) {
        uVar4 = param_4 * 2;
      }
      if (uVar4 == 0xffe00000) {
        uVar4 = param_2 << 1;
      }
      if (uVar4 < 0xffe00000) {
        if ((param_4 & 0x7fffffff) != 0x7ff00000) {
          uVar12 = uVar12 | 0x7ff00000;
        }
      }
      else {
        uVar12 = 0xffffffff;
      }
      return (ulonglong)uVar12 << 0x20;
    }
    uVar7 = param_1 | param_2 << 1;
    bVar14 = uVar7 == 0;
    if (!bVar14) {
      uVar7 = param_3 | param_4 << 1;
      bVar14 = uVar7 == 0;
    }
    if (bVar14) {
      if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
        if (param_3 == 0 && (param_4 & 0x7fffffff) == 0) {
          uVar12 = ~uVar7;
        }
        return CONCAT44(uVar12,uVar7);
      }
      return CONCAT44(uVar11,uVar7) & 0x80000000ffffffff | 0x7ff0000000000000;
    }
    if (unaff_r7 == 0) {
      uVar2 = param_3 * 2;
      iVar3 = param_4 * 2 + (uint)CARRY4(param_3,param_3);
      iVar10 = LZCOUNT(iVar3);
      if (iVar3 == 0) {
        iVar10 = iVar10 + LZCOUNT(uVar2);
      }
      uVar7 = iVar10 - 0xb;
      if (uVar7 < 0x20) {
        param_4 = iVar3 << (uVar7 & 0xff) | uVar2 >> (0x20 - uVar7 & 0xff);
      }
      else {
        param_4 = uVar2 << (iVar10 - 0x2bU & 0xff);
      }
      param_3 = uVar2 << (uVar7 & 0xff);
      if (uVar4 != 0) {
        iVar3 = uVar4 + uVar7 + -1;
        goto LAB_0800eba8;
      }
    }
    else {
      uVar7 = -unaff_r7;
    }
    param_2 = param_2 & 0x7fffffff;
    iVar3 = LZCOUNT(param_2);
    if (param_2 == 0) {
      iVar3 = iVar3 + LZCOUNT(param_1);
    }
    uVar4 = iVar3 - 0xb;
    if (uVar4 < 0x20) {
      param_2 = param_2 << (uVar4 & 0xff) | param_1 >> (0x20 - uVar4 & 0xff);
    }
    else {
      param_2 = param_1 << (iVar3 - 0x2bU & 0xff);
    }
    param_1 = param_1 << (uVar4 & 0xff);
    iVar3 = uVar7 - uVar4;
  }
  else {
    iVar3 = (uVar4 - unaff_r7) - (uint)!(bool)in_CY;
  }
LAB_0800eba8:
  param_2 = param_2 & 0xfffff;
  param_4 = param_4 & 0xfffff;
  uVar4 = param_1 - param_3;
  iVar10 = (param_2 - param_4) - (uint)(param_3 > param_1);
  uVar7 = param_4 | 0x100000;
  if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
    iVar3 = iVar3 + -1;
    uVar2 = uVar4 & 0x80000000;
    uVar1 = uVar4 * 2;
    uVar4 = uVar1 + param_3;
    iVar10 = iVar10 * 2 + (uint)(uVar2 != 0) + uVar7 + (uint)CARRY4(uVar1,param_3);
  }
  uVar1 = iVar10 << 0xb | uVar4 >> 0x15;
  uVar6 = uVar1 / uVar7;
  uVar1 = uVar1 - uVar7 * uVar6;
  uVar8 = (uint)((ulonglong)param_3 * (ulonglong)uVar6);
  uVar5 = (uint)((ulonglong)param_3 * (ulonglong)uVar6 >> 0x20);
  uVar4 = uVar4 * 0x800;
  uVar2 = uVar4 - uVar8;
  iVar10 = (uVar1 - uVar5) - (uint)(uVar8 > uVar4);
  if (uVar1 <= uVar5 && (uint)(uVar8 <= uVar4) <= uVar1 - uVar5) {
    uVar6 = uVar6 - 1;
    bVar14 = CARRY4(uVar2,param_3);
    uVar2 = uVar2 + param_3;
    iVar10 = iVar10 + uVar7 + (uint)bVar14;
  }
  uVar1 = iVar10 << 0xb | uVar2 >> 0x15;
  uVar13 = uVar1 / uVar7;
  uVar1 = uVar1 - uVar7 * uVar13;
  uVar8 = (uint)((ulonglong)param_3 * (ulonglong)uVar13);
  uVar5 = (uint)((ulonglong)param_3 * (ulonglong)uVar13 >> 0x20);
  uVar2 = uVar2 * 0x800;
  uVar4 = uVar2 - uVar8;
  iVar10 = (uVar1 - uVar5) - (uint)(uVar8 > uVar2);
  if (uVar1 <= uVar5 && (uint)(uVar8 <= uVar2) <= uVar1 - uVar5) {
    uVar13 = uVar13 - 1;
    bVar14 = CARRY4(uVar4,param_3);
    uVar4 = uVar4 + param_3;
    iVar10 = iVar10 + uVar7 + (uint)bVar14;
  }
  uVar1 = iVar10 << 10 | uVar4 >> 0x16;
  uVar8 = uVar1 / uVar7;
  uVar1 = uVar1 - uVar7 * uVar8;
  uVar9 = (uint)((ulonglong)param_3 * (ulonglong)uVar8);
  uVar5 = (uint)((ulonglong)param_3 * (ulonglong)uVar8 >> 0x20);
  uVar4 = uVar4 * 0x400;
  uVar2 = uVar4 - uVar9;
  iVar10 = (uVar1 - uVar5) - (uint)(uVar9 > uVar4);
  if (uVar1 <= uVar5 && (uint)(uVar9 <= uVar4) <= uVar1 - uVar5) {
    uVar8 = uVar8 - 1;
    bVar14 = CARRY4(uVar2,param_3);
    uVar2 = uVar2 + param_3;
    iVar10 = iVar10 + uVar7 + (uint)bVar14;
  }
  uVar1 = iVar10 << 0xb | uVar2 >> 0x15;
  uVar8 = uVar6 << 0x15 | uVar13 << 10 | uVar8;
  uVar6 = uVar1 / uVar7;
  uVar1 = uVar1 - uVar7 * uVar6;
  uVar13 = (uint)((ulonglong)param_3 * (ulonglong)uVar6);
  uVar5 = (uint)((ulonglong)param_3 * (ulonglong)uVar6 >> 0x20);
  uVar2 = uVar2 * 0x800;
  uVar4 = uVar2 - uVar13;
  iVar10 = (uVar1 - uVar5) - (uint)(uVar13 > uVar2);
  if (uVar1 <= uVar5 && (uint)(uVar13 <= uVar2) <= uVar1 - uVar5) {
    uVar6 = uVar6 - 1;
    bVar14 = CARRY4(uVar4,param_3);
    uVar4 = uVar4 + param_3;
    iVar10 = iVar10 + uVar7 + (uint)bVar14;
  }
  uVar2 = iVar10 << 0xb | uVar4 >> 0x15;
  uVar5 = uVar2 / uVar7;
  uVar2 = uVar2 - uVar7 * uVar5;
  uVar7 = (uint)((ulonglong)param_3 * (ulonglong)uVar5);
  uVar1 = (uint)((ulonglong)param_3 * (ulonglong)uVar5 >> 0x20);
  uVar4 = uVar4 * 0x800;
  uVar5 = uVar5 - (uVar2 <= uVar1 && (uint)(uVar7 <= uVar4) <= uVar2 - uVar1);
  if (uVar2 - uVar1 != (uint)(uVar7 > uVar4) || uVar4 - uVar7 != 0) {
    uVar5 = uVar5 | 1;
  }
  uVar4 = uVar5 & 0xffc007ff;
  uVar7 = (uVar4 | (uVar6 & 0x7ff) << 0xb) >> 2;
  iVar10 = iVar3 + 0x400;
  if (iVar10 == 0 || iVar10 < 0 != SCARRY4(iVar3,0x400)) {
    uVar1 = (uVar4 << 0x1e) >> 1;
    uVar7 = uVar7 | uVar8 << 0x14;
    uVar4 = uVar8 >> 0xc | 0x100000;
    uVar2 = -iVar10 + 1;
    uVar5 = -iVar10 - 0x1f;
    if ((int)uVar2 < 0x20) {
      uVar8 = uVar2 & 0xff;
      uVar13 = uVar2 & 0xff;
      uVar11 = uVar4 >> (uVar2 & 0xff);
      uVar6 = uVar7 >> (uVar2 & 0xff) | uVar4 << (0x20 - uVar2 & 0xff);
      uVar5 = 0x20 - uVar2 & 0xff;
      bVar14 = uVar5 == 0 &&
               (uVar13 == 0 &&
                (uVar8 == 0 && 0x1f < uVar2 || uVar8 != 0 && (uVar7 >> uVar8 - 1 & 1) != 0) ||
               uVar13 != 0 && (uVar4 >> uVar13 - 1 & 1) != 0) ||
               uVar5 != 0 && (uVar7 << uVar5 - 1 & 0x80000000) != 0;
      uVar1 = uVar1 | uVar7 << uVar5;
    }
    else {
      if (0x34 < (int)uVar2) {
        return ((ulonglong)uVar11 & 0x80000000) << 0x20;
      }
      uVar6 = uVar4 >> (uVar5 & 0xff);
      uVar11 = 0x20 - uVar5 & 0xff;
      bVar14 = uVar11 != 0 && (uVar4 << uVar11 - 1 & 0x80000000) != 0;
      uVar1 = (uVar1 | uVar7 << 1) >> 1 | uVar7 >> (uVar5 & 0xff) | uVar4 << uVar11;
      uVar11 = 0;
    }
    bVar14 = 0x80000000 < uVar1 || uVar1 + 0x80000000 < (uint)bVar14;
    return CONCAT44(uVar11 + uVar12 + CARRY4(uVar6,(uint)bVar14),uVar6 + bVar14);
  }
  bVar14 = 0x80000000 < uVar4 * 0x40000000 ||
           uVar4 * 0x40000000 + 0x80000000 < (uint)((uVar5 & 4) != 0);
  uVar4 = uVar8 * 0x100000;
  uVar11 = (uVar8 >> 0xc) +
           iVar10 * 0x100000 + (uint)(CARRY4(uVar7,uVar4) || CARRY4(uVar7 + uVar4,(uint)bVar14));
  if ((int)(uVar11 + 0x100000) < 0) {
    return (ulonglong)(uVar12 | 0x7ff00000) << 0x20;
  }
  return CONCAT44(uVar11 | uVar12,uVar7 + uVar4 + bVar14);
}



/* FUN_0800edce at 0800edce */

uint FUN_0800edce(int param_1)

{
  uint uVar1;
  
  if ((param_1 << 1) >> 0x18 == -1) {
    uVar1 = param_1 << 9;
    if (uVar1 != 0) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 0xff;
}



/* FUN_0800ede8 at 0800ede8 */

longlong FUN_0800ede8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  
  if ((int)(param_2 ^ param_4) < 0) {
    param_4 = param_4 ^ 0x80000000;
    uVar7 = param_1 - param_3;
    iVar11 = (param_2 - param_4) - (uint)(param_3 > param_1);
    if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
      bVar12 = param_1 < uVar7;
      param_1 = param_1 - uVar7;
      param_2 = (param_2 - iVar11) - (uint)bVar12;
      bVar12 = CARRY4(param_3,uVar7);
      param_3 = param_3 + uVar7;
      param_4 = param_4 + iVar11 + (uint)bVar12;
    }
    bVar12 = 0xffdfffff < param_2 << 1;
    if (!bVar12) {
      bVar12 = param_4 * 2 < 0x200000 || param_4 * -2 + 0x200000 < (uint)bVar12;
    }
    if (bVar12) {
      if (0xffdfffff < param_2 << 1) {
        return CONCAT44(param_2,param_1);
      }
      if (param_3 == 0 && (param_4 & 0x7fffffff) == 0) {
LAB_0800eec2:
        return CONCAT44(param_2,param_1);
      }
      if (param_2 * 2 < 0x200000) {
        bVar12 = CARRY4(param_1,param_3);
        param_1 = param_1 + param_3;
        param_2 = param_2 + (param_4 & 0x7fffffff) + (uint)bVar12;
        goto LAB_0800eec2;
      }
      param_4 = param_4 & 0x7fffffff;
      uVar7 = (param_2 >> 0x14) - 1;
      if (0x34 < (int)uVar7) goto LAB_0800eec2;
    }
    else {
      uVar7 = (param_2 >> 0x14) - (param_4 >> 0x14);
      if (0x35 < (int)uVar7) goto LAB_0800eec2;
      param_4 = (param_4 << 0xb | 0x80000000) >> 0xb;
    }
    uVar4 = (int)(param_2 << 0xb | 0x80000000) >> 0xb;
    uVar9 = uVar7 - 0x20;
    if (uVar9 == 0 || (int)uVar7 < 0x20) {
      uVar5 = param_3 >> (uVar7 & 0xff);
      uVar10 = (param_3 >> (uVar7 & 0x1f) | param_3 << 0x20 - (uVar7 & 0x1f)) ^ uVar5;
      uVar9 = param_4 >> (uVar7 & 0x1f) | param_4 << 0x20 - (uVar7 & 0x1f);
      uVar6 = (uVar9 << (uVar7 & 0xff)) >> (uVar7 & 0xff);
      uVar5 = uVar5 ^ uVar9 ^ uVar6;
      uVar7 = param_1 + uVar5;
      uVar9 = uVar4 + uVar6 + (uint)CARRY4(param_1,uVar5);
      if (!CARRY4(uVar4,uVar6) && !CARRY4(uVar4 + uVar6,(uint)CARRY4(param_1,uVar5)))
      goto LAB_0800ee78;
    }
    else {
      uVar5 = param_4 >> (uVar9 & 0xff);
      uVar10 = (param_4 >> (uVar9 & 0x1f) | param_4 << 0x20 - (uVar9 & 0x1f)) ^ uVar5;
      if (param_3 != 0) {
        uVar10 = uVar10 | 1;
      }
      uVar7 = param_1 + uVar5;
      uVar9 = uVar4 + CARRY4(param_1,uVar5);
      if (!CARRY4(uVar4,(uint)CARRY4(param_1,uVar5))) goto LAB_0800ee78;
    }
    uVar4 = uVar9 & 1;
    uVar9 = uVar9 >> 1;
    bVar2 = (byte)uVar7;
    uVar7 = (uint)(uVar4 != 0) << 0x1f | uVar7 >> 1;
    uVar4 = uVar10 & 1;
    uVar10 = (uint)(bVar2 & 1) << 0x1f | uVar10 >> 1;
    if (uVar4 != 0) {
      uVar10 = uVar10 | 1;
    }
LAB_0800ee78:
    bVar12 = 0x80000000 < uVar10 || uVar10 + 0x80000000 < (uint)((uVar7 & 1) != 0);
    uVar4 = uVar9 + 0x100000 + (param_2 & 0xfff00000) + (uint)CARRY4(uVar7,(uint)bVar12);
    if (0xffdfffff < uVar4 * 2) {
      return (ulonglong)(uVar4 & 0xfff00000) << 0x20;
    }
    return CONCAT44(uVar4,uVar7 + bVar12);
  }
  uVar7 = param_1 - param_3;
  if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
    uVar4 = (param_2 - param_4) - (uint)(param_3 > param_1) ^ 0x80000000;
    bVar12 = param_1 < uVar7;
    param_1 = param_1 - uVar7;
    param_2 = (param_2 - uVar4) - (uint)bVar12;
    bVar12 = CARRY4(param_3,uVar7);
    param_3 = param_3 + uVar7;
    param_4 = param_4 + uVar4 + (uint)bVar12;
  }
  bVar12 = 0xffdfffff < param_2 << 1;
  if (!bVar12) {
    bVar12 = param_4 * 2 < 0x200000 || param_4 * -2 + 0x200000 < (uint)bVar12;
  }
  if (bVar12) {
    bVar12 = 0xffdfffff < param_2 * 2;
    if (bVar12) {
      if (param_2 * 2 == 0xffe00000) {
        bVar12 = 0xffdfffff < param_4 << 1;
      }
      if (bVar12) {
        param_2 = 0xffffffff;
      }
      goto LAB_0800beb4;
    }
    uVar9 = param_4 & 0x7fffffff;
    if (param_3 != 0 || (param_4 & 0x7fffffff) != 0) {
      if (0x3fffff < param_2 * 2) {
        uVar4 = (param_2 >> 0x14) - 1;
        if (0x34 < (int)uVar4) goto LAB_0800beb4;
        goto LAB_0800be4a;
      }
      bVar12 = param_1 < param_3;
      param_1 = param_1 - param_3;
      param_2 = (param_2 - uVar9) - (uint)bVar12;
    }
    if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
      param_2 = 0;
    }
  }
  else {
    uVar7 = param_2 >> 0x14;
    uVar4 = uVar7 - (param_4 >> 0x14);
    if (0x36 < (int)uVar4) goto LAB_0800beb4;
    uVar9 = param_4 << 0xb | 0x80000000;
    if ((int)uVar4 < 2) {
      uVar9 = uVar9 | param_3 >> 0x15;
      if (uVar4 == 1) {
        param_3 = param_3 << 10;
        uVar9 = uVar9 >> 1;
      }
      else {
        param_3 = param_3 << 0xb;
      }
      uVar5 = param_1 >> 0x15;
      uVar4 = param_1 * 0x800;
      param_1 = uVar4 - param_3;
      param_2 = ((param_2 << 0xb | 0x80000000 | uVar5) - uVar9) - (uint)(uVar4 < param_3);
      uVar4 = uVar7 << 0x14;
      if (-1 < (int)param_2) {
        if (param_2 == 0) {
          iVar11 = LZCOUNT(param_1);
          param_2 = param_1 << iVar11;
          if (param_2 == 0) goto LAB_0800beb4;
          param_1 = 0;
          iVar11 = iVar11 + 0x20;
        }
        else {
          iVar11 = LZCOUNT(param_2);
          param_2 = param_2 << iVar11 | param_1 >> (0x20U - iVar11 & 0xff);
          param_1 = param_1 << iVar11;
        }
        iVar3 = (int)(uVar7 << 0x14) >> 0x1f;
        uVar9 = -iVar3 | uVar7 << 0x15;
        uVar4 = uVar9 + iVar11 * -0x200000;
        uVar5 = uVar4 & 0xfffffffe;
        uVar7 = iVar3 * -0x80000000;
        uVar4 = uVar4 >> 1 | uVar7;
        if (uVar9 < (uint)(iVar11 * 0x200000) || uVar5 == 0) {
          uVar5 = 0x200000 - uVar5 >> 0x15;
          uVar4 = param_2 >> (uVar5 & 0x1f);
          uVar9 = param_2 << 0x20 - (uVar5 & 0x1f);
          param_2 = param_2 >> (uVar5 & 0xff);
          param_1 = param_1 >> (uVar5 & 0xff) ^ (uVar4 | uVar9) ^ param_2;
          uVar4 = uVar7;
        }
      }
      uVar7 = param_1 >> 0xb | param_2 << 0x15;
      bVar12 = (param_1 >> 10 & 1) != 0 && (param_1 >> 0xb & 1) != 0;
      param_1 = uVar7 + bVar12;
      param_2 = uVar4 + ((param_2 & 0x7fffffff) >> 0xb) + (uint)CARRY4(uVar7,(uint)bVar12);
      goto LAB_0800beb4;
    }
    uVar9 = uVar9 >> 0xb;
LAB_0800be4a:
    uVar5 = param_2 >> 0x14;
    uVar7 = (param_2 << 0xb | 0x80000000) >> 0xb;
    uVar6 = uVar4 - 0x20;
    if (uVar6 == 0 || (int)uVar4 < 0x20) {
      uVar6 = param_3 >> (uVar4 & 0xff);
      uVar8 = (param_3 >> (uVar4 & 0x1f) | param_3 << 0x20 - (uVar4 & 0x1f)) ^ uVar6;
      uVar10 = uVar9 >> (uVar4 & 0xff);
      uVar9 = uVar6 ^ (uVar9 >> (uVar4 & 0x1f) | uVar9 << 0x20 - (uVar4 & 0x1f)) ^ uVar10;
      uVar4 = (param_1 - uVar9) - (uint)(uVar8 != 0);
      uVar7 = (uVar7 - uVar10) - (uint)(param_1 <= uVar9 && (uint)(uVar8 == 0) <= param_1 - uVar9);
    }
    else {
      uVar10 = uVar9 >> (uVar6 & 0xff);
      uVar8 = (param_3 | param_3 << 0x10) >> 0x10 | uVar9 << (0x20 - uVar6 & 0xff);
      uVar4 = (param_1 - uVar10) - (uint)(uVar8 != 0);
      uVar7 = uVar7 - (param_1 <= uVar10 && (uint)(uVar8 == 0) <= param_1 - uVar10);
    }
    uVar9 = -uVar8;
    if (((uVar7 & 0x100000) == 0) && (uVar5 = uVar5 - 1, (uVar5 & 0x7ff) != 0)) {
      bVar1 = (uVar9 & 0x80000000) != 0;
      uVar9 = uVar8 * -2;
      uVar6 = uVar4 * 2;
      bVar12 = CARRY4(uVar4,uVar4);
      uVar4 = uVar4 * 2 + (uint)bVar1;
      uVar7 = uVar7 * 2 + (uint)(bVar12 || CARRY4(uVar6,(uint)bVar1));
    }
    bVar12 = 0x80000000 < uVar9 || uVar9 + 0x80000000 < (uint)((uVar4 & 1) != 0);
    param_1 = uVar4 + bVar12;
    param_2 = (uVar7 & 0xffefffff) + uVar5 * 0x100000 + (uint)CARRY4(uVar4,(uint)bVar12);
  }
LAB_0800beb4:
  return CONCAT44(param_2,param_1);
}



/* FUN_0800eecc at 0800eecc */

undefined8 FUN_0800eecc(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (int)param_1 >> 0x1f;
  if (param_1 != 0) {
    iVar1 = (param_1 ^ uVar2) - uVar2;
    iVar3 = LZCOUNT(iVar1);
    param_1 = iVar1 << iVar3;
    uVar2 = (uVar2 << 0x1f | (0x420 - (iVar3 + 3)) * 0x100000) + (param_1 >> 0xb);
    param_1 = param_1 << 0x15;
  }
  return CONCAT44(uVar2,param_1);
}



/* FUN_0800eeee at 0800eeee */

void FUN_0800eeee(undefined4 param_1)

{
  FUN_08012510(param_1,0x3c);
  return;
}



/* FUN_0800eef4 at 0800eef4 */

undefined8 FUN_0800eef4(float *param_1,float *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint in_fpscr;
  float fVar11;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  
  fVar17 = *param_1;
  uVar19 = FUN_0800bca0(fVar17 + -20.0);
  uVar9 = (undefined4)((ulonglong)DAT_0800f14c >> 0x20);
  uVar6 = (undefined4)DAT_0800f14c;
  FUN_0800c284((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),uVar6,uVar9);
  bVar3 = FUN_08012518();
  if ((char)bVar3 < '\0') {
    bVar3 = 0;
  }
  else if ('\x04' < (char)bVar3) {
    bVar3 = 4;
  }
  fVar18 = *param_2;
  uVar19 = FUN_0800bca0(fVar18 + -20.0);
  FUN_0800c284((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),uVar6,uVar9);
  bVar4 = FUN_08012518();
  uVar9 = DAT_0800f168;
  pbVar2 = DAT_0800f164;
  if ((char)bVar4 < '\0') {
    bVar4 = 0;
  }
  else if ('\x04' < (char)bVar4) {
    bVar4 = 4;
  }
  iVar5 = (int)(char)bVar4;
  if (bVar3 < 5) {
    fVar12 = *(float *)(DAT_0800f158 + (uint)bVar3 * 4);
  }
  else {
    fVar12 = (float)VectorUnsignedToFloat((uint)bVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar12 = fVar12 * DAT_0800f154 + 20.0;
  }
  bVar1 = bVar3 + 1;
  if (bVar1 < 5) {
    fVar14 = *(float *)(DAT_0800f158 + (uint)bVar1 * 4);
  }
  else {
    fVar14 = (float)VectorUnsignedToFloat((uint)bVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar14 = fVar14 * DAT_0800f154 + 20.0;
  }
  iVar8 = (short)(char)bVar3 * 0x14;
  if ('\x02' < (char)bVar3) {
    iVar8 = 0x3c;
  }
  iVar7 = (short)(char)bVar3 * 0x14 + DAT_0800f15c;
  fVar16 = *(float *)(iVar7 + iVar5 * 4);
  fVar16 = ((*(float *)(DAT_0800f15c + iVar8 + iVar5 * 4 + 0x14) - fVar16) * (fVar17 - fVar12)) /
           (fVar14 - fVar12) + fVar16;
  if (iVar5 < 3) {
    iVar10 = iVar5 << 2;
    iVar5 = (iVar5 + 1) * 4;
  }
  else {
    iVar10 = 0xc;
    iVar5 = 0x10;
  }
  fVar13 = *(float *)(iVar7 + iVar5);
  if (bVar4 < 5) {
    fVar15 = *(float *)(DAT_0800f160 + (uint)bVar4 * 4);
  }
  else {
    fVar15 = (float)VectorUnsignedToFloat((uint)bVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar15 = fVar15 * DAT_0800f154 + 20.0;
  }
  bVar4 = bVar4 + 1;
  if (bVar4 < 5) {
    fVar11 = *(float *)(DAT_0800f160 + (uint)bVar4 * 4);
  }
  else {
    fVar11 = (float)VectorUnsignedToFloat((uint)bVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = fVar11 * DAT_0800f154 + 20.0;
  }
  fVar16 = (((((*(float *)(DAT_0800f15c + iVar8 + iVar10 + 0x18) - fVar13) * (fVar17 - fVar12)) /
              (fVar14 - fVar12) + fVar13) - fVar16) * (fVar18 - fVar15)) / (fVar11 - fVar15) +
           fVar16;
  if ((int)((uint)*DAT_0800f164 << 0x19) < 0) {
    FUN_0800bb78(fVar17,DAT_0800f16c);
    FUN_0800de78(uVar9,0x2c);
    uVar6 = FUN_0800bca0(*param_2);
    FUN_0800bfd0(uVar6,uVar9,2);
    FUN_0800bb0c(DAT_0800f170);
    uVar6 = FUN_0800bca0(fVar16);
    FUN_0800bfd0(uVar6,uVar9,6);
    if ((int)((uint)*pbVar2 << 0x19) < 0) {
      FUN_0800bb0c(DAT_0800f174);
      FUN_0800bfd0(uVar6,uVar9,6);
      FUN_0800de78(uVar9,10);
    }
  }
  iVar5 = FUN_0800edce(fVar16);
  fVar17 = DAT_0800f178;
  uVar6 = extraout_s1;
  if ((iVar5 != 0) && (fVar16 = fVar17, (int)((uint)*pbVar2 << 0x19) < 0)) {
    FUN_0800bb78(*param_1,DAT_0800f148);
    FUN_0800de78(uVar9,0x2c);
    uVar6 = FUN_0800bca0(*param_2);
    FUN_0800bfd0(uVar6,uVar9,2);
    FUN_0800de78(uVar9,0x29);
    FUN_0800de78(uVar9,10);
    uVar6 = extraout_s1_00;
  }
  return CONCAT44(uVar6,fVar16);
}



/* FUN_0800f17c at 0800f17c */

void FUN_0800f17c(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  
  *param_1 = *param_1 + *param_2;
  param_1[1] = param_1[1] + *param_3;
  param_1[2] = param_1[2] + *param_4;
  param_1[3] = param_1[3] + *param_2 * *param_2;
  param_1[4] = param_1[4] + *param_3 * *param_3;
  param_1[5] = param_1[5] + *param_4 * *param_4;
  param_1[6] = param_1[6] + *param_2 * *param_3;
  param_1[7] = param_1[7] + *param_2 * *param_4;
  param_1[8] = param_1[8] + *param_3 * *param_4;
  fVar1 = param_1[9];
  if ((int)((uint)(fVar1 < ABS(*param_2)) << 0x1f) < 0) {
    fVar1 = ABS(*param_2);
  }
  param_1[9] = fVar1;
  fVar1 = param_1[10];
  if ((int)((uint)(fVar1 < ABS(*param_3)) << 0x1f) < 0) {
    fVar1 = ABS(*param_3);
  }
  param_1[10] = fVar1;
  param_1[0xe] = param_1[0xe] + 1.0;
  return;
}



/* FUN_0800f268 at 0800f268 */

undefined4 FUN_0800f268(float *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  fVar3 = param_1[0xe];
  uVar1 = fVar3 == 0.0;
  uVar2 = 0.0 <= fVar3;
  if (!(bool)uVar1) {
    fVar4 = *param_1 / fVar3;
    *param_1 = fVar4;
    fVar5 = param_1[1] / fVar3;
    param_1[1] = fVar5;
    fVar6 = param_1[2] / fVar3;
    param_1[2] = fVar6;
    param_1[5] = param_1[5] / fVar3 - fVar6 * fVar6;
    fVar7 = param_1[3] / fVar3 - fVar4 * fVar4;
    param_1[3] = fVar7;
    fVar8 = param_1[4] / fVar3 - fVar5 * fVar5;
    fVar9 = param_1[6] / fVar3 - fVar4 * fVar5;
    fVar11 = fVar7 * fVar8 - fVar9 * fVar9;
    fVar10 = param_1[8] / fVar3 - fVar5 * fVar6;
    fVar3 = param_1[7] / fVar3 - fVar4 * fVar6;
    param_1[4] = fVar8;
    param_1[6] = fVar9;
    param_1[8] = fVar10;
    param_1[7] = fVar3;
    uVar12 = FUN_0800bca0(ABS(fVar11));
    uVar13 = FUN_0800bca0(param_1[9] + param_1[10]);
    uVar13 = FUN_0800c284((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),DAT_0800f37c,DAT_0800f380);
    FUN_080157ec((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar12,
                 (int)((ulonglong)uVar12 >> 0x20));
    if ((bool)uVar2 && !(bool)uVar1) {
      fVar8 = (fVar10 * fVar9 - fVar3 * fVar8) / fVar11;
      param_1[0xb] = fVar8;
      fVar11 = (fVar3 * fVar9 - fVar10 * fVar7) / fVar11;
      param_1[0xc] = fVar11;
      param_1[0xd] = -(fVar6 + fVar8 * fVar4 + fVar11 * fVar5);
      return 0;
    }
  }
  return 1;
}



/* FUN_0800f384 at 0800f384 */

void FUN_0800f384(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_4 = param_1;
  param_4[1] = param_2;
  param_4[2] = param_3;
  return;
}



/* FUN_0800f392 at 0800f392 */

undefined8
FUN_0800f392(undefined4 param_1,float param_2,float param_3,float param_4,float param_5,
            float param_6,float param_7)

{
  FUN_0800f400(param_3 * param_7 - param_4 * param_6,param_4 * param_5 - param_2 * param_7,
               param_2 * param_6 - param_3 * param_5);
  FUN_0800f3f4();
  return CONCAT44(param_3,param_2);
}



/* FUN_0800f3d6 at 0800f3d6 */

undefined8 FUN_0800f3d6(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  FUN_0800f400(*param_2,param_2[1],param_2[2]);
  FUN_0800f420();
  FUN_0800f3f4();
  return CONCAT44(param_3,param_2);
}



/* FUN_0800f3f4 at 0800f3f4 */

void FUN_0800f3f4(void)

{
  undefined4 *unaff_r4;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *unaff_r4 = in_stack_00000000;
  unaff_r4[1] = in_stack_00000004;
  unaff_r4[2] = in_stack_00000008;
  return;
}



/* FUN_0800f400 at 0800f400 */

void FUN_0800f400(void)

{
  FUN_0800f384();
  return;
}



/* FUN_0800f404 at 0800f404 */

void FUN_0800f404(float *param_1)

{
  FUN_0800bce8(*param_1 * *param_1 + param_1[1] * param_1[1] + param_1[2] * param_1[2]);
  return;
}



/* FUN_0800f420 at 0800f420 */

void FUN_0800f420(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_0800f404();
  fVar1 = 1.0 / fVar1;
  *param_1 = *param_1 * fVar1;
  param_1[1] = param_1[1] * fVar1;
  param_1[2] = param_1[2] * fVar1;
  return;
}



/* FUN_0800f456 at 0800f456 */

void FUN_0800f456(float *param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,float param_9,float param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *param_1;
  fVar2 = param_1[1];
  fVar1 = param_1[2];
  *param_1 = fVar3 * param_2 + fVar2 * param_5 + fVar1 * param_8;
  param_1[1] = fVar3 * param_3 + fVar2 * param_6 + fVar1 * param_9;
  param_1[2] = fVar3 * param_4 + fVar2 * param_7 + fVar1 * param_10;
  return;
}



/* FUN_0800f4bc at 0800f4bc */

void FUN_0800f4bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000014;
  undefined4 *in_stack_00000018;
  undefined4 *in_stack_0000001c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  uVar1 = FUN_0800f384(*in_stack_00000014,*in_stack_00000018,*in_stack_0000001c,&local_30);
  FUN_0800f64c(&uStack_54,&uStack_10,0x24);
  FUN_0800f456(uVar1,uStack_54,uStack_50,uStack_4c);
  *in_stack_00000014 = local_30;
  *in_stack_00000018 = local_2c;
  *in_stack_0000001c = local_28;
  return;
}



/* FUN_0800f504 at 0800f504 */

void FUN_0800f504(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1c = param_5;
  local_18 = param_6;
  local_14 = param_7;
  local_10 = param_8;
  local_c = param_9;
  local_8 = param_10;
  local_28 = param_2;
  local_24 = param_3;
  local_20 = param_4;
  FUN_0800f64c(param_1,&local_28,0x24);
  return;
}



/* FUN_0800f534 at 0800f534 */

void FUN_0800f534(undefined4 param_1,float param_2,undefined4 param_3,float param_4)

{
  undefined4 uVar1;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  float local_20;
  undefined4 uStack_1c;
  float local_18;
  
  uStack_24 = param_1;
  local_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  FUN_0800f3d6(&local_3c,&local_20);
  uVar1 = FUN_0800f400(0x3f800000,DAT_0800f624,-(local_20 / local_18));
  FUN_0800f3d6(&local_48,uVar1);
  FUN_0800f392(&local_30,local_3c,uStack_38,local_34,local_48,uStack_44,local_40);
  local_54 = local_30;
  uStack_50 = uStack_2c;
  local_4c = local_28;
  FUN_0800f3d6(&local_30,&local_54);
  local_54 = local_3c;
  uStack_50 = uStack_38;
  local_4c = local_34;
  FUN_0800f504(param_1,local_48,uStack_44,local_40,local_30,uStack_2c,local_28);
  return;
}



/* FUN_0800f5be at 0800f5be */

undefined4 FUN_0800f5be(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  float fVar6;
  
  FUN_0800bb0c(param_2);
  uVar1 = DAT_0800f628;
  bVar4 = 0;
  iVar5 = 3;
  do {
    iVar3 = 3;
    do {
      fVar6 = *(float *)(param_1 + (uint)bVar4 * 4);
      if (fVar6 < 0.0 == NAN(fVar6)) {
        FUN_0800de78(uVar1,0x2b);
      }
      uVar2 = FUN_0800bca0(*(undefined4 *)(param_1 + (uint)bVar4 * 4));
      FUN_0800bfd0(uVar2,uVar1,6);
      FUN_0800de78(uVar1,0x20);
      bVar4 = bVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    FUN_0800de78(uVar1,10);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return param_4;
}



/* FUN_0800f62c at 0800f62c */

void FUN_0800f62c(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  
  if (param_3 != 0) {
    uVar1 = (uint)param_2 & 3;
    while (uVar1 != 0) {
      param_3 = param_3 - 1;
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      if (param_3 == 0) {
        return;
      }
      uVar1 = (uint)((int)param_2 + 1) & 3;
      param_2 = (undefined4 *)((int)param_2 + 1);
      param_1 = (undefined4 *)((int)param_1 + 1);
    }
    if (((uint)param_1 & 3) != 0) {
      bVar12 = 3 < param_3;
      param_3 = param_3 - 4;
      if (bVar12) {
        puVar6 = param_2;
        if (((uint)param_1 & 1) == 0) {
          do {
            param_2 = puVar6 + 1;
            uVar8 = *puVar6;
            puVar4 = (undefined2 *)((int)param_1 + 2);
            *(short *)param_1 = (short)uVar8;
            bVar12 = 3 < param_3;
            param_3 = param_3 - 4;
            param_1 = param_1 + 1;
            *puVar4 = (short)((uint)uVar8 >> 0x10);
            puVar6 = param_2;
          } while (bVar12);
        }
        else {
          do {
            param_2 = puVar6 + 1;
            uVar8 = *puVar6;
            *(char *)param_1 = (char)uVar8;
            puVar5 = (undefined1 *)((int)param_1 + 3);
            *(short *)((int)param_1 + 1) = (short)((uint)uVar8 >> 8);
            bVar12 = 3 < param_3;
            param_3 = param_3 - 4;
            param_1 = param_1 + 1;
            *puVar5 = (char)((uint)uVar8 >> 0x18);
            puVar6 = param_2;
          } while (bVar12);
        }
      }
      if (!bVar12) {
        param_3 = param_3 + 4;
      }
      do {
        bVar12 = param_3 != 0;
        param_3 = param_3 - 1;
        puVar6 = param_1;
        if (bVar12) {
          puVar6 = (undefined4 *)((int)param_1 + 1);
          *(undefined1 *)param_1 = *(undefined1 *)param_2;
          param_2 = (undefined4 *)((int)param_2 + 1);
        }
        param_1 = puVar6;
      } while (bVar12 && param_3 != 0);
      return;
    }
    while (uVar1 = param_3 - 0x10, 0xf < param_3) {
      uVar8 = *param_2;
      uVar9 = param_2[1];
      uVar10 = param_2[2];
      uVar11 = param_2[3];
      param_2 = param_2 + 4;
      *param_1 = uVar8;
      param_1[1] = uVar9;
      param_1[2] = uVar10;
      param_1[3] = uVar11;
      param_1 = param_1 + 4;
      param_3 = uVar1;
    }
    if ((uVar1 & 8) != 0) {
      uVar8 = *param_2;
      uVar9 = param_2[1];
      param_2 = param_2 + 2;
      *param_1 = uVar8;
      param_1[1] = uVar9;
      param_1 = param_1 + 2;
    }
    puVar2 = param_1;
    puVar6 = param_2;
    if ((int)(param_3 << 0x1d) < 0) {
      puVar6 = param_2 + 1;
      puVar2 = param_1 + 1;
      *param_1 = *param_2;
    }
    puVar3 = puVar2;
    puVar7 = puVar6;
    if ((uVar1 & 2) != 0) {
      puVar7 = (undefined4 *)((int)puVar6 + 2);
      puVar3 = (undefined4 *)((int)puVar2 + 2);
      *(undefined2 *)puVar2 = *(undefined2 *)puVar6;
    }
    if ((int)(param_3 << 0x1f) < 0) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar7;
    }
  }
  return;
}



/* FUN_0800f64c at 0800f64c */

void FUN_0800f64c(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  
  uVar5 = param_3 - 0x10;
  if (0xf < param_3) {
    do {
      uVar6 = *param_2;
      uVar7 = param_2[1];
      uVar8 = param_2[2];
      uVar9 = param_2[3];
      param_2 = param_2 + 4;
      bVar10 = 0xf < uVar5;
      uVar5 = uVar5 - 0x10;
      *param_1 = uVar6;
      param_1[1] = uVar7;
      param_1[2] = uVar8;
      param_1[3] = uVar9;
      param_1 = param_1 + 4;
    } while (bVar10);
  }
  if ((uVar5 & 8) != 0) {
    uVar6 = *param_2;
    uVar7 = param_2[1];
    param_2 = param_2 + 2;
    *param_1 = uVar6;
    param_1[1] = uVar7;
    param_1 = param_1 + 2;
  }
  puVar1 = param_1;
  puVar3 = param_2;
  if ((int)(uVar5 << 0x1d) < 0) {
    puVar3 = param_2 + 1;
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  puVar2 = puVar1;
  puVar4 = puVar3;
  if ((uVar5 & 2) != 0) {
    puVar4 = (undefined4 *)((int)puVar3 + 2);
    puVar2 = (undefined4 *)((int)puVar1 + 2);
    *(undefined2 *)puVar1 = *(undefined2 *)puVar3;
  }
  if ((int)(uVar5 << 0x1f) < 0) {
    *(undefined1 *)puVar2 = *(undefined1 *)puVar4;
  }
  return;
}



/* FUN_0800f6d2 at 0800f6d2 */

void FUN_0800f6d2(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  
  *param_1 = *param_1 + *param_5 * *param_2;
  param_1[1] = param_1[1] + *param_5 * *param_3;
  param_1[2] = param_1[2] + *param_5 * *param_4;
  param_1[3] = param_1[3] + *param_5 * *param_2 * *param_2;
  param_1[4] = param_1[4] + *param_5 * *param_3 * *param_3;
  param_1[5] = param_1[5] + *param_5 * *param_4 * *param_4;
  param_1[6] = param_1[6] + *param_5 * *param_2 * *param_3;
  param_1[7] = param_1[7] + *param_5 * *param_2 * *param_4;
  param_1[8] = param_1[8] + *param_5 * *param_3 * *param_4;
  param_1[0xe] = param_1[0xe] + *param_5;
  fVar1 = param_1[9];
  if ((int)((uint)(fVar1 < ABS(*param_5 * *param_2)) << 0x1f) < 0) {
    fVar1 = ABS(*param_5 * *param_2);
  }
  param_1[9] = fVar1;
  fVar1 = param_1[10];
  if ((int)((uint)(fVar1 < ABS(*param_5 * *param_3)) << 0x1f) < 0) {
    fVar1 = ABS(*param_5 * *param_3);
  }
  param_1[10] = fVar1;
  return;
}



/* FUN_0800f80c at 0800f80c */

void FUN_0800f80c(void)

{
  *DAT_080101d0 = *DAT_080101d0 | 1;
  return;
}



/* FUN_0800f81a at 0800f81a */

undefined4 FUN_0800f81a(void)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_r3;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  puVar2 = DAT_080101d8;
  iVar3 = DAT_080101d4;
  uVar6 = (uint)(byte)DAT_080101d8[4];
  bVar1 = DAT_080101d8[7];
  uVar5 = (uint)bVar1;
  piVar4 = (int *)(DAT_080101d4 + 0x120);
  iVar7 = *(int *)(DAT_080101d4 + 0x13c);
  iVar8 = *(int *)(DAT_080101d4 + 0x138);
  if ((int)(uVar6 << 0x1f) < 0) {
    bVar9 = (int)(uVar5 << 0x1f) < 0;
    if (bVar9) {
      *(int *)(iVar8 + 0x18) = iVar7;
    }
    if (!bVar9) {
      *(int *)(iVar8 + 0x18) = iVar7 << 0x10;
    }
    *puVar2 = 0xff;
  }
  else {
    bVar9 = -1 < (int)(uVar5 << 0x1f);
    if (bVar9) {
      *(int *)(iVar8 + 0x18) = iVar7;
    }
    if (!bVar9) {
      *(int *)(iVar8 + 0x18) = iVar7 << 0x10;
    }
    *puVar2 = 1;
  }
  iVar7 = *(int *)(iVar3 + 0xec);
  iVar8 = *(int *)(iVar3 + 0xe8);
  if ((int)(uVar6 << 0x1e) < 0) {
    bVar9 = (bVar1 & 2) != 0;
    if (bVar9) {
      *(int *)(iVar8 + 0x18) = iVar7;
    }
    if (!bVar9) {
      *(int *)(iVar8 + 0x18) = iVar7 << 0x10;
    }
    puVar2[1] = 0xff;
  }
  else {
    bVar9 = (bVar1 & 2) == 0;
    if (bVar9) {
      *(int *)(iVar8 + 0x18) = iVar7;
    }
    if (!bVar9) {
      *(int *)(iVar8 + 0x18) = iVar7 << 0x10;
    }
    puVar2[1] = 1;
  }
  iVar8 = *(int *)(iVar3 + 0x94);
  iVar7 = *(int *)(iVar3 + 0x90);
  if ((int)(uVar6 << 0x1d) < 0) {
    bVar9 = (bVar1 & 4) != 0;
    if (bVar9) {
      *(int *)(iVar7 + 0x18) = iVar8;
    }
    if (!bVar9) {
      *(int *)(iVar7 + 0x18) = iVar8 << 0x10;
    }
    puVar2[2] = 0xff;
  }
  else {
    bVar9 = (bVar1 & 4) == 0;
    if (bVar9) {
      *(int *)(iVar7 + 0x18) = iVar8;
    }
    if (!bVar9) {
      *(int *)(iVar7 + 0x18) = iVar8 << 0x10;
    }
    puVar2[2] = 1;
  }
  iVar3 = *(int *)(iVar3 + 0x124);
  iVar7 = *piVar4;
  if ((int)(uVar6 << 0x1c) < 0) {
    bVar9 = (int)(uVar5 << 0x1c) < 0;
    if (bVar9) {
      *(int *)(iVar7 + 0x18) = iVar3;
    }
    if (!bVar9) {
      *(int *)(iVar7 + 0x18) = iVar3 << 0x10;
    }
    puVar2[3] = 0xff;
  }
  else {
    bVar9 = -1 < (int)(uVar5 << 0x1c);
    if (bVar9) {
      *(int *)(iVar7 + 0x18) = iVar3;
    }
    if (!bVar9) {
      *(int *)(iVar7 + 0x18) = iVar3 << 0x10;
    }
    puVar2[3] = 1;
  }
  return in_r3;
}



/* FUN_0800f8f2 at 0800f8f2 */

int FUN_0800f8f2(void)

{
  short sVar1;
  longlong lVar2;
  char *pcVar3;
  uint *puVar4;
  uint *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined2 uVar12;
  ushort uVar13;
  uint uVar14;
  byte *extraout_r1;
  byte *pbVar15;
  byte *pbVar16;
  int *piVar17;
  char cVar18;
  short sVar19;
  int in_r3;
  int iVar20;
  char *pcVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  bool bVar25;
  char cVar26;
  undefined8 uVar27;
  int local_28;
  
  pcVar21 = DAT_080101e4;
  pbVar15 = DAT_080101e0;
  puVar5 = DAT_080101dc;
  pcVar3 = DAT_080101d8;
  puVar4 = DAT_080101d0;
  *DAT_080101dc = *DAT_080101dc & 0xfffffffe;
  uVar23 = 6000;
  *puVar4 = *puVar4 & 0xfffffffe;
  pbVar6 = DAT_080101f0;
  uVar8 = *(uint *)(pcVar3 + 0x4c);
  if (uVar8 == 0) {
    sVar1 = *(short *)(pcVar3 + 8);
    pcVar9 = *(char **)(pcVar3 + 0x20);
    sVar19 = 0x54;
    if (sVar1 != 0) {
      if (sVar1 < 0) {
        bVar25 = pcVar9 != (char *)0x0;
        if (bVar25) {
          pcVar9 = (char *)(uint)*DAT_080101f4;
          pcVar21 = (char *)(uint)*DAT_080101f0;
        }
        pbVar15 = DAT_080101f4;
        iVar10 = DAT_080101ec;
        if (bVar25 && pcVar9 != pcVar21) {
          sVar19 = 0x54;
          FUN_0800fdf6();
          pbVar15 = extraout_r1;
        }
        if ((*pbVar15 == *pbVar6) ||
           (-1 < (int)((uint)*(byte *)(iVar10 + (int)sVar19 * (int)(short)(ushort)*pbVar6) << 0x1b))
           ) {
          pcVar3[8] = '\0';
          pcVar3[9] = '\0';
        }
        else if (*pbVar15 != *pbVar6) {
          FUN_0800fdf6();
        }
      }
      else {
        if (*DAT_080101f4 != *DAT_080101f0) {
          *DAT_080101f0 = *DAT_080101f0 + 1 & 7;
        }
        *(short *)(pcVar3 + 8) = sVar1 + -1;
        if ((short)(sVar1 + -1) == 0) {
          FUN_080134be(s_M84_X_Y_Z_E_0801022c);
        }
      }
      pcVar3[0x20] = '\0';
      pcVar3[0x21] = '\0';
      pcVar3[0x22] = '\0';
      pcVar3[0x23] = '\0';
      puVar4[8] = 400;
      cVar26 = *DAT_080101e8;
      goto joined_r0x0800f9fe;
    }
    uVar8 = 0;
    if (pcVar9 == (char *)0x0) {
      uVar8 = (uint)*DAT_080101f0;
      if (*DAT_080101f4 == uVar8) {
LAB_0800fa52:
        pbVar16 = (byte *)0x0;
      }
      else {
        pbVar16 = (byte *)((uint)*DAT_080101f0 * 0x54 + DAT_080101ec);
        uVar8 = (uint)*pbVar16;
        uVar14 = uVar8;
        if (1 < (*DAT_080101f4 - *DAT_080101f0 & 7)) {
          if ((int)(uVar8 << 0x1f) < 0) goto LAB_0800fa52;
          uVar14 = (uint)*(byte *)(DAT_080101ec + (short)(*DAT_080101f0 + 1 & 7) * 0x54);
        }
        if ((int)(uVar14 << 0x1f) < 0) goto LAB_0800fa52;
        *pbVar16 = *pbVar16 | 8;
      }
      *(byte **)(pcVar3 + 0x20) = pbVar16;
      pbVar7 = DAT_080101f8;
      if (pbVar16 == (byte *)0x0) {
        puVar4[8] = 4000;
        cVar26 = *DAT_080101e8;
        goto joined_r0x0800f9fe;
      }
      uVar14 = (uint)(byte)pcVar3[4];
      bVar25 = pbVar16[0x24] == uVar14;
      if (bVar25) {
        uVar14 = (uint)pbVar16[1];
        uVar8 = (uint)(char)*DAT_080101f8;
      }
      if (!bVar25 || uVar14 != uVar8) {
        pcVar3[4] = pbVar16[0x24];
        *pbVar7 = pbVar16[1];
        FUN_0800f81a();
      }
      pcVar3[0x3c] = '\0';
      pcVar3[0x3d] = '\0';
      pcVar3[0x3e] = '\0';
      pcVar3[0x3f] = '\0';
      iVar10 = *(int *)(pcVar3 + 0x20);
      uVar8 = *(uint *)(iVar10 + 0x3c);
      pcVar3[5] = '\x01';
      uVar8 = DAT_080101fc / (uVar8 & 0xffff);
      uVar12 = (undefined2)uVar8;
      if ((uVar8 & 0xffff) < 0x19) {
        uVar12 = 0x19;
      }
      *(undefined2 *)(pcVar3 + 10) = uVar12;
      pcVar3[6] = '\x01';
      *(short *)(pcVar3 + 0xc) = (short)*(undefined4 *)(iVar10 + 0x40);
      uVar13 = (ushort)(DAT_080101fc / *(ushort *)(pcVar3 + 0xc));
      if ((DAT_080101fc / *(ushort *)(pcVar3 + 0xc) & 0xffff) < 0x19) {
        uVar13 = 0x19;
      }
      uVar8 = (uint)uVar13;
      *(uint *)(pcVar3 + 0x38) = uVar8;
      if (uVar8 == 0xffff) {
        uVar8 = 0xffff;
      }
      puVar4[8] = uVar8;
      iVar10 = -(*(uint *)(iVar10 + 0x14) >> 1);
      *(int *)(pcVar3 + 0x30) = iVar10;
      *(int *)(pcVar3 + 0x2c) = iVar10;
      *(int *)(pcVar3 + 0x28) = iVar10;
      *(int *)(pcVar3 + 0x24) = iVar10;
      pcVar3[0x34] = '\0';
      pcVar3[0x35] = '\0';
      pcVar3[0x36] = '\0';
      pcVar3[0x37] = '\0';
    }
    if (*pcVar21 == '\0') {
      uVar8 = (uint)*pbVar15;
    }
    if (*pcVar21 != '\0' || uVar8 != 0) {
      FUN_08015416();
    }
    iVar10 = DAT_080101d4;
    local_28 = 0;
    piVar17 = (int *)(DAT_080101d4 + 0x88);
    cVar26 = pcVar3[5];
    while (cVar18 = cVar26 + -1, cVar26 != '\0') {
      uVar8 = puVar4[6];
      iVar20 = *(int *)(pcVar3 + 0x20);
      iVar11 = *(int *)(iVar20 + 4) + *(int *)(pcVar3 + 0x24);
      *(int *)(pcVar3 + 0x24) = iVar11;
      if (0 < iVar11) {
        *(undefined4 *)(*(int *)(iVar10 + 0xf8) + 0x18) = *(undefined4 *)(iVar10 + 0xfc);
      }
      iVar11 = *(int *)(iVar20 + 8) + *(int *)(pcVar3 + 0x28);
      *(int *)(pcVar3 + 0x28) = iVar11;
      if (0 < iVar11) {
        *(undefined4 *)(*(int *)(iVar10 + 0xe0) + 0x18) = *(undefined4 *)(iVar10 + 0xe4);
      }
      iVar11 = DAT_080101d4;
      iVar24 = *(int *)(pcVar3 + 0x2c) + *(int *)(iVar20 + 0xc);
      *(int *)(pcVar3 + 0x2c) = iVar24;
      if (0 < iVar24) {
        *(undefined4 *)(*piVar17 + 0x18) = *(undefined4 *)(iVar10 + 0x8c);
      }
      iVar22 = *(int *)(iVar20 + 0x10) + *(int *)(pcVar3 + 0x30);
      *(int *)(pcVar3 + 0x30) = iVar22;
      if (0 < iVar22) {
        *(undefined4 *)(*(int *)(iVar11 + 0x28) + 0x18) = *(undefined4 *)(iVar11 + 0x2c);
        *DAT_08010200 = *DAT_08010200 + 1;
      }
      do {
      } while ((puVar4[6] - (uVar8 & 0xffff)) * 0x15 < 0x40);
      uVar8 = puVar4[6];
      if (0 < *(int *)(pcVar3 + 0x24)) {
        *(int *)(pcVar3 + 0x24) = *(int *)(pcVar3 + 0x24) - *(int *)(iVar20 + 0x14);
        *(int *)(pcVar3 + 0x10) = *(int *)(pcVar3 + 0x10) + (int)*pcVar3;
        *(int *)(*(int *)(iVar10 + 0xf8) + 0x18) = *(int *)(iVar10 + 0xfc) << 0x10;
      }
      if (0 < *(int *)(pcVar3 + 0x28)) {
        *(int *)(pcVar3 + 0x28) = *(int *)(pcVar3 + 0x28) - *(int *)(iVar20 + 0x14);
        *(int *)(pcVar3 + 0x14) = *(int *)(pcVar3 + 0x14) + (int)pcVar3[1];
        *(int *)(*(int *)(iVar10 + 0xe0) + 0x18) = *(int *)(iVar10 + 0xe4) << 0x10;
      }
      if (0 < iVar24) {
        *(int *)(pcVar3 + 0x2c) = iVar24 - *(int *)(iVar20 + 0x14);
        *(int *)(pcVar3 + 0x18) = (int)pcVar3[2] + *(int *)(pcVar3 + 0x18);
        *(int *)(*piVar17 + 0x18) = *(int *)(iVar10 + 0x8c) << 0x10;
      }
      if (0 < *(int *)(pcVar3 + 0x30)) {
        *(int *)(pcVar3 + 0x30) = *(int *)(pcVar3 + 0x30) - *(int *)(iVar20 + 0x14);
        *(int *)(pcVar3 + 0x1c) = (int)pcVar3[3] + *(int *)(pcVar3 + 0x1c);
        *(int *)(*(int *)(iVar11 + 0x28) + 0x18) = *(int *)(iVar11 + 0x2c) << 0x10;
      }
      iVar11 = *(int *)(pcVar3 + 0x34);
      *(uint *)(pcVar3 + 0x34) = iVar11 + 1U;
      if (*(uint *)(iVar20 + 0x14) <= iVar11 + 1U) {
        local_28 = 1;
        break;
      }
      cVar26 = cVar18;
      if (cVar18 != '\0') {
        do {
        } while ((puVar4[6] - (uVar8 & 0xffff)) * 0x15 < 0x40);
      }
    }
    iVar10 = *(int *)(pcVar3 + 0x20);
    if (*(uint *)(iVar10 + 0x18) < *(uint *)(pcVar3 + 0x34)) {
      if (*(uint *)(iVar10 + 0x1c) < *(uint *)(pcVar3 + 0x34)) {
        iVar11 = *(int *)(pcVar3 + 0x3c);
        lVar2 = (longlong)*(int *)(iVar10 + 0x20) * (longlong)iVar11 + 0x800000;
        uVar8 = (uint)lVar2 >> 0x18 | (int)((ulonglong)lVar2 >> 0x20) * 0x100 & 0xffffU;
        if (uVar8 < *(ushort *)(pcVar3 + 0xc)) {
          uVar8 = *(ushort *)(pcVar3 + 0xc) - uVar8 & 0xffff;
          if (uVar8 < *(uint *)(iVar10 + 0x44)) {
            uVar8 = *(uint *)(iVar10 + 0x44);
          }
        }
        else {
          uVar8 = *(uint *)(iVar10 + 0x44);
        }
        pcVar3[5] = '\x01';
        uVar8 = DAT_080101fc / (uVar8 & 0xffff);
        uVar13 = (ushort)uVar8;
        if ((uVar8 & 0xffff) < 0x19) {
          uVar13 = 0x19;
        }
        uVar14 = (uint)uVar13;
        cVar26 = 6000 < uVar14;
        uVar8 = uVar14;
        if (6000 < uVar14) {
          uVar27 = FUN_0800fde6();
          uVar14 = (uint)uVar27;
          if (cVar26 == '\0') {
            uVar23 = (int)((ulonglong)uVar27 >> 0x20) + 6000;
          }
          *(uint *)(pcVar3 + 0x4c) = uVar14 - (uVar23 & 0xffff);
          uVar8 = uVar23;
        }
        if ((uVar8 & 0xffff) == 0xffff) {
          uVar8 = 0xffff;
        }
        else {
          uVar8 = uVar8 & 0xffff;
        }
        puVar4[8] = uVar8;
        *(uint *)(pcVar3 + 0x3c) = uVar14 + iVar11;
      }
      else {
        uVar23 = (uint)*(ushort *)(pcVar3 + 10);
        uVar8 = uVar23;
        if (6000 < uVar23) {
          if (uVar23 % 6000 < 2000) {
            uVar8 = uVar23 % 6000 + 6000;
          }
          else {
            uVar8 = 6000;
          }
          *(uint *)(pcVar3 + 0x4c) = uVar23 - uVar8;
        }
        if (uVar8 == 0xffff) {
          uVar8 = 0xffff;
        }
        puVar4[8] = uVar8;
        pcVar3[5] = pcVar3[6];
      }
    }
    else {
      iVar11 = *(int *)(pcVar3 + 0x38);
      lVar2 = (longlong)*(int *)(iVar10 + 0x20) * (longlong)iVar11 + 0x800000;
      uVar8 = *(int *)(iVar10 + 0x40) +
              ((uint)lVar2 >> 0x18 | (int)((ulonglong)lVar2 >> 0x20) * 0x100);
      if (*(uint *)(iVar10 + 0x3c) < (uVar8 & 0xffff)) {
        uVar8 = *(uint *)(iVar10 + 0x3c);
      }
      *(short *)(pcVar3 + 0xc) = (short)uVar8;
      pcVar3[5] = '\x01';
      uVar13 = (ushort)(DAT_080101fc / *(ushort *)(pcVar3 + 0xc));
      if ((DAT_080101fc / *(ushort *)(pcVar3 + 0xc) & 0xffff) < 0x19) {
        uVar13 = 0x19;
      }
      uVar14 = (uint)uVar13;
      cVar26 = 6000 < uVar14;
      uVar8 = uVar14;
      if (6000 < uVar14) {
        uVar27 = FUN_0800fde6();
        uVar14 = (uint)uVar27;
        if (cVar26 == '\0') {
          uVar23 = (int)((ulonglong)uVar27 >> 0x20) + 6000;
        }
        *(uint *)(pcVar3 + 0x4c) = uVar14 - (uVar23 & 0xffff);
        uVar8 = uVar23;
      }
      if ((uVar8 & 0xffff) == 0xffff) {
        uVar8 = 0xffff;
      }
      else {
        uVar8 = uVar8 & 0xffff;
      }
      puVar4[8] = uVar8;
      *(uint *)(pcVar3 + 0x38) = uVar14 + iVar11;
    }
    uVar23 = puVar4[6] + 0x20 & 0xffff;
    uVar8 = puVar4[8] & 0xffff;
    if ((puVar4[8] & 0xffff) < uVar23) {
      uVar8 = uVar23;
    }
    if (uVar8 == 0xffff) {
      uVar8 = 0xffff;
    }
    puVar4[8] = uVar8;
    pbVar15 = DAT_080101f4;
    if ((local_28 != 0) &&
       (pcVar3[0x20] = '\0', pcVar3[0x21] = '\0', pcVar3[0x22] = '\0', pcVar3[0x23] = '\0',
       *pbVar15 != *pbVar6)) {
      *pbVar6 = *pbVar6 + 1 & 7;
    }
    if (*DAT_080101e8 != '\0') {
      *puVar5 = *puVar5 & 0xfffffffe;
      goto LAB_0800fdda;
    }
  }
  else {
    if (*pcVar21 == '\0') {
      uVar8 = (uint)*pbVar15;
    }
    if (*pcVar21 != '\0' || uVar8 != 0) {
      FUN_08015416();
    }
    uVar8 = *(uint *)(pcVar3 + 0x4c);
    if (uVar8 < 0x1771) {
      uVar23 = uVar8;
    }
    uVar14 = uVar23 & 0xffff;
    *(uint *)(pcVar3 + 0x4c) = uVar8 - uVar14;
    bVar25 = (uVar23 & 0xffff) == 0xffff;
    uVar8 = uVar14;
    if (bVar25) {
      uVar8 = 0xffff;
    }
    puVar4[8] = uVar8;
    if (bVar25) {
      uVar14 = 0xffff;
    }
    puVar4[8] = uVar14;
    cVar26 = *DAT_080101e8;
joined_r0x0800f9fe:
    local_28 = in_r3;
    if (cVar26 != '\0') {
      *puVar5 = *puVar5 & 0xfffffffe;
      goto LAB_0800fdda;
    }
  }
  *puVar5 = *puVar5 | 1;
LAB_0800fdda:
  *puVar4 = *puVar4 | 1;
  return local_28;
}



/* FUN_0800fde6 at 0800fde6 */

void FUN_0800fde6(void)

{
  return;
}



/* FUN_0800fdf6 at 0800fdf6 */

void FUN_0800fdf6(void)

{
  byte *unaff_r9;
  
  *unaff_r9 = *unaff_r9 + 1 & 7;
  return;
}



/* FUN_0800fe06 at 0800fe06 */

void FUN_0800fe06(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_38 [5];
  
  FUN_08010172();
  FUN_0800fff2();
  iVar3 = DAT_080101d4;
  local_38[1] = 1;
  local_38[2] = 0;
  local_38[3] = 2;
  iVar4 = *(int *)(DAT_080101d4 + 0x13c);
  iVar5 = *(int *)(DAT_080101d4 + 0x138);
  local_38[0] = iVar4;
  FUN_08014fe4(iVar5,local_38);
  *(int *)(iVar5 + 0x18) = iVar4 << 0x10;
  FUN_0800fff2();
  local_38[1] = 1;
  FUN_0800ffe2(1,0);
  FUN_0800ffd6();
  FUN_0800ffee();
  local_38[1] = 1;
  FUN_0800ffe2(1,0);
  FUN_0800ffd6();
  FUN_0800ffee();
  local_38[1] = 1;
  FUN_0800ffe2(1,0);
  FUN_0800ffd6();
  FUN_0800ffee();
  FUN_08010018();
  local_38[0] = *(int *)(iVar3 + 0x134);
  iVar5 = *(int *)(iVar3 + 0x130);
  FUN_0800ffd6();
  *(int *)(iVar5 + 0x18) = *(int *)(iVar3 + 0x134) << 0x10;
  uVar2 = *(undefined4 *)(iVar3 + 0x134);
  *(undefined4 *)(iVar5 + 0x18) = uVar2;
  FUN_0800ffdc(uVar2,0x14);
  FUN_08010018();
  local_38[0] = *(int *)(iVar3 + 0xf4);
  FUN_08014fe4(*(undefined4 *)(iVar3 + 0xf0));
  *(int *)(*(int *)(iVar3 + 0xf0) + 0x18) = *(int *)(iVar3 + 0xf4) << 0x10;
  uVar2 = *(undefined4 *)(iVar3 + 0xf4);
  *(undefined4 *)(*(int *)(iVar3 + 0xf0) + 0x18) = uVar2;
  FUN_0800ffdc(uVar2,0x14);
  FUN_08010018();
  local_38[0] = *(int *)(iVar3 + 0xd4);
  iVar6 = *(int *)(iVar3 + 0xd0);
  FUN_08014fe4(iVar6);
  *(int *)(iVar6 + 0x18) = *(int *)(iVar3 + 0xd4) << 0x10;
  uVar2 = *(undefined4 *)(iVar3 + 0xd4);
  *(undefined4 *)(iVar6 + 0x18) = uVar2;
  FUN_0800ffdc(uVar2,0x14);
  FUN_0800fffa();
  iVar7 = *(int *)(iVar3 + 300);
  iVar8 = *(int *)(iVar3 + 0x128);
  local_38[0] = iVar7;
  FUN_08014fe4(iVar8,local_38);
  *(int *)(iVar8 + 0x18) = iVar7 << 0x10;
  *(int *)(iVar8 + 0x18) = iVar7;
  FUN_080152ae();
  FUN_0800fff2();
  FUN_08010018();
  local_38[0] = *(int *)(iVar3 + 0xfc);
  iVar9 = *(int *)(iVar3 + 0xf8);
  FUN_08014fe4(iVar9);
  iVar4 = *(int *)(iVar3 + 0xfc) << 0x10;
  *(int *)(iVar9 + 0x18) = iVar4;
  *(int *)(iVar9 + 0x18) = iVar4;
  puVar1 = DAT_08010204;
  *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar3 + 0x134);
  *puVar1 = 0;
  FUN_0800ffdc(0,0x14);
  FUN_08010008();
  local_38[0] = *(int *)(iVar3 + 0xe4);
  iVar4 = local_38[0] << 0x10;
  iVar5 = *(int *)(iVar3 + 0xe0);
  FUN_08014fe4(iVar5);
  *(int *)(iVar5 + 0x18) = iVar4;
  *(int *)(iVar5 + 0x18) = iVar4;
  *(undefined4 *)(*(int *)(iVar3 + 0xf0) + 0x18) = *(undefined4 *)(iVar3 + 0xf4);
  puVar1[1] = 0;
  FUN_0800ffdc(0,0x14);
  FUN_08010008();
  local_38[0] = *(int *)(iVar3 + 0x8c);
  iVar4 = local_38[0] << 0x10;
  iVar5 = *(int *)(iVar3 + 0x88);
  FUN_08014fe4(iVar5);
  *(int *)(iVar5 + 0x18) = iVar4;
  *(int *)(iVar5 + 0x18) = iVar4;
  *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar3 + 0xd4);
  puVar1[2] = 0;
  FUN_0800ffdc(0,0x14);
  uVar2 = FUN_0800fffa();
  iVar4 = *(int *)(iVar3 + 0x2c);
  iVar3 = *(int *)(iVar3 + 0x28);
  local_38[0] = iVar4;
  FUN_0800ffd6(uVar2,local_38);
  iVar4 = iVar4 << 0x10;
  *(int *)(iVar3 + 0x18) = iVar4;
  *(int *)(iVar3 + 0x18) = iVar4;
  *(int *)(iVar8 + 0x18) = iVar7;
  *(uint *)(DAT_08010208 + 0xc) = *(uint *)(DAT_08010208 + 0xc) | 1;
  *DAT_080101e4 = 1;
  enableIRQinterrupts();
  FUN_0800f81a();
  return;
}



/* FUN_0800ffd6 at 0800ffd6 */

void FUN_0800ffd6(void)

{
  FUN_08014fe4();
  return;
}



/* FUN_0800ffdc at 0800ffdc */

void FUN_0800ffdc(void)

{
  FUN_08012510();
  return;
}



/* FUN_0800ffe2 at 0800ffe2 */

void FUN_0800ffe2(void)

{
  return;
}



/* FUN_0800ffee at 0800ffee */

void FUN_0800ffee(void)

{
  int unaff_r4;
  int unaff_r7;
  
  *(int *)(unaff_r4 + 0x18) = unaff_r7 << 0x10;
  FUN_08012510();
  return;
}



/* FUN_0800fff2 at 0800fff2 */

void FUN_0800fff2(void)

{
  FUN_08012510();
  return;
}



/* FUN_0800fffa at 0800fffa */

void FUN_0800fffa(void)

{
  return;
}



/* FUN_08010008 at 08010008 */

void FUN_08010008(void)

{
  return;
}



/* FUN_08010018 at 08010018 */

void FUN_08010018(void)

{
  return;
}



/* FUN_08010028 at 08010028 */

undefined4 FUN_08010028(void)

{
  ushort uVar1;
  byte *pbVar2;
  undefined4 unaff_r7;
  bool bVar3;
  
  if (*DAT_0801020c != '\x01') {
    while( true ) {
      uVar1 = (ushort)*DAT_080101f4;
      bVar3 = uVar1 == *DAT_080101f0;
      pbVar2 = DAT_080101f4;
      if (bVar3) {
        pbVar2 = DAT_080101d8;
      }
      if (bVar3) {
        uVar1 = *(ushort *)(pbVar2 + 8);
      }
      if (bVar3 && uVar1 == 0) break;
      FUN_0800b806(0);
    }
    return unaff_r7;
  }
  return unaff_r7;
}



/* FUN_08010052 at 08010052 */

undefined4 *
FUN_08010052(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  
  FUN_08010028();
  iVar1 = DAT_080101d8;
  disableIRQinterrupts();
  *(undefined4 *)(DAT_080101d8 + 0x10) = *param_1;
  *(undefined4 *)(iVar1 + 0x14) = *param_2;
  *(undefined4 *)(iVar1 + 0x18) = *param_3;
  *(undefined4 *)(iVar1 + 0x1c) = *param_4;
  enableIRQinterrupts();
  return param_4;
}



/* FUN_08010078 at 08010078 */

void FUN_08010078(char *param_1,undefined4 *param_2)

{
  disableIRQinterrupts();
  *(undefined4 *)(DAT_080101d8 + *param_1 * 4 + 0x10) = *param_2;
  enableIRQinterrupts();
  return;
}



/* FUN_0801008c at 0801008c */

undefined4 FUN_0801008c(int param_1)

{
  disableIRQinterrupts();
  enableIRQinterrupts();
  return *(undefined4 *)(DAT_080101d8 + param_1 * 4 + 0x10);
}



/* FUN_0801009a at 0801009a */

float FUN_0801009a(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;
  
  uVar1 = FUN_0801008c();
  fVar2 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  return fVar2 * *(float *)(DAT_08010210 + param_1 * 4);
}



/* FUN_080100ba at 080100ba */

void FUN_080100ba(void)

{
  undefined4 unaff_r7;
  
  FUN_08010028();
  FUN_0800b76c(unaff_r7);
  return;
}



/* FUN_080100c8 at 080100c8 */

void FUN_080100c8(void)

{
  uint *puVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar4 = DAT_080101f4;
  iVar2 = DAT_080101d8;
  *(undefined2 *)(DAT_080101d8 + 8) = 5000;
  puVar1 = DAT_080101d0;
  *DAT_080101d0 = *DAT_080101d0 & 0xfffffffe;
  pbVar3 = DAT_080101f0;
  while (*pbVar4 != *pbVar3) {
    if (*pbVar4 != *pbVar3) {
      *pbVar3 = *pbVar3 + 1 & 7;
    }
  }
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *puVar1 = *puVar1 | 1;
  return;
}



/* FUN_0801010a at 0801010a */

void FUN_0801010a(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_080101d8;
  iVar2 = DAT_080101d8 + param_1 * 4;
  *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(*(int *)(iVar1 + 0x20) + 0x14);
  *(undefined2 *)(iVar1 + 8) = 0xffff;
  return;
}



/* FUN_08010172 at 08010172 */

undefined4 FUN_08010172(void)

{
  int iVar1;
  undefined4 in_r3;
  byte bVar2;
  
  iVar1 = DAT_08010218;
  bVar2 = 0;
  do {
    FUN_0801019a(bVar2,(int)(short)*(undefined4 *)(iVar1 + (uint)bVar2 * 4));
    do {
      bVar2 = bVar2 + 1;
      if (2 < bVar2) {
        return in_r3;
      }
    } while (bVar2 != 0 && bVar2 != 2);
  } while( true );
}



/* FUN_0801019a at 0801019a */

void FUN_0801019a(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 < 3) {
    *(undefined4 *)(DAT_08010218 + param_1 * 4) = param_2;
  }
  if (param_1 == 0) {
    FUN_0801021c();
    uVar1 = 7;
  }
  else {
    if (param_1 != 2) {
      return;
    }
    FUN_0801021c();
    uVar1 = 6;
  }
  FUN_08014cce(uVar1);
  return;
}



/* FUN_0801021c at 0801021c */

void FUN_0801021c(void)

{
  return;
}



/* FUN_08010280 at 08010280 */

undefined4 FUN_08010280(byte *param_1,float *param_2,float *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint in_fpscr;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar8 = (float)VectorUnsignedToFloat(*(undefined4 *)(param_1 + 0x3c),(byte)(in_fpscr >> 0x15) & 3)
  ;
  uVar3 = FUN_0801612c(fVar8 * *param_2);
  uVar4 = VectorFloatToUnsigned(uVar3,3);
  uVar3 = FUN_0801612c(fVar8 * *param_3);
  uVar5 = VectorFloatToUnsigned(uVar3,3);
  if (uVar4 < 0x78) {
    uVar4 = 0x78;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  fVar8 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  if (uVar5 < 0x78) {
    uVar5 = 0x78;
  }
  FUN_080103b0();
  fVar6 = (float)FUN_0801612c();
  uVar7 = (uint)fVar6;
  VectorUnsignedToFloat(*(undefined4 *)(param_1 + 0x3c),(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
  VectorSignedToFloat(-iVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_080103b0();
  uVar2 = *(uint *)(param_1 + 0x14);
  fVar6 = (float)FUN_08016168();
  iVar1 = (uVar2 - uVar7) - (int)fVar6;
  if (iVar1 < 0) {
    fVar6 = DAT_08010610;
    if (fVar9 != 0.0) {
      fVar6 = (float)VectorUnsignedToFloat(uVar2,(byte)((in_fpscr & 0xfffffff) >> 0x15) & 3);
      fVar6 = ((fVar9 * 2.0 * fVar6 - fVar8 * fVar8) + fVar10 * fVar10) / (fVar9 * 4.0);
    }
    fVar8 = (float)FUN_0801612c(fVar6);
    uVar7 = (uint)fVar8;
    if ((int)uVar7 < 0) {
      uVar7 = 0;
    }
    if (uVar2 <= uVar7) {
      uVar7 = uVar2;
    }
    iVar1 = 0;
  }
  disableIRQinterrupts();
  if (-1 < (int)((uint)*param_1 << 0x1c)) {
    *(uint *)(param_1 + 0x18) = uVar7;
    *(uint *)(param_1 + 0x40) = uVar4;
    *(uint *)(param_1 + 0x1c) = iVar1 + uVar7;
    *(uint *)(param_1 + 0x44) = uVar5;
  }
  enableIRQinterrupts();
  return param_4;
}



/* FUN_080103b0 at 080103b0 */

float FUN_080103b0(void)

{
  float in_stack_00000000;
  float in_stack_00000004;
  float in_stack_00000008;
  
  if (in_stack_00000000 == 0.0) {
    return DAT_080161d8;
  }
  return (in_stack_00000004 * in_stack_00000004 - in_stack_00000008 * in_stack_00000008) /
         (in_stack_00000000 * 2.0);
}



/* FUN_080103ba at 080103ba */

undefined4 FUN_080103ba(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float extraout_s0;
  float unaff_s16;
  undefined8 uVar5;
  
  bVar3 = param_1 == (byte *)0x0;
  bVar4 = param_2 == 0;
  bVar2 = bVar3 || bVar4;
  if (!bVar3 && !bVar4) {
    unaff_s16 = *(float *)(param_1 + 0x30);
  }
  if (!bVar3 && !bVar4) {
    bVar2 = *(float *)(param_1 + 0x2c) == unaff_s16;
  }
  if (!bVar2) {
    iVar1 = (uint)*param_1 << 0x1e;
    if ((-1 < iVar1) &&
       (*(float *)(param_2 + 0x2c) < unaff_s16 !=
        (NAN(*(float *)(param_2 + 0x2c)) || NAN(unaff_s16)))) {
      uVar5 = FUN_0801050a((uint)*param_1,iVar1,param_1 + 0x34,param_4,-*(float *)(param_1 + 0x38));
      if (-1 < (int)((uint)(unaff_s16 < extraout_s0) << 0x1f)) {
        unaff_s16 = (float)FUN_08010500((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),param_1 + 0x34);
      }
    }
    *(float *)(param_1 + 0x2c) = unaff_s16;
    *param_1 = *param_1 | 1;
  }
  return param_4;
}



/* FUN_0801043c at 0801043c */

void FUN_0801043c(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  ushort uVar5;
  
  iVar2 = DAT_08011190;
  if ((*DAT_08010f38 - DAT_08010f38[1] & 7U) < 4) {
    return;
  }
  bVar1 = DAT_08010f38[1];
  uVar5 = (short)*DAT_08010f38 - 1U & 7;
  pbVar3 = (byte *)(DAT_08011190 + (short)uVar5 * 0x54);
  do {
    uVar5 = uVar5 - 1 & 7;
    pbVar4 = (byte *)(iVar2 + (short)uVar5 * 0x54);
    if ((int)((uint)*pbVar4 << 0x1d) < 0) {
      return;
    }
    FUN_080103ba(pbVar4,pbVar3);
    pbVar3 = pbVar4;
  } while (uVar5 != (bVar1 + 2 & 7));
  return;
}



/* FUN_08010450 at 08010450 */

void FUN_08010450(undefined4 param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  ushort uVar5;
  
  iVar2 = DAT_08011190;
  bVar1 = param_2[1];
  uVar5 = (short)*param_2 - 1U & 7;
  pbVar3 = (byte *)(DAT_08011190 + (short)uVar5 * 0x54);
  do {
    uVar5 = uVar5 - 1 & 7;
    pbVar4 = (byte *)(iVar2 + (short)uVar5 * 0x54);
    if ((int)((uint)*pbVar4 << 0x1d) < 0) {
      return;
    }
    FUN_080103ba(pbVar4,pbVar3);
    pbVar3 = pbVar4;
  } while (uVar5 != (bVar1 + 2 & 7));
  return;
}



/* FUN_08010496 at 08010496 */

undefined8 FUN_08010496(byte *param_1,byte *param_2,float param_3)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 extraout_s0;
  undefined8 uVar4;
  byte *local_18;
  float local_14;
  
  local_18 = param_2;
  local_14 = param_3;
  if (param_1 != (byte *)0x0) {
    cVar1 = (int)((uint)*param_1 << 0x1e) < 0;
    cVar2 = (uint)*param_1 << 0x1e == 0;
    if ((!(bool)cVar1) &&
       (uVar4 = FUN_08010f46(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_2 + 0x2c)),
       cVar1 != '\0')) {
      local_18 = (byte *)-*(float *)(param_1 + 0x38);
      uVar3 = FUN_0801050a((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_1 + 0x34);
      uVar4 = FUN_08010f46(*(undefined4 *)(param_2 + 0x2c),uVar3);
      uVar3 = extraout_s0;
      if (cVar1 == '\0') {
        local_14 = -*(float *)(param_1 + 0x38);
        uVar3 = FUN_08010500((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_1 + 0x34);
      }
      uVar3 = FUN_0801071e(uVar3,*(undefined4 *)(param_2 + 0x2c));
      if (cVar2 == '\0') {
        *(undefined4 *)(param_2 + 0x2c) = uVar3;
        *param_2 = *param_2 | 1;
      }
    }
  }
  return CONCAT44(local_14,local_18);
}



/* FUN_08010500 at 08010500 */

void FUN_08010500(void)

{
  int unaff_r4;
  
  FUN_080161dc(&stack0x00000004,unaff_r4 + 0x2c);
  return;
}



/* FUN_0801050a at 0801050a */

void FUN_0801050a(void)

{
  FUN_080161dc();
  return;
}



/* FUN_08010514 at 08010514 */

void FUN_08010514(void)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 in_r3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  
  iVar3 = DAT_080111e8;
  pbVar2 = DAT_08010f38;
  iVar4 = 0;
  iVar6 = 0;
  for (uVar5 = (ushort)DAT_08010f38[1]; uVar5 != *pbVar2; uVar5 = uVar5 + 1 & 7) {
    iVar1 = (int)(short)uVar5;
    FUN_08010496(iVar4,iVar6);
    iVar4 = iVar6;
    iVar6 = iVar3 + iVar1 * 0x54;
  }
  FUN_08010496(iVar4,iVar6,in_r3);
  return;
}



/* FUN_08010552 at 08010552 */

undefined8 FUN_08010552(undefined4 param_1,float param_2,float param_3,undefined4 param_4)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  undefined8 uVar6;
  float local_28;
  float local_24;
  undefined4 uStack_20;
  
  iVar2 = DAT_08011190;
  pbVar1 = DAT_08010f38;
  pbVar4 = (byte *)0x0;
  local_28 = param_2;
  local_24 = param_3;
  uStack_20 = param_4;
  for (uVar5 = (uint)(char)DAT_08010f38[1]; uVar5 != *pbVar1; uVar5 = uVar5 + 1 & 7) {
    pbVar3 = (byte *)(iVar2 + (short)uVar5 * 0x54);
    if ((pbVar4 != (byte *)0x0) &&
       (((int)((uint)*pbVar4 << 0x1f) < 0 || ((int)((uint)*pbVar3 << 0x1f) < 0)))) {
      local_28 = *(float *)(pbVar4 + 0x2c) * (1.0 / *(float *)(pbVar4 + 0x28));
      local_24 = *(float *)(pbVar3 + 0x2c) * (1.0 / *(float *)(pbVar4 + 0x28));
      FUN_08010280(pbVar4,&local_28,&local_24);
      *pbVar4 = *pbVar4 & 0xfe;
    }
    pbVar4 = pbVar3;
  }
  if (pbVar4 != (byte *)0x0) {
    local_28 = *(float *)(pbVar4 + 0x2c) * (1.0 / *(float *)(pbVar4 + 0x28));
    uVar6 = FUN_0801080a();
    FUN_0800c284((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_0801125c,DAT_08011260);
    local_24 = (float)FUN_0800bef8();
    FUN_08010280(pbVar4,&local_28,&local_24);
    *pbVar4 = *pbVar4 & 0xfe;
  }
  return CONCAT44(local_24,local_28);
}



/* FUN_0801071e at 0801071e */

void FUN_0801071e(void)

{
  return;
}



/* FUN_08010728 at 08010728 */

uint FUN_08010728(void)

{
  byte *pbVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  uint in_r3;
  char cVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (*DAT_08010f38 == DAT_08010f38[1]) {
    uVar5 = *DAT_08011278;
  }
  else {
    uVar5 = *(ushort *)(DAT_08011190 + (uint)DAT_08010f38[1] * 0x54 + 0x4c);
    for (uVar3 = (uint)DAT_08010f38[1]; in_r3 = (uint)*DAT_08010f38, uVar3 != in_r3;
        uVar3 = uVar3 + 1 & 7) {
    }
  }
  uVar3 = (uint)uVar5;
  if (((uVar5 & 0xff) == 0) && (uVar3 = (uint)*DAT_0801127c, uVar3 != 0)) {
    uVar3 = 0x32;
  }
  *DAT_08011280 = (char)uVar3;
  psVar2 = DAT_08011264;
  pbVar1 = DAT_08010f38;
  if (DAT_08010f38[2] != 0) {
    cVar7 = *DAT_08011264 + 2 < 0;
    uVar10 = VectorSignedToFloat(*DAT_08011264 + 2,(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)FUN_0801071e(*(undefined4 *)(DAT_08010f38 + 0x5c),uVar10);
    if (cVar7 == '\0') {
      fVar11 = DAT_08010898;
      for (uVar5 = (ushort)pbVar1[1]; uVar5 != *pbVar1; uVar5 = uVar5 + 1 & 7) {
        iVar4 = (short)uVar5 * 0x54;
        iVar6 = DAT_08011190 + iVar4;
        bVar8 = *(int *)(iVar6 + 4) != 0;
        if (!bVar8) {
          iVar4 = *(int *)(iVar6 + 8);
        }
        if ((bVar8 || iVar4 != 0) || (*(int *)(iVar6 + 0xc) != 0)) {
          fVar13 = (float)VectorSignedToFloat(*(undefined4 *)(iVar6 + 0x10),
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar12 = (float)VectorUnsignedToFloat
                                    (*(undefined4 *)(iVar6 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
          fVar13 = (fVar13 / fVar12) * *(float *)(iVar6 + 0x28);
          in_fpscr = in_fpscr & 0xfffffff;
          if (fVar11 < fVar13) {
            fVar11 = fVar13;
          }
        }
      }
      fVar13 = *(float *)(pbVar1 + 0x7c);
      fVar11 = fVar9 + fVar11 * *(float *)(pbVar1 + 0x60);
      bVar8 = fVar9 <= fVar11;
      if (bVar8) {
        fVar9 = *(float *)(pbVar1 + 0x58);
      }
      if (!bVar8 || (!bVar8 || fVar9 < fVar11)) {
        fVar11 = fVar9;
      }
      if ((int)((uint)(fVar11 < fVar13) << 0x1f) < 0) {
        uVar14 = FUN_0800bca0(fVar11);
        uVar14 = FUN_0800c284((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_08011268,DAT_0801126c
                             );
        uVar15 = FUN_0800bca0(fVar13);
        uVar15 = FUN_0800c284((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),DAT_08011270,DAT_08011274
                             );
        FUN_0800bd80((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar14,
                     (int)((ulonglong)uVar14 >> 0x20));
        fVar11 = (float)FUN_0800bef8();
      }
      *(float *)(pbVar1 + 0x7c) = fVar11;
      *psVar2 = (short)(int)fVar11;
    }
  }
  return in_r3;
}



/* FUN_08010774 at 08010774 */

void FUN_08010774(void)

{
  short *psVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  psVar1 = DAT_08011288;
  bVar3 = *DAT_08011284 == '\0';
  if (!bVar3) {
    bVar3 = *(float *)(DAT_08011288 + 2) == 0.0;
  }
  if (bVar3) {
    uVar2 = 0x3f800000;
  }
  else {
    uVar4 = FUN_0801080a();
    uVar4 = FUN_0800c284((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0,DAT_0801128c);
    uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    uVar4 = FUN_0800c284((int)uVar4,uVar2,(int)uVar4,uVar2);
    uVar4 = FUN_0800c284((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_08011290,DAT_08011294);
    FUN_0800eb88(0,DAT_08011298,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
    uVar2 = FUN_0800bef8();
  }
  *(undefined4 *)(psVar1 + 4) = uVar2;
  uVar4 = FUN_0800eecc((int)*psVar1);
  uVar4 = FUN_0800c284((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_0801129c,DAT_080112a0);
  uVar5 = FUN_0800bca0(*(undefined4 *)(psVar1 + 4));
  FUN_0800c284((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar4,(int)((ulonglong)uVar4 >> 0x20)
              );
  uVar2 = FUN_0800bef8();
  *(undefined4 *)(DAT_080112a4 + 0x44) = uVar2;
  return;
}



/* FUN_0801080a at 0801080a */

void FUN_0801080a(undefined4 param_1)

{
  FUN_0800bca0(param_1);
  return;
}



/* FUN_08010812 at 08010812 */

void FUN_08010812(undefined4 param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  if ((*DAT_080112a8 != '\0') && (fVar1 = (float)FUN_080161fc(param_3), fVar1 != 0.0)) {
    fVar2 = (float)FUN_0800eef4(param_1,param_2);
    *param_3 = *param_3 + fVar2 * fVar1;
  }
  return;
}



/* FUN_08010854 at 08010854 */

void FUN_08010854(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_080161fc(param_1 + 8);
  if (*DAT_080112a8 != '\0' && fVar1 != 0.0) {
    fVar2 = (float)FUN_0800eef4(param_1,param_1 + 4);
    *(float *)(param_1 + 8) = *(float *)(param_1 + 8) - fVar2 * fVar1;
  }
  return;
}



/* FUN_080108a0 at 080108a0 */

undefined8 FUN_080108a0(float param_1,int *param_2,byte param_3,float *param_4)

{
  byte *pbVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float *extraout_r1;
  float *pfVar8;
  float extraout_r1_00;
  float extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  uint uVar9;
  float *pfVar10;
  float fVar11;
  uint uVar12;
  byte bVar13;
  int iVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  byte bVar18;
  char cVar19;
  bool bVar20;
  char cVar21;
  uint in_fpscr;
  uint uVar22;
  float fVar23;
  int iVar24;
  float fVar25;
  undefined4 uVar26;
  float extraout_s0;
  float fVar27;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  float fVar28;
  float extraout_s1_00;
  float fVar29;
  float extraout_s1_01;
  undefined4 extraout_s1_02;
  float extraout_s2;
  float fVar30;
  float fVar31;
  float extraout_s2_00;
  undefined4 extraout_s2_01;
  float extraout_s2_02;
  float fVar32;
  undefined8 uVar33;
  float local_70;
  float local_6c;
  float local_68 [4];
  float local_58 [4];
  undefined4 uStack_30;
  
  pbVar1 = DAT_08010f38;
  local_6c = (float)(*param_2 - *(int *)(DAT_08010f38 + 0x34));
  iVar17 = param_2[1] - *(int *)(DAT_08010f38 + 0x38);
  local_70 = (float)(param_2[2] - *(int *)(DAT_08010f38 + 0x3c));
  iVar14 = param_2[3] - *(int *)(DAT_08010f38 + 0x40);
  if (iVar14 != 0) {
    fVar23 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
    iVar24 = (int)(fVar23 * *(float *)(DAT_08010f38 + (uint)param_3 * 4 + 0x44));
    if (iVar24 < 0) {
      iVar24 = -iVar24;
    }
    if ((int)*(float *)(DAT_08010f38 + 0x10) * 200 < iVar24) {
      *(int *)(DAT_08010f38 + 0x40) = param_2[3];
      iVar14 = 0;
      FUN_0800bb0c(DAT_080112ac);
      FUN_0800bb0c(s_too_long_extrusion_prevented_080112cb + 1);
    }
  }
  bVar18 = (int)local_6c < 0;
  if (iVar17 < 0) {
    bVar18 = bVar18 | 2;
  }
  if ((int)local_70 < 0) {
    bVar18 = bVar18 | 4;
  }
  fVar23 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
  fVar23 = fVar23 * *(float *)(pbVar1 + (uint)param_3 * 4 + 0x44);
  if (iVar14 < 0) {
    bVar18 = bVar18 | 8;
  }
  uVar4 = in_fpscr & 0xfffffff | (uint)(fVar23 < 0.0) << 0x1f | (uint)(fVar23 == 0.0) << 0x1e;
  uVar22 = uVar4 | (uint)NAN(fVar23) << 0x1c;
  bVar13 = (byte)(uVar4 >> 0x18);
  fVar25 = fVar23;
  if ((bool)(bVar13 >> 6 & 1) || bVar13 >> 7 != ((byte)(uVar22 >> 0x1c) & 1)) {
    fVar25 = -fVar23;
  }
  uVar33 = FUN_0801080a(fVar25);
  FUN_0800bd80((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),0,DAT_0801128c);
  uVar4 = FUN_08012518();
  bVar13 = *pbVar1 + 1 & 7;
  while (pbVar1[1] == bVar13) {
    FUN_0800b806(0);
  }
  pbVar15 = (byte *)(DAT_08011190 + (uint)*pbVar1 * 0x54);
  *pbVar15 = 0;
  pbVar15[0x24] = bVar18;
  fVar25 = local_6c;
  if ((int)local_6c < 0) {
    fVar25 = (float)-(int)local_6c;
  }
  *(float *)(pbVar15 + 4) = fVar25;
  iVar14 = iVar17;
  if (iVar17 < 0) {
    iVar14 = -iVar17;
  }
  *(int *)(pbVar15 + 8) = iVar14;
  uVar7 = *(uint *)(pbVar15 + 4);
  *(uint *)(pbVar15 + 0x10) = uVar4;
  fVar25 = local_70;
  if ((int)local_70 < 0) {
    fVar25 = (float)-(int)local_70;
  }
  *(float *)(pbVar15 + 0xc) = fVar25;
  uVar5 = *(uint *)(pbVar15 + 8);
  uVar12 = *(uint *)(pbVar15 + 0xc);
  uVar9 = uVar7;
  if ((int)uVar7 < (int)uVar5) {
    uVar9 = uVar5;
  }
  uVar16 = uVar12;
  if ((int)uVar12 <= (int)uVar9) {
    uVar16 = uVar9;
  }
  uVar6 = uVar4;
  if ((((int)uVar4 < (int)uVar16) && (uVar6 = uVar12, (int)uVar12 < (int)uVar9)) &&
     (uVar6 = uVar5, (int)uVar5 < (int)uVar7)) {
    uVar6 = uVar7;
  }
  *(uint *)(pbVar15 + 0x14) = uVar6;
  piVar2 = DAT_080112b0;
  if (uVar6 < 6) goto LAB_08010f2e;
  *(undefined2 *)(pbVar15 + 0x4c) = *DAT_08011278;
  pbVar15[1] = param_3;
  if (*(int *)(pbVar15 + 4) != 0) {
    *(int *)(piVar2[0x18] + 0x18) = piVar2[0x19] << 0x10;
  }
  if (*(int *)(pbVar15 + 8) != 0) {
    *(int *)(piVar2[8] + 0x18) = piVar2[9] << 0x10;
  }
  if (*(int *)(pbVar15 + 0xc) != 0) {
    *(int *)(*piVar2 + 0x18) = piVar2[1] << 0x10;
  }
  pcVar3 = DAT_080112b4;
  if (uVar4 == 0) {
    fVar25 = *(float *)(DAT_080112b4 + 0x34);
  }
  else {
    if (*DAT_080112b4 != '\0') {
      *DAT_080112b4 = *DAT_080112b4 + -1;
    }
    if (param_3 == 0) {
      *(int *)(piVar2[0x16] + 0x18) = piVar2[0x17] << 0x10;
      *pcVar3 = '\x10';
    }
    fVar25 = *(float *)(pcVar3 + 0x14);
  }
  uVar22 = uVar22 & 0xfffffff;
  if (param_1 < fVar25) {
    param_1 = fVar25;
  }
  local_58[0] = (float)VectorSignedToFloat(local_6c,(byte)(uVar22 >> 0x15) & 3);
  local_58[0] = local_58[0] * *(float *)(pbVar1 + 0x14);
  local_58[1] = (float)VectorSignedToFloat(iVar17,(byte)(uVar22 >> 0x15) & 3);
  local_58[1] = local_58[1] * *(float *)(pbVar1 + 0x18);
  local_58[2] = (float)VectorSignedToFloat(local_70,(byte)(uVar22 >> 0x15) & 3);
  local_58[2] = local_58[2] * *(float *)(pbVar1 + 0x1c);
  local_58[3] = fVar23 * *(float *)(pbVar1 + 0x20);
  iVar14 = *(int *)(pbVar15 + 4);
  if (iVar14 < 6) {
    iVar14 = *(int *)(pbVar15 + 8);
  }
  if ((iVar14 < 6) && (*(int *)(pbVar15 + 0xc) < 6)) {
    fVar23 = ABS(local_58[3]);
  }
  else {
    fVar23 = *param_4;
    uVar22 = uVar22 | (uint)(fVar23 == 0.0) << 0x1e;
    if ((byte)(uVar22 >> 0x1e) != 0) {
      fVar23 = (float)FUN_0800bce8(local_58[0] * local_58[0] + local_58[1] * local_58[1] +
                                   local_58[2] * local_58[2]);
    }
  }
  *(float *)(pbVar15 + 0x34) = fVar23;
  param_1 = param_1 * (1.0 / fVar23);
  local_70 = (float)CONCAT31(local_70._1_3_,*pbVar1 - pbVar1[1]);
  *(float *)(pbVar15 + 0x28) = fVar23 * param_1;
  local_6c = *(float *)(pbVar15 + 0x14);
  fVar32 = (float)VectorUnsignedToFloat(local_6c,(byte)(uVar22 >> 0x15) & 3);
  uVar26 = FUN_0801612c(fVar32 * param_1);
  uVar26 = VectorFloatToUnsigned(uVar26,3);
  *(undefined4 *)(pbVar15 + 0x3c) = uVar26;
  fVar25 = 1.0;
  iVar14 = 0;
  do {
    local_68[iVar14] = local_58[iVar14] * param_1;
    bVar18 = (int)(pcVar3 + 4) < 0;
    iVar17 = FUN_08010f3c(fVar25,ABS(local_58[iVar14] * param_1),
                          *(undefined4 *)(pcVar3 + 4 + iVar14 * 4));
    fVar28 = extraout_s1;
    if (bVar18 != 0) {
      fVar28 = extraout_s2 / extraout_s1;
      uVar22 = uVar22 & 0xfffffff | (uint)(fVar28 < extraout_s0) << 0x1f;
      bVar18 = (byte)(uVar22 >> 0x1f);
    }
    fVar25 = extraout_s0;
    if (bVar18 != 0) {
      fVar25 = fVar28;
    }
    iVar14 = iVar17 + 1;
    cVar19 = iVar17 + -3 < 0;
  } while (iVar14 < 4);
  fVar25 = (float)FUN_08010f46(fVar25,0x3f800000);
  pfVar8 = extraout_r1;
  if (cVar19 != '\0') {
    iVar14 = 0;
    do {
      pfVar8 = local_68 + iVar14;
      pfVar10 = local_68 + iVar14;
      iVar14 = iVar14 + 1;
      *pfVar10 = *pfVar8 * fVar25;
    } while (iVar14 < 4);
    *(float *)(pbVar15 + 0x28) = fVar23 * param_1 * fVar25;
    fVar28 = (float)VectorUnsignedToFloat
                              (*(undefined4 *)(pbVar15 + 0x3c),(byte)(uVar22 >> 0x15) & 3);
    fVar25 = (float)VectorFloatToUnsigned(fVar28 * fVar25,3);
    *(float *)(pbVar15 + 0x3c) = fVar25;
  }
  fVar23 = fVar32 * (1.0 / fVar23);
  uVar7 = *(uint *)(pbVar15 + 4);
  if (uVar7 == 0) {
    pfVar8 = *(float **)(pbVar15 + 8);
  }
  if ((uVar7 != 0 || pfVar8 != (float *)0x0) || (*(int *)(pbVar15 + 0xc) != 0)) {
    if (uVar4 != 0) {
      fVar25 = *(float *)(pcVar3 + 0x18);
    }
    if (uVar4 == 0) {
      fVar25 = *(float *)(pcVar3 + 0x20);
    }
    uVar26 = FUN_0801612c(fVar25 * fVar23);
    fVar28 = *(float *)(pbVar1 + 100);
    fVar11 = *(float *)(pbVar1 + 0x30);
    fVar31 = *(float *)(pbVar1 + 0x2c);
    fVar29 = *(float *)(pbVar1 + 0x28);
    fVar25 = *(float *)(pbVar1 + 0x24);
    fVar27 = (float)VectorFloatToUnsigned(uVar26,3);
    if ((uint)fVar28 < (uint)local_6c) {
      if ((uVar7 != 0) && ((uint)fVar25 < (uint)fVar27)) {
        fVar25 = (float)VectorUnsignedToFloat(fVar25,(byte)(uVar22 >> 0x15) & 3);
        fVar28 = (float)VectorSignedToFloat(uVar7,(byte)(uVar22 >> 0x15) & 3);
        fVar30 = (float)VectorUnsignedToFloat(fVar27,(byte)(uVar22 >> 0x15) & 3);
        uVar22 = uVar22 & 0xfffffff;
        if (fVar25 * fVar32 < fVar30 * fVar28) {
          fVar27 = (float)VectorFloatToUnsigned((fVar25 * fVar32) / fVar28,3);
        }
      }
      if ((*(int *)(pbVar15 + 8) != 0) && ((uint)fVar29 < (uint)fVar27)) {
        FUN_08010f50(fVar29);
        fVar27 = extraout_r1_00;
      }
      if ((*(int *)(pbVar15 + 0xc) != 0) && ((uint)fVar31 < (uint)fVar27)) {
        FUN_08010f50(fVar31);
        fVar27 = extraout_r1_01;
      }
      if ((*(int *)(pbVar15 + 0x10) != 0) && ((uint)fVar11 < (uint)fVar27)) {
        fVar25 = (float)VectorUnsignedToFloat(fVar11,(byte)(uVar22 >> 0x15) & 3);
        fVar28 = (float)VectorSignedToFloat(*(int *)(pbVar15 + 0x10),(byte)(uVar22 >> 0x15) & 3);
        fVar29 = (float)VectorUnsignedToFloat(fVar27,(byte)(uVar22 >> 0x15) & 3);
        uVar22 = uVar22 & 0xfffffff;
        if (fVar25 * fVar32 < fVar29 * fVar28) {
          fVar28 = (fVar25 * fVar32) / fVar28;
          goto LAB_08010d26;
        }
      }
    }
    else {
      if (uVar7 != 0) {
        bVar20 = (uint)fVar25 < (uint)fVar27;
        if (bVar20) {
          fVar25 = (float)((int)local_6c * (int)fVar25);
          fVar28 = (float)(uVar7 * (int)fVar27);
        }
        if (bVar20 && (uint)fVar25 < (uint)fVar28) {
          fVar27 = (float)((uint)fVar25 / uVar7);
        }
      }
      uVar4 = *(uint *)(pbVar15 + 8);
      if (uVar4 != 0) {
        bVar20 = (uint)fVar29 < (uint)fVar27;
        if (bVar20) {
          fVar29 = (float)((int)local_6c * (int)fVar29);
          fVar25 = (float)(uVar4 * (int)fVar27);
        }
        if (bVar20 && (uint)fVar29 < (uint)fVar25) {
          fVar27 = (float)((uint)fVar29 / uVar4);
        }
      }
      uVar4 = *(uint *)(pbVar15 + 0xc);
      if (uVar4 != 0) {
        bVar20 = (uint)fVar31 < (uint)fVar27;
        if (bVar20) {
          fVar31 = (float)((int)local_6c * (int)fVar31);
          fVar25 = (float)(uVar4 * (int)fVar27);
        }
        if (bVar20 && (uint)fVar31 < (uint)fVar25) {
          fVar27 = (float)((uint)fVar31 / uVar4);
        }
      }
      uVar4 = *(uint *)(pbVar15 + 0x10);
      if (uVar4 != 0) {
        bVar20 = (uint)fVar11 < (uint)fVar27;
        if (bVar20) {
          fVar11 = (float)((int)local_6c * (int)fVar11);
          fVar31 = (float)(uVar4 * (int)fVar27);
        }
        if (bVar20 && (uint)fVar11 < (uint)fVar31) {
          fVar27 = (float)((uint)fVar11 / uVar4);
        }
      }
    }
  }
  else {
    fVar28 = (float)FUN_0801612c(*(float *)(pcVar3 + 0x1c) * fVar23);
LAB_08010d26:
    fVar27 = (float)VectorFloatToUnsigned(fVar28,3);
  }
  fVar25 = (float)VectorUnsignedToFloat(fVar27,(byte)(uVar22 >> 0x15) & 3);
  *(float *)(pbVar15 + 0x48) = fVar27;
  *(float *)(pbVar15 + 0x38) = fVar25 / fVar23;
  uVar33 = FUN_0800eb6c(fVar27);
  uVar33 = FUN_0800c284((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),0,DAT_080112b8);
  FUN_0800eb88((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),0,DAT_080112bc);
  uVar26 = FUN_08012518();
  *(undefined4 *)(pbVar15 + 0x20) = uVar26;
  iVar14 = 0;
  fVar23 = *(float *)(pbVar15 + 0x28);
  fVar32 = 1.0;
  iVar17 = 0;
  cVar19 = false;
  fVar25 = fVar23;
  do {
    uVar33 = FUN_0801071e(ABS(local_68[iVar17]),*(undefined4 *)(pcVar3 + iVar17 * 4 + 0x24),iVar14);
    iVar24 = (int)((ulonglong)uVar33 >> 0x20);
    iVar14 = (int)uVar33;
    if (cVar19 != '\0') {
      if (iVar14 == 0) {
        iVar14 = 1;
        fVar25 = extraout_s1_00;
      }
      else if ((int)((uint)(extraout_s1_00 * fVar23 < extraout_s0_00 * fVar25) << 0x1f) < 0) {
        fVar25 = (extraout_s1_00 * fVar23) / extraout_s0_00;
      }
    }
    iVar17 = iVar24 + 1;
    cVar21 = SBORROW4(iVar17,4);
    cVar19 = iVar24 + -3 < 0;
  } while (iVar17 < 4);
  cVar19 = '\0';
  if ((((uint)local_70 & 7) == 0) ||
     (fVar28 = (float)FUN_08010f46(*(undefined4 *)(pbVar1 + 0x78),DAT_08011100), cVar19 != '\0')) {
LAB_08010e96:
    *pbVar15 = *pbVar15 | 4;
    fVar23 = fVar25;
  }
  else {
    if (-1 < (int)((uint)(fVar23 < fVar28) << 0x1f)) {
      fVar23 = fVar28;
    }
    uVar22 = 0;
    fVar28 = fVar23 / fVar28;
    iVar14 = 0;
    cVar19 = false;
    do {
      fVar31 = local_68[iVar14];
      fVar29 = *(float *)(pbVar1 + iVar14 * 4 + 0x68) * fVar28;
      if ((uVar22 & 0xff) != 0) {
        fVar29 = fVar29 * fVar32;
        fVar31 = fVar31 * fVar32;
      }
      uVar33 = FUN_08010f3c(fVar28,fVar29,fVar31);
      fVar28 = (float)((ulonglong)uVar33 >> 0x20);
      uVar26 = (undefined4)uVar33;
      cVar21 = extraout_s2_00 < 0.0;
      iVar14 = extraout_r1_02;
      if (cVar19 == '\0') {
        cVar21 = -cVar21;
        if ((cVar21 == '\0') &&
           (cVar21 = fVar28 < 0.0, fVar28 == 0.0 || (bool)cVar21 != NAN(fVar28))) {
          fVar29 = -fVar28;
          goto LAB_08010e46;
        }
        uVar33 = CONCAT44(extraout_s2_00 - fVar28,uVar26);
      }
      else if ((extraout_s2_00 != 0.0 && (bool)cVar21 == NAN(extraout_s2_00)) ||
              (cVar21 = fVar28 < 0.0, fVar29 = fVar28, (bool)cVar21)) {
        uVar33 = CONCAT44(fVar28 - extraout_s2_00,uVar26);
      }
      else {
LAB_08010e46:
        cVar21 = fVar28 < 0.0;
        uVar33 = FUN_08010f3c(uVar26,fVar29);
        iVar14 = extraout_r1_03;
        if (cVar21 == '\0') {
          uVar33 = CONCAT44(extraout_s2_01,(int)uVar33);
        }
      }
      uVar33 = FUN_08010f3c((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),
                            *(undefined4 *)(pcVar3 + iVar14 * 4 + 0x24));
      iVar17 = (int)((ulonglong)uVar33 >> 0x20);
      uVar22 = (uint)uVar33;
      if (cVar21 != '\0') {
        fVar32 = (extraout_s2_02 / extraout_s1_01) * fVar32;
        uVar22 = uVar22 + 1;
      }
      iVar14 = iVar17 + 1;
      cVar21 = SBORROW4(iVar14,4);
      cVar19 = iVar17 + -3 < 0;
      fVar28 = extraout_s0_01;
    } while (iVar14 < 4);
    if ((uVar22 & 0xff) != 0) {
      fVar23 = fVar23 * fVar32;
    }
    fVar32 = (float)FUN_08010f46(fVar23 * DAT_0801118c,*(undefined4 *)(pcVar3 + 0x38));
    if (cVar19 != '\0') {
      cVar19 = fVar32 < fVar25;
      cVar21 = NAN(fVar32) || NAN(fVar25);
    }
    if (cVar19 != '\0') goto LAB_08010e96;
  }
  *(float *)(pbVar15 + 0x30) = fVar23;
  fVar32 = DAT_080111e4;
  local_70 = -*(float *)(pbVar15 + 0x38);
  local_6c = DAT_080111e4;
  fVar28 = (float)FUN_080161dc(&local_70,&local_6c,pbVar15 + 0x34);
  cVar19 = *DAT_080112c0 << 0x1f < 0;
  if (!(bool)cVar19) {
    cVar19 = fVar23 < fVar28;
    cVar21 = NAN(fVar23) || NAN(fVar28);
    fVar32 = fVar23;
    if (!(bool)cVar19) {
      fVar32 = fVar28;
    }
  }
  *(float *)(pbVar15 + 0x2c) = fVar32;
  FUN_08010f46(fVar28,*(undefined4 *)(pbVar15 + 0x28));
  if (cVar19 == cVar21) {
    bVar18 = 3;
  }
  else {
    bVar18 = 1;
  }
  *pbVar15 = bVar18 | *pbVar15;
  *(float *)(pbVar1 + 0x68) = local_68[0];
  *(float *)(pbVar1 + 0x6c) = local_68[1];
  *(float *)(pbVar1 + 0x70) = local_68[2];
  *(float *)(pbVar1 + 0x74) = local_68[3];
  *(undefined4 *)(pbVar1 + 0x78) = extraout_s1_02;
  *(float *)(pcVar3 + 0x38) = fVar25;
  *pbVar1 = bVar13;
  iVar14 = param_2[1];
  iVar17 = param_2[2];
  iVar24 = param_2[3];
  *(int *)(pbVar1 + 0x34) = *param_2;
  *(int *)(pbVar1 + 0x38) = iVar14;
  *(int *)(pbVar1 + 0x3c) = iVar17;
  *(int *)(pbVar1 + 0x40) = iVar24;
  FUN_0801043c();
  FUN_08010514();
  FUN_08010552();
LAB_08010f2e:
  return CONCAT44(param_2,uStack_30);
}



/* FUN_08010f3c at 08010f3c */

void FUN_08010f3c(void)

{
  return;
}



/* FUN_08010f46 at 08010f46 */

void FUN_08010f46(void)

{
  return;
}



/* FUN_08010f50 at 08010f50 */

void FUN_08010f50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  float unaff_s17;
  
  fVar1 = (float)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  if ((int)((uint)(fVar1 * unaff_s17 < fVar3 * fVar2) << 0x1f) < 0) {
    VectorFloatToUnsigned((fVar1 * unaff_s17) / fVar2,3);
  }
  return;
}



/* FUN_08010f84 at 08010f84 */

undefined4
FUN_08010f84(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 param_6,undefined4 param_7)

{
  byte bVar1;
  byte *pbVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float *unaff_r6;
  undefined4 *unaff_r7;
  undefined4 *unaff_r8;
  undefined8 uVar7;
  undefined1 auStack_50 [4];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  pbVar2 = DAT_0801106c;
  local_4c = FUN_08011104(*param_1,*(undefined4 *)(DAT_0801106c + 4));
  iVar4 = FUN_08016260(*unaff_r6 * *(float *)(pbVar2 + 8));
  local_48 = iVar4;
  iVar5 = FUN_0801110a(*unaff_r7,*(undefined4 *)(pbVar2 + 0xc));
  local_44 = iVar5;
  local_40 = FUN_0801110a(*unaff_r8,*(undefined4 *)(pbVar2 + 0x10));
  if ((int)((uint)*DAT_080112c4 << 0x1c) < 0) {
    *(int *)(pbVar2 + 0x40) = local_40;
  }
  puVar3 = DAT_080112c0;
  if (*pbVar2 == pbVar2[1]) {
    local_3c = local_4c + *(int *)(pbVar2 + 0x34) >> 1;
    local_38 = iVar4 + *(int *)(pbVar2 + 0x38) >> 1;
    local_34 = iVar5 + *(int *)(pbVar2 + 0x3c) >> 1;
    local_30 = local_40 + *(int *)(pbVar2 + 0x40) >> 1;
    uVar6 = *DAT_080112c0;
    *DAT_080112c0 = uVar6 & 0xfffffffe;
    FUN_08011070(uVar6 & 0xfffffffe,param_6,auStack_50);
    FUN_080108a0(*param_5,&local_3c);
    bVar1 = *pbVar2;
    uVar7 = FUN_08011070();
    FUN_0801107e((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),auStack_50);
    *(byte *)(DAT_080111e8 + (uint)bVar1 * 0x54) =
         *(byte *)(DAT_080111e8 + (uint)bVar1 * 0x54) | 0x10;
    *puVar3 = *puVar3 | 1;
  }
  else {
    FUN_0801107e(local_40,*pbVar2,param_7);
  }
  FUN_0800f80c();
  return param_4;
}



/* FUN_08011070 at 08011070 */

void FUN_08011070(void)

{
  return;
}



/* FUN_0801107e at 0801107e */

void FUN_0801107e(void)

{
  undefined4 *unaff_r6;
  
  FUN_080108a0(*unaff_r6,&stack0x00000004);
  return;
}



/* FUN_08011088 at 08011088 */

undefined8
FUN_08011088(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *unaff_r6;
  float *unaff_r7;
  float *unaff_r8;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = DAT_080112a4;
  local_28 = param_1;
  local_24 = param_2;
  local_20 = param_3;
  local_1c = param_4;
  uVar2 = FUN_08011104(*param_1,*(undefined4 *)(DAT_080112a4 + 4));
  *(undefined4 *)(iVar1 + 0x34) = uVar2;
  uVar3 = FUN_08016260(*unaff_r6 * *(float *)(iVar1 + 8));
  *(undefined4 *)(iVar1 + 0x38) = uVar3;
  uVar4 = FUN_08016260(*unaff_r7 * *(float *)(iVar1 + 0xc));
  *(undefined4 *)(iVar1 + 0x3c) = uVar4;
  local_28 = (undefined4 *)FUN_08016260(*unaff_r8 * *(float *)(iVar1 + 0x10));
  *(undefined4 **)(iVar1 + 0x40) = local_28;
  local_24 = uVar4;
  local_20 = uVar3;
  local_1c = uVar2;
  FUN_08010052(&local_1c,&local_20,&local_24,&local_28);
  *(undefined4 *)(iVar1 + 0x78) = 0;
  FUN_08016290(iVar1 + 0x68,0x10);
  return CONCAT44(local_24,local_28);
}



/* FUN_08011104 at 08011104 */

void FUN_08011104(float param_1,float param_2)

{
  FUN_08016260(param_1 * param_2);
  return;
}



/* FUN_0801110a at 0801110a */

void FUN_0801110a(float param_1,float param_2)

{
  FUN_08016260(param_1 * param_2);
  return;
}



/* FUN_08011112 at 08011112 */

undefined8
FUN_08011112(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_18 = *param_1;
  local_14 = param_1[1];
  local_10 = param_1[2];
  uStack_c = param_4;
  FUN_08010812(&local_18,&local_14,&local_10);
  FUN_08011088(&local_18,&local_14,&local_10,param_1 + 3);
  return CONCAT44(local_14,local_18);
}



/* FUN_0801113c at 0801113c */

undefined8 FUN_0801113c(uint param_1,float *param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  int local_20 [2];
  undefined4 uStack_10;
  uint local_c;
  
  iVar1 = DAT_080112a4;
  fVar3 = *param_2;
  local_c = param_1;
  uVar2 = FUN_08016260(fVar3 * *(float *)(DAT_080112a4 + (param_1 & 0xff) * 4 + 4));
  local_20[0] = (int)fVar3;
  *(undefined4 *)(iVar1 + (char)local_c * 4 + 0x34) = uVar2;
  FUN_08010078(&local_c,local_20);
  *(undefined4 *)(iVar1 + (char)local_c * 4 + 0x68) = 0;
  return CONCAT44(local_c,uStack_10);
}



/* FUN_08011194 at 08011194 */

void FUN_08011194(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  uint uVar6;
  
  iVar1 = DAT_080112a4;
  uVar2 = 1;
  iVar3 = 0;
  iVar4 = DAT_080112a4 + 0x24;
  do {
    fVar5 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(iVar1 + 0x48 + iVar3 * 4),(byte)(in_fpscr >> 0x15) & 3
                             );
    uVar6 = VectorFloatToUnsigned(fVar5 * *(float *)(iVar1 + 4 + iVar3 * 4),3);
    *(uint *)(iVar4 + iVar3 * 4) = uVar6;
    if (uVar2 < uVar6) {
      uVar2 = uVar6;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  *(uint *)(iVar1 + 100) = 0xffffffff / uVar2;
  return;
}



/* FUN_080111ec at 080111ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080111ec(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_r7;
  
  iVar3 = DAT_080112a4;
  iVar4 = 0;
  do {
    iVar1 = iVar4 * 4;
    iVar2 = iVar4 * 4;
    iVar4 = iVar4 + 1;
    *(float *)(iVar3 + 0x14 + iVar2) = 1.0 / *(float *)(iVar3 + 4 + iVar1);
  } while (iVar4 < 4);
  FUN_08011112(_DAT_080112c8);
  FUN_08011194(unaff_r7);
  return;
}



/* FUN_08011222 at 08011222 */

void FUN_08011222(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_0800b04c(0x46);
  iVar1 = DAT_080112a4;
  *(char *)(DAT_080112a4 + 2) = (char)iVar2;
  if (iVar2 != 0) {
    uVar3 = FUN_0800c204();
    *(undefined4 *)(iVar1 + 0x60) = uVar3;
  }
  iVar2 = FUN_0800b04c(0x53);
  if (iVar2 != 0) {
    uVar3 = FUN_0800c204();
    *(undefined4 *)(iVar1 + 0x5c) = uVar3;
  }
  iVar2 = FUN_0800b04c(0x42);
  if (iVar2 != 0) {
    uVar3 = FUN_0800c204();
    *(undefined4 *)(iVar1 + 0x58) = uVar3;
  }
  return;
}



/* FUN_080112ec at 080112ec */

undefined4
FUN_080112ec(undefined4 param_1,undefined4 param_2,float param_3,float param_4,float *param_5,
            undefined4 param_6)

{
  float fVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  uint in_fpscr;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  
  fVar12 = *param_5;
  uVar11 = in_fpscr & 0xfffffff;
  uVar5 = uVar11 | (uint)(fVar12 < DAT_0801164c) << 0x1f;
  uVar10 = uVar5 | (uint)(NAN(fVar12) || NAN(DAT_0801164c)) << 0x1c;
  bVar8 = (byte)(uVar5 >> 0x1f);
  bVar9 = (byte)(uVar10 >> 0x1c) & 1;
  if (bVar8 == bVar9) {
    uVar5 = uVar11 | (uint)(fVar12 < DAT_08011650) << 0x1f;
    bVar8 = -(char)((int)uVar5 >> 0x1f);
    if (bVar8 != 0) {
      param_4 = param_5[1];
      uVar11 = uVar11 | (uint)(param_4 < DAT_0801164c) << 0x1f;
      uVar10 = uVar11 | (uint)(NAN(param_4) || NAN(DAT_0801164c)) << 0x1c;
      bVar8 = (byte)(uVar11 >> 0x1f);
      bVar9 = (byte)(uVar10 >> 0x1c) & 1;
      param_3 = DAT_08011650;
      goto LAB_08011326;
    }
  }
  else {
LAB_08011326:
    if (bVar8 != bVar9) {
      return 1;
    }
    uVar5 = uVar10 & 0xfffffff | (uint)(param_4 < param_3) << 0x1f;
    bVar8 = (byte)(uVar5 >> 0x1f);
  }
  if (bVar8 == 0) {
    return 1;
  }
  fVar15 = *(float *)(DAT_08011654 + 1);
  fVar17 = *(float *)((int)DAT_08011654 + 0xc);
  fVar16 = (float)*DAT_08011654;
  fVar12 = fVar12 - fVar16;
  fVar13 = param_5[2];
  fVar14 = param_5[3];
  fVar19 = (float)((ulonglong)*DAT_08011654 >> 0x20);
  param_4 = param_4 - fVar19;
  FUN_0800bce8(fVar12 * fVar12 + param_4 * param_4);
  uVar20 = FUN_080116a0();
  FUN_0800c284((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_08011658,DAT_0801165c);
  uVar4 = FUN_0800bef8();
  uVar3 = FUN_08016260(uVar4);
  pfVar6 = DAT_0801166c;
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  local_54 = (float)VectorUnsignedToFloat((uint)uVar3,(byte)(uVar5 >> 0x15) & 3);
  local_54 = 1.0 / local_54;
  local_60 = fVar12 * local_54;
  param_4 = param_4 * local_54;
  local_58 = (fVar13 - fVar15) * local_54;
  local_54 = (fVar14 - fVar17) * local_54;
  local_70 = fVar16;
  local_6c = fVar19;
  local_68 = fVar15;
  local_64 = fVar17;
  local_5c = param_4;
  if (*DAT_08011660 != '\0') {
    uVar11 = uVar5 & 0xfffffff | (uint)(*DAT_08011664 == 0.0) << 0x1e;
    if ((byte)(uVar11 >> 0x1e) == 0) {
      fVar12 = param_5[2];
      if (*DAT_08011664 <= fVar12) goto LAB_08011438;
      uVar11 = uVar5 & 0xfffffff | (uint)(*DAT_08011668 == fVar12) << 0x1e;
      if ((byte)(uVar11 >> 0x1e) == 0) {
        *DAT_08011668 = fVar12;
        *pfVar6 = 1.0 - param_5[2] * *DAT_08011670;
      }
      fVar12 = *pfVar6;
    }
    else {
      fVar12 = 1.0;
    }
    FUN_080116a8();
LAB_08011454:
    FUN_0801169c(local_70);
    FUN_08011694();
    cVar2 = FUN_08012518();
    uVar10 = (uint)cVar2;
    FUN_0801169c(local_6c);
    FUN_08011694();
    cVar2 = FUN_08012518();
    uVar5 = (uint)cVar2;
    if ((int)uVar10 < 0) {
      uVar10 = 0;
    }
    else if (4 < (int)uVar10) {
      uVar10 = 4;
    }
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
    else if (4 < (int)uVar5) {
      uVar5 = 4;
    }
    if ((uVar10 & 0xff) < 5) {
      fVar13 = *(float *)(DAT_08011680 + (uVar10 & 0xff) * 4);
    }
    else {
      fVar13 = (float)VectorUnsignedToFloat(uVar10 & 0xff,(byte)(uVar11 >> 0x15) & 3);
      fVar13 = fVar13 * DAT_0801167c + 20.0;
    }
    if ((uVar5 & 0xff) < 5) {
      fVar14 = *(float *)(DAT_08011684 + (uVar5 & 0xff) * 4);
    }
    else {
      fVar14 = (float)VectorUnsignedToFloat(uVar5 & 0xff,(byte)(uVar11 >> 0x15) & 3);
      fVar14 = fVar14 * DAT_0801167c + 20.0;
    }
    pfVar6 = (float *)(DAT_08011688 + uVar10 * 0x14 + uVar5 * 4);
    fVar16 = *pfVar6;
    fVar19 = pfVar6[5];
    fVar15 = pfVar6[1];
    fVar17 = pfVar6[6];
    iVar7 = FUN_0800edce(fVar16);
    if (iVar7 != 0) {
      fVar16 = DAT_0801168c;
    }
    iVar7 = FUN_0800edce(fVar19);
    if (iVar7 != 0) {
      fVar19 = DAT_0801168c;
    }
    iVar7 = FUN_0800edce(fVar15);
    if (iVar7 != 0) {
      fVar15 = DAT_0801168c;
    }
    iVar7 = FUN_0800edce(fVar17);
    if (iVar7 != 0) {
      fVar17 = DAT_0801168c;
    }
    fVar13 = local_70 - fVar13;
    fVar14 = local_6c - fVar14;
    FUN_080116a0(fVar19 - fVar16);
    FUN_08011694();
    fVar19 = (float)FUN_0800bef8();
    FUN_080116a0(fVar17 - fVar15);
    FUN_08011694();
    fVar17 = (float)FUN_0800bef8();
    fVar16 = fVar16 + fVar19 * fVar13;
    FUN_080116a0((fVar15 + fVar17 * fVar13) - fVar16);
    FUN_08011694();
    fVar15 = (float)FUN_0800bef8();
    fVar18 = fVar19 * local_60;
    FUN_080116a0(fVar17 - fVar19);
    uVar20 = FUN_08011694();
    uVar21 = FUN_0800bca0(local_60);
    FUN_0800c284((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar20,
                 (int)((ulonglong)uVar20 >> 0x20));
    fVar17 = (float)FUN_0800bef8();
    fVar19 = DAT_08011690;
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0) {
        local_70 = *param_5;
        local_6c = param_5[1];
        local_68 = param_5[2];
        local_64 = param_5[3];
      }
      fVar1 = local_68;
      local_68 = local_68 + (fVar16 + fVar15 * fVar14) * fVar12;
      FUN_08016298(&local_70,param_6);
      if (uVar3 == 0) {
        return 0;
      }
      local_68 = fVar1;
      FUN_080116a8();
      fVar13 = fVar13 + local_60;
      uVar5 = uVar11 & 0xfffffff;
      uVar10 = uVar5 | (uint)(fVar13 < 0.0) << 0x1f;
      uVar11 = uVar10 | (uint)NAN(fVar13) << 0x1c;
      bVar8 = (byte)(uVar10 >> 0x1f);
      bVar9 = (byte)(uVar11 >> 0x1c) & 1;
      fVar14 = fVar14 + param_4;
      if (bVar8 == bVar9) {
        uVar11 = uVar5 | (uint)(fVar13 < fVar19) << 0x1f;
        bVar8 = -(char)((int)uVar11 >> 0x1f);
        if (bVar8 != 0) {
          uVar5 = uVar5 | (uint)(fVar14 < 0.0) << 0x1f;
          uVar11 = uVar5 | (uint)NAN(fVar14) << 0x1c;
          bVar8 = (byte)(uVar5 >> 0x1f);
          bVar9 = (byte)(uVar11 >> 0x1c) & 1;
          goto LAB_080115f0;
        }
      }
      else {
LAB_080115f0:
        if (bVar8 != bVar9) goto LAB_08011454;
        uVar11 = uVar11 & 0xfffffff | (uint)(fVar14 < fVar19) << 0x1f;
        bVar8 = (byte)(uVar11 >> 0x1f);
      }
      if (bVar8 == 0) goto LAB_08011454;
      fVar16 = fVar16 + fVar18;
      fVar15 = fVar15 + fVar17;
    } while( true );
  }
LAB_08011438:
  while (uVar3 = uVar3 - 1, uVar3 != 0) {
    FUN_080116a8();
    FUN_08016298(&local_70,param_6);
  }
  FUN_08016298(param_5,param_6);
  return 0;
}



/* FUN_08011694 at 08011694 */

void FUN_08011694(void)

{
  FUN_0800c284();
  return;
}



/* FUN_0801169c at 0801169c */

void FUN_0801169c(float param_1)

{
  float unaff_s20;
  
  FUN_0800bca0(param_1 + unaff_s20);
  return;
}



/* FUN_080116a0 at 080116a0 */

void FUN_080116a0(undefined4 param_1)

{
  FUN_0800bca0(param_1);
  return;
}



/* FUN_080116a8 at 080116a8 */

void FUN_080116a8(void)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int unaff_r5;
  int unaff_r6;
  
  iVar2 = 0;
  do {
    pfVar3 = (float *)(unaff_r6 + iVar2 * 4);
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + 1;
    *pfVar3 = *pfVar3 + *(float *)(unaff_r5 + iVar1);
  } while (iVar2 < 4);
  return;
}



/* FUN_080116ca at 080116ca */

longlong FUN_080116ca(byte *param_1,uint *param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte *pbVar4;
  uint uStack_20;
  undefined4 *puStack_1c;
  
  pbVar4 = param_1;
  if (param_2 == (uint *)0x0) {
    param_2 = &uStack_20;
  }
  for (; (uVar1 = (uint)*pbVar4, uVar1 - 9 < 5 || (uVar1 == 0x20)); pbVar4 = pbVar4 + 1) {
  }
  if (uVar1 == 0x2d || uVar1 == 0x2b) {
    bVar3 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  }
  else {
    bVar3 = 0x2b;
  }
  uStack_20 = param_3;
  puStack_1c = param_4;
  uVar1 = FUN_080162c0(pbVar4,param_2);
  if (pbVar4 == (byte *)*param_2) {
    *param_2 = (uint)param_1;
    return (ulonglong)uStack_20 << 0x20;
  }
  if (bVar3 == 0x2b) {
    if (0x7fffffff < uVar1) {
code_r0x0801172c:
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 1;
      }
      if (bVar3 == 0x2d) {
        uVar2 = 0x80000000;
      }
      else {
        uVar2 = 0x7fffffff;
      }
      return CONCAT44(uStack_20,uVar2);
    }
  }
  else if (bVar3 == 0x2d) {
    if (uVar1 < 0x80000001) {
      return CONCAT44(uStack_20,-uVar1);
    }
    goto code_r0x0801172c;
  }
  return CONCAT44(uStack_20,uVar1);
}



/* FUN_08011748 at 08011748 */

void FUN_08011748(void)

{
  FUN_080116ca();
  return;
}



/* FUN_0801174c at 0801174c */

char * FUN_0801174c(char *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (cVar1 != param_2))) {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  if (cVar1 != param_2) {
    param_1 = (char *)0x0;
  }
  return param_1;
}



/* FUN_08011764 at 08011764 */

undefined4 FUN_08011764(void)

{
  byte *pbVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 in_r3;
  undefined4 local_10;
  
  pbVar1 = DAT_080117f0;
  pcVar4 = DAT_080117e4;
  if (*DAT_080117e4 != '\0') {
    pcVar4 = (char *)(uint)(byte)DAT_080117e4[1];
  }
  local_10 = in_r3;
  if (*DAT_080117e4 != '\0' && pcVar4 != (char *)0x0) {
    if ((int)((uint)*DAT_080117f0 << 0x1a) < 0) {
      FUN_0800bb0c(DAT_080117f4);
    }
    FUN_0800a57c();
    iVar3 = DAT_080117fc;
    puVar2 = DAT_080117f8;
    uVar5 = DAT_080117e0;
    *DAT_080117f8 = DAT_080117e0;
    puVar2[1] = uVar5;
    uVar5 = DAT_08011800;
    puVar2[2] = *(undefined4 *)(iVar3 + 8);
    puVar2[1] = uVar5;
    *puVar2 = DAT_08011804;
    if ((int)((uint)*pbVar1 << 0x1a) < 0) {
      thunk_FUN_0800bc92(DAT_0801180c,DAT_08011808,puVar2);
    }
    local_10 = 0;
    FUN_0800a76c(puVar2,puVar2 + 1,&local_10);
    FUN_0800aad4(2);
    uVar5 = DAT_08011810;
    if (-1 < (int)((uint)*pbVar1 << 0x1a)) {
      return local_10;
    }
  }
  else {
    FUN_0800bb0c(DAT_080117e8);
    uVar5 = DAT_080117ec;
  }
  FUN_0800bb0c(uVar5);
  return local_10;
}



/* FUN_08011814 at 08011814 */

void FUN_08011814(int param_1)

{
  do {
  } while (-1 < *DAT_080121f8 << 0x18);
  DAT_080121f8[1] = param_1 + 0x80;
  return;
}



/* FUN_08011824 at 08011824 */

void FUN_08011824(int param_1,uint param_2)

{
  byte bVar1;
  
  for (bVar1 = 0; bVar1 < param_2; bVar1 = bVar1 + 1) {
    FUN_08011814((int)*(char *)(param_1 + (uint)bVar1));
  }
  return;
}



/* FUN_0801183e at 0801183e */

void FUN_0801183e(undefined4 param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_08015d58();
  FUN_08011824(param_1,uVar1);
  return;
}



/* FUN_08011842 at 08011842 */

void FUN_08011842(undefined4 param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_08015d58();
  FUN_08011824(param_1,uVar1);
  return;
}



/* FUN_08011854 at 08011854 */

void FUN_08011854(void)

{
  FUN_0801200e(DAT_080121fc,s__ERR_CARD__d__0801229c,*DAT_080121fc);
  FUN_080121c4();
  return;
}



/* FUN_08011866 at 08011866 */

void FUN_08011866(void)

{
  undefined1 *puVar1;
  undefined4 unaff_r7;
  
  FUN_0801183e(s__SYS_CANCELING__080122ac);
  FUN_0801299e(DAT_08012200);
  FUN_08013402();
  FUN_0800b730();
  FUN_08016448(DAT_08012204);
  FUN_0801477a();
  puVar1 = DAT_0801220c;
  *DAT_08012208 = 0;
  *puVar1 = 0;
  *DAT_08012210 = 0;
  puVar1 = DAT_08012214;
  DAT_08012214[0x270] = 0;
  *puVar1 = 0;
  *DAT_08012218 = 0;
  FUN_08014ce4(1000);
  FUN_0801183e(s__SYS_STARTED__080122bc,unaff_r7);
  return;
}



/* FUN_080118c6 at 080118c6 */

void FUN_080118c6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  
  iVar1 = DAT_08012214;
  uStack_c = param_4;
  FUN_0801200e(param_1,s_M109_S_i_080122cc,(int)*(short *)(DAT_08012214 + 0x18));
  FUN_08013440(auStack_20,0);
  FUN_080164f0(auStack_20,s_M106_P_i_S_i_080122d8,0,(int)*(short *)(iVar1 + 0x1a));
  FUN_08013440(auStack_20,0);
  *DAT_0801221c = 2;
  FUN_08012990(DAT_08012200);
  return;
}



/* FUN_0801190e at 0801190e */

void FUN_0801190e(void)

{
  undefined4 unaff_r7;
  
  FUN_0801183e(s__VER__080122e8);
  FUN_0801183e(&DAT_08011a64);
  FUN_0801183e(&DAT_08011bdc,unaff_r7);
  return;
}



/* FUN_08011926 at 08011926 */

void FUN_08011926(void)

{
  return;
}



/* FUN_08011bf0 at 08011bf0 */

void FUN_08011bf0(void)

{
  int iVar1;
  int unaff_r5;
  int unaff_r6;
  
  iVar1 = 0;
  do {
    *(undefined4 *)(unaff_r5 + iVar1 * 4) = *(undefined4 *)(unaff_r6 + iVar1 * 4);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}



/* FUN_08011c02 at 08011c02 */

void FUN_08011c02(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  short sVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [120];
  undefined4 uStack_20;
  
  puVar3 = DAT_08012210;
  uVar5 = DAT_08012204;
  iVar2 = DAT_08012200;
  cVar1 = *param_1;
  puVar8 = (undefined1 *)(DAT_08012200 + 0x20);
  uStack_20 = param_4;
  if (cVar1 == 'H') {
    FUN_08013440(&DAT_08011f34,0);
    FUN_08013440(&DAT_08011f38,0);
    FUN_08013440(&DAT_080123cc,0);
    return;
  }
  if (cVar1 == 'I') {
    FUN_080134c4(s_G29_P0_080123d4,0);
    FUN_080134c4(s_G29_P1_080123dc,0);
    FUN_080134c4(s_G29_P3_1_080123e4,0);
    FUN_080134c4(s_G29_A_080123f0,0);
    FUN_080134c4(&DAT_080123f8,0);
    FUN_080134c4(&DAT_080123cc,0);
    return;
  }
  if (cVar1 == 'P') {
    FUN_0801183e(s__SYS_PAUSE__08012374);
    *puVar8 = 1;
    *(undefined1 *)(iVar2 + 0x23) = 0;
    *DAT_0801224c = *DAT_0801224c + '\x01';
    FUN_08016466(uVar5);
    *(undefined2 *)(puVar3 + 2) = *DAT_08012220;
    *(undefined2 *)(puVar3 + 4) = *DAT_08012224;
    pcVar6 = s__SYS_PAUSED__08012380;
    goto LAB_08011d7c;
  }
  if (cVar1 == 'R') {
    FUN_08013440(s_G1_Z_10_08012390,0);
    uVar5 = FUN_08013440(&DAT_08011f2c,0);
    FUN_0801200e(uVar5,s_M109_S_d__08012398,(int)*(short *)(puVar3 + 2));
    FUN_0801340e(auStack_a8,0);
    pcVar6 = DAT_08012250;
    if (*DAT_08012250 != '\0') {
      pcVar6 = (char *)(uint)(byte)DAT_08012250[1];
    }
    if (*DAT_08012250 == '\0' || pcVar6 == (char *)0x0) {
      FUN_080134c4(s_G28_XY_080123a4,0);
    }
    FUN_0801183e(s__SYS_RESUME__080123ac);
    FUN_08013440(&DAT_08011f30,0);
    pcVar6 = s__SYS_RESUMED__080123bc;
    goto LAB_08011d7c;
  }
  if (cVar1 == 'X') {
    *DAT_08012210 = 1;
    return;
  }
  if (*(char *)(DAT_08012200 + 0x24) == '\0') {
    FUN_0801288a(DAT_08012200);
  }
  FUN_08014ce4(500);
  sVar4 = thunk_FUN_080163dc(param_1);
  if (*(char *)(iVar2 + 0x59) == '\0') {
    sVar4 = thunk_FUN_080163dc(param_1);
LAB_08011d66:
    FUN_08012f74(iVar2,sVar4,0);
    if (*(char *)(iVar2 + 0x25) == '\0') {
      FUN_080164f0(auStack_98,s__PRINTFILE__s__0801240c);
      iVar7 = FUN_08016530(iVar2 + 0x26,s_UPDATE_BIN_0801241c);
      if (iVar7 != 0) {
        *(undefined4 *)(DAT_08012254 + 4) = DAT_08012258;
        FUN_0801183e(s__E_UPDATING___08012428);
        DataSynchronizationBarrier(0xf);
        *DAT_0801225c = *DAT_0801225c & 0x700 | DAT_08012260;
        DataSynchronizationBarrier(0xf);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      iVar7 = FUN_08016530(iVar2 + 0x26,s_RECOVERY_BIN_08012438);
      if (iVar7 != 0) {
        FUN_08016560();
        return;
      }
      FUN_08011842(auStack_98);
      FUN_0801183e(s__SYS_BUILD__08012448);
      FUN_08011842(auStack_98);
      FUN_0801183e(s__SYS_BUILD__08012448);
      FUN_08012a56(iVar2,iVar2 + 0x26,1,0);
      FUN_08012990(iVar2);
      FUN_08016480(uVar5);
      return;
    }
    FUN_08012ff8(iVar2,iVar2 + 0x26);
  }
  else {
    if (sVar4 != 0) {
      sVar4 = thunk_FUN_080163dc(param_1);
      sVar4 = sVar4 + -1;
      goto LAB_08011d66;
    }
    FUN_08013068(iVar2);
  }
  pcVar6 = s__SYS_DIR__08012400;
LAB_08011d7c:
  FUN_0801183e(pcVar6);
  return;
}



/* FUN_08011f22 at 08011f22 */

void FUN_08011f22(void)

{
  FUN_0800de78(DAT_0801222c,10);
  return;
}



/* FUN_08012006 at 08012006 */

void FUN_08012006(undefined4 param_1,undefined4 param_2)

{
  FUN_0800c284(param_1,param_2,DAT_08012274,DAT_08012278);
  return;
}



/* FUN_0801200e at 0801200e */

void FUN_0801200e(void)

{
  FUN_080164f0();
  return;
}



/* FUN_08012014 at 08012014 */

undefined1 * FUN_08012014(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;
  byte bVar7;
  ushort uVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  ushort *puVar14;
  char *pcVar15;
  int iVar16;
  int iVar17;
  undefined1 *unaff_r7;
  bool bVar18;
  uint in_fpscr;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  uint local_94;
  undefined1 *local_90;
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [88];
  undefined1 auStack_28 [9];
  char local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  
  puVar13 = DAT_08012240;
  pfVar6 = DAT_0801223c;
  pfVar5 = DAT_08012238;
  puVar4 = DAT_08012234;
  puVar14 = DAT_08012220;
  iVar17 = DAT_08012200;
  if (param_1[2] != ':') {
    return param_1;
  }
  cVar3 = param_1[1];
  if (cVar3 == 'B') {
LAB_0801205a:
    if (param_1[3] == '0') {
      uVar12 = FUN_080164c8(DAT_08012204);
      FUN_080164f0(auStack_8c,s__02u_02u_02u_08012304,(uVar12 / 0x3c) / 0x3c & 0xffff,
                   (uVar12 / 0x3c & 0xffff) % 0x3c,uVar12);
      uVar12 = (uint)*(byte *)(DAT_08012200 + 299);
      bVar18 = uVar12 == 0;
      if (!bVar18) {
        uVar12 = *(uint *)(DAT_08012200 + 0x354);
      }
      if (bVar18 || uVar12 == 0) {
        bVar7 = 0;
      }
      else {
        uVar21 = FUN_080121b8();
        bVar7 = (byte)((uint)((ulonglong)uVar21 >> 0x20) / (uint)uVar21);
      }
      local_94 = (uint)bVar7;
      local_90 = auStack_8c;
      FUN_0800bca0(*DAT_08012230);
      iVar17 = (int)(short)*DAT_08012220;
      uVar21 = FUN_0800bca0(*DAT_08012234);
      FUN_080164f0(auStack_80,s__T0__03_0f__03i__T1_000_000__TP__08012314,(int)uVar21,
                   (int)((ulonglong)uVar21 >> 0x20),iVar17);
      puVar13 = (undefined1 *)FUN_08011842(auStack_80);
    }
    else {
      FUN_0800bb28(s_UNKNOWN_E_B_COMMAND_08012354,param_1 + 3);
      puVar13 = (undefined1 *)FUN_08011f22();
    }
    return puVar13;
  }
  if (cVar3 == 'C') {
    cVar3 = param_1[3];
    if (cVar3 == 'P') {
      uVar8 = thunk_FUN_080163dc(param_1 + 4);
      if (0x96 < uVar8) {
        uVar8 = 0;
      }
      puVar14 = DAT_08012224;
      if (0x95 < (short)uVar8) {
        uVar8 = 0x96;
      }
    }
    else {
      if (cVar3 == 'S') {
        uVar8 = thunk_FUN_080163dc(param_1 + 4);
        if (uVar8 < 0x33) {
          if (uVar8 == 0) {
            uVar8 = 1;
          }
        }
        else {
          uVar8 = 0x32;
        }
        *DAT_08012228 = uVar8 * 10;
        return unaff_r7;
      }
      if (cVar3 != 'T') {
        FUN_0800bb28(s_UNKNOWN_C_COMMAND_080122f0,param_1 + 3);
        puVar13 = (undefined1 *)FUN_0800de78(DAT_0801222c,10,unaff_r7);
        return puVar13;
      }
      uVar8 = thunk_FUN_080163dc(param_1 + 4);
      puVar14 = DAT_08012220;
      if (300 < uVar8) {
        uVar8 = 0;
      }
    }
    *puVar14 = uVar8;
    return unaff_r7;
  }
  if (cVar3 == 'E') goto LAB_0801205a;
  if (cVar3 != 'J') {
    if (cVar3 == 'M') {
      uVar8 = thunk_FUN_080163dc(param_1 + 3);
      pfVar5 = DAT_08012264;
      uVar12 = (uint)uVar8;
      fVar20 = *DAT_08012264;
      if (uVar12 < 999) {
        fVar19 = (float)VectorUnsignedToFloat(uVar12,(byte)(in_fpscr >> 0x15) & 3);
        FUN_0800bca0(-fVar19);
        FUN_08012006();
        fVar19 = (float)FUN_0800bef8();
        if ((fVar19 < -20.0 == NAN(fVar19)) && ((int)((uint)(fVar19 < DAT_080121f4) << 0x1f) < 0)) {
          *pfVar5 = fVar19;
          iVar17 = 0;
          do {
            iVar11 = 0;
            iVar16 = DAT_08012268 + iVar17 * 0x14;
            do {
              iVar1 = iVar11 * 4;
              iVar2 = iVar11 * 4;
              iVar11 = iVar11 + 1;
              *(float *)(iVar16 + iVar2) = *(float *)(iVar16 + iVar1) + (fVar19 - fVar20);
            } while (iVar11 < 5);
            iVar17 = iVar17 + 1;
          } while (iVar17 < 5);
        }
        puVar13 = DAT_0801226c;
        *DAT_0801226c = 1;
        *(int *)(puVar13 + 0x7c) = *DAT_08012270 + 10000;
      }
      else {
        FUN_0801200e(uVar12,s__M__03i__080124c8,(int)(fVar20 * DAT_080121b4) & 0xffff);
        puVar13 = (undefined1 *)FUN_080121c4();
      }
      return puVar13;
    }
    if (cVar3 == 'P') {
      puVar13 = (undefined1 *)FUN_08011c02(param_1 + 3);
      return puVar13;
    }
    if (cVar3 == 'S') {
      cVar3 = param_1[3];
      if (cVar3 == 'H') {
        puVar13 = (undefined1 *)FUN_08013440(&DAT_08011f34,0);
      }
      else if (cVar3 == 'I') {
        FUN_0800bca0(*DAT_08012230);
        iVar17 = (int)(short)*puVar14;
        uVar21 = FUN_0800bca0(*puVar4);
        FUN_080164f0(&local_94,s__T0__03_0f__03i__T1_000_000__TP__08012454,(int)uVar21,
                     (int)((ulonglong)uVar21 >> 0x20),iVar17);
        puVar13 = (undefined1 *)FUN_08011842(&local_94);
      }
      else if (cVar3 == 'L') {
        FUN_0801288a(DAT_08012200);
        iVar11 = thunk_FUN_08012fa6(iVar17);
        FUN_08014ce4(100);
        if (*(char *)(iVar17 + 0x59) != '\0') {
          FUN_08011842(s__DIR_____08012484);
        }
        for (uVar8 = 0; (int)(uint)uVar8 < iVar11; uVar8 = uVar8 + 1) {
          FUN_08012f74(iVar17,uVar8,0);
          if (*(char *)(iVar17 + 0x25) == '\0') {
            pcVar15 = s__FILE__s__0801249c;
          }
          else {
            pcVar15 = (char *)0x8012490;
          }
          FUN_0801200e(*(char *)(iVar17 + 0x25),pcVar15);
          FUN_080121c4();
        }
        puVar13 = (undefined1 *)FUN_0801183e(s__SYS_OK__080124a8);
      }
      else {
        FUN_0800bb28(s_UNKNOWN_S_COMMAND_080124b4,param_1 + 3);
        puVar13 = (undefined1 *)FUN_08011f22();
      }
      return puVar13;
    }
    if (cVar3 != 'V') {
      return param_1;
    }
    puVar13 = (undefined1 *)FUN_0801190e();
    return puVar13;
  }
  pcVar15 = param_1 + 3;
  iVar17 = (int)*pcVar15;
  if (iVar17 - 0x41U < 2) {
    *DAT_08012240 = 1;
    if (*pcVar15 == 'A') {
      uVar10 = 0x8011e30;
    }
    else {
      uVar10 = 0x8011e34;
    }
    FUN_0801340e(uVar10,0);
    FUN_0800f64c(auStack_28,s_G1_F1000_08012368,10);
    local_1f = *pcVar15;
    local_1e = param_1[4];
    if (local_1f == 'A' || local_1f == 'B') {
      local_1f = 'E';
    }
    local_1d = param_1[5];
    puVar13 = (undefined1 *)FUN_0801340e(auStack_28);
    return puVar13;
  }
  if (iVar17 == 0x45) {
    FUN_08013402();
    FUN_0800b730();
    *puVar13 = 0;
    FUN_0800b76c();
    puVar13 = (undefined1 *)FUN_08011bf0();
    return puVar13;
  }
  if ((undefined1 *)0x2 < (undefined1 *)(iVar17 - 0x58U)) {
    return (undefined1 *)(iVar17 - 0x58U);
  }
  FUN_08011bf0();
  cVar3 = *pcVar15;
  if (cVar3 == 'X') {
    fVar20 = *pfVar6;
    fVar19 = DAT_08011be4;
    if (param_1[4] != '+') {
      puVar9 = (undefined1 *)DAT_08012244[5];
      bVar18 = (*(uint *)(DAT_08012244[4] + 0x10) & (uint)puVar9) == 0;
      fVar19 = DAT_08011be0;
      if (bVar18) {
LAB_08011b02:
        if (bVar18) {
          return puVar9;
        }
        fVar20 = fVar20 + DAT_08011be0;
        goto LAB_08011b08;
      }
    }
    *pfVar5 = fVar20 + fVar19;
  }
  else {
    if (cVar3 != 'Y') {
      if (cVar3 == 'Z') {
        fVar20 = DAT_08011be8;
        if ((param_1[4] != '+') &&
           (fVar20 = DAT_08011bec, (*(uint *)(*DAT_08012244 + 0x10) & (uint)DAT_08012244[1]) == 0))
        {
          return (undefined1 *)DAT_08012244[1];
        }
        pfVar5[2] = pfVar6[2] + fVar20;
      }
      goto LAB_08011b3a;
    }
    fVar20 = pfVar6[1];
    if (param_1[4] != '+') {
      puVar9 = (undefined1 *)DAT_08012244[3];
      bVar18 = (*(uint *)(DAT_08012244[2] + 0x10) & (uint)puVar9) == 0;
      goto LAB_08011b02;
    }
    fVar20 = fVar20 + DAT_08011be4;
LAB_08011b08:
    pfVar5[1] = fVar20;
  }
LAB_08011b3a:
  FUN_0800b748();
  *puVar13 = 1;
  fVar20 = DAT_08011e2c;
  *DAT_08012248 = DAT_08011e2c;
  fVar19 = (float)VectorSignedToFloat((int)*DAT_08012228,(byte)(in_fpscr >> 0x15) & 3);
  FUN_0800bca0(fVar19 * fVar20);
  FUN_08012006();
  uVar10 = FUN_0800bef8();
  puVar13 = (undefined1 *)FUN_0800a654(uVar10);
  return puVar13;
}



/* FUN_08012060 at 08012060 */

void FUN_08012060(int param_1)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  
  pcVar1 = DAT_08012280;
  cVar2 = *DAT_0801227c;
  if (*DAT_08012280 == cVar2 && param_1 == 0) {
    return;
  }
  if (cVar2 != '\0') {
    cVar2 = '\x01';
  }
  *DAT_08012280 = cVar2;
  if (*pcVar1 == '\0') {
    uVar3 = 0x80124e0;
  }
  else {
    uVar3 = 0x80124d4;
  }
  FUN_0801183e(uVar3);
  return;
}



/* FUN_0801208c at 0801208c */

undefined8 FUN_0801208c(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 uVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  
  FUN_08012060(0);
  puVar4 = DAT_08012270;
  pcVar3 = DAT_0801226c;
  uVar9 = (uint)((*(uint *)(DAT_08012244[4] + 0x10) & DAT_08012244[5]) == 0);
  if ((*(uint *)(DAT_08012244[2] + 0x10) & DAT_08012244[3]) == 0) {
    uVar9 = uVar9 | 2;
  }
  if ((*(uint *)(*DAT_08012244 + 0x10) & DAT_08012244[1]) == 0) {
    uVar9 = uVar9 | 4;
  }
  if ((*DAT_0801226c == '\x01') && (*(uint *)(DAT_0801226c + 0x7c) < *DAT_08012270)) {
    *DAT_0801226c = '\0';
    FUN_0800c894();
  }
  if ((uVar9 != (byte)pcVar3[1]) && (*(uint *)(pcVar3 + 0x80) < *puVar4)) {
    FUN_08011842(&DAT_080124ec);
    if ((int)(uVar9 << 0x1f) < 0) {
      uVar6 = 0x58;
    }
    else {
      uVar6 = 0x78;
    }
    FUN_08011814(uVar6);
    if ((int)(uVar9 << 0x1e) < 0) {
      uVar6 = 0x59;
    }
    else {
      uVar6 = 0x79;
    }
    FUN_08011814(uVar6);
    if ((int)(uVar9 << 0x1d) < 0) {
      uVar6 = 0x5a;
    }
    else {
      uVar6 = 0x7a;
    }
    FUN_08011814(uVar6);
    pcVar3[1] = (char)uVar9;
    FUN_08011814(0x7d);
    *(uint *)(pcVar3 + 0x80) = *puVar4 + 500;
  }
  pcVar2 = DAT_0801221c;
  if ((*DAT_08012218 != '\0') && (*DAT_0801221c == '\0')) {
    FUN_080118c6();
    *pcVar2 = '\x01';
  }
  while (piVar5 = DAT_08012288, iVar7 = *(int *)(DAT_08012284 + 0x44),
        (*(int *)(DAT_08012284 + 0x40) - iVar7 & 0x3fU) != 0) {
    cVar1 = *(char *)(DAT_08012284 + iVar7);
    *(uint *)(DAT_08012284 + 0x44) = iVar7 + 1U & 0x3f;
    iVar7 = *piVar5;
    pcVar3[iVar7 + 4] = cVar1;
    *piVar5 = iVar7 + 1;
    if ((cVar1 == '}') || (iVar7 + 1 == 0x75)) {
      pcVar3[iVar7 + 4] = '\0';
      FUN_08012014(pcVar3 + 4);
      *piVar5 = 0;
      pcVar3[4] = '\0';
    }
  }
  if (*(char *)(DAT_08012200 + 0x23) != '\0') {
    uVar9 = (uint)*(byte *)(DAT_08012200 + 299);
    bVar10 = uVar9 == 0;
    if (!bVar10) {
      uVar9 = *(uint *)(DAT_08012200 + 0x354);
    }
    if (bVar10 || uVar9 == 0) {
      uVar8 = 0;
    }
    else {
      uVar11 = FUN_080121b8();
      uVar9 = (uint)uVar11;
      uVar8 = (undefined1)((uint)((ulonglong)uVar11 >> 0x20) / uVar9);
    }
    FUN_0801200e(uVar9,s__TQ__03i__080124f4,uVar8);
    FUN_080121c4();
  }
  return CONCAT44(param_2,param_1);
}



/* FUN_080121b8 at 080121b8 */

undefined8 FUN_080121b8(int param_1,int param_2)

{
  return CONCAT44(*(undefined4 *)(param_2 + 4),(param_1 + 99U) / 100);
}



/* FUN_080121c4 at 080121c4 */

void FUN_080121c4(void)

{
  FUN_08011842();
  return;
}



/* FUN_080121ca at 080121ca */

void FUN_080121ca(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_08012288;
  *DAT_080121fc = 0;
  *puVar1 = 0;
  FUN_0801183e(s__SYS_STARTED__08012500);
  FUN_0801190e();
  FUN_0801183e(s__SYS_STARTED__08012500);
  FUN_08012060(1);
  return;
}



/* FUN_08012510 at 08012510 */

undefined4 * FUN_08012510(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  do {
    uVar3 = param_2;
    param_2 = uVar3 - 0x10;
    if (0xf < uVar3) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1 = param_1 + 4;
    }
  } while (0xf < uVar3 && param_2 != 0);
  if ((param_2 & 8) != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  puVar2 = param_1;
  if ((int)(uVar3 << 0x1d) < 0) {
    puVar2 = param_1 + 1;
    *param_1 = 0;
  }
  puVar1 = puVar2;
  if ((param_2 & 2) != 0) {
    puVar1 = (undefined4 *)((int)puVar2 + 2);
    *(undefined2 *)puVar2 = 0;
  }
  puVar2 = puVar1;
  if ((int)(uVar3 * -0x80000000) < 0) {
    puVar2 = (undefined4 *)((int)puVar1 + 1);
    *(undefined1 *)puVar1 = 0;
  }
  return puVar2;
}



/* FUN_08012518 at 08012518 */

uint FUN_08012518(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (uint)(param_2 << 1) >> 0x15;
  iVar2 = uVar1 - 0x3fe;
  if (iVar2 == 0 || uVar1 < 0x3fe) {
    return 0;
  }
  uVar3 = -iVar2 + 0x20;
  uVar1 = param_2 >> 0x1f;
  if (uVar3 != 0 && iVar2 < 0x21) {
    return ((param_2 << 0xb | param_1 >> 0x15 | 0x80000000) >> (uVar3 & 0xff)) + uVar1 ^ uVar1;
  }
  uVar3 = -iVar2 + 0x401;
  if (uVar3 != 0) {
    uVar3 = ~uVar1 ^ 0x80000000;
  }
  return uVar3;
}



/* FUN_08012554 at 08012554 */

undefined4 FUN_08012554(int param_1)

{
  if ((*(byte *)(param_1 + 0xb) & 0x18) == 0x10) {
    return 1;
  }
  return 0;
}



/* FUN_08012566 at 08012566 */

undefined8
FUN_08012566(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = 0;
  param_1[3] = 0;
  param_1[0x20] = 0;
  FUN_0801683e(param_1 + 0x54);
  param_1[0x5c] = 0;
  param_1[0x5f] = 0;
  param_1[0x80] = 0;
  param_1[0x83] = 0;
  FUN_08016848(param_1 + 0xa0,DAT_08013148,0x20,3);
  param_1[0x120] = 0;
  param_1[0x128] = 0;
  param_1[299] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  param_1[0x148] = 0;
  param_1[0x59] = 0;
  FUN_08012510(param_1 + 0xa0,0x60);
  param_1[0x360] = 1;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(int *)(param_1 + 0x35c) = *DAT_0801314c + 5000;
  return CONCAT44(param_4,param_1);
}



/* FUN_080125e8 at 080125e8 */

void FUN_080125e8(undefined1 *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(char *)(param_2 + iVar2) != ' ') {
      puVar1 = param_1;
      if (iVar2 == 8) {
        puVar1 = param_1 + 1;
        *param_1 = 0x2e;
      }
      param_1 = puVar1 + 1;
      *puVar1 = *(undefined1 *)(param_2 + iVar2);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xb);
  *param_1 = 0;
  return;
}



/* FUN_08012610 at 08012610 */

void FUN_08012610(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  byte bVar9;
  char *unaff_r7;
  bool bVar10;
  bool bVar11;
  byte local_54 [8];
  char local_4c;
  char local_4b;
  byte local_49;
  undefined4 local_38;
  undefined1 auStack_34 [16];
  
  uVar3 = DAT_08013150;
  bVar9 = 0;
LAB_0801263c:
  while( true ) {
    do {
      while( true ) {
        iVar4 = thunk_FUN_08018386(param_3,local_54,param_1 + 0x33);
        if (iVar4 < 1) {
          return;
        }
        iVar4 = FUN_08012554(local_54);
        bVar10 = iVar4 != 0;
        if (bVar10) {
          iVar4 = (int)*(char *)(param_1 + 0x361);
        }
        if ((!bVar10 || iVar4 == 1) || iVar4 == 2) break;
        FUN_080125e8(auStack_34,local_54);
        cVar1 = *param_2;
        if (cVar1 != '\0') {
          iVar4 = FUN_08015d58(param_2);
        }
        else {
          iVar4 = 1;
        }
        unaff_r7 = (char *)(uint)(cVar1 == '\0');
        iVar5 = FUN_08015d58(auStack_34);
        uVar6 = FUN_08017604(iVar4 + iVar5 + 2);
        pcVar8 = param_2;
        if (unaff_r7 != (char *)0x0) {
          pcVar8 = &DAT_08012878;
        }
        FUN_08016870(uVar6,pcVar8);
        FUN_080168bc(uVar6,auStack_34);
        FUN_080168bc(uVar6,&DAT_08012878);
      }
      uVar7 = (uint)local_54[0];
      if (uVar7 == 0) {
        return;
      }
      bVar10 = uVar7 != 0xe5;
      bVar11 = uVar7 != 0x2e;
      if (bVar10 && bVar11) {
        unaff_r7 = (char *)(param_1 + 0x25);
      }
      if (bVar10 && bVar11) {
        uVar7 = (uint)unaff_r7[0xe];
      }
    } while ((((!bVar10 || !bVar11) || uVar7 == 0x2e) || ((int)((uint)local_49 << 0x1c) < 0)) ||
            ((int)((uint)local_49 << 0x1e) < 0));
    iVar4 = FUN_08012554(local_54);
    if (iVar4 != 0) {
      iVar4 = 1;
    }
    *unaff_r7 = (char)iVar4;
    if (*unaff_r7 != '\0') break;
    if (local_4c != 'G') goto LAB_080126e2;
    if (local_4b != '~') break;
  }
  goto LAB_080126e6;
LAB_080126e2:
  if (local_4c == 'B') {
LAB_080126e6:
    bVar2 = *(byte *)(param_1 + 0x361);
    if (bVar2 == 0) {
      uVar6 = FUN_0801274c();
      uVar6 = FUN_08012884(uVar6,param_2);
      uVar6 = FUN_08012884(uVar6,param_1 + 0x26);
      FUN_0801287e(uVar6,0x20);
      FUN_0800bffa(uVar3,local_38,10);
    }
    else if (bVar2 == 2) {
      FUN_0801274c();
      if (param_4 == 0) {
        if ((ushort)bVar9 == *DAT_08013158) {
          return;
        }
      }
      else {
        iVar4 = FUN_08017db4(param_4,param_1 + 0x26);
        if (iVar4 == 0) {
          return;
        }
      }
      bVar9 = bVar9 + 1;
    }
    else if (bVar2 < 2) {
      *(short *)(param_1 + 0x362) = *(short *)(param_1 + 0x362) + 1;
    }
  }
  goto LAB_0801263c;
}



/* FUN_0801274c at 0801274c */

void FUN_0801274c(void)

{
  int unaff_r10;
  
  FUN_080125e8(unaff_r10 + 0x26,&stack0x00000004);
  return;
}



/* FUN_08012754 at 08012754 */

void FUN_08012754(int param_1)

{
  undefined1 auStack_28 [32];
  
  *(undefined1 *)(param_1 + 0x361) = 0;
  FUN_08017e0a(param_1 + 0x5c);
  FUN_08012ff2(auStack_28,param_1 + 0x5c);
  FUN_08012fe0();
  FUN_08012fda();
  return;
}



/* FUN_0801277e at 0801277e */

void FUN_0801277e(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [3];
  undefined1 local_45;
  undefined4 uStack_28;
  
  *(undefined1 *)(param_1 + 0x361) = 2;
  uStack_28 = param_4;
  iVar1 = FUN_08015d58(param_2);
  for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    if (*(char *)(param_2 + iVar2) == '/') {
      *(undefined1 *)(param_2 + iVar2) = 0;
    }
  }
  FUN_08012ff2(auStack_68,param_1 + 0x5c);
  iVar2 = 0;
  do {
    if (iVar1 <= iVar2) {
LAB_08012868:
      FUN_0801287c();
      FUN_08012fda();
      return;
    }
    if (*(char *)(param_2 + iVar2) == '\0') {
      iVar2 = iVar2 + 1;
    }
    pcVar5 = (char *)(param_2 + iVar2);
    if (*pcVar5 == '\0') goto LAB_08012868;
    do {
      iVar2 = iVar2 + 1;
    } while (*(char *)(param_2 + iVar2) != '\0');
    FUN_08017e0a(auStack_68);
    FUN_08012ff0(local_48);
    FUN_08012610(param_1,&DAT_08012988,local_48,pcVar5);
    uVar3 = FUN_08018628(local_48);
    FUN_0801287e(uVar3,0x2f);
    if (*(char *)(param_1 + 0x33) == 0) {
      iVar4 = 0x801298c;
    }
    else {
      iVar4 = param_1 + 0x33;
    }
    FUN_08012884((int)*(char *)(param_1 + 0x33),iVar4);
    if (*(char *)(param_1 + 0x25) == '\0') goto LAB_08012868;
    local_48[0] = 0;
    local_45 = 0;
    iVar4 = thunk_FUN_08017fe6(local_48,auStack_68,pcVar5,1);
    if (iVar4 == 0) {
      FUN_0801287c();
      FUN_0800bb0c(DAT_0801315c);
      uVar3 = FUN_0800bb0c(s_Cannot_open_subdir_080133bc);
      FUN_08012884(uVar3,pcVar5);
      FUN_08018628(local_48);
      goto LAB_08012868;
    }
    FUN_08017eec(auStack_68);
    FUN_08012ff2(auStack_68,local_48);
    FUN_08018628(local_48);
  } while( true );
}



/* FUN_0801287c at 0801287c */

void FUN_0801287c(void)

{
  FUN_0800de78();
  return;
}



/* FUN_0801287e at 0801287e */

void FUN_0801287e(void)

{
  FUN_0800de78();
  return;
}



/* FUN_08012884 at 08012884 */

void FUN_08012884(void)

{
  FUN_0800bf6c();
  return;
}



/* FUN_0801288a at 0801288a */

void FUN_0801288a(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  
  *(undefined1 *)(param_1 + 0x24) = 0;
  if (*(char *)(param_1 + 0x5f) != '\0') {
    FUN_08017eec(param_1 + 0x5c);
  }
  uVar5 = FUN_0801863e(param_1 + 0x54,3,0x16);
  uVar1 = DAT_0801315c;
  if ((int)uVar5 == 0) {
    FUN_0800bb0c(DAT_0801315c);
    pcVar3 = s_SD_init_fail_08013173 + 1;
  }
  else {
    uVar5 = FUN_08012930((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1);
    uVar2 = DAT_08013160;
    if (((int)uVar5 == 0) && (iVar4 = FUN_08012930(0,(int)((ulonglong)uVar5 >> 0x20),0), iVar4 == 0)
       ) {
      FUN_0800bb0c(uVar2);
      pcVar3 = s_volume_init_failed_08013184;
    }
    else {
      iVar4 = FUN_08018240(param_1 + 0x5c,param_1 + 0x100);
      if (iVar4 == 0) {
        FUN_0800bb0c(uVar2);
        pcVar3 = s_openRoot_failed_08013198;
      }
      else {
        *(undefined1 *)(param_1 + 0x24) = 1;
        FUN_0800bb0c(uVar1);
        pcVar3 = s_SD_card_ok_080131ac;
      }
    }
  }
  FUN_0800bb0c(pcVar3);
  FUN_0800f64c(param_1 + 0x80,param_1 + 0x5c,0x20);
  *(int *)(param_1 + 0x7c) = param_1 + 0x80;
  return;
}



/* FUN_08012930 at 08012930 */

longlong FUN_08012930(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int unaff_r4;
  int iVar9;
  undefined4 *unaff_r6;
  
  iVar5 = DAT_080189d0;
  puVar4 = DAT_080189cc;
  *(int *)(DAT_080189cc + 8) = unaff_r4 + 0x54;
  iVar9 = 0;
  *(undefined1 *)(unaff_r6 + 8) = 0;
  *unaff_r6 = 2;
  *puVar4 = 0;
  *(undefined4 *)(puVar4 + 0xc) = 0;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  uVar8 = param_3;
  if ((((param_3 == 0) ||
       (((((int)param_3 < 5 && (iVar9 = FUN_0801875c(0,0), iVar9 != 0)) &&
         (iVar9 = iVar5 + param_3 * 0x10, (*(byte *)(iVar9 + 0x1ae) & 0x7f) == 0)) &&
        ((99 < *(uint *)(iVar9 + 0x1ba) && (iVar9 = *(int *)(iVar9 + 0x1b6), iVar9 != 0)))))) &&
      (iVar6 = FUN_0801875c(iVar9,0), iVar6 != 0)) && (*(short *)(iVar5 + 0xb) == 0x200)) {
    cVar1 = *(char *)(iVar5 + 0x10);
    if (cVar1 != '\0') {
      uVar8 = (uint)*(ushort *)(iVar5 + 0xe);
    }
    if ((cVar1 != '\0' && uVar8 != 0) && (*(char *)(iVar5 + 0xd) != '\0')) {
      *(char *)(unaff_r6 + 6) = cVar1;
      bVar2 = *(byte *)(iVar5 + 0xd);
      *(undefined1 *)(unaff_r6 + 4) = 0;
      *(byte *)(unaff_r6 + 1) = bVar2;
      do {
        bVar3 = *(byte *)(unaff_r6 + 4);
        if ((uint)bVar2 == 1 << (uint)bVar3) {
          uVar8 = (uint)*(ushort *)(iVar5 + 0x16);
          if (uVar8 == 0) {
            uVar8 = *(uint *)(iVar5 + 0x24);
          }
          unaff_r6[2] = uVar8;
          iVar6 = iVar9 + (uint)*(ushort *)(iVar5 + 0xe);
          unaff_r6[7] = iVar6;
          *(undefined2 *)((int)unaff_r6 + 0x22) = *(undefined2 *)(iVar5 + 0x11);
          iVar6 = unaff_r6[2] * (uint)*(byte *)(iVar5 + 0x10) + iVar6;
          unaff_r6[9] = iVar6;
          iVar6 = iVar6 + ((int)((uint)*(ushort *)(iVar5 + 0x11) * 0x20 + 0x1ff) >> 9);
          unaff_r6[5] = iVar6;
          uVar8 = (uint)*(ushort *)(iVar5 + 0x13);
          if (uVar8 == 0) {
            uVar8 = *(uint *)(iVar5 + 0x20);
          }
          uVar8 = iVar9 + (uVar8 - iVar6) >> *(sbyte *)(unaff_r6 + 4);
          unaff_r6[3] = uVar8;
          if (0xff4 < uVar8) {
            if (uVar8 < 0xfff5) {
              uVar7 = 0x10;
            }
            else {
              uVar7 = *(undefined4 *)(iVar5 + 0x2c);
            }
            if (uVar8 >= 0xfff5) {
              unaff_r6[9] = uVar7;
              uVar7 = 0x20;
            }
            *(char *)(unaff_r6 + 8) = (char)uVar7;
            return CONCAT44(param_4,1);
          }
          *(undefined1 *)(unaff_r6 + 8) = 0xc;
          break;
        }
        *(byte *)(unaff_r6 + 4) = bVar3 + 1;
      } while (bVar3 < 8);
    }
  }
  return (ulonglong)param_4 << 0x20;
}



/* FUN_08012944 at 08012944 */

void FUN_08012944(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = FUN_08015d58(param_2);
  iVar2 = FUN_08017604(iVar2 + 5);
  FUN_080164f0(iVar2,s_M23__s_08013304,param_2);
  for (pcVar3 = (char *)(iVar2 + 4); *pcVar3 != '\0'; pcVar3 = pcVar3 + 1) {
    cVar1 = FUN_080189d4();
    *pcVar3 = cVar1;
  }
  FUN_080134c4(iVar2,0);
  FUN_080134be(&DAT_08012c6c,param_4);
  return;
}



/* FUN_08012990 at 08012990 */

void FUN_08012990(int param_1)

{
  if (*(char *)(param_1 + 0x24) != '\0') {
    *(undefined1 *)(param_1 + 0x23) = 1;
  }
  return;
}



/* FUN_0801299e at 0801299e */

void FUN_0801299e(int param_1)

{
  *(undefined1 *)(param_1 + 0x23) = 0;
  if (*(char *)(param_1 + 299) == '\0') {
    return;
  }
  FUN_08018526();
  *(undefined1 *)(param_1 + 299) = 0;
  return;
}



/* FUN_080129c2 at 080129c2 */

undefined4 FUN_080129c2(undefined4 param_1,int *param_2,byte *param_3,undefined4 param_4)

{
  char *pcVar1;
  
  FUN_08017f2e(param_1,*param_2);
  while( true ) {
    pcVar1 = (char *)*param_2;
    if ((*pcVar1 == '\0') || (0x2a < *param_3)) break;
    *param_2 = (int)(pcVar1 + 1);
    *param_3 = *param_3 + 1;
  }
  if (*param_3 < 0x2b) {
    *pcVar1 = '/';
    *param_2 = *param_2 + 1;
    *param_3 = *param_3 + 1;
  }
  return param_4;
}



/* FUN_080129fe at 080129fe */

undefined8 FUN_080129fe(int param_1,undefined1 *param_2)

{
  byte bVar1;
  undefined4 local_18;
  int iStack_14;
  undefined1 *local_10;
  
  local_10 = param_2 + 1;
  *param_2 = 0x2f;
  local_18 = CONCAT31(local_18._1_3_,1);
  iStack_14 = param_1;
  for (bVar1 = 0; (uint)bVar1 < (uint)*(byte *)(param_1 + 0x59); bVar1 = bVar1 + 1) {
    FUN_080129c2(param_1 + (uint)bVar1 * 0x20 + 0xa0,&local_10,&local_18);
  }
  if ((byte)local_18 < 0x1e) {
    FUN_080129c2(param_1 + 0x128,&local_10,&local_18);
    local_10 = local_10 + -1;
  }
  *local_10 = 0;
  return CONCAT44(iStack_14,local_18);
}



/* FUN_08012a56 at 08012a56 */

void FUN_08012a56(int param_1,char *param_2,int param_3,int param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  undefined1 auStack_58 [16];
  undefined1 local_48 [3];
  undefined1 local_45;
  int iStack_28;
  
  uVar3 = DAT_0801315c;
  uVar2 = DAT_08013150;
  if (*(char *)(param_1 + 0x24) == '\0') {
    return;
  }
  iStack_28 = param_4;
  if (*(char *)(param_1 + 299) == '\0') {
    if (param_4 == 0) {
      iVar5 = 2;
      *(undefined1 *)(param_1 + 0x148) = 0;
LAB_08012a86:
      FUN_0800bb0c(uVar3);
      FUN_0800bb0c(&DAT_0801326c);
      if (iVar5 == 1) {
        pcVar1 = s_doing_08013274;
      }
      else {
        pcVar1 = s_fresh_0801327c;
      }
      FUN_0800bb0c(pcVar1);
      FUN_0800bb28(s_file__08013284,param_2);
      FUN_08012c78();
    }
    else {
      FUN_0800bb0c(DAT_0801315c);
      FUN_0800bb0c(s_END_SUBROUTINE_0801325c);
    }
  }
  else {
    if (param_4 == 0) {
      iVar5 = 1;
      goto LAB_08012a86;
    }
    if (10 < *(byte *)(param_1 + 0x148)) {
      FUN_0800bb0c(DAT_08013160);
      FUN_0800bb0c(s_trying_to_call_sub_gcode_files_w_080131dc);
      FUN_0800bff0(uVar2,0xb,10);
      FUN_0800b824(s_KILLED__08013220);
      return;
    }
    FUN_080129fe(param_1,param_1 + 0x178 + (short)(ushort)*(byte *)(param_1 + 0x148) * 0x2b);
    *(undefined4 *)(param_1 + (uint)*(byte *)(param_1 + 0x148) * 4 + 0x14c) =
         *(undefined4 *)(param_1 + 0x358);
    FUN_0800bb0c(uVar3);
    FUN_0800bb28(s_SUBROUTINE_CALL_target___0801322c,param_2);
    FUN_0800bb28(s___parent___08013248,
                 param_1 + 0x178 + (short)(ushort)*(byte *)(param_1 + 0x148) * 0x2b);
    FUN_0800bbc8(s___pos_08013254,*(undefined4 *)(param_1 + 0x358));
    FUN_08012c78();
    *(char *)(param_1 + 0x148) = *(char *)(param_1 + 0x148) + '\x01';
  }
  FUN_0801299e(param_1);
  local_48[0] = 0;
  local_45 = 0;
  *(int *)(param_1 + 0x7c) = param_1 + 0x5c;
  pcVar1 = param_2;
  if (*param_2 == '/') {
    while (((pcVar4 = pcVar1 + 1, pcVar6 = param_2, pcVar4 != (char *)0x0 &&
            (pcVar1 = (char *)FUN_08012c70(), pcVar6 = pcVar4, pcVar1 != (char *)0x0)) &&
           (pcVar4 < pcVar1))) {
      FUN_080189e0(auStack_58,pcVar4,(int)pcVar1 - (int)pcVar4);
      auStack_58[(int)pcVar1 - (int)pcVar4] = 0;
      iVar5 = FUN_08017fe6(local_48,*(undefined4 *)(param_1 + 0x7c),auStack_58,1);
      if (iVar5 == 0) {
        FUN_0800bb0c(s_open_failed__File__0801328c);
        uVar2 = FUN_0800bf6c(uVar2,auStack_58);
        uVar3 = 0x2e;
        goto LAB_08012c56;
      }
      *(undefined1 **)(param_1 + 0x7c) = local_48;
    }
  }
  else {
    *(int *)(param_1 + 0x7c) = param_1 + 0x80;
    pcVar6 = param_2;
  }
  if (param_3 == 0) {
    iVar5 = FUN_08017fe6(param_1 + 0x128,*(undefined4 *)(param_1 + 0x7c),pcVar6,0x56);
    if (iVar5 == 0) goto LAB_08012c34;
    *(undefined1 *)(param_1 + 0x21) = 1;
    uVar2 = FUN_0800bb28(s_Writing_to_file__080132c8,param_2);
  }
  else {
    iVar5 = FUN_08017fe6(param_1 + 0x128,*(undefined4 *)(param_1 + 0x7c),pcVar6,1);
    if (iVar5 != 0) {
      *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(param_1 + 0x13c);
      *(undefined4 *)(param_1 + 0x358) = 0;
      FUN_0800bb28(s_File_opened__080132a0,pcVar6);
      FUN_0800bbc8(s_Size__080132b0,*(undefined4 *)(param_1 + 0x354));
      FUN_08012c78();
      FUN_0800bb0c(s_File_selected_080132b8);
      FUN_08012f74(param_1,0,pcVar6);
      goto LAB_08012c5a;
    }
LAB_08012c34:
    uVar2 = FUN_0800bb28(s_open_failed__File__0801328c,pcVar6);
    uVar2 = FUN_08012c7a(uVar2,0x2e);
  }
  uVar3 = 10;
LAB_08012c56:
  FUN_08012c7a(uVar2,uVar3);
LAB_08012c5a:
  FUN_08018628(local_48);
  return;
}



/* FUN_08012c70 at 08012c70 */

void FUN_08012c70(void)

{
  FUN_0801174c();
  return;
}



/* FUN_08012c72 at 08012c72 */

void FUN_08012c72(void)

{
  FUN_0801174c();
  return;
}



/* FUN_08012c78 at 08012c78 */

void FUN_08012c78(void)

{
  FUN_0800de78();
  return;
}



/* FUN_08012c7a at 08012c7a */

void FUN_08012c7a(void)

{
  FUN_0800de78();
  return;
}



/* FUN_08012e2a at 08012e2a */

undefined4 FUN_08012e2a(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_08015d58(param_2);
  puVar2 = (undefined1 *)(iVar1 + param_2);
  *(undefined1 *)(param_1 + 0x128) = 0;
  iVar1 = FUN_0801174c(param_2,0x4e);
  if (iVar1 != 0) {
    iVar1 = FUN_0801174c(iVar1,0x20);
    param_2 = iVar1 + 1;
    puVar2 = (undefined1 *)FUN_08012c72(iVar1,0x2a);
  }
  *puVar2 = 0xd;
  puVar2[1] = 10;
  puVar2[2] = 0;
  if (*(char *)(param_1 + 0x128) != '\0') {
    FUN_0800bb0c(DAT_08013160,param_2);
    uVar3 = FUN_0800bb0c(s_error_writing_to_file_080131b8,param_4);
    return uVar3;
  }
  return param_4;
}



/* FUN_08012e8c at 08012e8c */

void FUN_08012e8c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  char cVar5;
  char local_48 [12];
  undefined1 auStack_3c [9];
  char local_33;
  undefined4 uStack_1c;
  
  if (((param_2 != 0) ||
      ((*(char *)(param_1 + 0x360) != '\0' && (-1 < *DAT_0801314c - *(int *)(param_1 + 0x35c))))) &&
     (*(undefined1 *)(param_1 + 0x360) = 0, *(char *)(param_1 + 0x24) != '\0')) {
    uStack_1c = param_4;
    FUN_080164f0(local_48,s_auto_i_g_080131d0,*(undefined4 *)(param_1 + 0x50));
    for (iVar4 = 0; cVar2 = FUN_08015d58(local_48), iVar4 < cVar2;
        iVar4 = (int)(char)((char)iVar4 + '\x01')) {
      cVar2 = FUN_080189d4((int)local_48[iVar4]);
      local_48[iVar4] = cVar2;
    }
    FUN_08017e0a(param_1 + 0x5c);
    bVar1 = false;
    while (iVar4 = thunk_FUN_08018386(param_1 + 0x5c,auStack_3c,0), 0 < iVar4) {
      cVar2 = FUN_08015d58(auStack_3c);
      while (cVar5 = cVar2 + -1, cVar2 != '\0') {
        uVar3 = FUN_080189d4(auStack_3c[cVar5]);
        auStack_3c[cVar5] = uVar3;
        cVar2 = cVar5;
      }
      if ((local_33 != '~') && (iVar4 = thunk_FUN_08015c3c(auStack_3c,local_48,5), iVar4 == 0)) {
        FUN_08012944(param_1,local_48);
        bVar1 = true;
      }
    }
    if (bVar1) {
      iVar4 = *(int *)(param_1 + 0x50) + 1;
    }
    else {
      iVar4 = -1;
    }
    *(int *)(param_1 + 0x50) = iVar4;
  }
  return;
}



/* FUN_08012f54 at 08012f54 */

undefined4 FUN_08012f54(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08018526(param_1 + 0x128);
  FUN_08017eec(param_1 + 0x128);
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  return param_4;
}



/* FUN_08012f74 at 08012f74 */

void FUN_08012f74(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined1 auStack_30 [32];
  undefined4 uStack_10;
  
  *(undefined1 *)(param_1 + 0x361) = 2;
  puVar1 = DAT_08013158;
  *(int *)(param_1 + 0x7c) = param_1 + 0x80;
  *puVar1 = param_2;
  uStack_10 = param_4;
  FUN_08017e0a();
  FUN_08012ff2(auStack_30,*(undefined4 *)(param_1 + 0x7c));
  FUN_08012610(param_1,&DAT_08013144,auStack_30,param_3);
  FUN_08012fda();
  return;
}



/* FUN_08012fa6 at 08012fa6 */

undefined2 FUN_08012fa6(int param_1)

{
  undefined1 auStack_28 [32];
  
  *(undefined1 *)(param_1 + 0x361) = 1;
  *(int *)(param_1 + 0x7c) = param_1 + 0x80;
  *(undefined2 *)(param_1 + 0x362) = 0;
  FUN_08017e0a();
  FUN_08012ff2(auStack_28,*(undefined4 *)(param_1 + 0x7c));
  FUN_08012fe0();
  FUN_08012fda();
  return *(undefined2 *)(param_1 + 0x362);
}



/* FUN_08012fda at 08012fda */

void FUN_08012fda(void)

{
  FUN_08018628();
  return;
}



/* FUN_08012fe0 at 08012fe0 */

void FUN_08012fe0(void)

{
  FUN_08012610();
  return;
}



/* FUN_08012fec at 08012fec */

void FUN_08012fec(void)

{
  int unaff_r4;
  
  FUN_0800f64c(unaff_r4 + 0x80);
  return;
}



/* FUN_08012ff0 at 08012ff0 */

void FUN_08012ff0(void)

{
  FUN_0800f64c();
  return;
}



/* FUN_08012ff2 at 08012ff2 */

void FUN_08012ff2(undefined4 param_1,undefined4 param_2)

{
  FUN_0800f64c(param_1,param_2,0x20);
  return;
}



/* FUN_08012ff8 at 08012ff8 */

void FUN_08012ff8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  undefined1 local_30 [3];
  undefined1 local_2d;
  undefined4 uStack_10;
  
  local_30[0] = 0;
  local_2d = 0;
  iVar2 = 0x5c;
  if (*(char *)(param_1 + 0x83) != '\0') {
    iVar2 = 0x80;
  }
  uStack_10 = param_4;
  iVar2 = thunk_FUN_08017fe6(local_30,param_1 + iVar2,param_2,1);
  if (iVar2 == 0) {
    FUN_0800bb0c(DAT_0801315c);
    FUN_0800bb0c(s_Cannot_enter_subdir__080133d0);
    FUN_0800bfec(DAT_08013150,param_2);
  }
  else {
    FUN_08012fec();
    bVar1 = *(byte *)(param_1 + 0x59);
    if (bVar1 < 3) {
      *(byte *)(param_1 + 0x59) = bVar1 + 1;
      FUN_0800f64c(param_1 + (uint)bVar1 * 0x20 + 0xa0,param_1 + 0x80,0x20);
    }
  }
  FUN_08012fda();
  return;
}



/* FUN_08013068 at 08013068 */

int FUN_08013068(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_28 [32];
  
  if (*(byte *)(param_1 + 0x59) != 0) {
    uVar1 = *(byte *)(param_1 + 0x59) - 1;
    *(char *)(param_1 + 0x59) = (char)uVar1;
    if ((uVar1 & 0xff) == 0) {
      iVar2 = param_1 + 0x5c;
    }
    else {
      iVar2 = param_1 + 0x80 + (uVar1 * 0x1000000 >> 0x13);
    }
    FUN_08012ff2(auStack_28,iVar2);
    FUN_08012fec();
  }
  return (int)*(char *)(param_1 + 0x59);
}



/* thunk_FUN_08012fa6 at 080130a0 */

undefined2 thunk_FUN_08012fa6(int param_1)

{
  undefined1 auStack_28 [32];
  
  *(undefined1 *)(param_1 + 0x361) = 1;
  *(int *)(param_1 + 0x7c) = param_1 + 0x80;
  *(undefined2 *)(param_1 + 0x362) = 0;
  FUN_08017e0a();
  FUN_08012ff2(auStack_28,*(undefined4 *)(param_1 + 0x7c));
  FUN_08012fe0();
  FUN_08012fda();
  return *(undefined2 *)(param_1 + 0x362);
}



/* FUN_080130a4 at 080130a4 */

void FUN_080130a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  FUN_08010028();
  FUN_08017eec(param_1 + 0x128);
  if (*(char *)(param_1 + 0x148) == '\0') {
    *(undefined1 *)(param_1 + 0x23) = 0;
    uVar2 = DAT_0801316c;
    *DAT_08013168 = 1;
    FUN_08016448(uVar2);
    uVar3 = FUN_080164c8(uVar2);
    if (0x3c < uVar3) {
      FUN_080134be(0x8013154);
    }
    FUN_08011842(s__TQ_100__080133b0,param_4);
    return;
  }
  bVar1 = *(char *)(param_1 + 0x148) - 1;
  *(byte *)(param_1 + 0x148) = bVar1;
  FUN_08012a56(param_1,param_1 + (uint)bVar1 * 0x2b + 0x178,1,1);
  *(undefined4 *)(param_1 + 0x358) =
       *(undefined4 *)(param_1 + (uint)*(byte *)(param_1 + 0x148) * 4 + 0x14c);
  FUN_080184cc(param_1 + 0x128);
  FUN_08012990(param_1,param_4);
  return;
}



/* thunk_FUN_08017eec at 08013124 */

void thunk_FUN_08017eec(int param_1)

{
  FUN_08018526();
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* FUN_0801312c at 0801312c */

void FUN_0801312c(int param_1)

{
  FUN_08017fe6(param_1,param_1 + 0x5c,s_recovery_bin_080133e8,1);
  return;
}



/* FUN_0801313a at 0801313a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801313a(undefined4 param_1)

{
  FUN_080182ac(param_1,_DAT_08013170,0x294);
  return;
}



/* FUN_080133f8 at 080133f8 */

undefined4 * FUN_080133f8(void)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = (undefined4 *)(DAT_080136a0 + 6);
  uVar4 = (uint)puVar2 & 3;
  uVar3 = 6;
  if (uVar4 != 0) {
    uVar3 = 6 - uVar4;
    if (6 < uVar4) {
      if (uVar3 + uVar4 != 0) {
        puVar2 = (undefined4 *)(DAT_080136a0 + 5);
        *(undefined1 *)puVar2 = 1;
      }
      if ((uVar3 + uVar4 & 2) != 0) {
        puVar2 = (undefined4 *)((int)puVar2 + -1);
        *(undefined1 *)puVar2 = 1;
      }
      return puVar2;
    }
    uVar1 = (uint)puVar2 & 2;
    if ((int)(uVar4 << 0x1f) < 0) {
      puVar2 = (undefined4 *)(DAT_080136a0 + 5);
      *(undefined1 *)puVar2 = 1;
    }
    if (uVar1 != 0) {
      puVar2 = (undefined4 *)((int)puVar2 + -2);
      *(undefined2 *)puVar2 = 0x101;
    }
  }
  do {
    uVar4 = uVar3;
    uVar3 = uVar4 - 0x10;
    if (0xf < uVar4) {
      puVar2[-1] = 0x1010101;
      puVar2[-2] = 0x1010101;
      puVar2[-3] = 0x1010101;
      puVar2 = puVar2 + -4;
      *puVar2 = 0x1010101;
    }
  } while (0xf < uVar4 && uVar3 != 0);
  if ((uVar3 & 8) != 0) {
    puVar2[-1] = 0x1010101;
    puVar2 = puVar2 + -2;
    *puVar2 = 0x1010101;
  }
  if ((int)(uVar4 * 0x20000000) < 0) {
    puVar2 = puVar2 + -1;
    *puVar2 = 0x1010101;
  }
  if ((uVar4 * 0x20000000 & 0x40000000) != 0) {
    puVar2 = (undefined4 *)((int)puVar2 + -2);
    *(undefined2 *)puVar2 = 0x101;
  }
  if ((int)(uVar4 * -0x80000000) < 0) {
    puVar2 = (undefined4 *)((int)puVar2 + -1);
    *(undefined1 *)puVar2 = 1;
  }
  return puVar2;
}



/* FUN_08013402 at 08013402 */

void FUN_08013402(void)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_080136a4;
  *DAT_080136a4 = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  return;
}



/* FUN_0801340e at 0801340e */

longlong FUN_0801340e(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  if (*param_1 != ';') {
    if (*DAT_080136a4 < 6) {
      FUN_08016870(DAT_080136a8 + (uint)DAT_080136a4[2] * 0x60,param_1);
      FUN_08018ab8(param_2);
      return CONCAT44(param_4,1);
    }
  }
  return (ulonglong)param_4 << 0x20;
}



/* FUN_08013440 at 08013440 */

int FUN_08013440(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_08018ad8();
  if (iVar2 != 0) {
    FUN_0800bb0c(DAT_080136ac);
    uVar1 = DAT_080136b0;
    FUN_0800bb28(s_enqueueing___080136df + 1,param_1);
    FUN_0800de78(uVar1,0x22);
    FUN_0800de78(uVar1,10);
    iVar2 = 1;
  }
  return iVar2;
}



/* FUN_08013470 at 08013470 */

undefined4 FUN_08013470(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char local_30 [29];
  undefined1 local_13;
  
  piVar2 = DAT_080136b4;
  if (*DAT_080136b4 != 0) {
    FUN_080189e0(local_30,*DAT_080136b4,0x1d);
    local_13 = 0;
    for (iVar4 = 0; (cVar1 = local_30[iVar4], cVar1 != '\0' && (cVar1 != '\n')); iVar4 = iVar4 + 1)
    {
    }
    local_30[iVar4] = '\0';
    iVar3 = FUN_08013440();
    if (iVar3 != 0) {
      if (cVar1 == '\0') {
        *piVar2 = 0;
        return 0;
      }
      *piVar2 = *piVar2 + iVar4 + 1;
    }
    if (*piVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



/* FUN_080134be at 080134be */

void FUN_080134be(undefined4 param_1)

{
  *DAT_080136b4 = param_1;
  FUN_08013470();
  return;
}



/* FUN_080134c4 at 080134c4 */

undefined4 FUN_080134c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  while (iVar1 = FUN_08013440(param_1,param_2), iVar1 == 0) {
    FUN_0800b806();
  }
  return param_4;
}



/* FUN_080134de at 080134de */

void FUN_080134de(void)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  pbVar1 = DAT_080136a4;
  *DAT_080136bc = *DAT_080136b8;
  if (pbVar1[pbVar1[1] + 4] != 0) {
    FUN_0800bb0c(&DAT_08013690);
    uVar2 = DAT_080136b0;
    pcVar4 = (char *)(DAT_080136a8 + (uint)pbVar1[1] * 0x60);
    if (*pcVar4 == 'N') {
      FUN_0800bf64(DAT_080136b0,0x20);
      do {
        do {
          pcVar5 = pcVar4 + 1;
          FUN_0800bf64(uVar2,(int)*pcVar4);
          iVar3 = (int)*pcVar5;
          pcVar4 = pcVar5;
        } while (iVar3 - 0x30U < 10);
      } while (iVar3 == 0x2d || iVar3 == 0x2b);
    }
    FUN_0800bb0c(&DAT_08013694);
    FUN_0800bf72(uVar2,7 - ((uint)*DAT_080136c0 - (uint)*DAT_080136c4 & 7),10);
    FUN_0800bb0c(&DAT_08013698);
    FUN_0800bf72(uVar2,6 - (uint)*pbVar1,10);
    FUN_0800de78(uVar2,10);
    return;
  }
  return;
}



/* FUN_08013578 at 08013578 */

void FUN_08013578(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_080136b0;
  FUN_0800dece(DAT_080136b0);
  FUN_0800bb0c(s_Resend__080136f0);
  FUN_0800c004(uVar1,*(int *)(DAT_080136a4 + 0x14) + 1,10);
  return;
}



/* FUN_080135c8 at 080135c8 */

uint FUN_080135c8(int param_1)

{
  byte bVar1;
  int iVar2;
  
  if (param_1 != 0) {
    return 0xffffffff;
  }
  iVar2 = *(int *)(DAT_0800def8 + 0x104);
  if (*(int *)(DAT_0800def8 + 0x100) != iVar2) {
    bVar1 = *(byte *)(DAT_0800def8 + iVar2);
    *(uint *)(DAT_0800def8 + 0x104) = iVar2 + 1U & 0xff;
    return (uint)bVar1;
  }
  return 0xffffffff;
}



/* FUN_080135d8 at 080135d8 */

uint * FUN_080135d8(void)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined1 *puVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  ushort uVar13;
  uint *local_30;
  int local_2c;
  int local_28;
  
  puVar10 = (uint *)FUN_08013470();
  if (puVar10 == (uint *)0x0) {
    FUN_08018b14();
    pbVar5 = DAT_080136d4;
    pbVar4 = DAT_080136d0;
    pbVar3 = DAT_080136cc;
    local_30 = (uint *)(uint)*DAT_080136cc;
    if ((local_30 != (uint *)0x2) || (*DAT_080136d0 == 0)) {
      if (*(char *)(DAT_08018e30 + 0x23) != '\0') {
        if (*DAT_08018e34 == 0) {
          *DAT_08018e38 = 0;
        }
        pcVar8 = DAT_08018e40;
        iVar7 = DAT_08018e3c;
        pbVar4 = DAT_08018e38;
        pbVar3 = DAT_08018e34;
        iVar6 = DAT_08018e30;
        uVar13 = 0;
        local_30 = (uint *)(DAT_08018e30 + 0x354);
        if (*(uint *)(DAT_08018e30 + 0x358) < *local_30) {
          local_28 = 0;
          while (bVar1 = *pbVar3, bVar1 < 6) {
            if (local_28 == 0) {
              bVar1 = *pbVar4;
            }
            if (local_28 != 0 || bVar1 != 0) {
              return local_30;
            }
            *(undefined4 *)(iVar6 + 0x358) = *(undefined4 *)(iVar6 + 0x130);
            local_2c = iVar6 + 0x128;
            iVar11 = FUN_08018292();
            cVar2 = (char)iVar11;
            if (*(uint *)(iVar6 + 0x358) < *local_30) {
              if (iVar11 == -1) {
                FUN_0800bb0c(DAT_08018e50);
                FUN_0800bb0c(DAT_08018e54);
                *(int *)(pbVar3 + 0xc) = *(int *)(pbVar3 + 0xc) + 1;
                FUN_08011854();
                if (1000 < *(int *)(pbVar3 + 0xc)) {
                  pbVar3[0xc] = 0;
                  pbVar3[0xd] = 0;
                  pbVar3[0xe] = 0;
                  pbVar3[0xf] = 0;
                  FUN_08012f54(iVar6);
                  FUN_0801e874();
                  FUN_08014ce4(10);
                  FUN_0801288a(iVar6);
                  FUN_08012a56(iVar6,iVar6 + 0x26,1,0);
                  *(undefined4 *)(iVar6 + 0x358) = *(undefined4 *)(iVar6 + 0x358);
                  FUN_080184cc(local_2c);
                }
                goto LAB_08018de6;
              }
              if (cVar2 == '\n' || cVar2 == '\r') goto LAB_08018df0;
              if ((cVar2 == '#' || cVar2 == ':') && (*pcVar8 == '\0')) goto LAB_08018de6;
              uVar12 = (uint)uVar13;
              if (uVar12 < 0x5f) {
                if (cVar2 == ';') {
                  *pcVar8 = '\x01';
                }
                else if (*pcVar8 == '\0') {
                  uVar13 = uVar13 + 1;
                  *(char *)(iVar7 + (short)(ushort)pbVar3[2] * 0x60 + uVar12) = cVar2;
                }
              }
            }
            else {
              local_28 = 1;
              FUN_080130a4(iVar6);
              if (*(char *)(iVar6 + 0x23) == '\0') {
                FUN_0800bb0c(DAT_08018e44);
                FUN_0801e910(&local_2c,0,0xff,0);
                FUN_0801e918();
                FUN_0801e910(&local_2c,0,0,0);
                FUN_0801e918();
                FUN_0801299e(iVar6);
                FUN_0801477a();
                puVar9 = DAT_08018e4c;
                *DAT_08018e48 = 0;
                *puVar9 = 0;
              }
              else {
                uVar13 = 0;
              }
LAB_08018de6:
              if (cVar2 == '#') {
                *pbVar4 = 1;
              }
LAB_08018df0:
              *pcVar8 = '\0';
              if (uVar13 == 0) {
                FUN_0801441c();
              }
              else {
                *(undefined1 *)(iVar7 + (short)(ushort)pbVar3[2] * 0x60 + (uint)uVar13) = 0;
                FUN_08018ab8(0);
                uVar13 = 0;
              }
            }
          }
        }
      }
      return local_30;
    }
    puVar10 = (uint *)FUN_08018ad8(DAT_080136d8 + (uint)*DAT_080136d4 * 0x60,0);
    if (puVar10 != (uint *)0x0) {
      *pbVar5 = *pbVar5 + 1;
      bVar1 = *pbVar4 - 1;
      *pbVar4 = bVar1;
      puVar10 = (uint *)(uint)bVar1;
      if (puVar10 == (uint *)0x0) {
        *pbVar3 = 0;
        return (uint *)0x0;
      }
    }
  }
  return puVar10;
}



/* FUN_08013628 at 08013628 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08013628(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined4 in_r3;
  int iVar5;
  
  iVar2 = _DAT_080136dc;
  pcVar1 = DAT_080136a4;
  if (*DAT_080136a4 == '\0') {
    return in_r3;
  }
  if (*(char *)(_DAT_080136dc + 0x21) == '\0') {
LAB_08013672:
    FUN_08013cb4();
  }
  else {
    iVar5 = DAT_080136a8 + (uint)(byte)DAT_080136a4[1] * 0x60;
    iVar3 = FUN_08016530(iVar5,&DAT_0801369c);
    if (iVar3 == 0) {
      FUN_08012e2a(iVar2,iVar5);
      if (*(char *)(iVar2 + 0x22) != '\0') goto LAB_08013672;
    }
    else {
      FUN_08012f54(iVar2,0);
      FUN_0800bb0c(s_Done_saving_file__080136fc);
    }
    FUN_080134de();
  }
  bVar4 = pcVar1[1];
  if (*pcVar1 != '\0') {
    *pcVar1 = *pcVar1 + -1;
    bVar4 = bVar4 + 1;
    if (5 < bVar4) {
      bVar4 = 0;
    }
  }
  pcVar1[1] = bVar4;
  return in_r3;
}



/* FUN_08013710 at 08013710 */

longlong FUN_08013710(void)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint in_r3;
  
  iVar3 = FUN_0800b020(0x54);
  if (iVar3 == 0) {
    cVar2 = *DAT_08013d44;
  }
  else {
    iVar3 = FUN_0800b038();
    if (iVar3 < 0) {
      cVar2 = '\0';
    }
    else {
      iVar3 = FUN_0800b038();
      if (iVar3 < 0x100) {
        cVar2 = FUN_0800b038();
      }
      else {
        cVar2 = -1;
      }
    }
    uVar1 = DAT_08013d3c;
    if (0 < cVar2) {
      FUN_0800bb0c(DAT_08013d38);
      FUN_0800de78(uVar1,0x4d);
      FUN_0800bf72(uVar1,*DAT_08013d40,10);
      FUN_0800bb4c(s_Invalid_extruder_08013d83 + 1,(int)cVar2);
      FUN_0800de78(uVar1,10);
      return CONCAT44(in_r3,1);
    }
  }
  *DAT_08013d48 = cVar2;
  return (ulonglong)in_r3 << 0x20;
}



/* FUN_0801378c at 0801378c */

void FUN_0801378c(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  
  iVar4 = DAT_08013d5c;
  pcVar3 = DAT_08013d58;
  iVar2 = DAT_08013d54;
  iVar1 = DAT_08013d50;
  iVar6 = DAT_08013d4c;
  iVar7 = 0;
  do {
    iVar5 = FUN_0800b04c((int)(char)(&DAT_08013ddc)[iVar7]);
    if (iVar5 == 0) {
      *(undefined4 *)(iVar6 + iVar7 * 4) = *(undefined4 *)(iVar2 + iVar7 * 4);
    }
    else {
      fVar8 = (float)FUN_0800c204();
      if (*(char *)(iVar4 + iVar7) == '\0' && *pcVar3 == '\0') {
        if (iVar7 != 3) {
          fVar8 = fVar8 - *(float *)(iVar1 + iVar7 * 4);
        }
      }
      else {
        fVar8 = *(float *)(iVar2 + iVar7 * 4) + fVar8;
      }
      *(float *)(iVar6 + iVar7 * 4) = fVar8;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  iVar6 = FUN_0800b020(0x46);
  if (iVar6 != 0) {
    fVar8 = (float)FUN_0800c204();
    if (fVar8 != 0.0 && fVar8 < 0.0 == NAN(fVar8)) {
      fVar8 = (float)FUN_0800c204();
      *DAT_08013d60 = fVar8 / DAT_08013844;
    }
  }
  return;
}



/* FUN_08013cb4 at 08013cb4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08013cb4(void)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = DAT_08013d7c + (uint)*DAT_08013d78 * 0x60;
  if ((int)((uint)*_DAT_08013d80 << 0x1f) < 0) {
    FUN_0800bb0c(DAT_08013d38);
    FUN_0800bfec(DAT_08013d3c,iVar6);
  }
  FUN_0801bc70(iVar6);
  pcVar3 = DAT_08013d70;
  puVar2 = DAT_08013d6c;
  *DAT_08013d6c = 1;
  cVar1 = *pcVar3;
  uVar5 = *DAT_08013d40;
  if (cVar1 == 'G') {
    if (uVar5 < 2) {
      FUN_08018e58();
    }
    else if (uVar5 == 4) {
      FUN_08018e74();
    }
    else if (uVar5 == 0x1b) {
      FUN_08018f10();
    }
    else if (uVar5 == 0x1c) {
      FUN_0800b0ac(0);
    }
    else if (uVar5 == 0x1d) {
      thunk_FUN_08008194();
    }
    else if (uVar5 == 0x1e) {
      FUN_08018fac();
    }
    else if (uVar5 == 0x2a) {
      FUN_08019298();
    }
    else {
      if (uVar5 == 0x5a) {
        uVar4 = 0;
      }
      else {
        if (uVar5 != 0x5b) {
          if (uVar5 == 0x5c) {
            FUN_08019140();
          }
          goto LAB_08013ca8;
        }
        uVar4 = 1;
      }
      *DAT_08013d58 = uVar4;
    }
  }
  else if (cVar1 == 'M') {
    if (uVar5 < 2) {
      FUN_0801944c();
    }
    else if (uVar5 == 0x11) {
      thunk_FUN_0800b748();
    }
    else {
      iVar6 = uVar5 - 0x12;
      bVar7 = iVar6 == 0;
      if (!bVar7) {
        if (uVar5 == 0x14) {
          FUN_08019650();
          goto LAB_08013ca8;
        }
        if (uVar5 == 0x15) {
          FUN_0801966a();
          goto LAB_08013ca8;
        }
        if (uVar5 == 0x16) {
          FUN_08019670();
          goto LAB_08013ca8;
        }
        if (uVar5 == 0x17) {
          FUN_08019676();
          goto LAB_08013ca8;
        }
        if (uVar5 == 0x18) {
          FUN_0801969c();
          goto LAB_08013ca8;
        }
        if (uVar5 == 0x19) {
          FUN_08019722();
          goto LAB_08013ca8;
        }
        if (uVar5 == 0x1a) {
          FUN_08019732();
          goto LAB_08013ca8;
        }
        if (uVar5 == 0x1b) {
          FUN_08019756();
          goto LAB_08013ca8;
        }
        if (uVar5 == 0x1c) {
          FUN_0801975c();
          goto LAB_08013ca8;
        }
        if (uVar5 == 0x1d) goto LAB_08013ca8;
        if (uVar5 == 0x1e) {
          FUN_0801976a();
          goto LAB_08013ca8;
        }
        if (uVar5 == 0x1f) {
          FUN_080198bc();
          goto LAB_08013ca8;
        }
        if (uVar5 == 0x20) {
          FUN_0801978c();
          goto LAB_08013ca8;
        }
        if (uVar5 == 0x21) {
          FUN_0801981a();
          goto LAB_08013ca8;
        }
        if (uVar5 == 0x2a) {
          FUN_08019908();
          goto LAB_08013ca8;
        }
        if (uVar5 == 0x4b) {
          FUN_08019974();
          goto LAB_08013ca8;
        }
        if (uVar5 == 0x4c) {
          FUN_0801997a();
          goto LAB_08013ca8;
        }
        if (uVar5 == 0x4d) {
          FUN_08019980();
          goto LAB_08013ca8;
        }
        if (uVar5 == 0x51) {
          FUN_0801a18c();
          goto LAB_08013ca8;
        }
        if (uVar5 == 0x52) {
          FUN_0801a1ac();
          goto LAB_08013ca8;
        }
        if (uVar5 == 0x53) {
          FUN_0801a1b4();
          goto LAB_08013ca8;
        }
        iVar6 = uVar5 - 0x54;
        bVar7 = iVar6 == 0;
      }
      if (bVar7) {
        FUN_08019570();
      }
      else if (iVar6 == 1) {
        FUN_0801a1c0();
      }
      else if (iVar6 == 8) {
        FUN_0801a280();
      }
      else if (iVar6 == 0x14) {
        FUN_0801998c();
      }
      else {
        if (iVar6 == 0x15) {
          FUN_0801a060();
          *puVar2 = 0;
          return;
        }
        if (iVar6 == 0x16) {
          FUN_0801a12c();
        }
        else if (iVar6 == 0x17) {
          FUN_0801a16e();
        }
        else if (iVar6 == 0x19) {
          FUN_080199d0();
        }
        else if (iVar6 == 0x1a) {
          FUN_08019c04();
        }
        else if (iVar6 == 0x1b) {
          FUN_08019c8c();
        }
        else if (iVar6 == 0x1d) {
          FUN_08019d58();
        }
        else if (iVar6 == 0x1e) {
          FUN_0801a37c();
        }
        else if (iVar6 == 0x1f) {
          FUN_0801a3bc();
        }
        else if (iVar6 != 0x21) {
          if (iVar6 == 0x22) {
            FUN_0801a76c();
          }
          else if (iVar6 == 0x23) {
            thunk_FUN_080153ac();
          }
          else if (iVar6 == 0x24) {
            FUN_0801a7b8();
          }
          else if (iVar6 == 0x25) {
            FUN_0801a7c0();
          }
          else if (iVar6 == 0x38) {
            FUN_08019e10();
          }
          else if (iVar6 == 0x42) {
            FUN_0801a7d4();
          }
          else if (iVar6 == 0x47) {
            FUN_0801a088();
          }
          else if (iVar6 == 0x6a) {
            FUN_08019e3c();
          }
          else if (iVar6 == 0x74) {
            FUN_0801a83c();
          }
          else if (iVar6 == 0x75) {
            FUN_0801a894();
          }
          else if (iVar6 == 0x77) {
            FUN_0801a8c4();
          }
          else if (iVar6 == 0x78) {
            FUN_0801a8ec();
          }
          else if (iVar6 == 0x79) {
            FUN_0801a978();
          }
          else if (iVar6 == 0x7a) {
            FUN_0801aac4();
          }
          else if (iVar6 == 0x7f) {
            FUN_0801ac70();
          }
          else if (iVar6 == 0x88) {
            FUN_0801ad44();
          }
          else if (iVar6 == 0x89) {
            FUN_0801adb4();
          }
          else if (iVar6 == 0x8e) {
            FUN_0801ae78();
          }
          else if (iVar6 == 0xd9) {
            FUN_0801aef4();
          }
          else if (iVar6 == 0xdb) {
            FUN_0801b0b4();
          }
          else if (iVar6 == 0xdc) {
            FUN_0801b004();
          }
          else if (iVar6 == 0x10f) {
            FUN_0801baa4();
          }
          else if (iVar6 == 0x13c) {
            FUN_0801b1c0();
          }
          else if (iVar6 == 0x13d) {
            FUN_0801b1e0();
          }
          else if (iVar6 == 0x13e) {
            FUN_0801b1e6();
          }
          else if (iVar6 == 0x150) {
            FUN_0801b1ec();
          }
          else if (iVar6 == 0x151) {
            FUN_0801b52c();
          }
          else if (iVar6 == 0x158) {
            FUN_0801ab7c();
          }
          else if (iVar6 == 0x1a0) {
            thunk_FUN_0800c894();
          }
          else if (iVar6 == 0x1a1) {
            thunk_FUN_0800d37e();
          }
          else if (iVar6 == 0x1a2) {
            thunk_FUN_0800d490();
          }
          else if (iVar6 == 0x1a3) {
            FUN_0801b6a8();
          }
          else if (iVar6 == 0x1a4) {
            FUN_0801b72c();
          }
          else if (iVar6 == 0x1d2) {
            FUN_0801bb24();
          }
          else if (iVar6 == 0x1d3) {
            FUN_0801bb3c();
          }
          else if (iVar6 == 0x1de) {
            FUN_08015cc8();
          }
          else if (iVar6 == 0x204) {
            FUN_0801b890();
          }
          else if (iVar6 == 0x207) {
            FUN_0801b9ec();
          }
          else if (iVar6 == 0x2ff) {
            FUN_0801b760();
          }
          else if (iVar6 == 0x337) {
            FUN_0801ba72();
          }
          else if (iVar6 == 0x34c) {
            FUN_08019824();
          }
          else if (iVar6 == 0x393) {
            FUN_0801bacc();
          }
        }
      }
    }
  }
  else if (cVar1 == 'T') {
    FUN_0801bba8(uVar5 & 0xff);
  }
  else {
    FUN_0801be04(DAT_08013d74);
  }
LAB_08013ca8:
  *puVar2 = 0;
  FUN_080134de();
  return;
}



/* FUN_08013ce4 at 08013ce4 */

undefined4 FUN_08013ce4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar1 = DAT_08013d6c;
  iVar3 = *DAT_08013d64;
  if (DAT_08013d6c[1] != '\0') {
    param_2 = (int)*DAT_08013d6c;
  }
  if (DAT_08013d6c[1] != '\0' && param_2 != 0) {
    if (iVar3 - *(int *)(DAT_08013d6c + 4) < 0) {
      return param_4;
    }
    switch(param_2) {
    case 1:
    case 2:
      FUN_0800bb0c(DAT_08013d38);
      pcVar2 = s_busy__processing_08013d98;
      break;
    case 3:
      FUN_0800bb0c(DAT_08013d38);
      pcVar2 = s_busy__paused_for_user_08013dac;
      break;
    case 4:
      FUN_0800bb0c(DAT_08013d38);
      pcVar2 = s_busy__paused_for_input_08013dc4;
      break;
    default:
      goto switchD_08013d08_caseD_4;
    }
    FUN_0800bb0c(pcVar2);
  }
switchD_08013d08_caseD_4:
  *(int *)(pcVar1 + 4) = (short)(ushort)(byte)pcVar1[1] * 1000 + iVar3;
  return param_4;
}



/* FUN_08013de0 at 08013de0 */

float * FUN_08013de0(float *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  byte bVar21;
  bool bVar22;
  bool bVar23;
  uint in_fpscr;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  int local_98;
  int local_94;
  int local_80;
  char local_2c;
  char local_28;
  
  pcVar13 = DAT_080149e8;
  fVar11 = DAT_080141b0;
  fVar25 = DAT_080140cc;
  local_98 = *DAT_080149e4;
  iVar19 = 0;
  local_2c = (char)param_2;
  bVar2 = true;
  uVar30 = CONCAT44(DAT_080140cc,DAT_080140cc);
  if (1 < (int)local_2c + 1U) {
    pfVar7 = (float *)FUN_0800bb0c(s_PID_Autotune_failed__Bad_extrude_08014a70,param_1,param_2,
                                   param_4);
    return pfVar7;
  }
  FUN_0800bb0c(s_PID_Autotune_start_08014a9c);
  FUN_0801477a();
  pcVar15 = DAT_080149ec;
  iVar8 = (int)local_2c;
  pcVar14 = pcVar13 + iVar8;
  iVar20 = 0x7f;
  iVar18 = 0x7f;
  if (iVar8 < 0) {
    pcVar13[3] = '\x7f';
  }
  if (iVar8 >= 0) {
    pcVar14[2] = '\x7f';
  }
  *pcVar15 = '\x01';
  uVar5 = DAT_080141c4;
  uVar4 = DAT_080141bc;
  uVar3 = DAT_080141b4;
  pcVar15 = (char *)(int)local_2c;
  pfVar7 = param_1;
  iVar8 = 0;
  fVar28 = fVar25;
  fVar29 = fVar25;
  local_94 = local_98;
  local_80 = local_98;
  do {
    uVar26 = DAT_080149f4;
    if (*DAT_080149ec == '\0') {
LAB_08014108:
      pfVar7 = (float *)FUN_0801477a(param_1,param_2,param_4);
      return pfVar7;
    }
    iVar17 = *DAT_080149e4;
    iVar16 = iVar8;
    if (*pcVar13 != '\0') {
      FUN_0801460e();
      iVar6 = DAT_080149f8;
      pcVar9 = pcVar13 + (int)pcVar15 * 4;
      if ((int)pcVar15 < 0) {
        fVar25 = *(float *)(pcVar13 + 0x30);
        pcVar9 = pcVar15;
      }
      if ((int)pcVar15 >= 0) {
        fVar25 = *(float *)(pcVar9 + 0x2c);
      }
      in_fpscr = in_fpscr & 0xfffffff;
      if (fVar29 < fVar25) {
        fVar29 = fVar25;
      }
      if (fVar25 < fVar11) {
        fVar11 = fVar25;
      }
      if (bVar2) {
        in_fpscr = in_fpscr | (uint)(*param_1 < fVar25) << 0x1f;
        bVar21 = -(char)((int)in_fpscr >> 0x1f);
        if (bVar21 == 0) goto LAB_08013f6e;
        iVar16 = iVar17 - local_98;
        bVar22 = DAT_080149f8 + iVar16 < 0;
        if (!bVar22) {
          cVar1 = (char)(iVar18 - iVar20 >> 1);
          pcVar9 = pcVar14;
          if ((int)pcVar15 < 0) {
            pcVar13[3] = cVar1;
            pcVar9 = pcVar15;
          }
          if ((int)pcVar15 >= 0) {
            pcVar9[2] = cVar1;
          }
          bVar2 = false;
          fVar29 = *param_1;
          local_94 = iVar17;
          goto LAB_08013f60;
        }
      }
      else {
LAB_08013f60:
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar25 < *param_1) << 0x1f;
        bVar21 = (byte)(in_fpscr >> 0x1f);
LAB_08013f6e:
        if (bVar21 == 0) goto LAB_080140ea;
        pfVar7 = (float *)(iVar17 - local_94);
        bVar22 = iVar6 + (int)pfVar7 < 0;
        iVar8 = iVar16;
      }
      iVar16 = iVar8;
      if (!bVar22) {
        bVar2 = true;
        if (0 < iVar19) {
          iVar18 = ((iVar16 - (int)pfVar7) * iVar20) / (iVar16 + (int)pfVar7) + iVar18;
          if (iVar18 < 0x14) {
            iVar18 = 0x14;
            iVar20 = iVar18;
          }
          else {
            bVar23 = SBORROW4(iVar18,0xeb);
            iVar8 = iVar18 + -0xeb;
            bVar22 = iVar18 == 0xeb;
            if (iVar18 < 0xec) {
              bVar23 = SBORROW4(iVar18,0x7f);
              iVar8 = iVar18 + -0x7f;
              bVar22 = iVar18 == 0x7f;
            }
            else {
              iVar18 = 0xeb;
            }
            iVar20 = iVar18;
            if (!bVar22 && iVar8 < 0 == bVar23) {
              iVar20 = 0xfe - iVar18;
            }
          }
          FUN_0800bb60(s_bias__08014ab0,iVar18);
          FUN_0800bb60(&DAT_08014ab8,iVar20);
          FUN_0800bb78(fVar11,s_min__08014ac0);
          FUN_0800bb78(fVar29,s_max__08014ac8);
          if (2 < iVar19) {
            uVar30 = FUN_0800eecc(iVar20);
            uVar30 = FUN_0800c284((int)uVar30,(int)((ulonglong)uVar30 >> 0x20),(int)uVar5,
                                  (int)((ulonglong)uVar5 >> 0x20));
            uVar31 = FUN_0800bca0(fVar29 - fVar11);
            uVar31 = FUN_0800c284((int)uVar31,(int)((ulonglong)uVar31 >> 0x20),(int)uVar4,
                                  (int)((ulonglong)uVar4 >> 0x20));
            uVar31 = FUN_0800c284((int)uVar31,(int)((ulonglong)uVar31 >> 0x20),(int)uVar3,
                                  (int)((ulonglong)uVar3 >> 0x20));
            FUN_0800eb88((int)uVar30,(int)((ulonglong)uVar30 >> 0x20),(int)uVar31,
                         (int)((ulonglong)uVar31 >> 0x20));
            uVar10 = FUN_0800bef8();
            pfVar7 = (float *)((int)pfVar7 + iVar16);
            uVar24 = VectorSignedToFloat(pfVar7,(byte)(in_fpscr >> 0x15) & 3);
            uVar30 = FUN_0800bca0(uVar24);
            FUN_0800c284((int)uVar30,(int)((ulonglong)uVar30 >> 0x20),DAT_08014a04,DAT_08014a08);
            fVar11 = (float)FUN_0800bef8();
            FUN_0800bb78(uVar10,s_Ku__08014ad0);
            FUN_0800bb78(fVar11,s_Tu__08014ad8);
            uVar30 = FUN_0800bca0(uVar10);
            FUN_0800c284((int)uVar30,(int)((ulonglong)uVar30 >> 0x20),0x33333333,DAT_08014a0c);
            fVar12 = (float)FUN_0800bef8();
            fVar27 = (fVar12 * 2.0) / fVar11;
            uVar30 = CONCAT44(fVar27,fVar12);
            fVar28 = fVar12 * fVar11 * 0.125;
            FUN_0800bb0c(s_Classic_PID_08014ae0);
            FUN_0800bb78(fVar12,s_Kp__08014af0);
            FUN_0800bb78(fVar27,s_Ki__08014af8);
            FUN_0800bb78(fVar28,s_Kd__08014b00);
            FUN_0800de78(uVar26,10);
          }
        }
        cVar1 = (char)(iVar20 + iVar18 >> 1);
        pcVar9 = pcVar14;
        if ((int)pcVar15 < 0) {
          pcVar13[3] = cVar1;
          pcVar9 = pcVar15;
        }
        if ((int)pcVar15 >= 0) {
          pcVar9[2] = cVar1;
        }
        fVar11 = *param_1;
        iVar19 = iVar19 + 1;
        local_98 = iVar17;
      }
    }
LAB_080140ea:
    in_fpscr = in_fpscr & 0xfffffff;
    if (*param_1 + 20.0 < fVar25) {
      pcVar13 = s_PID_Autotune_failed__Temperature_08014b08;
LAB_08014104:
      FUN_0800bb0c(pcVar13);
      goto LAB_08014108;
    }
    if (-1 < iVar17 - local_80) {
      FUN_08014938();
      FUN_0800de78(uVar26,10);
      local_80 = iVar17 + 2000;
    }
    if (DAT_080149f0 <= (uint)((iVar17 * 2 - local_94) - local_98)) {
      pcVar13 = s_PID_Autotune_failed__timeout_08014b34;
      goto LAB_08014104;
    }
    if (param_3 < iVar19) {
      FUN_0800bb0c(s_PID_Autotune_finished__Put_the_l_08014b54);
      local_28 = (char)param_4;
      FUN_080141cc();
      uVar26 = (undefined4)uVar30;
      FUN_0800bb78(uVar26,&DAT_08014314);
      FUN_080141d4();
      FUN_080141cc();
      fVar25 = (float)((ulonglong)uVar30 >> 0x20);
      FUN_0800bb78(fVar25,&DAT_080143ec);
      FUN_080141d4();
      FUN_080141cc();
      FUN_0800bb78(fVar28,&DAT_080143f0);
      FUN_080141d4();
      if (local_28 != '\0') {
        fVar28 = fVar28 / DAT_08014418;
        fVar25 = fVar25 * DAT_08014418;
        if (local_2c < '\0') {
          *(undefined4 *)(pcVar13 + 0x40) = uVar26;
          *(float *)(pcVar13 + 0x44) = fVar25;
          *(float *)(pcVar13 + 0x48) = fVar28;
        }
        else {
          *(undefined4 *)(pcVar13 + 0x34) = uVar26;
          *(float *)(pcVar13 + 0x38) = fVar25;
          *(float *)(pcVar13 + 0x3c) = fVar28;
        }
      }
      return param_1;
    }
    FUN_0801208c();
    iVar8 = iVar16;
  } while( true );
}



/* FUN_080141cc at 080141cc */

void FUN_080141cc(void)

{
  FUN_0800bb28();
  return;
}



/* FUN_080141d4 at 080141d4 */

void FUN_080141d4(void)

{
  FUN_0800de78();
  return;
}



/* FUN_080141dc at 080141dc */

undefined1 FUN_080141dc(int param_1)

{
  if (param_1 < 0) {
    return *(undefined1 *)(DAT_080149e8 + 3);
  }
  return *(undefined1 *)(param_1 + DAT_080149e8 + 2);
}



/* FUN_080141f0 at 080141f0 */

undefined4 FUN_080141f0(void)

{
  short sVar1;
  int iVar2;
  float fVar3;
  undefined4 in_r3;
  char cVar4;
  bool bVar5;
  char cVar6;
  float fVar7;
  float extraout_s2;
  float extraout_s2_00;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  iVar2 = DAT_080149e8;
  sVar1 = *(short *)(DAT_080149e8 + 0x12);
  fVar10 = *(float *)(DAT_080149e8 + 0x2c);
  fVar7 = (float)FUN_0801456a((int)sVar1);
  fVar7 = fVar7 - fVar10;
  *(float *)(iVar2 + 0x60) = fVar7;
  FUN_0800bca0(*(undefined4 *)(iVar2 + 0x3c));
  uVar11 = FUN_0801440a();
  uVar12 = FUN_0800bca0(fVar10 - *(float *)(iVar2 + 0x50));
  uVar11 = FUN_0800c284((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar11,
                        (int)((ulonglong)uVar11 >> 0x20));
  FUN_0800bca0(*(undefined4 *)(iVar2 + 0x5c));
  uVar12 = FUN_080143fe();
  FUN_0800bd80((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar11,
               (int)((ulonglong)uVar11 >> 0x20));
  fVar3 = (float)FUN_0800bef8();
  *(float *)(iVar2 + 0x5c) = fVar3;
  *(float *)(iVar2 + 0x50) = fVar10;
  if ((((*(char *)(iVar2 + 6) == '\0') &&
       (fVar7 < DAT_08014558 != (NAN(fVar7) || NAN(DAT_08014558)))) &&
      (-1 < (int)((uint)(fVar7 < -10.0) << 0x1f))) && (sVar1 != 0)) {
    if (*(char *)(iVar2 + 1) != '\0') {
      *(undefined4 *)(iVar2 + 0x4c) = 0;
      *(undefined1 *)(iVar2 + 1) = 0;
    }
    fVar8 = *(float *)(iVar2 + 0x34) * fVar7;
    *(float *)(iVar2 + 0x54) = fVar8;
    fVar10 = *(float *)(iVar2 + 0x4c) + fVar7;
    fVar9 = *(float *)(iVar2 + 0x38) * fVar10;
    fVar3 = (fVar8 + fVar9) - fVar3;
    cVar4 = fVar3 < DAT_080145b4;
    bVar5 = fVar3 == DAT_080145b4;
    cVar6 = NAN(fVar3) || NAN(DAT_080145b4);
    *(float *)(iVar2 + 0x4c) = fVar10;
    *(float *)(iVar2 + 0x58) = fVar9;
    if (cVar4 == cVar6) {
      fVar3 = (float)FUN_080143f4();
      if (!bVar5 && cVar4 == cVar6) {
        fVar3 = extraout_s2 - fVar7;
      }
      if (!bVar5 && cVar4 == cVar6) {
        *(float *)(iVar2 + 0x4c) = fVar3;
      }
    }
    else {
      FUN_08014560();
      if (cVar4 != '\0') {
        fVar3 = (float)FUN_080143f4();
        if (cVar4 != '\0') {
          fVar3 = extraout_s2_00 - fVar7;
        }
        if (cVar4 != '\0') {
          *(float *)(iVar2 + 0x4c) = fVar3;
        }
      }
    }
  }
  else {
    *(undefined1 *)(iVar2 + 1) = 1;
  }
  return in_r3;
}



/* FUN_08014318 at 08014318 */

undefined4 FUN_08014318(void)

{
  int iVar1;
  float fVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  iVar1 = DAT_080149e8;
  fVar6 = *(float *)(DAT_080149e8 + 0x30);
  fVar3 = (float)FUN_0801456a((int)*(short *)(DAT_080149e8 + 0x16));
  fVar3 = fVar3 - fVar6;
  *(float *)(iVar1 + 0x78) = fVar3;
  fVar7 = *(float *)(iVar1 + 0x40) * fVar3;
  *(float *)(iVar1 + 0x6c) = fVar7;
  fVar5 = *(float *)(iVar1 + 100) + fVar3;
  *(float *)(iVar1 + 100) = fVar5;
  fVar8 = *(float *)(iVar1 + 0x44) * fVar5;
  *(float *)(iVar1 + 0x70) = fVar8;
  FUN_0800bca0(*(undefined4 *)(iVar1 + 0x48));
  uVar9 = FUN_0801440a();
  uVar10 = FUN_0800bca0(fVar6 - *(float *)(iVar1 + 0x68));
  uVar9 = FUN_0800c284((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                       (int)((ulonglong)uVar9 >> 0x20));
  FUN_0800bca0(*(undefined4 *)(iVar1 + 0x74));
  uVar10 = FUN_080143fe();
  FUN_0800bd80((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  fVar2 = (float)FUN_0800bef8();
  *(float *)(iVar1 + 0x74) = fVar2;
  FUN_080144e8((fVar7 + fVar8) - fVar2,DAT_080145b4);
  *(float *)(iVar1 + 0x68) = fVar6;
  if (in_NG == in_OV) {
    fVar2 = (float)FUN_080143f4();
    if (!(bool)in_ZR && in_NG == in_OV) {
      fVar2 = fVar5 - fVar3;
    }
    uVar4 = DAT_0801455c;
    if (!(bool)in_ZR && in_NG == in_OV) {
      *(float *)(iVar1 + 100) = fVar2;
      uVar4 = DAT_0801455c;
    }
  }
  else {
    uVar4 = FUN_08014560();
    if (in_NG != '\0') {
      fVar2 = (float)FUN_080143f4();
      if (in_NG != '\0') {
        fVar2 = fVar5 - fVar3;
      }
      uVar4 = DAT_080145b8;
      if (in_NG != '\0') {
        *(float *)(iVar1 + 100) = fVar2;
        uVar4 = DAT_080145b8;
      }
    }
  }
  return uVar4;
}



/* FUN_080143f4 at 080143f4 */

void FUN_080143f4(void)

{
  return;
}



/* FUN_080143fe at 080143fe */

void FUN_080143fe(undefined4 param_1,undefined4 param_2)

{
  FUN_0800c284(param_1,param_2,0x66666666,DAT_08014a14);
  return;
}



/* FUN_0801440a at 0801440a */

void FUN_0801440a(undefined4 param_1,undefined4 param_2)

{
  FUN_0800c284(param_1,param_2,DAT_08014a18,DAT_08014a1c);
  return;
}



/* FUN_0801441c at 0801441c */

void FUN_0801441c(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  uint in_fpscr;
  float fVar6;
  undefined4 uVar7;
  
  pcVar1 = DAT_080149e8;
  if (*DAT_080149e8 == '\0') {
    return;
  }
  FUN_0801460e();
  iVar2 = *DAT_080149e4;
  iVar3 = 0;
  do {
    if (((pcVar1[iVar3 + 6] == '\0') && (*(int *)(pcVar1 + iVar3 * 4 + 0x7c) != 0)) &&
       (-1 < iVar2 - *(int *)(pcVar1 + iVar3 * 4 + 0x7c))) {
      pcVar1[iVar3 + 6] = '\x01';
    }
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(pcVar1 + iVar3 * 2 + 0x1e),
                                       (byte)(in_fpscr >> 0x15) & 3);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar6 < *(float *)(pcVar1 + iVar3 * 4 + 0x2c)) << 0x1f;
    cVar4 = -(char)((int)in_fpscr >> 0x1f);
    if (cVar4 == '\0') {
LAB_08014496:
      cVar4 = '\0';
    }
    else {
      uVar7 = VectorSignedToFloat((int)*(short *)(pcVar1 + iVar3 * 2 + 0x20),
                                  (byte)(in_fpscr >> 0x15) & 3);
      FUN_080144e8(*(float *)(pcVar1 + iVar3 * 4 + 0x2c),uVar7);
      if (cVar4 == '\0') goto LAB_08014496;
      FUN_080141f0((int)(char)iVar3);
      cVar4 = FUN_080144d6();
    }
    pcVar1[iVar3 + 2] = cVar4;
    cVar5 = SCARRY4(iVar3,1);
    iVar3 = iVar3 + 1;
    cVar4 = iVar3 < 0;
  } while (iVar3 == 0 || cVar4 != cVar5);
  if (pcVar1[7] == '\0') {
    iVar3 = *(int *)(pcVar1 + 0x80);
    if (iVar3 != 0) {
      cVar5 = SBORROW4(iVar2,iVar3);
      cVar4 = iVar2 - iVar3 < 0;
      if (!(bool)cVar4) {
        pcVar1[7] = '\x01';
        goto LAB_080144b2;
      }
    }
    FUN_080144e8(*(undefined4 *)(pcVar1 + 0x30),0x40a00000);
    if ((cVar4 == cVar5) && (FUN_080144e4(), cVar4 != '\0')) {
      FUN_08014318();
      cVar4 = FUN_080144d6();
      goto LAB_080144b4;
    }
  }
LAB_080144b2:
  cVar4 = '\0';
LAB_080144b4:
  pcVar1[3] = cVar4;
  return;
}



/* FUN_080144d6 at 080144d6 */

int FUN_080144d6(float param_1)

{
  return (int)param_1 >> 1;
}



/* FUN_080144e4 at 080144e4 */

void FUN_080144e4(void)

{
  return;
}



/* FUN_080144e8 at 080144e8 */

void FUN_080144e8(void)

{
  return;
}



/* FUN_080144f4 at 080144f4 */

int FUN_080144f4(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    FUN_0800bb0c(DAT_08014a10);
    FUN_0800bf72(DAT_080149f4,param_2,10);
    FUN_0800bb0c(s___Invalid_extruder_number___08014a43 + 1);
    FUN_0800b824(s_KILLED__08014a64);
    return param_4;
  }
  iVar2 = param_4;
  iVar1 = FUN_080145a8();
  do {
    if (iVar1 < *(short *)(iVar2 + param_3 * 4)) {
      FUN_080145bc();
      break;
    }
    param_3 = param_3 + 1;
  } while (param_3 < 0x32);
  if (param_3 == 0x32) {
    FUN_0801456a((int)*(short *)(iVar2 + 0xc6));
  }
  FUN_08014560();
  return param_4;
}



/* FUN_08014560 at 08014560 */

void FUN_08014560(void)

{
  return;
}



/* FUN_0801456a at 0801456a */

undefined4 FUN_0801456a(undefined4 param_1)

{
  uint in_fpscr;
  undefined4 uVar1;
  
  uVar1 = VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
  return uVar1;
}



/* FUN_08014574 at 08014574 */

undefined4 FUN_08014574(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_080145a8();
  do {
    if (iVar1 < *(short *)(param_4 + param_3 * 4)) {
      FUN_080145bc();
      break;
    }
    param_3 = param_3 + 1;
  } while (param_3 < 0x32);
  cVar2 = (int)(param_3 - 0x32) < 0;
  if (param_3 == 0x32) {
    FUN_0801456a((int)*(short *)(param_4 + 0xc6));
  }
  uVar3 = FUN_08014560();
  if (cVar2 != '\0') {
    uVar3 = DAT_080147c4;
  }
  return uVar3;
}



/* FUN_080145a8 at 080145a8 */

undefined4 FUN_080145a8(void)

{
  return DAT_080145b8;
}



/* FUN_080145bc at 080145bc */

float FUN_080145bc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = param_4 + param_3 * 4;
  fVar3 = (float)VectorSignedToFloat(param_1 - *(short *)(iVar1 + -4),(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 2) - (int)*(short *)(iVar1 + -2),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_4 + param_3 * 4) -
                                     (int)*(short *)(iVar1 + -4),(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + -2),(byte)(in_fpscr >> 0x15) & 3);
  return fVar2 + (fVar3 * fVar4) / fVar5;
}



/* FUN_0801460e at 0801460e */

undefined4 FUN_0801460e(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 in_r3;
  uint uVar3;
  bool bVar4;
  undefined4 uVar5;
  
  puVar2 = DAT_080149e8;
  uVar3 = 0;
  do {
    uVar5 = FUN_080144f4((int)*(short *)(puVar2 + uVar3 * 2 + 0x10),uVar3 & 0xff);
    iVar1 = uVar3 * 4;
    bVar4 = SCARRY4(uVar3,1);
    uVar3 = uVar3 + 1;
    *(undefined4 *)(puVar2 + iVar1 + 0x2c) = uVar5;
  } while (uVar3 == 0 || (int)uVar3 < 0 != bVar4);
  uVar5 = FUN_08014574((int)*(short *)(puVar2 + 0x14));
  *(undefined4 *)(puVar2 + 0x30) = uVar5;
  disableIRQinterrupts();
  *puVar2 = 0;
  enableIRQinterrupts();
  return in_r3;
}



/* FUN_0801464c at 0801464c */

undefined4 FUN_0801464c(void)

{
  short sVar1;
  int *piVar2;
  short sVar3;
  undefined4 in_r3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  float fVar9;
  float fVar10;
  float extraout_s0;
  int local_38 [6];
  
  FUN_08014762();
  piVar2 = DAT_08014a20;
  local_38[1] = 1;
  local_38[2] = 0;
  piVar4 = DAT_08014a20 + 0x5a;
  local_38[3] = 2;
  iVar5 = DAT_08014a20[0x5d];
  iVar6 = DAT_08014a20[0x5c];
  local_38[0] = iVar5;
  FUN_08014fe4(iVar6,local_38);
  *(int *)(iVar6 + 0x18) = iVar5 << 0x10;
  FUN_08014762();
  FUN_0801476a();
  iVar6 = piVar2[0x5b];
  iVar5 = *piVar4;
  local_38[0] = iVar6;
  FUN_08014fe4(iVar5);
  *(int *)(iVar5 + 0x18) = iVar6 << 0x10;
  FUN_08014762();
  FUN_0801476a();
  iVar6 = piVar2[1];
  iVar5 = *piVar2;
  local_38[0] = iVar6;
  FUN_08014fe4(iVar5);
  *(int *)(iVar5 + 0x18) = iVar6 << 0x10;
  FUN_0801be4c(DAT_08014a24,100);
  FUN_08014ce4(0xfa);
  iVar5 = DAT_080149e8;
  *(undefined2 *)(DAT_080149e8 + 0x1e) = 5;
  while (fVar9 = (float)FUN_080144f4((int)*(short *)(iVar5 + 0x1a),0),
        (int)((uint)(fVar9 < 5.0) << 0x1f) < 0) {
    *(short *)(iVar5 + 0x1a) = *(short *)(iVar5 + 0x1a) + -0x10;
  }
  *(undefined2 *)(iVar5 + 0x20) = 0x113;
  fVar9 = DAT_080149a0;
  while (fVar10 = (float)FUN_080144f4((int)*(short *)(iVar5 + 0x1c),0),
        fVar10 < fVar9 == (NAN(fVar10) || NAN(fVar9))) {
    *(short *)(iVar5 + 0x1c) = *(short *)(iVar5 + 0x1c) + 0x10;
  }
  while( true ) {
    sVar1 = *(short *)(iVar5 + 0x22);
    sVar3 = FUN_08014574((int)sVar1);
    cVar7 = extraout_s0 < 5.0;
    cVar8 = NAN(extraout_s0);
    if ((bool)cVar7) {
      sVar3 = sVar1 + -0x10;
    }
    if (!(bool)cVar7) break;
    *(short *)(iVar5 + 0x22) = sVar3;
  }
  while( true ) {
    iVar6 = (int)*(short *)(iVar5 + 0x24);
    FUN_08014574(iVar6);
    FUN_080144e4();
    if (cVar7 != cVar8) break;
    cVar8 = SCARRY4(iVar6,0x10);
    cVar7 = iVar6 + 0x10 < 0;
    *(short *)(iVar5 + 0x24) = (short)(iVar6 + 0x10);
  }
  return in_r3;
}



/* FUN_08014762 at 08014762 */

void FUN_08014762(void)

{
  FUN_08012510();
  return;
}



/* FUN_0801476a at 0801476a */

void FUN_0801476a(void)

{
  return;
}



/* FUN_0801477a at 0801477a */

void FUN_0801477a(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_080149e8;
  *DAT_08014a28 = 0;
  *(undefined2 *)(iVar1 + 0x12) = 0;
  *(undefined2 *)(iVar1 + 0x16) = 0;
  FUN_08016448(DAT_08014a2c);
  *(undefined2 *)(iVar1 + 0x12) = 0;
  *(undefined1 *)(iVar1 + 2) = 0;
  piVar2 = DAT_08014a30;
  *(int *)(DAT_08014a30[2] + 0x18) = DAT_08014a30[3] << 0x10;
  *(undefined2 *)(iVar1 + 0x16) = 0;
  *(undefined1 *)(iVar1 + 3) = 0;
  *(int *)(*piVar2 + 0x18) = piVar2[1];
  return;
}



/* FUN_080147ac at 080147ac */

void FUN_080147ac(void)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_080149e8;
  *(undefined2 *)(DAT_080149e8 + 0x10) = *(undefined2 *)(DAT_080149e8 + 0x28);
  *(undefined2 *)(puVar1 + 0x14) = *(undefined2 *)(puVar1 + 0x18);
  *puVar1 = 1;
  return;
}



/* FUN_080147cc at 080147cc */

undefined8 FUN_080147cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  puVar2 = DAT_08014a34;
  pcVar1 = DAT_080149e8;
  if (DAT_080149e8[8] != '\0') goto LAB_080148e4;
  DAT_080149e8[8] = '\x01';
  *puVar2 = *puVar2 & 0xfffffffe;
  bVar6 = pcVar1[0xb];
  iVar7 = DAT_08014a20[1];
  iVar10 = *DAT_08014a20;
  iVar8 = DAT_08014a20[0x5b];
  iVar11 = DAT_08014a20[0x5c];
  iVar12 = DAT_08014a20[0x5d];
  iVar9 = DAT_08014a20[0x5a];
  iVar13 = iVar12 << 0x10;
  if (bVar6 < 0x7f) {
    if ((byte)pcVar1[0xc] <= bVar6) {
      *(int *)(iVar11 + 0x18) = iVar13;
    }
    if ((byte)pcVar1[0xd] <= bVar6) {
      *(int *)(iVar9 + 0x18) = iVar8;
    }
    if ((byte)pcVar1[5] <= bVar6) goto LAB_08014846;
  }
  else {
    cVar4 = pcVar1[2];
    pcVar1[0xc] = cVar4;
    bVar6 = bVar6 + 0x81;
    if (cVar4 != '\0') {
      *(int *)(iVar11 + 0x18) = iVar12;
    }
    if (cVar4 == '\0') {
      *(int *)(iVar11 + 0x18) = iVar13;
    }
    pcVar1[0xd] = pcVar1[3];
    if (pcVar1[3] != '\0') {
      iVar8 = iVar8 << 0x10;
    }
    *(int *)(iVar9 + 0x18) = iVar8;
    pcVar1[5] = (byte)pcVar1[4] >> 1;
    if ((byte)pcVar1[4] >> 1 == 0) {
LAB_08014846:
      iVar7 = iVar7 << 0x10;
    }
    *(int *)(iVar10 + 0x18) = iVar7;
  }
  bVar3 = pcVar1[0xe] ^ 1;
  if (bVar3 != 0) {
    bVar3 = 1;
  }
  pcVar1[0xe] = bVar3;
  pcVar1[0xb] = bVar6 + 1;
  switch(pcVar1[10]) {
  case '\0':
    uVar5 = 1;
    goto LAB_08014896;
  case '\x01':
    *(short *)(pcVar1 + 0x28) = *DAT_08014a38 + *(short *)(pcVar1 + 0x28);
    break;
  case '\x02':
    uVar5 = 3;
LAB_08014896:
    FUN_08014cf4(uVar5);
    break;
  case '\x03':
    *(short *)(pcVar1 + 0x18) = *DAT_08014a38 + *(short *)(pcVar1 + 0x18);
    break;
  case '\x04':
    if (pcVar1[0xf] == '\0') {
      pcVar1[0xf] = '\x06';
    }
    cVar4 = pcVar1[0xf];
    pcVar1[0xf] = cVar4 + -1;
    if ((char)(cVar4 + -1) == '\0') break;
    pcVar1[10] = '\x03';
    goto LAB_080148ca;
  }
  if ((pcVar1[10] == '\0') &&
     (cVar4 = pcVar1[9], pcVar1[9] = cVar4 + '\x01', '\x0f' < (char)(cVar4 + '\x01'))) {
    pcVar1[9] = '\0';
    if (*pcVar1 == '\0') {
      FUN_080147ac();
    }
    pcVar1[0x28] = '\0';
    pcVar1[0x29] = '\0';
    pcVar1[0x2a] = '\0';
    pcVar1[0x2b] = '\0';
    pcVar1[0x18] = '\0';
    pcVar1[0x19] = '\0';
  }
LAB_080148ca:
  cVar4 = pcVar1[10] + '\x01';
  if ('\x04' < cVar4) {
    cVar4 = '\0';
  }
  pcVar1[10] = cVar4;
  pcVar1[8] = '\0';
  *puVar2 = *puVar2 | 1;
LAB_080148e4:
  return CONCAT44(param_4,param_3);
}



/* FUN_080148e8 at 080148e8 */

void FUN_080148e8(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_080149f4;
  FUN_0800de78(DAT_080149f4,0x20);
  if (param_3 == -1) {
    uVar2 = 0x42;
  }
  else {
    uVar2 = 0x54;
  }
  FUN_0800de78(uVar1,uVar2);
  FUN_0800de78(uVar1,0x3a);
  uVar2 = FUN_0800bca0(*param_1);
  FUN_0800bfd0(uVar2,uVar1,2);
  FUN_0800bb78(*param_2,&DAT_080149fc);
  FUN_08014ce4(2,param_4);
  return;
}



/* FUN_08014938 at 08014938 */

undefined8 FUN_08014938(void)

{
  int iVar1;
  uint in_fpscr;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = DAT_080149e8;
  local_c = *(undefined4 *)(DAT_080149e8 + 0x2c);
  local_10 = VectorSignedToFloat((int)*(short *)(DAT_080149e8 + 0x12),(byte)(in_fpscr >> 0x15) & 3);
  FUN_080148e8(&local_c,&local_10,0xfffffffe);
  local_c = *(undefined4 *)(iVar1 + 0x30);
  local_10 = FUN_0801456a((int)*(short *)(iVar1 + 0x16));
  FUN_080148e8(&local_c,&local_10,0xffffffff);
  FUN_0800bb0c(&DAT_08014a00);
  FUN_080141dc(*DAT_08014a3c);
  FUN_080149a4();
  FUN_0800bb0c(&DAT_08014bc8);
  FUN_080141dc(0xffffffff);
  FUN_080149a4();
  return CONCAT44(local_c,local_10);
}



/* FUN_080149a4 at 080149a4 */

void FUN_080149a4(void)

{
  FUN_0800bf72();
  return;
}



/* FUN_080149ae at 080149ae */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080149ae(void)

{
  if (*_DAT_08014a40 == 0) {
    return;
  }
  if (-1 < *DAT_080149e4 - *(int *)(_DAT_08014a40 + 4)) {
    *(int *)(_DAT_08014a40 + 4) = (short)(ushort)*_DAT_08014a40 * 1000 + *DAT_080149e4;
    FUN_08014938();
    FUN_0800de78(DAT_080149f4,10);
    return;
  }
  return;
}



/* FUN_08014c98 at 08014c98 */

void FUN_08014c98(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (&DAT_08014d68)[param_1 * 2] & 0xffff;
  if (param_2 == 0) {
    uVar1 = uVar1 << 0x10;
  }
  *(uint *)((&DAT_08014d64)[param_1 * 2] + 0x18) = uVar1;
  return;
}



/* FUN_08014cbc at 08014cbc */

int FUN_08014cbc(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((&DAT_08014d64)[param_1 * 2] + 0x10) & (&DAT_08014d68)[param_1 * 2] & 0xffff;
  if (uVar1 != 0) {
    uVar1 = 1;
  }
  return (int)(char)uVar1;
}



/* FUN_08014cce at 08014cce */

void FUN_08014cce(int param_1,undefined4 param_2)

{
  if (param_1 == 6) {
    *DAT_08014d34 = param_2;
  }
  else if (param_1 == 7) {
    DAT_08014d34[1] = param_2;
  }
  return;
}



/* FUN_08014ce4 at 08014ce4 */

void FUN_08014ce4(uint param_1)

{
  do {
  } while ((uint)(*DAT_08014d38 - *DAT_08014d38) < param_1);
  return;
}



/* FUN_08014cf2 at 08014cf2 */

void FUN_08014cf2(void)

{
  return;
}



/* FUN_08014cf4 at 08014cf4 */

void FUN_08014cf4(int param_1,char param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = DAT_08014d3c;
  if (param_1 == 1) {
    param_2 = '\0';
  }
  else if (param_1 == 3) {
    param_2 = '\x01';
  }
  sVar1 = *DAT_08014d3c;
  if (sVar1 != DAT_08014d3c[0xb]) {
    *DAT_08014d40 = 0xaaaa;
    psVar2[0xb] = sVar1;
  }
  *psVar2 = psVar2[6];
  psVar2[1] = psVar2[5];
  psVar2[2] = psVar2[4];
  psVar2[10] = (ushort)(((uint)(ushort)psVar2[param_2] << 0x14) >> 0x16);
  return;
}



/* FUN_08014d44 at 08014d44 */

int FUN_08014d44(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = (longlong)(param_5 - param_4) * (longlong)(param_1 - param_2);
  iVar2 = FUN_08015578((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),param_3 - param_2,
                       param_3 - param_2 >> 0x1f);
  return param_4 + iVar2;
}



/* FUN_08014fe4 at 08014fe4 */

uint FUN_08014fe4(uint *param_1,uint *param_2,undefined4 param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_28;
  
  puVar3 = DAT_0801528c;
  iVar2 = DAT_08015288;
  puVar1 = DAT_08015284;
  uVar10 = 0;
  local_28 = param_4;
  do {
    uVar4 = 1 << (uVar10 & 0xff);
    uVar5 = *param_2 & uVar4;
    if (uVar5 == uVar4) {
      if (param_2[1] == 2 || param_2[1] == 0x12) {
        uVar6 = uVar10 << 2 & 0x1c;
        param_1[(uVar10 >> 3) + 8] =
             param_2[4] << uVar6 | param_1[(uVar10 >> 3) + 8] & ~(0xf << uVar6);
      }
      uVar9 = uVar10 << 1;
      uVar6 = ~(3 << (uVar9 & 0xff));
      *param_1 = ((byte)param_2[1] & 3) << (uVar9 & 0xff) | *param_1 & uVar6;
      uVar8 = param_2[1];
      if ((uVar8 == 1 || uVar8 == 2) || (uVar8 == 0x11 || uVar8 == 0x12)) {
        param_1[2] = param_2[3] << (uVar9 & 0xff) | param_1[2] & uVar6;
        param_1[1] = param_1[1] & ~uVar4 | ((param_2[1] << 0x1b) >> 0x1f) << (uVar10 & 0xff);
      }
      param_1[3] = param_2[2] << (uVar9 & 0xff) | uVar6 & param_1[3];
      if ((int)(param_2[1] << 3) < 0) {
        uVar4 = uVar10 << 2 & 0xc;
        *puVar3 = *puVar3 | 0x4000;
        local_28 = *puVar3 & 0x4000;
        if (param_1 == DAT_08015290) {
          iVar7 = 0;
        }
        else if (param_1 == DAT_08015294) {
          iVar7 = 1;
        }
        else if (param_1 == DAT_08015298) {
          iVar7 = 2;
        }
        else if (param_1 == DAT_0801529c) {
          iVar7 = 3;
        }
        else if (param_1 == DAT_080152a0) {
          iVar7 = 4;
        }
        else {
          iVar7 = 7;
        }
        *(uint *)(iVar2 + (uVar10 >> 2) * 4) =
             iVar7 << uVar4 | *(uint *)(iVar2 + (uVar10 >> 2) * 4) & ~(0xf << uVar4);
        uVar4 = ~uVar5;
        uVar6 = *puVar1 & uVar4;
        if ((int)(param_2[1] << 0xf) < 0) {
          uVar6 = uVar6 | uVar5;
        }
        *puVar1 = uVar6;
        uVar6 = puVar1[1] & uVar4;
        if ((int)(param_2[1] << 0xe) < 0) {
          uVar6 = uVar6 | uVar5;
        }
        puVar1[1] = uVar6;
        uVar6 = puVar1[2] & uVar4;
        if ((int)(param_2[1] << 0xb) < 0) {
          uVar6 = uVar6 | uVar5;
        }
        puVar1[2] = uVar6;
        uVar4 = puVar1[3] & uVar4;
        if ((int)(param_2[1] << 10) < 0) {
          uVar4 = uVar4 | uVar5;
        }
        puVar1[3] = uVar4;
      }
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 0x10);
  return local_28;
}



/* FUN_08015178 at 08015178 */

uint FUN_08015178(uint *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  puVar3 = DAT_08015290;
  iVar2 = DAT_08015288;
  puVar1 = DAT_08015284;
  uVar6 = 0;
  do {
    uVar8 = 1 << (uVar6 & 0xff);
    if ((uVar8 & param_2) == uVar8) {
      uVar4 = ~(3 << ((uVar6 & 0x7f) << 1));
      *param_1 = *param_1 & uVar4;
      param_1[(uVar6 >> 3) + 8] = param_1[(uVar6 >> 3) + 8] & ~(0xf << (uVar6 << 2 & 0x1c));
      uVar7 = uVar6 << 2 & 0xc;
      param_1[2] = param_1[2] & uVar4;
      param_1[1] = param_1[1] & ~uVar8;
      uVar9 = uVar6 >> 2;
      param_1[3] = uVar4 & param_1[3];
      uVar4 = 0xf << uVar7;
      if (param_1 == puVar3) {
        iVar5 = 0;
      }
      else if (param_1 == DAT_08015294) {
        iVar5 = 1;
      }
      else if (param_1 == DAT_08015298) {
        iVar5 = 2;
      }
      else if (param_1 == DAT_0801529c) {
        iVar5 = 3;
      }
      else if (param_1 == DAT_080152a0) {
        iVar5 = 4;
      }
      else {
        iVar5 = 7;
      }
      if ((uVar4 & *(uint *)(iVar2 + uVar9 * 4)) == iVar5 << uVar7) {
        *(uint *)(iVar2 + uVar9 * 4) = *(uint *)(iVar2 + uVar9 * 4) & ~uVar4;
        uVar8 = ~(uVar8 & param_2);
        *puVar1 = *puVar1 & uVar8;
        puVar1[1] = puVar1[1] & uVar8;
        puVar1[2] = puVar1[2] & uVar8;
        puVar1[3] = uVar8 & puVar1[3];
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x10);
  return param_2;
}



/* FUN_080152ae at 080152ae */

void FUN_080152ae(void)

{
  undefined4 *puVar1;
  undefined4 in_r3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_c;
  
  uStack_c = in_r3;
  FUN_08015306();
  puVar1 = DAT_080154f4;
  local_1c = 0;
  local_14 = 0;
  local_18 = 1;
  local_20 = DAT_080154f4[5];
  FUN_08014fe4(DAT_080154f4[4],&local_20);
  FUN_08015306();
  local_1c = 0;
  local_14 = 0;
  local_20 = puVar1[3];
  local_18 = 1;
  FUN_08014fe4(puVar1[2],&local_20);
  FUN_08015306();
  local_1c = 0;
  local_14 = 0;
  local_20 = puVar1[1];
  local_18 = 1;
  FUN_08014fe4(*puVar1,&local_20);
  return;
}



/* FUN_08015306 at 08015306 */

void FUN_08015306(void)

{
  FUN_08012510();
  return;
}



/* FUN_08015310 at 08015310 */

void FUN_08015310(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = DAT_08015504;
  puVar2 = DAT_08015500;
  pcVar1 = DAT_080154f8;
  if (*DAT_080154f8 != '\0') {
    FUN_0800bb0c(DAT_080154fc);
    FUN_0800bb0c(s_endstops_hit__08015520);
    if (((int)*pcVar1 << 0x1f < 0) || ((int)*pcVar1 << 0x1b < 0)) {
      FUN_080153a2(*puVar3,*puVar2);
      FUN_0800bb78(&DAT_080154e4);
    }
    if (((int)*pcVar1 << 0x1e < 0) || ((int)*pcVar1 << 0x1a < 0)) {
      FUN_080153a2(puVar3[1],puVar2[1]);
      FUN_0800bb78(&DAT_080154e8);
    }
    if (((int)*pcVar1 << 0x1d < 0) || ((int)*pcVar1 << 0x19 < 0)) {
      FUN_080153a2(puVar3[2],puVar2[2]);
      FUN_0800bb78(&DAT_080154ec);
    }
    FUN_0800de78(DAT_08015508,10);
    *pcVar1 = '\0';
    return;
  }
  return;
}



/* FUN_080153a2 at 080153a2 */

float FUN_080153a2(undefined4 param_1,float param_2)

{
  uint in_fpscr;
  float fVar1;
  
  fVar1 = (float)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
  return fVar1 * param_2;
}



/* FUN_080153ac at 080153ac */

void FUN_080153ac(void)

{
  int *piVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 in_r3;
  char *pcVar4;
  
  uVar2 = DAT_08015508;
  piVar1 = DAT_080154f4;
  pcVar4 = s_TRIGGERED_08015554;
  FUN_0800bb0c(s_Reporting_endstop_status_08015530);
  FUN_0800bb0c(s_x_min__0801554c);
  if ((*(uint *)(piVar1[4] + 0x10) & piVar1[5]) == 0) {
    pcVar3 = s_TRIGGERED_08015554;
  }
  else {
    pcVar3 = (char *)0x8015560;
  }
  FUN_0800bfec(uVar2,pcVar3);
  FUN_0800bb0c(s_y_min__08015568);
  if ((*(uint *)(piVar1[2] + 0x10) & piVar1[3]) == 0) {
    pcVar3 = s_TRIGGERED_08015554;
  }
  else {
    pcVar3 = (char *)0x8015560;
  }
  FUN_0800bfec(uVar2,pcVar3);
  FUN_0800bb0c(s_z_min__08015570);
  if ((*(uint *)(*piVar1 + 0x10) & piVar1[1]) != 0) {
    pcVar4 = (char *)0x8015560;
  }
  FUN_0800bfec(uVar2,pcVar4,in_r3);
  return;
}



/* FUN_08015416 at 08015416 */

undefined4 FUN_08015416(void)

{
  int *piVar1;
  byte *pbVar2;
  int *piVar3;
  byte *pbVar4;
  byte bVar5;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  uint uVar6;
  undefined4 in_r3;
  
  pbVar4 = DAT_08015510;
  piVar3 = DAT_0801550c;
  pbVar2 = DAT_080154f8;
  piVar1 = DAT_080154f4;
  if ((0 < *(int *)(*DAT_0801550c + 4)) && ((int)((uint)*DAT_08015510 << 0x1f) < 0)) {
    uVar6 = *(uint *)(DAT_080154f4[4] + 0x10);
    if ((uVar6 & DAT_080154f4[5]) == 0) {
      bVar5 = DAT_080154f8[1] | 1;
    }
    else {
      bVar5 = DAT_080154f8[1] & 0xfe;
    }
    FUN_08015514(bVar5);
    if (((int)(uVar6 << 0x1f) < 0) && (0 < *(int *)(extraout_r1 + 4))) {
      *pbVar2 = *pbVar2 | 1;
      FUN_0801010a(0);
    }
  }
  if ((0 < *(int *)(*piVar3 + 8)) && ((int)((uint)*pbVar4 << 0x1e) < 0)) {
    uVar6 = *(uint *)(piVar1[2] + 0x10);
    if ((uVar6 & piVar1[3]) == 0) {
      bVar5 = pbVar2[1] | 2;
    }
    else {
      bVar5 = pbVar2[1] & 0xfd;
    }
    FUN_08015514(bVar5);
    if (((int)(uVar6 << 0x1e) < 0) && (0 < *(int *)(extraout_r1_00 + 8))) {
      *pbVar2 = *pbVar2 | 2;
      FUN_0801010a(1);
    }
  }
  if (((0 < *(int *)(*piVar3 + 0xc)) && ((int)((uint)*pbVar4 << 0x1d) < 0)) && (pbVar2[3] != 0)) {
    uVar6 = *(uint *)(*piVar1 + 0x10);
    if ((uVar6 & piVar1[1]) == 0) {
      bVar5 = pbVar2[1] | 4;
    }
    else {
      bVar5 = pbVar2[1] & 0xfb;
    }
    FUN_08015514(bVar5);
    if (((int)(uVar6 << 0x1d) < 0) && (0 < *(int *)(extraout_r1_01 + 0xc))) {
      *pbVar2 = *pbVar2 | 4;
      FUN_0801010a(2);
    }
  }
  pbVar2[2] = pbVar2[1];
  return in_r3;
}



/* FUN_08015514 at 08015514 */

undefined1 FUN_08015514(undefined1 param_1)

{
  int unaff_r4;
  
  *(undefined1 *)(unaff_r4 + 1) = param_1;
  return *(undefined1 *)(unaff_r4 + 2);
}



/* FUN_08015578 at 08015578 */

uint FUN_08015578(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  uVar11 = param_4 & 0x80000000;
  if ((int)uVar11 < 0) {
    bVar13 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar13 - param_4;
  }
  uVar11 = uVar11 ^ (int)param_2 >> 0x20;
  if (uVar11 != 0) {
    if ((int)param_2 < 0) {
      bVar13 = param_1 != 0;
      param_1 = -param_1;
      param_2 = -(uint)bVar13 - param_2;
    }
    uVar1 = FUN_080155bc(param_1,param_2);
    if ((uVar11 & 0x80000000) != 0) {
      uVar1 = -uVar1;
    }
    return uVar1;
  }
  if (param_4 == 0) {
    if (param_2 == 0) {
      if (2 < param_3) {
        return param_1 / param_3;
      }
    }
    else {
      if (0xffff < param_3) {
        if (param_3 < 0x1000000) {
          uVar1 = (param_2 - param_3 * (param_2 / param_3)) * 0x100 | param_1 >> 0x18;
          uVar7 = uVar1 / param_3;
          uVar11 = uVar7 | param_1 << 8;
          uVar1 = (uVar1 - param_3 * uVar7) * 0x100 | uVar11 >> 0x18;
          uVar7 = uVar1 / param_3;
          uVar11 = uVar7 | uVar11 << 8;
          uVar1 = (uVar1 - param_3 * uVar7) * 0x100 | uVar11 >> 0x18;
          uVar7 = uVar1 / param_3;
          uVar11 = uVar7 | uVar11 << 8;
          return ((uVar1 - param_3 * uVar7) * 0x100 | uVar11 >> 0x18) / param_3 | uVar11 << 8;
        }
        uVar1 = 0xf - LZCOUNT(param_3);
        iVar6 = LZCOUNT(param_3) - LZCOUNT(param_2);
        uVar11 = param_3 >> (uVar1 & 0xff);
        uVar1 = uVar1 & 0x1f;
        uVar7 = iVar6 + 0x20;
        uVar1 = (param_3 >> uVar1 | param_3 << 0x20 - uVar1) ^ uVar11;
        uVar10 = iVar6 + 0x11;
        if (uVar7 < 0xf || uVar10 == 0) goto LAB_0801565e;
        goto LAB_080156ec;
      }
      if (2 < param_3) {
        uVar11 = (param_2 - param_3 * (param_2 / param_3)) * 0x10000 | param_1 >> 0x10;
        uVar1 = uVar11 / param_3;
        return (param_1 & 0xffff | (uVar11 - param_3 * uVar1) * 0x10000) / param_3 | uVar1 << 0x10;
      }
    }
    if (param_3 == 0) {
      return param_1;
    }
    if (param_3 == 2) {
      return (uint)((param_2 & 1) != 0) << 0x1f | param_1 >> 1;
    }
    return param_1;
  }
  if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
    return 0;
  }
  if (0xffff < param_4) {
    uVar1 = param_2 / param_4;
    param_2 = param_2 - param_4 * uVar1;
    uVar11 = (uint)((ulonglong)param_3 * (ulonglong)uVar1 >> 0x20);
    if (param_2 <= uVar11 &&
        (uint)((uint)((ulonglong)param_3 * (ulonglong)uVar1) <= param_1) <= param_2 - uVar11) {
      uVar1 = uVar1 - 1;
    }
    return uVar1;
  }
  uVar11 = LZCOUNT(param_4) - 0xf;
  uVar7 = LZCOUNT(param_4) - LZCOUNT(param_2);
  uVar1 = param_3 << (uVar11 & 0xff);
  uVar11 = 0x20 - uVar11 & 0x1f;
  uVar11 = ((param_4 ^ param_3) >> uVar11 | (param_4 ^ param_3) << 0x20 - uVar11) ^ uVar1;
  uVar10 = uVar7 - 0xf;
  if (uVar7 < 0xf || uVar10 == 0) {
LAB_0801565e:
    uVar7 = LZCOUNT(param_2) + -0xf + uVar7;
    uVar10 = param_1 << (uVar7 & 0xff);
    uVar7 = 0x20 - uVar7 & 0x1f;
    uVar7 = ((param_2 ^ param_1) >> uVar7 | (param_2 ^ param_1) << 0x20 - uVar7) ^ uVar10;
    uVar2 = uVar7 / uVar11;
    uVar7 = uVar7 - uVar11 * uVar2;
    uVar11 = (uint)((ulonglong)uVar1 * (ulonglong)uVar2 >> 0x20);
    if (uVar7 <= uVar11 &&
        (uint)((uint)((ulonglong)uVar1 * (ulonglong)uVar2) <= uVar10) <= uVar7 - uVar11) {
      uVar2 = uVar2 - 1;
    }
    return uVar2;
  }
LAB_080156ec:
  uVar2 = param_1 << LZCOUNT(param_2);
  uVar7 = 0x20U - LZCOUNT(param_2) & 0x1f;
  uVar3 = ((param_2 ^ param_1) >> uVar7 | (param_2 ^ param_1) << 0x20 - uVar7) ^ uVar2;
  uVar12 = uVar3 / uVar11;
  uVar3 = uVar3 - uVar11 * uVar12;
  uVar5 = (uint)((ulonglong)uVar1 * (ulonglong)uVar12);
  uVar8 = (uint)((ulonglong)uVar1 * (ulonglong)uVar12 >> 0x20);
  uVar7 = uVar2 - uVar5;
  uVar4 = (uVar3 - uVar8) - (uint)(uVar5 > uVar2);
  if (uVar3 <= uVar8 && (uint)(uVar5 <= uVar2) <= uVar3 - uVar8) {
    uVar12 = uVar12 - 1;
    bVar13 = CARRY4(uVar7,uVar1);
    uVar7 = uVar7 + uVar1;
    uVar4 = uVar4 + uVar11 + (uint)bVar13;
  }
  if (0xe < uVar10) {
    uVar10 = uVar10 - 0xf;
    uVar3 = uVar4 << 0xf | uVar7 >> 0x11;
    uVar9 = uVar3 / uVar11;
    uVar3 = uVar3 - uVar11 * uVar9;
    uVar5 = (uint)((ulonglong)uVar1 * (ulonglong)uVar9);
    uVar8 = (uint)((ulonglong)uVar1 * (ulonglong)uVar9 >> 0x20);
    uVar2 = uVar7 * 0x8000;
    uVar7 = uVar2 - uVar5;
    uVar4 = (uVar3 - uVar8) - (uint)(uVar5 > uVar2);
    if (uVar3 <= uVar8 && (uint)(uVar5 <= uVar2) <= uVar3 - uVar8) {
      uVar9 = uVar9 - 1;
      bVar13 = CARRY4(uVar7,uVar1);
      uVar7 = uVar7 + uVar1;
      uVar4 = uVar4 + uVar11 + (uint)bVar13;
    }
    uVar12 = uVar9 | uVar12 << 0xf;
  }
  if (uVar10 != 0) {
    uVar3 = uVar7 << (uVar10 & 0xff);
    uVar2 = 0x20 - uVar10 & 0x1f;
    uVar7 = ((uVar4 ^ uVar7) >> uVar2 | (uVar4 ^ uVar7) << 0x20 - uVar2) ^ uVar3;
    uVar2 = uVar7 / uVar11;
    uVar7 = uVar7 - uVar11 * uVar2;
    uVar11 = (uint)((ulonglong)uVar1 * (ulonglong)uVar2 >> 0x20);
    if (uVar7 <= uVar11 &&
        (uint)((uint)((ulonglong)uVar1 * (ulonglong)uVar2) <= uVar3) <= uVar7 - uVar11) {
      uVar2 = uVar2 - 1;
    }
    return uVar12 << (uVar10 & 0xff) | uVar2;
  }
  return uVar12;
}



/* FUN_080155bc at 080155bc */

ulonglong FUN_080155bc(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  if (param_4 != 0) {
    if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
      return 0;
    }
    if (0xffff < param_4) {
      uVar11 = param_2 / param_4;
      param_2 = param_2 - param_4 * uVar11;
      uVar4 = (uint)((ulonglong)param_3 * (ulonglong)uVar11 >> 0x20);
      if (param_2 <= uVar4 &&
          (uint)((uint)((ulonglong)param_3 * (ulonglong)uVar11) <= param_1) <= param_2 - uVar4) {
        uVar11 = uVar11 - 1;
      }
      return (ulonglong)uVar11;
    }
    uVar4 = LZCOUNT(param_4) - 0xf;
    uVar7 = LZCOUNT(param_4) - LZCOUNT(param_2);
    uVar11 = param_3 << (uVar4 & 0xff);
    uVar4 = 0x20 - uVar4 & 0x1f;
    uVar4 = ((param_4 ^ param_3) >> uVar4 | (param_4 ^ param_3) << 0x20 - uVar4) ^ uVar11;
    uVar10 = uVar7 - 0xf;
    if (uVar7 < 0xf || uVar10 == 0) {
LAB_0801565e:
      uVar7 = LZCOUNT(param_2) + -0xf + uVar7;
      uVar10 = param_1 << (uVar7 & 0xff);
      uVar7 = 0x20 - uVar7 & 0x1f;
      uVar7 = ((param_2 ^ param_1) >> uVar7 | (param_2 ^ param_1) << 0x20 - uVar7) ^ uVar10;
      uVar1 = uVar7 / uVar4;
      uVar7 = uVar7 - uVar4 * uVar1;
      uVar4 = (uint)((ulonglong)uVar11 * (ulonglong)uVar1 >> 0x20);
      if (uVar7 <= uVar4 &&
          (uint)((uint)((ulonglong)uVar11 * (ulonglong)uVar1) <= uVar10) <= uVar7 - uVar4) {
        uVar1 = uVar1 - 1;
      }
      return (ulonglong)uVar1;
    }
LAB_080156ec:
    uVar1 = param_1 << LZCOUNT(param_2);
    uVar7 = 0x20U - LZCOUNT(param_2) & 0x1f;
    uVar2 = ((param_2 ^ param_1) >> uVar7 | (param_2 ^ param_1) << 0x20 - uVar7) ^ uVar1;
    uVar12 = uVar2 / uVar4;
    uVar2 = uVar2 - uVar4 * uVar12;
    uVar5 = (uint)((ulonglong)uVar11 * (ulonglong)uVar12);
    uVar8 = (uint)((ulonglong)uVar11 * (ulonglong)uVar12 >> 0x20);
    uVar7 = uVar1 - uVar5;
    uVar3 = (uVar2 - uVar8) - (uint)(uVar5 > uVar1);
    if (uVar2 <= uVar8 && (uint)(uVar5 <= uVar1) <= uVar2 - uVar8) {
      uVar12 = uVar12 - 1;
      bVar13 = CARRY4(uVar7,uVar11);
      uVar7 = uVar7 + uVar11;
      uVar3 = uVar3 + uVar4 + (uint)bVar13;
    }
    if (0xe < uVar10) {
      uVar10 = uVar10 - 0xf;
      uVar2 = uVar3 << 0xf | uVar7 >> 0x11;
      uVar9 = uVar2 / uVar4;
      uVar2 = uVar2 - uVar4 * uVar9;
      uVar5 = (uint)((ulonglong)uVar11 * (ulonglong)uVar9);
      uVar8 = (uint)((ulonglong)uVar11 * (ulonglong)uVar9 >> 0x20);
      uVar1 = uVar7 * 0x8000;
      uVar7 = uVar1 - uVar5;
      uVar3 = (uVar2 - uVar8) - (uint)(uVar5 > uVar1);
      if (uVar2 <= uVar8 && (uint)(uVar5 <= uVar1) <= uVar2 - uVar8) {
        uVar9 = uVar9 - 1;
        bVar13 = CARRY4(uVar7,uVar11);
        uVar7 = uVar7 + uVar11;
        uVar3 = uVar3 + uVar4 + (uint)bVar13;
      }
      uVar12 = uVar9 | uVar12 << 0xf;
    }
    if (uVar10 != 0) {
      uVar2 = uVar7 << (uVar10 & 0xff);
      uVar1 = 0x20 - uVar10 & 0x1f;
      uVar7 = ((uVar3 ^ uVar7) >> uVar1 | (uVar3 ^ uVar7) << 0x20 - uVar1) ^ uVar2;
      uVar1 = uVar7 / uVar4;
      uVar7 = uVar7 - uVar4 * uVar1;
      uVar4 = (uint)((ulonglong)uVar11 * (ulonglong)uVar1 >> 0x20);
      if (uVar7 <= uVar4 &&
          (uint)((uint)((ulonglong)uVar11 * (ulonglong)uVar1) <= uVar2) <= uVar7 - uVar4) {
        uVar1 = uVar1 - 1;
      }
      return CONCAT44(uVar12 >> (0x20 - uVar10 & 0xff),uVar12 << (uVar10 & 0xff) | uVar1);
    }
    return (ulonglong)uVar12;
  }
  if (param_2 == 0) {
    if (2 < param_3) {
      return (ulonglong)(param_1 / param_3);
    }
  }
  else {
    if (0xffff < param_3) {
      if (param_3 < 0x1000000) {
        uVar11 = (param_2 - param_3 * (param_2 / param_3)) * 0x100 | param_1 >> 0x18;
        uVar7 = uVar11 / param_3;
        uVar4 = uVar7 | param_1 << 8;
        uVar11 = (uVar11 - param_3 * uVar7) * 0x100 | uVar4 >> 0x18;
        uVar7 = uVar11 / param_3;
        uVar4 = uVar7 | uVar4 << 8;
        uVar11 = (uVar11 - param_3 * uVar7) * 0x100 | uVar4 >> 0x18;
        uVar7 = uVar11 / param_3;
        uVar4 = uVar7 | uVar4 << 8;
        return CONCAT44(param_2 / param_3,
                        ((uVar11 - param_3 * uVar7) * 0x100 | uVar4 >> 0x18) / param_3 | uVar4 << 8)
        ;
      }
      uVar11 = 0xf - LZCOUNT(param_3);
      iVar6 = LZCOUNT(param_3) - LZCOUNT(param_2);
      uVar4 = param_3 >> (uVar11 & 0xff);
      uVar11 = uVar11 & 0x1f;
      uVar7 = iVar6 + 0x20;
      uVar11 = (param_3 >> uVar11 | param_3 << 0x20 - uVar11) ^ uVar4;
      uVar10 = iVar6 + 0x11;
      if (uVar7 < 0xf || uVar10 == 0) goto LAB_0801565e;
      goto LAB_080156ec;
    }
    if (2 < param_3) {
      uVar4 = (param_2 - param_3 * (param_2 / param_3)) * 0x10000 | param_1 >> 0x10;
      uVar11 = uVar4 / param_3;
      return CONCAT44(param_2 / param_3,
                      (param_1 & 0xffff | (uVar4 - param_3 * uVar11) * 0x10000) / param_3 |
                      uVar11 << 0x10);
    }
  }
  if (param_3 == 0) {
    return CONCAT44(param_2,param_1);
  }
  if (param_3 == 2) {
    return CONCAT44(param_2 >> 1,(uint)((param_2 & 1) != 0) << 0x1f | param_1 >> 1);
  }
  return CONCAT44(param_2,param_1);
}



/* FUN_080157ec at 080157ec */

void FUN_080157ec(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_2 * 2;
  if (uVar1 < 0xffe00001) {
    uVar1 = param_4 * 2;
  }
  if ((uVar1 < 0xffe00001) && ((int)(param_2 | param_4) < 0)) {
    return;
  }
  return;
}



/* FUN_0801581c at 0801581c */

void FUN_0801581c(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_2 * 2;
  if (uVar1 < 0xffe00001) {
    uVar1 = param_4 * 2;
  }
  if ((uVar1 < 0xffe00001) && ((int)(param_2 | param_4) < 0)) {
    return;
  }
  return;
}



/* FUN_0801584c at 0801584c */

ulonglong FUN_0801584c(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (uint)(param_2 << 1) >> 0x15;
  iVar3 = uVar2 - 0x3fe;
  if (iVar3 != 0 && 0x3fd < uVar2) {
    uVar1 = param_2 >> 0x1f;
    uVar4 = -iVar3 + 0x20;
    uVar2 = param_2 << 0xb | param_1 >> 0x15 | 0x80000000;
    if (uVar4 != 0 && iVar3 < 0x21) {
      return CONCAT44(uVar1,(uVar2 >> (uVar4 & 0xff)) + uVar1 ^ uVar1);
    }
    uVar5 = -iVar3 + 0x40;
    if (uVar5 != 0 && (int)uVar5 < 0 == SCARRY4(uVar4,0x20)) {
      uVar4 = ((param_1 << 0xb) >> (uVar5 & 0xff)) + (uVar2 << (0x20 - uVar5 & 0xff));
      return CONCAT44((uVar2 >> (uVar5 & 0xff)) + uVar1 + (uint)CARRY4(uVar4,uVar1) ^ uVar1,
                      uVar4 + uVar1 ^ uVar1);
    }
    if (uVar5 != 0xfffffc3f) {
      return CONCAT44(~uVar1,~uVar1) ^ 0x8000000000000000;
    }
  }
  return 0;
}



/* FUN_080158a8 at 080158a8 */

undefined8 FUN_080158a8(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar5 = param_2 >> 0x1f;
  uVar2 = param_1 + uVar5 ^ uVar5;
  uVar4 = param_2 + uVar5 + (uint)CARRY4(param_1,uVar5) ^ uVar5;
  if (uVar4 != 0) {
    uVar3 = uVar2 << LZCOUNT(uVar4);
    iVar1 = -LZCOUNT(uVar4);
    uVar6 = iVar1 + 0x20U & 0x1f;
    uVar4 = ((uVar4 ^ uVar2) >> uVar6 | (uVar4 ^ uVar2) << 0x20 - uVar6) ^ uVar3;
    uVar6 = uVar3 >> 0xb;
    bVar7 = 0x80000000 < uVar3 * 0x200000 ||
            uVar3 * 0x200000 + 0x80000000 < (uint)((uVar3 & 0x800) != 0);
    uVar2 = uVar4 * 0x200000;
    return CONCAT44((uVar5 << 0x1f | (iVar1 + 0x43d) * 0x100000) +
                    (uVar4 >> 0xb) +
                    (uint)(CARRY4(uVar6,uVar2) || CARRY4(uVar6 + uVar2,(uint)bVar7)),
                    uVar6 + uVar2 + bVar7);
  }
  uVar4 = 0;
  if (uVar2 != 0) {
    uVar6 = uVar2 << LZCOUNT(uVar2);
    uVar4 = LZCOUNT(uVar2) * -0x100000 + 0x41d00000 + (uVar6 >> 0xb) | uVar5 << 0x1f;
    uVar2 = uVar6 << 0x15;
  }
  return CONCAT44(uVar4,uVar2);
}



/* FUN_08015900 at 08015900 */

undefined4 FUN_08015900(void)

{
  undefined4 unaff_r7;
  
  FUN_0801c3d4();
  return unaff_r7;
}



/* FUN_08015908 at 08015908 */

undefined4 FUN_08015908(undefined4 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0801591c(param_1);
  *param_2 = (int)((ulonglong)uVar1 >> 0x20);
  return (int)uVar1;
}



/* FUN_0801591c at 0801591c */

ulonglong FUN_0801591c(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (param_1 << 1) >> 0x18;
  if (uVar1 == 0) {
    if ((param_1 & 0x7fffffff) != 0) {
      iVar2 = LZCOUNT(param_1 << 9);
      return CONCAT44(-(iVar2 + 0x7e),
                      (param_1 & 0x80000000 | ((param_1 << 9) << iVar2) >> 8) + 0x3e800000);
    }
  }
  else if (uVar1 != 0xff) {
    return CONCAT44(uVar1 - 0x7e,param_1 + (uVar1 - 0x7e) * -0x800000);
  }
  return (ulonglong)param_1;
}



/* FUN_08015950 at 08015950 */

float FUN_08015950(float param_1,float param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint in_fpscr;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if ((((((int)param_1 << 1) >> 0x18 == -1) || (ABS(param_1) == 0.0)) ||
      (((int)param_2 << 1) >> 0x18 == -1)) || (ABS(param_2) == 0.0)) {
    if ((((int)param_1 << 1) >> 0x18 == -1) && (((uint)param_1 & 0x7fffff) != 0)) {
      return param_1;
    }
    if ((((int)param_2 << 1) >> 0x18 != -1) || (((uint)param_2 & 0x7fffff) == 0)) {
      if (((int)param_2 << 1 == 0) ||
         ((((int)param_2 << 1) >> 0x18 == -1 && (((uint)param_2 & 0x7fffff) == 0)))) {
        if ((((int)param_1 << 1) >> 0x18 == -1) && (((uint)param_1 & 0x7fffff) == 0)) {
          return DAT_08015ba8;
        }
      }
      else {
        if (ABS(param_1) != 0.0) {
          if ((((int)param_1 << 1) >> 0x18 == -1) && (((uint)param_1 & 0x7fffff) == 0)) {
            return param_1 * param_2;
          }
          return (float)((uint)param_2 & 0x80000000);
        }
        uVar1 = (uint)ABS(param_2) >> 0x17;
        param_3 = param_3 + uVar1;
        if ((uVar1 == 0) || (param_3 < 1)) {
          if (ABS(param_2) != 0.0) {
            param_2 = (float)FUN_0801c428(param_2);
          }
        }
        else if (param_3 < 0xff) {
          param_2 = (float)((uint)param_2 & 0x807fffff | param_3 * 0x800000);
        }
        else {
          param_2 = (float)((uint)param_2 & 0x80000000 | 0x7f800000);
        }
      }
    }
    return param_2;
  }
  if (DAT_08015ba4 <= param_1) {
    if (param_1 < DAT_08015bac != (NAN(param_1) || NAN(DAT_08015bac))) {
      iVar3 = (int)(param_1 * DAT_08015bb0 +
                   (float)((uint)(param_1 * DAT_08015bb0) & 0x80000000 | 0x3f000000));
      fVar4 = (float)VectorSignedToFloat(iVar3,(byte)((in_fpscr & 0xfffffff) >> 0x15) & 3);
      fVar4 = (param_1 - fVar4 * DAT_08015bb4) - fVar4 * DAT_08015bb8;
      iVar2 = (uint)(ABS(fVar4) < DAT_08015bbc) << 0x1f;
      if (iVar2 < 0) {
        fVar4 = param_2;
      }
      if (-1 < iVar2) {
        fVar5 = fVar4 * fVar4 * DAT_08015bc4;
        fVar4 = (fVar4 * fVar4 * DAT_08015bc0 + 0.5) * fVar4;
        fVar4 = ((fVar5 + fVar4 + 1.0) / ((fVar5 - fVar4) + 1.0)) * param_2;
      }
      uVar1 = (uint)ABS(fVar4) >> 0x17;
      iVar2 = param_3 + iVar3 + uVar1;
      if ((uVar1 != 0) && (0 < iVar2)) {
        if (0xfe < iVar2) {
          return (float)((uint)fVar4 & 0x80000000 | 0x7f800000);
        }
        return (float)((uint)fVar4 & 0x807fffff | iVar2 * 0x800000);
      }
      if (ABS(fVar4) == 0.0) {
        return fVar4;
      }
      fVar4 = (float)FUN_0801c428();
      return fVar4;
    }
    param_2 = (float)((uint)param_2 & 0x80000000 | 0x7f800000);
  }
  else {
    param_2 = (float)((uint)param_2 & 0x80000000);
  }
  return param_2;
}



/* FUN_08015bc8 at 08015bc8 */

uint FUN_08015bc8(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint in_r12;
  uint uVar3;
  bool bVar4;
  
  uVar1 = 0;
  while (((uint)param_1 & 3) != 0) {
    bVar4 = param_3 != 0;
    param_3 = param_3 - 1;
    uVar2 = param_3;
    if (bVar4) {
      in_r12 = (uint)(byte)*param_2;
      uVar1 = (byte)*param_1 - in_r12;
      uVar2 = uVar1;
      param_2 = (uint *)((int)param_2 + 1);
      param_1 = (uint *)((int)param_1 + 1);
    }
    if (uVar2 != 0) {
      return uVar1;
    }
  }
  if (((uint)param_2 & 3) == 0) {
    do {
      uVar3 = param_3;
      uVar2 = uVar3 - 4;
      bVar4 = uVar2 == 0;
      if (3 < uVar3) {
        uVar1 = *param_1;
        in_r12 = *param_2;
        bVar4 = uVar1 == in_r12;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
      }
      param_3 = uVar2;
    } while (bVar4);
    param_3 = uVar3;
    if (uVar2 < 0xfffffffc) {
      uVar1 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
              uVar1 >> 0x18;
      uVar3 = in_r12 << 0x18 | (in_r12 >> 8 & 0xff) << 0x10 | (in_r12 >> 0x10 & 0xff) << 8 |
              in_r12 >> 0x18;
      uVar2 = uVar1 - uVar3;
      bVar4 = uVar2 != 0;
      if (uVar1 < uVar3) {
        uVar2 = 0xffffffff;
      }
      if (uVar1 >= uVar3 && bVar4) {
        uVar2 = 1;
      }
      return uVar2;
    }
  }
  do {
    uVar3 = param_3;
    uVar2 = uVar3 - 1;
    if (uVar3 != 0) {
      uVar1 = (uint)(byte)*param_1 - (uint)(byte)*param_2;
      uVar2 = uVar1;
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = (uint *)((int)param_2 + 1);
    }
    param_3 = uVar3 - 1;
  } while (uVar2 == 0);
  if (uVar3 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* thunk_FUN_08015c3c at 08015c30 */

undefined4 thunk_FUN_08015c3c(byte *param_1,byte *param_2,int param_3)

{
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    if (*param_1 != *param_2) break;
    if (*param_1 == 0) {
      return 0;
    }
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
  }
  if (*param_2 <= *param_1) {
    return 1;
  }
  return 0xffffffff;
}



/* FUN_08015c3c at 08015c3c */

undefined4 FUN_08015c3c(byte *param_1,byte *param_2,int param_3)

{
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    if (*param_1 != *param_2) break;
    if (*param_1 == 0) {
      return 0;
    }
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
  }
  if (*param_2 <= *param_1) {
    return 1;
  }
  return 0xffffffff;
}



/* FUN_08015c58 at 08015c58 */

void FUN_08015c58(void)

{
  undefined4 uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined4 in_r3;
  
  pbVar2 = DAT_08015d30;
  uVar1 = DAT_08015d2c;
  FUN_0800bfec(DAT_08015d2c,s_M562_Report__08015d40);
  FUN_0800bfec(uVar1,s_XYZAB_08015d50);
  if ((int)((uint)*pbVar2 << 0x1f) < 0) {
    uVar3 = 0x2b;
  }
  else {
    uVar3 = 0x2d;
  }
  FUN_08015cc2((uint)*pbVar2,uVar3);
  if ((int)((uint)*pbVar2 << 0x1e) < 0) {
    uVar3 = 0x2b;
  }
  else {
    uVar3 = 0x2d;
  }
  FUN_08015cc2((uint)*pbVar2,uVar3);
  if ((int)((uint)*pbVar2 << 0x1d) < 0) {
    uVar3 = 0x2b;
  }
  else {
    uVar3 = 0x2d;
  }
  FUN_08015cc2((uint)*pbVar2,uVar3);
  if ((int)((uint)*pbVar2 << 0x1c) < 0) {
    uVar3 = 0x2b;
  }
  else {
    uVar3 = 0x2d;
  }
  FUN_08015cc2((uint)*pbVar2,uVar3);
  if ((int)((uint)*pbVar2 << 0x1b) < 0) {
    uVar3 = 0x2b;
  }
  else {
    uVar3 = 0x2d;
  }
  FUN_08015cc2((uint)*pbVar2,uVar3);
  FUN_0800bfec(uVar1,&DAT_08015d28,in_r3);
  return;
}



/* FUN_08015cc2 at 08015cc2 */

void FUN_08015cc2(void)

{
  FUN_0800bf64();
  return;
}



/* FUN_08015cc8 at 08015cc8 */

void FUN_08015cc8(void)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = FUN_0800b04c(0x58);
  pbVar1 = DAT_08015d30;
  if (iVar2 != 0) {
    *DAT_08015d30 = *DAT_08015d30 ^ 1;
  }
  iVar2 = FUN_0800b04c(0x59);
  if (iVar2 != 0) {
    *pbVar1 = *pbVar1 ^ 2;
  }
  iVar2 = FUN_0800b04c(0x5a);
  if (iVar2 != 0) {
    *pbVar1 = *pbVar1 ^ 4;
  }
  FUN_0800b04c(0x45);
  FUN_08015d34();
  FUN_0800b04c(0x41);
  FUN_08015d34();
  iVar2 = FUN_0800b04c(0x42);
  if (iVar2 != 0) {
    *pbVar1 = *pbVar1 ^ 0x10;
  }
  FUN_08015c58();
  return;
}



/* FUN_08015d34 at 08015d34 */

void FUN_08015d34(int param_1)

{
  byte *unaff_r4;
  
  if (param_1 != 0) {
    *unaff_r4 = *unaff_r4 ^ 8;
  }
  return;
}



/* FUN_08015d58 at 08015d58 */

int FUN_08015d58(uint *param_1)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1 & 3;
  puVar3 = param_1;
  while (uVar4 != 0) {
    puVar2 = (uint *)((int)puVar3 + 1);
    if ((char)*puVar3 == '\0') goto LAB_08015d8a;
    puVar3 = puVar2;
    uVar4 = (uint)puVar2 & 3;
  }
  uVar4 = *puVar3;
  while ((uVar4 + 0xfefefeff & ~uVar4 & 0x80808080) == 0) {
    puVar3 = puVar3 + 1;
    uVar4 = *puVar3;
  }
  cVar1 = (char)*puVar3;
  puVar2 = puVar3;
  while (puVar2 = (uint *)((int)puVar2 + 1), cVar1 != '\0') {
    cVar1 = *(char *)puVar2;
  }
LAB_08015d8a:
  return (int)puVar2 - (int)((int)param_1 + 1);
}



/* FUN_08015de2 at 08015de2 */

undefined4 FUN_08015de2(int param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = DAT_08015e98;
  FUN_0801c6c2(DAT_08015e98,param_1);
  FUN_0801c6fa(uVar1);
  for (uVar2 = 0; uVar2 < *param_2; uVar2 = uVar2 + 1) {
    FUN_0800de30(*(undefined1 *)(param_1 + uVar2));
  }
  return 0;
}



/* FUN_08015e0e at 08015e0e */

longlong FUN_08015e0e(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  uint unaff_r7;
  uint uVar5;
  undefined4 in_lr;
  bool bVar6;
  
  piVar2 = DAT_08015ea4;
  iVar1 = DAT_08015e98;
  iVar4 = *(int *)(DAT_08015e98 + 0x218);
  if ((*(char *)(DAT_08015e98 + 0x1fc) != '\x03') || (*DAT_08015ea0 == '\0')) {
    for (bVar3 = 0; (uint)bVar3 < (param_2 & 0xff); bVar3 = bVar3 + 1) {
      do {
      } while (-1 < *piVar2 << 0x18);
      piVar2[1] = (int)*(char *)(param_1 + (uint)bVar3);
    }
    return CONCAT44(param_4,2);
  }
  if (*(int *)(iVar4 + 0x214) != 0) {
    uVar5 = 0;
    while (((uint)(*DAT_08015ea8 - *DAT_08015ea8) < 100 && (*(int *)(iVar4 + 0x214) != 0))) {
      bVar6 = 10000 < uVar5;
      uVar5 = uVar5 + 1;
      if (bVar6) {
        *DAT_08015ea0 = '\0';
LAB_08015e92:
        return CONCAT44(param_4,1);
      }
    }
    if (*(int *)(iVar4 + 0x214) != 0) goto LAB_08015e92;
  }
  FUN_0801c6b2(DAT_08015e98,param_1,param_2);
  iVar4 = *(int *)(iVar1 + 0x218);
  if (iVar4 == 0) {
    return CONCAT44(unaff_r7,2);
  }
  if (*(int *)(iVar4 + 0x214) == 0) {
    *(undefined4 *)(iVar4 + 0x214) = 1;
    FUN_0801f886(iVar1,0x81,*(undefined4 *)(iVar4 + 0x208),*(uint *)(iVar4 + 0x210) & 0xffff,
                 unaff_r7,in_lr);
    return (ulonglong)unaff_r7 << 0x20;
  }
  return CONCAT44(unaff_r7,1);
}



/* FUN_08015eac at 08015eac */

void FUN_08015eac(uint param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = DAT_08015efc;
  if (param_1 >> 0xc < 10) {
    cVar2 = '0';
  }
  else {
    cVar2 = '7';
  }
  *(char *)(DAT_08015efc + 6) = cVar2 + (char)(param_1 >> 0xc);
  if ((param_1 >> 8 & 0xf) < 10) {
    cVar2 = '0';
  }
  else {
    cVar2 = '7';
  }
  *(byte *)(iVar1 + 7) = cVar2 + ((byte)(param_1 >> 8) & 0xf);
  if ((param_1 << 0x18) >> 0x1c < 10) {
    cVar2 = '0';
  }
  else {
    cVar2 = '7';
  }
  *(byte *)(iVar1 + 8) = cVar2 + ((byte)param_1 >> 4);
  if ((param_1 & 0xf) < 10) {
    cVar2 = '0';
  }
  else {
    cVar2 = '7';
  }
  *(byte *)(iVar1 + 9) = cVar2 + ((byte)param_1 & 0xf);
  return;
}



/* FUN_08015f00 at 08015f00 */

undefined8 FUN_08015f00(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_080160c4;
  if (*(char *)(DAT_080160c4 + 0x18) == '\x01') {
    iVar2 = 2;
  }
  else {
    *(undefined1 *)(DAT_080160c4 + 0x18) = 1;
    iVar2 = FUN_08015f8c(50000);
    if (iVar2 == 0) {
      if (param_1 == 0) {
        FUN_0801603a(param_2,param_3 & 0xff);
      }
      else if (param_1 == 1) {
        FUN_0801600e(param_2,param_3 & 0xffff);
      }
      else if (param_1 == 2) {
        FUN_08015ffc(param_2,param_3);
      }
      else {
        FUN_08015fd8(param_2,0,param_3,param_4);
      }
      iVar2 = FUN_08015f8c(50000);
      *DAT_080160c8 = *DAT_080160c8 & 0xfffffffe;
    }
    *(undefined1 *)(iVar1 + 0x18) = 0;
  }
  return CONCAT44(param_4,iVar2);
}



/* FUN_08015f70 at 08015f70 */

undefined4 FUN_08015f70(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = DAT_080160d8;
  puVar1 = DAT_080160d0;
  uVar3 = 0;
  if ((int)DAT_080160d0[3] < 0) {
    *DAT_080160d0 = DAT_080160d4;
    *puVar1 = uVar2;
    if ((int)puVar1[3] < 0) {
      uVar3 = 1;
    }
  }
  return uVar3;
}



/* FUN_08015f8c at 08015f8c */

undefined4 FUN_08015f8c(uint param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = DAT_080160cc;
  *(undefined4 *)(DAT_080160c4 + 0x1c) = 0;
  iVar2 = FUN_0801c724();
  while ((int)(*puVar1 << 0xf) < 0) {
    if ((param_1 != 0xffffffff) &&
       ((param_1 == 0 || (iVar3 = FUN_0801c724(), param_1 < (uint)(iVar3 - iVar2))))) {
      return 3;
    }
  }
  if ((int)(*puVar1 << 0x1f) < 0) {
    *puVar1 = 1;
  }
  if ((*puVar1 & 0x1f2) == 0) {
    return 0;
  }
  FUN_0801604e();
  return 1;
}



/* FUN_08015fd8 at 08015fd8 */

void FUN_08015fd8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  
  puVar1 = DAT_080160c8;
  *DAT_080160c8 = *DAT_080160c8 & 0xfffffcff;
  *puVar1 = *puVar1 | 0x300;
  *puVar1 = *puVar1 | 1;
  *param_1 = param_3;
  param_1[1] = param_4;
  return;
}



/* FUN_08015ffc at 08015ffc */

void FUN_08015ffc(void)

{
  undefined8 uVar1;
  
  FUN_0801602c();
  uVar1 = FUN_08016020();
  *(undefined4 *)uVar1 = (int)((ulonglong)uVar1 >> 0x20);
  return;
}



/* FUN_0801600e at 0801600e */

void FUN_0801600e(void)

{
  undefined6 uVar1;
  
  FUN_0801602c();
  uVar1 = FUN_08016020();
  *(undefined2 *)uVar1 = (short)((uint6)uVar1 >> 0x20);
  return;
}



/* FUN_08016020 at 08016020 */

void FUN_08016020(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  uint unaff_r4;
  
  *param_3 = unaff_r4;
  *param_3 = *param_3 | 1;
  return;
}



/* FUN_0801602c at 0801602c */

void FUN_0801602c(void)

{
  *DAT_080160c8 = *DAT_080160c8 & 0xfffffcff;
  return;
}



/* FUN_0801603a at 0801603a */

void FUN_0801603a(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  undefined1 *puVar1;
  undefined1 extraout_r1;
  uint unaff_r4;
  
  puVar1 = (undefined1 *)FUN_0801602c();
  *param_3 = unaff_r4;
  *param_3 = *param_3 | 1;
  *puVar1 = extraout_r1;
  return;
}



/* FUN_0801604e at 0801604e */

void FUN_0801604e(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = DAT_080160cc;
  iVar1 = DAT_080160c4;
  if (*DAT_080160cc << 0x1b < 0) {
    *(uint *)(DAT_080160c4 + 0x1c) = *(uint *)(DAT_080160c4 + 0x1c) | 0x10;
    *piVar2 = 0x10;
  }
  if (*piVar2 << 0x1a < 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 8;
    *piVar2 = 0x20;
  }
  if (*piVar2 << 0x19 < 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 4;
    *piVar2 = 0x40;
  }
  if (*piVar2 << 0x18 < 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 2;
    *piVar2 = 0x80;
  }
  if (*piVar2 << 0x17 < 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 1;
    *piVar2 = 0x100;
  }
  if (*piVar2 << 0x1e < 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x20;
    *piVar2 = 2;
  }
  return;
}



/* FUN_080160dc at 080160dc */

void FUN_080160dc(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = DAT_08016128;
  uVar2 = 0;
  if (param_2 != 0) {
    if (param_2 == 1) {
      uVar2 = 0x100;
    }
    else if (param_2 == 2) {
      uVar2 = 0x200;
    }
    else {
      uVar2 = 0x300;
    }
  }
  *DAT_08016128 = *DAT_08016128 & 0xfffffcff;
  *puVar1 = uVar2 | *puVar1;
  *puVar1 = *puVar1 & 0xffffff07;
  *puVar1 = param_1 << 3 | 2U | *puVar1;
  *puVar1 = *puVar1 | 0x10000;
  return;
}



/* FUN_0801612c at 0801612c */

undefined4 FUN_0801612c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0801613c(param_1);
  return uVar1;
}



/* FUN_0801613c at 0801613c */

uint FUN_0801613c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = (param_1 << 1) >> 0x18;
  uVar2 = uVar1 - 0x7e;
  if (uVar2 == 0 || uVar1 < 0x7e) {
    bVar3 = CARRY4(param_1,param_1);
    if ((param_1 & 0x7fffffff) != 0) {
      param_1 = 0x3f800000;
    }
    if (bVar3) {
      param_1 = 0x80000000;
    }
  }
  else if ((int)uVar2 < 0x18) {
    uVar1 = 0xffffff >> (uVar2 & 0xff);
    if (-1 < (int)param_1) {
      param_1 = param_1 + uVar1;
    }
    return param_1 & ~uVar1;
  }
  return param_1;
}



/* FUN_08016168 at 08016168 */

undefined4 FUN_08016168(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08016178(param_1);
  return uVar1;
}



/* FUN_08016178 at 08016178 */

uint FUN_08016178(uint param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = (param_1 << 1) >> 0x18;
  uVar2 = uVar1 - 0x7e;
  if (uVar2 == 0 || uVar1 < 0x7e) {
    bVar3 = CARRY4(param_1,param_1);
    if ((param_1 & 0x7fffffff) != 0) {
      param_1 = 0xbf800000;
    }
    if (!bVar3) {
      param_1 = 0;
    }
  }
  else if ((int)uVar2 < 0x18) {
    uVar1 = 0xffffff >> (uVar2 & 0xff);
    if ((int)param_1 < 0) {
      param_1 = param_1 + uVar1;
    }
    return param_1 & ~uVar1;
  }
  return param_1;
}



/* FUN_080161dc at 080161dc */

void FUN_080161dc(float *param_1,float *param_2,float *param_3)

{
  FUN_0800bce8(*param_2 * *param_2 - *param_1 * 2.0 * *param_3);
  return;
}



/* FUN_080161fc at 080161fc */

float FUN_080161fc(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  pfVar2 = DAT_0801625c;
  pfVar1 = DAT_08016258;
  fVar3 = *DAT_08016258;
  if (fVar3 == 0.0) {
    return 1.0;
  }
  fVar4 = *param_1;
  if (fVar4 < fVar3 == (NAN(fVar4) || NAN(fVar3))) {
    return DAT_08016254;
  }
  if (DAT_08016258[2] != fVar4) {
    DAT_08016258[2] = fVar4;
    *pfVar2 = 1.0 - *param_1 * pfVar1[1];
  }
  return *pfVar2;
}



/* FUN_08016260 at 08016260 */

uint FUN_08016260(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = ((param_1 << 1) >> 0x18) - 0x7e;
  if (iVar3 < 0) {
    return 0;
  }
  uVar5 = (int)param_1 >> 0x1f;
  uVar4 = 0x20 - iVar3;
  if (uVar4 != 0 && iVar3 < 0x21) {
    uVar2 = param_1 << 8 | 0x80000000;
    uVar1 = uVar4 & 0xff;
    return (uVar2 >> (uVar4 & 0xff)) + uVar5 +
           (uint)(uVar1 == 0 && (param_1 & 0x1000000) != 0 ||
                 uVar1 != 0 && (uVar2 >> uVar1 - 1 & 1) != 0) ^ uVar5;
  }
  return ~uVar5 ^ 0x80000000;
}



/* FUN_08016290 at 08016290 */

void FUN_08016290(undefined4 param_1,undefined4 param_2)

{
  FUN_08018a58(param_1,param_2,0);
  return;
}



/* FUN_08016298 at 08016298 */

undefined8 FUN_08016298(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 local_c;
  
  local_c = 0;
  uVar1 = (uint)*DAT_080162bc;
  FUN_08010f84(param_1,param_1 + 4,param_1 + 8,param_1 + 0xc,param_2,uVar1,&local_c);
  return CONCAT44(uVar1,param_2);
}



/* FUN_080162c0 at 080162c0 */

uint FUN_080162c0(byte *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint unaff_r7;
  byte bVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  
  pbVar4 = param_1;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  for (; (uVar1 = (uint)*pbVar4, uVar1 - 9 < 5 || (uVar1 == 0x20)); pbVar4 = pbVar4 + 1) {
  }
  if (uVar1 == 0x2d || uVar1 == 0x2b) {
    bVar7 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  }
  else {
    bVar7 = 0x2b;
  }
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    *param_2 = param_1;
    return 0;
  }
  pbVar5 = pbVar4;
  if ((int)param_3 < 1) {
    if (*pbVar4 != 0x30) {
      param_3 = 10;
      goto LAB_08016342;
    }
    if ((pbVar4[1] | 0x20) != 0x78) {
      param_3 = 8;
      goto LAB_08016342;
    }
    param_3 = 0x10;
  }
  else {
    bVar9 = param_3 == 0x10;
    if (bVar9) {
      uVar1 = (uint)*pbVar4;
    }
    bVar10 = bVar9 && uVar1 == 0x30;
    if (bVar9 && uVar1 == 0x30) {
      bVar10 = (pbVar4[1] | 0x20) == 0x78;
    }
    if (!bVar10) goto LAB_08016342;
  }
  pbVar4 = pbVar4 + 2;
  pbVar5 = pbVar4;
LAB_08016342:
  for (; *pbVar4 == 0x30; pbVar4 = pbVar4 + 1) {
  }
  pbVar6 = pbVar4;
  uVar1 = 0;
  uVar8 = 0;
  while( true ) {
    uVar3 = uVar1;
    uVar1 = (uint)*pbVar6;
    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 + 0x20;
    }
    iVar2 = FUN_0801c730(s_0123456789abcdefghijklmnopqrstuv_080163ec,uVar1,param_3);
    if (iVar2 == 0) break;
    unaff_r7 = iVar2 - 0xecU & 0xff;
    pbVar6 = pbVar6 + 1;
    uVar1 = param_3 * uVar3 + unaff_r7;
    uVar8 = uVar3;
  }
  if (pbVar5 == pbVar6) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  if (((int)(pbVar6 + (-(uint)(byte)(&DAT_08016414)[param_3] - (int)pbVar4)) < 0) ||
     ((((int)(pbVar6 + (-(uint)(byte)(&DAT_08016414)[param_3] - (int)pbVar4)) < 1 &&
       (unaff_r7 <= uVar3)) && ((uVar3 - unaff_r7) / param_3 == uVar8)))) {
    if (bVar7 == 0x2d) {
      uVar3 = -uVar3;
    }
  }
  else {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 1;
    }
    uVar3 = 0xffffffff;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pbVar6;
    return uVar3;
  }
  return uVar3;
}



/* thunk_FUN_080163dc at 080163da */

void thunk_FUN_080163dc(undefined4 param_1)

{
  FUN_080162c0(param_1,0,10,0);
  return;
}



/* FUN_080163dc at 080163dc */

void FUN_080163dc(undefined4 param_1)

{
  FUN_080162c0(param_1,0,10,0);
  return;
}



/* FUN_080163e4 at 080163e4 */

void FUN_080163e4(void)

{
  FUN_080162c0();
  return;
}



/* FUN_08016448 at 08016448 */

undefined4 FUN_08016448(char *param_1)

{
  if (*param_1 != '\x01' && *param_1 != '\x02') {
    return 0;
  }
  *param_1 = '\0';
  *(undefined4 *)(param_1 + 0xc) = *DAT_080164ec;
  return 1;
}



/* FUN_08016466 at 08016466 */

undefined4 FUN_08016466(char *param_1)

{
  if (*param_1 == '\x01') {
    *param_1 = '\x02';
    *(undefined4 *)(param_1 + 0xc) = *DAT_080164ec;
    return 1;
  }
  return 0;
}



/* FUN_08016480 at 08016480 */

undefined4 FUN_08016480(char *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == '\x01') {
    return 0;
  }
  if (*param_1 == '\x02') {
    uVar1 = FUN_080164c8();
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  else {
    FUN_080164b0(param_1);
  }
  *param_1 = '\x01';
  *(undefined4 *)(param_1 + 8) = *DAT_080164ec;
  return 1;
}



/* FUN_080164b0 at 080164b0 */

void FUN_080164b0(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



/* FUN_080164bc at 080164bc */

int FUN_080164bc(char *param_1)

{
  int iVar1;
  
  iVar1 = (int)*param_1;
  if (iVar1 != 1) {
    iVar1 = 0;
  }
  return iVar1;
}



/* FUN_080164c8 at 080164c8 */

int FUN_080164c8(char *param_1)

{
  int iVar1;
  
  if (*param_1 == '\x01') {
    iVar1 = *DAT_080164ec;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  return *(int *)(param_1 + 4) + (uint)(iVar1 - *(int *)(param_1 + 8)) / 1000;
}



/* FUN_080164f0 at 080164f0 */

int FUN_080164f0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *local_1c;
  undefined4 *local_18;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_18 = &uStack_8;
  local_1c = param_1;
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = FUN_0801c788((int)&DAT_0801652c + DAT_0801652c,&local_1c,param_2,&local_18,0);
  *local_1c = 0;
  if (-1 < iVar1) {
    iVar1 = (int)local_1c - (int)param_1;
  }
  return iVar1;
}



/* FUN_08016530 at 08016530 */

void FUN_08016530(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    return;
  }
  do {
    param_1 = (char *)FUN_0801174c(param_1,cVar1);
    pcVar2 = param_1;
    pcVar3 = param_2;
    if (param_1 == (char *)0x0) {
      return;
    }
    do {
      pcVar3 = pcVar3 + 1;
      if (*pcVar3 == '\0') {
        return;
      }
      pcVar2 = pcVar2 + 1;
    } while (*pcVar2 == *pcVar3);
    param_1 = param_1 + 1;
  } while( true );
}



/* FUN_08016560 at 08016560 */

void FUN_08016560(void)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_r3;
  byte bVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined4 uStack_28;
  
  iVar3 = DAT_08016778;
  pbVar2 = DAT_08016774;
  if (*DAT_08016774 == 0) {
    uStack_28 = in_r3;
    FUN_08012510(DAT_08016778,0x294);
    FUN_08012510(pbVar2 + 4,0x4e0);
    iVar4 = DAT_0801677c;
    if (*(char *)(DAT_0801677c + 0x24) == '\0') {
      FUN_0801288a(DAT_0801677c);
    }
    bVar9 = *(char *)(iVar4 + 0x24) == '\0';
    if (!bVar9) {
      iVar5 = FUN_0801312c(iVar4);
      bVar9 = iVar5 == 0;
    }
    if (!bVar9) {
      FUN_0801313a(iVar4);
      thunk_FUN_08017eec(iVar4);
      FUN_0800f64c(pbVar2 + 4,s_G28_X_G28_Y__080167ac,0xd);
      uVar6 = FUN_0800bca0(*(undefined4 *)(iVar3 + 0xc));
      FUN_0801d5ac(uVar6,1,3,auStack_38);
      uVar6 = FUN_0800bca0(*(undefined4 *)(iVar3 + 0x10));
      FUN_0801d5ac(uVar6,1,3,auStack_48);
      FUN_080164f0(pbVar2 + 100,s_G92_Z_s_E_s__080167bc,auStack_38,auStack_48);
      FUN_0800f64c(pbVar2 + 0xc4,s_M117_Continuing_____080167cc,0x14);
      bVar7 = 3;
      uVar8 = (uint)*(byte *)(iVar3 + 0x24);
      while( true ) {
        cVar1 = *(char *)(iVar3 + 0x25);
        if (cVar1 == '\0') break;
        FUN_08016870(pbVar2 + (short)(ushort)bVar7 * 0x60 + 4,(short)uVar8 * 0x60 + iVar3 + 0x26);
        *(char *)(iVar3 + 0x25) = cVar1 + -1;
        uVar8 = (uVar8 + 1) % 6;
        bVar7 = bVar7 + 1;
      }
      iVar5 = iVar3 + 0x271;
      *pbVar2 = bVar7;
      FUN_08012a56(iVar4,iVar5,1,0);
      *(undefined4 *)(iVar4 + 0x358) = *(undefined4 *)(iVar3 + 0x268);
      FUN_080184cc(iVar4 + 0x128);
      FUN_08011842(s__PRINTFILE__080167e0);
      FUN_08011842(iVar5);
      FUN_08011842(s___SYS_BUILD__080167ec);
      FUN_08011842(s__PRINTFILE__080167e0);
      FUN_08011842(iVar5);
      FUN_08011842(s___SYS_BUILD__080167ec);
      FUN_080118c6();
      FUN_0800b748();
    }
  }
  return;
}



/* FUN_080166ac at 080166ac */

undefined4 FUN_080166ac(void)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  undefined4 in_r3;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_18;
  
  iVar2 = DAT_0801677c;
  pcVar1 = DAT_08016778;
  uStack_18 = in_r3;
  if (*(char *)(DAT_0801677c + 0x23) != '\0') {
    cVar5 = *DAT_08016778 + '\x01';
    if (cVar5 == '\0') {
      cVar5 = '\x01';
    }
    *DAT_08016778 = cVar5;
    pcVar1[0x270] = *pcVar1;
    uVar7 = DAT_08016780[1];
    uVar8 = DAT_08016780[2];
    uVar9 = DAT_08016780[3];
    *(undefined4 *)(pcVar1 + 4) = *DAT_08016780;
    *(undefined4 *)(pcVar1 + 8) = uVar7;
    *(undefined4 *)(pcVar1 + 0xc) = uVar8;
    *(undefined4 *)(pcVar1 + 0x10) = uVar9;
    pcVar3 = DAT_08016788;
    *(undefined4 *)(pcVar1 + 0x14) = *DAT_08016784;
    pcVar4 = DAT_0801678c;
    pcVar1[0x18] = *DAT_0801678c;
    pcVar1[0x19] = pcVar4[1];
    pcVar4 = DAT_08016790;
    pcVar1[0x1a] = *DAT_08016790;
    pcVar1[0x1b] = pcVar4[1];
    uVar7 = DAT_08016798;
    pcVar1[0x24] = *DAT_08016794;
    pcVar1[0x25] = *pcVar3;
    FUN_0800f62c(pcVar1 + 0x26,uVar7,0x240);
    iVar6 = FUN_080164c8(DAT_0801679c);
    *(int *)(pcVar1 + 0x26c) = iVar6 * 1000;
    FUN_080129fe(iVar2,pcVar1 + 0x271);
    uVar7 = DAT_080167a0;
    *(undefined4 *)(pcVar1 + 0x268) = *(undefined4 *)(iVar2 + 0x358);
    iVar6 = FUN_0801e2c4(DAT_080167a4,uVar7,0);
    if (((iVar6 == 0) && (iVar6 = FUN_08016764(), iVar6 == 0)) &&
       (iVar6 = FUN_0801e52e(iVar2,pcVar1,0x294,&uStack_18), iVar6 == 0)) {
      FUN_0801e758(iVar2);
    }
  }
  return uStack_18;
}



/* FUN_08016764 at 08016764 */

/* WARNING: Removing unreachable block (ram,0x0801e4c6) */
/* WARNING: Removing unreachable block (ram,0x0801e4ca) */
/* WARNING: Removing unreachable block (ram,0x0801e4d2) */
/* WARNING: Removing unreachable block (ram,0x0801e4d4) */
/* WARNING: Removing unreachable block (ram,0x0801e4d6) */
/* WARNING: Removing unreachable block (ram,0x0801e4da) */
/* WARNING: Removing unreachable block (ram,0x0801e4c2) */
/* WARNING: Removing unreachable block (ram,0x0801e474) */
/* WARNING: Removing unreachable block (ram,0x0801e47a) */
/* WARNING: Removing unreachable block (ram,0x0801e484) */
/* WARNING: Removing unreachable block (ram,0x0801e4a2) */
/* WARNING: Removing unreachable block (ram,0x0801e4a8) */
/* WARNING: Removing unreachable block (ram,0x0801e4f2) */
/* WARNING: Removing unreachable block (ram,0x0801e506) */
/* WARNING: Removing unreachable block (ram,0x0801e488) */
/* WARNING: Removing unreachable block (ram,0x0801e4e2) */
/* WARNING: Removing unreachable block (ram,0x0801e494) */
/* WARNING: Removing unreachable block (ram,0x0801e4e8) */
/* WARNING: Removing unreachable block (ram,0x0801e49a) */
/* WARNING: Removing unreachable block (ram,0x0801e4a0) */
/* WARNING: Removing unreachable block (ram,0x0801e4e4) */

int FUN_08016764(void)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  int local_50;
  int local_4c;
  byte local_46;
  int local_2c;
  byte local_1d;
  char *local_1c;
  int *piStack_18;
  
  piVar2 = DAT_080167a8;
  piStack_18 = DAT_080167a8;
  local_1c = s_RECOVERY_BIN_080167fc;
  if (DAT_080167a8 == (int *)0x0) {
    return 9;
  }
  iVar3 = FUN_0801e048(&local_1c,&local_50,10);
  bVar8 = iVar3 == 0;
  if (bVar8) {
    local_4c = local_50;
    iVar3 = FUN_0801deb4(&local_4c,local_1c);
    if (iVar3 == 0) {
      if ((int)((uint)local_1d << 0x18) < 0) {
        iVar3 = 6;
      }
      else {
        iVar3 = FUN_0801d63e(&local_4c,1);
      }
    }
    if (iVar3 != 0) {
      bVar8 = iVar3 == 4;
      if (bVar8) {
        piVar4 = DAT_0801e520;
        if (*DAT_0801e520 != 0) {
          piVar4 = (int *)DAT_0801e520[4];
        }
        if (*DAT_0801e520 != 0 && piVar4 != (int *)0x0) {
          iVar3 = 0x12;
        }
        else {
          iVar3 = FUN_0801dcfa(&local_4c);
        }
        if (iVar3 == 0) goto LAB_0801e3a4;
        goto LAB_0801e410;
      }
      goto LAB_0801e412;
    }
    if ((local_46 & 0x11) != 0) {
      iVar3 = 7;
      goto LAB_0801e508;
    }
LAB_0801e3a4:
    FUN_0801d614(local_2c + 0xe,0);
    FUN_0801d614(local_2c + 0x16,0);
    iVar6 = local_2c;
    *(undefined1 *)(local_2c + 0xb) = 0x20;
    iVar5 = FUN_0801dcae(local_50,local_2c);
    FUN_0801dcd4(local_50,iVar6,0);
    FUN_0801d614(local_2c + 0x1c,0);
    *(undefined1 *)(local_50 + 3) = 1;
    if (iVar5 != 0) {
      uVar7 = *(undefined4 *)(local_50 + 0x2c);
      iVar3 = FUN_0801e79c();
      if (iVar3 == 0) {
        iVar3 = FUN_0801d7aa(local_50,uVar7);
        *(int *)(local_50 + 0xc) = iVar5 + -1;
      }
LAB_0801e410:
      bVar8 = iVar3 == 0;
      goto LAB_0801e412;
    }
  }
  else {
LAB_0801e412:
    if (!bVar8) goto LAB_0801e508;
  }
  piVar2[9] = *(int *)(local_50 + 0x2c);
  piVar2[10] = local_2c;
  iVar6 = FUN_0801d698(&local_4c,1);
  piVar2[4] = iVar6;
  if (iVar6 != 0) {
    iVar6 = FUN_0801dcae(local_50,local_2c);
    piVar2[2] = iVar6;
    iVar6 = FUN_0801d5f6(local_2c + 0x1c);
    piVar2[3] = iVar6;
    piVar2[0xb] = 0;
    *piVar2 = local_50;
    uVar1 = *(undefined2 *)(local_50 + 6);
    *(undefined2 *)(piVar2 + 1) = uVar1;
    *(undefined1 *)((int)piVar2 + 0x15) = 0;
    piVar2[8] = 0;
    piVar2[6] = 0;
    *(undefined1 *)(piVar2 + 5) = 0x4a;
    FUN_0801e524(0,uVar1,0x200);
    return iVar3;
  }
  iVar3 = 2;
LAB_0801e508:
  *piVar2 = 0;
  return iVar3;
}



/* FUN_0801683e at 0801683e */

void FUN_0801683e(int param_1)

{
  *(undefined1 *)(param_1 + 1) = 0x19;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* FUN_08016848 at 08016848 */

int FUN_08016848(int param_1,code *param_2,int param_3,int param_4)

{
  int iVar1;
  
  if ((param_2 != (code *)0x0 && param_1 != 0) && (iVar1 = param_1, param_4 != 0)) {
    do {
      (*param_2)(iVar1);
      param_4 = param_4 + -1;
      iVar1 = iVar1 + param_3;
    } while (param_4 != 0);
  }
  return param_1;
}



/* FUN_08016870 at 08016870 */

uint * FUN_08016870(uint *param_1,uint *param_2)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = param_1;
  if ((((uint)param_1 ^ (uint)param_2) & 3) == 0) {
    uVar3 = (uint)param_1 & 3;
    while (uVar3 != 0) {
      uVar3 = *param_2;
      *(char *)puVar2 = (char)uVar3;
      if ((char)uVar3 == '\0') {
        return param_1;
      }
      uVar3 = (uint)((int)puVar2 + 1) & 3;
      puVar2 = (uint *)((int)puVar2 + 1);
      param_2 = (uint *)((int)param_2 + 1);
    }
    uVar3 = *param_2;
    while ((uVar3 + 0xfefefeff & ~uVar3 & 0x80808080) == 0) {
      *puVar2 = uVar3;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
      uVar3 = *param_2;
    }
  }
  cVar1 = (char)*param_2;
  while( true ) {
    param_2 = (uint *)((int)param_2 + 1);
    *(char *)puVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = *(char *)param_2;
    puVar2 = (uint *)((int)puVar2 + 1);
  }
  return param_1;
}



/* FUN_080168bc at 080168bc */

void FUN_080168bc(char *param_1,char *param_2)

{
  char cVar1;
  
  for (; *param_1 != '\0'; param_1 = param_1 + 1) {
  }
  do {
    *param_1 = *param_2;
    cVar1 = *param_1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return;
}



/* thunk_FUN_08018386 at 080168dc */

int thunk_FUN_08018386(int param_1,byte *param_2,undefined1 *param_3)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  byte *pbVar7;
  bool bVar8;
  
  if ((*(byte *)(param_1 + 3) < 2) || ((*(byte *)(param_1 + 8) & 0x1f) != 0)) {
    return -1;
  }
  do {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    while( true ) {
      iVar3 = FUN_080182ac(param_1,param_2,0x20);
      if (iVar3 != 0x20) {
        if (iVar3 != 0) {
          return -1;
        }
        return 0;
      }
      uVar2 = (ushort)*param_2;
      if (uVar2 == 0) {
        return 0;
      }
      if (uVar2 == 0xe5 || uVar2 == 0x2e) break;
      iVar3 = 0x20;
      if (param_3 != (undefined1 *)0x0) {
        uVar6 = param_2[0xb] & 0x3f;
        bVar8 = uVar6 == 0xf;
        if (bVar8) {
          uVar6 = *(ushort *)(param_2 + 0x1a);
        }
        if (((bVar8 && uVar6 == 0) && ((*param_2 & 0x1f) != 0)) && ((uVar2 & 0x1f) < 3)) {
          iVar3 = (int)(short)(((uVar2 & 0x1f) - 1) * 0xd);
          iVar4 = 0;
          do {
            pbVar7 = (byte *)(uint)*(ushort *)(param_2 + iVar4 * 2 + 1);
            iVar5 = iVar4;
            while( true ) {
              iVar4 = iVar5 + 1;
              param_3[iVar5 + iVar3] = (char)pbVar7;
              if (0xc < iVar4) {
                if ((int)((uint)*param_2 << 0x19) < 0) {
                  param_3[iVar3 + 0xd] = 0;
                }
                goto LAB_08018420;
              }
              if (iVar4 < 5) break;
              pbVar7 = param_2 + iVar4 * 2;
              iVar1 = iVar5 + -10;
              if (iVar4 < 0xb) {
                pbVar7 = (byte *)(uint)*(ushort *)(pbVar7 + 4);
              }
              iVar5 = iVar4;
              if (iVar1 < 0 == SBORROW4(iVar4,0xb)) {
                pbVar7 = (byte *)(uint)*(ushort *)(pbVar7 + 6);
              }
            }
          } while( true );
        }
      }
LAB_08018420:
      if (-1 < (int)((uint)param_2[0xb] << 0x1c)) {
        return (int)(char)iVar3;
      }
    }
  } while( true );
}



/* FUN_080168e0 at 080168e0 */

void FUN_080168e0(int param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + 0x1c0);
  while ((param_2 < *puVar1 || (*puVar1 + puVar1[1] <= param_2))) {
    puVar1 = (uint *)puVar1[2];
    if (puVar1 == (uint *)0x0) {
      return;
    }
  }
  return;
}



/* FUN_080168fe at 080168fe */

undefined4 FUN_080168fe(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = DAT_08017068;
  if (*DAT_08017068 == 0) {
    DAT_08017068[1] = 0x1000;
    piVar1[2] = 0x10000;
    piVar1[3] = -1;
    piVar1[4] = -1;
    iVar3 = DAT_08017070;
    iVar2 = DAT_0801706c;
    piVar1[5] = 4;
    *(undefined4 *)(iVar2 + 0x1bc) = 4;
    *piVar1 = iVar3;
  }
  return 1;
}



/* FUN_08016930 at 08016930 */

void FUN_08016930(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if ((param_2 + 8U & 7) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 8 - (param_2 + 8U) & 7;
  }
  param_2 = param_2 + uVar1;
  uVar1 = param_3 - uVar1;
  *(int *)(param_1 + 0x18) = param_2;
  *(uint *)(param_1 + 0xc) = uVar1;
  *(uint *)(param_2 + 4) = uVar1 | 1;
  *(undefined4 *)(param_2 + 4 + uVar1) = 0x28;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(DAT_08017068 + 0x10);
  return;
}



/* FUN_08016962 at 08016962 */

undefined8 FUN_08016962(uint *param_1,int param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  bool bVar11;
  uint *local_28;
  
  if ((param_2 + 8U & 7) != 0) {
    param_2 = param_2 + (8 - (param_2 + 8U) & 7);
  }
  puVar4 = param_3;
  if (((uint)(param_3 + 2) & 7) != 0) {
    puVar4 = (uint *)((int)param_3 + (8U - (int)(param_3 + 2) & 7));
  }
  puVar8 = (uint *)(param_2 + param_4);
  uVar10 = (int)puVar4 + (-param_4 - param_2);
  *(uint *)(param_2 + 4) = param_4 | 3;
  if (puVar4 <= puVar8) {
    FUN_0801e7a6();
  }
  if (-1 < (int)((uint)(byte)puVar4[1] << 0x1f)) {
    FUN_0801e7a6();
  }
  if (uVar10 < 0x10) {
    FUN_0801e7a6();
  }
  local_28 = param_3;
  if (puVar4 == (uint *)param_1[6]) {
    uVar1 = param_1[3];
    param_1[3] = uVar1 + uVar10;
    param_1[6] = (uint)puVar8;
    puVar8[1] = uVar1 + uVar10 | 1;
    goto LAB_08016c82;
  }
  if (puVar4 == (uint *)param_1[5]) {
    uVar10 = uVar10 + param_1[2];
    param_1[2] = uVar10;
    param_1[5] = (uint)puVar8;
    puVar8[1] = uVar10 | 1;
    *(uint *)((int)puVar8 + uVar10) = uVar10;
    goto LAB_08016c82;
  }
  uVar1 = puVar4[1];
  if ((uVar1 & 3) == 1) {
    local_28 = (uint *)(uVar1 >> 3);
    if (local_28 < (uint *)0x20) {
      puVar7 = (uint *)puVar4[2];
      puVar9 = (uint *)puVar4[3];
      if (puVar4 == puVar9) {
        FUN_0801e7a6();
      }
      if (puVar4 == puVar7) {
        FUN_0801e7a6();
      }
      if ((puVar4[1] & 0xfffffff8) != (int)local_28 * 8) {
        FUN_0801e7a6();
      }
      if ((puVar7 != param_1 + (int)local_28 * 2 + 10) &&
         ((puVar7 < (uint *)param_1[4] || ((uint *)puVar7[3] != puVar4)))) goto LAB_08016b54;
      if (puVar9 == puVar7) {
        *param_1 = *param_1 & ~(1 << ((uint)local_28 & 0xff));
      }
      else {
        if ((puVar9 != param_1 + (int)local_28 * 2 + 10) &&
           ((puVar9 < (uint *)param_1[4] || ((uint *)puVar9[2] != puVar4)))) goto LAB_08016b54;
        puVar7[3] = (uint)puVar9;
        puVar9[2] = (uint)puVar7;
      }
    }
    else {
      puVar7 = (uint *)puVar4[3];
      uVar5 = puVar4[6];
      if (puVar7 == puVar4) {
        puVar7 = (uint *)puVar4[5];
        puVar9 = puVar4 + 5;
        if (puVar7 == (uint *)0x0) {
          puVar9 = puVar4 + 4;
          puVar7 = (uint *)*puVar9;
          if (puVar7 == (uint *)0x0) goto LAB_08016ae4;
        }
        while( true ) {
          puVar2 = puVar7 + 5;
          uVar6 = *puVar2;
          if (uVar6 == 0) {
            puVar2 = puVar7 + 4;
            local_28 = (uint *)*puVar2;
          }
          if (uVar6 == 0 && local_28 == (uint *)0x0) break;
          puVar7 = (uint *)*puVar2;
          puVar9 = puVar2;
        }
        if (puVar9 < (uint *)param_1[4]) goto LAB_08016ae0;
        *puVar9 = (uint)local_28;
      }
      else {
        uVar6 = puVar4[2];
        if (param_1[4] <= uVar6) {
          puVar9 = *(uint **)(uVar6 + 0xc);
          bVar11 = puVar9 == puVar4;
          if (bVar11) {
            puVar9 = (uint *)puVar7[2];
          }
          if (bVar11 && puVar9 == puVar4) {
            *(uint **)(uVar6 + 0xc) = puVar7;
            puVar7[2] = uVar6;
            goto LAB_08016ae4;
          }
        }
LAB_08016ae0:
        FUN_0801e7a6();
      }
LAB_08016ae4:
      local_28 = param_3;
      if (uVar5 != 0) {
        if (puVar4 == (uint *)param_1[puVar4[7] + 0x4c]) {
          param_1[puVar4[7] + 0x4c] = (uint)puVar7;
          if (puVar7 == (uint *)0x0) {
            param_1[1] = param_1[1] & ~(1 << (puVar4[7] & 0xff));
            goto LAB_08016b58;
          }
        }
        else if (uVar5 < param_1[4]) {
          FUN_0801e7a6();
        }
        else {
          bVar11 = *(uint **)(uVar5 + 0x10) != puVar4;
          if (bVar11) {
            *(uint **)(uVar5 + 0x14) = puVar7;
          }
          if (!bVar11) {
            *(uint **)(uVar5 + 0x10) = puVar7;
          }
        }
        if (puVar7 != (uint *)0x0) {
          puVar9 = (uint *)param_1[4];
          if (puVar7 < puVar9) {
LAB_08016b54:
            FUN_0801e7a6();
          }
          else {
            puVar7[6] = uVar5;
            puVar2 = (uint *)puVar4[4];
            if (puVar2 != (uint *)0x0) {
              if (puVar9 <= puVar2) {
                puVar7[4] = (uint)puVar2;
              }
              if (puVar9 <= puVar2) {
                puVar2[6] = (uint)puVar7;
              }
              else {
                FUN_0801e7a6();
              }
            }
            uVar5 = puVar4[5];
            if (uVar5 != 0) {
              if (uVar5 < param_1[4]) goto LAB_08016b54;
              puVar7[5] = uVar5;
              *(uint **)(uVar5 + 0x18) = puVar7;
            }
          }
        }
      }
    }
LAB_08016b58:
    puVar4 = (uint *)((int)puVar4 + (uVar1 & 0xfffffff8));
    uVar10 = uVar10 + (uVar1 & 0xfffffff8);
  }
  puVar4[1] = puVar4[1] & 0xfffffffe;
  puVar8[1] = uVar10 | 1;
  uVar1 = uVar10 >> 3;
  *(uint *)((int)puVar8 + uVar10) = uVar10;
  if (uVar1 < 0x20) {
    puVar4 = param_1 + uVar1 * 2 + 10;
    if (uVar10 < 0x10) {
      FUN_0801e7a6();
    }
    if ((int)((*param_1 >> (uVar1 & 0xff)) << 0x1f) < 0) {
      puVar7 = (uint *)puVar4[2];
      if (puVar7 < (uint *)param_1[4]) {
        FUN_0801e7a6();
        puVar7 = puVar4;
      }
    }
    else {
      *param_1 = 1 << (uVar1 & 0xff) | *param_1;
      puVar7 = puVar4;
    }
    puVar4[2] = (uint)puVar8;
    puVar7[3] = (uint)puVar8;
    puVar8[2] = (uint)puVar7;
    puVar8[3] = (uint)puVar4;
  }
  else {
    uVar1 = uVar10 >> 8;
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else if (uVar1 < 0x10000) {
      uVar5 = uVar1 - 0x100 >> 0x10 & 8;
      iVar3 = uVar1 << uVar5;
      uVar1 = iVar3 - 0x1000U >> 0x10 & 4;
      iVar3 = iVar3 << uVar1;
      uVar6 = iVar3 - 0x4000U >> 0x10 & 2;
      iVar3 = (((0xe - uVar5) - uVar1) - uVar6) + ((uint)(iVar3 << uVar6) >> 0xf);
      uVar1 = (uVar10 >> (iVar3 + 7U & 0xff) & 1) + iVar3 * 2;
    }
    else {
      uVar1 = 0x1f;
    }
    puVar4 = param_1 + uVar1 + 0x4c;
    puVar8[7] = uVar1;
    puVar8[5] = 0;
    puVar8[4] = 0;
    if ((int)((param_1[1] >> (uVar1 & 0xff)) << 0x1f) < 0) {
      uVar5 = uVar10;
      uVar6 = *puVar4;
      if (uVar1 != 0x1f) {
        uVar5 = uVar10 << (0x19 - (uVar1 >> 1) & 0xff);
      }
      do {
        uVar1 = uVar6;
        if ((*(uint *)(uVar1 + 4) & 0xfffffff8) == uVar10) {
          uVar10 = *(uint *)(uVar1 + 8);
          if (uVar1 < param_1[4] || uVar10 < param_1[4]) goto LAB_08016c7e;
          *(uint **)(uVar10 + 0xc) = puVar8;
          *(uint **)(uVar1 + 8) = puVar8;
          puVar8[2] = uVar10;
          puVar8[3] = uVar1;
          puVar8[6] = 0;
          goto LAB_08016c82;
        }
        puVar4 = (uint *)(uVar1 + 0x10 + ((int)uVar5 >> 0x1f) * -4);
        uVar5 = uVar5 << 1;
        uVar6 = *puVar4;
      } while (*puVar4 != 0);
      if (puVar4 < (uint *)param_1[4]) {
LAB_08016c7e:
        FUN_0801e7a6();
        goto LAB_08016c82;
      }
      *puVar4 = (uint)puVar8;
      puVar8[6] = uVar1;
    }
    else {
      param_1[1] = 1 << (uVar1 & 0xff) | param_1[1];
      *puVar4 = (uint)puVar8;
      puVar8[6] = (uint)puVar4;
    }
    puVar8[3] = (uint)puVar8;
    puVar8[2] = (uint)puVar8;
  }
LAB_08016c82:
  return CONCAT44(local_28,param_2 + 8);
}



/* FUN_08016ca4 at 08016ca4 */

void FUN_08016ca4(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  uVar7 = param_1[6];
  piVar1 = (int *)FUN_080168e0(param_1,uVar7,param_3,param_4,param_2,param_3,param_4);
  uVar8 = *piVar1 + piVar1[1];
  if ((uVar8 - 0x27 & 7) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 8 - (uVar8 - 0x27) & 7;
  }
  uVar4 = (uVar8 + uVar4) - 0x2f;
  if (uVar4 < uVar7 + 0x10) {
    uVar4 = uVar7;
  }
  iVar2 = uVar4 + 0x18;
  iVar11 = 0;
  FUN_08016930(param_1,param_2,param_3 - 0x28);
  if ((uVar4 + 8 & 7) != 0) {
    FUN_0801e7a6();
  }
  *(undefined4 *)(uVar4 + 4) = 0x1b;
  uVar5 = param_1[0x71];
  uVar9 = param_1[0x72];
  uVar10 = param_1[0x73];
  *(uint *)(uVar4 + 8) = param_1[0x70];
  *(uint *)(uVar4 + 0xc) = uVar5;
  *(uint *)(uVar4 + 0x10) = uVar9;
  *(uint *)(uVar4 + 0x14) = uVar10;
  param_1[0x70] = param_2;
  param_1[0x71] = param_3;
  param_1[0x73] = param_4;
  param_1[0x72] = uVar4 + 8;
  while( true ) {
    *(undefined4 *)(iVar2 + 4) = 7;
    iVar11 = iVar11 + 1;
    if (uVar8 <= iVar2 + 8U) break;
    iVar2 = iVar2 + 4;
  }
  if (iVar11 < 2) {
    FUN_0801e7a6();
  }
  if (uVar4 != uVar7) {
    uVar4 = uVar4 - uVar7;
    *(uint *)(uVar7 + 4 + uVar4) = *(uint *)(uVar7 + 4 + uVar4) & 0xfffffffe;
    *(uint *)(uVar7 + 4) = uVar4 | 1;
    uVar8 = uVar4 >> 3;
    *(uint *)(uVar7 + uVar4) = uVar4;
    if (uVar8 < 0x20) {
      puVar6 = param_1 + uVar8 * 2 + 10;
      if (uVar4 < 0x10) {
        FUN_0801e7a6();
      }
      if ((int)((*param_1 >> (uVar8 & 0xff)) << 0x1f) < 0) {
        puVar3 = (uint *)param_1[uVar8 * 2 + 0xc];
        if (puVar3 < (uint *)param_1[4]) {
          FUN_0801e7a6();
          puVar3 = puVar6;
        }
      }
      else {
        *param_1 = *param_1 | 1 << (uVar8 & 0xff);
        puVar3 = puVar6;
      }
      param_1[uVar8 * 2 + 0xc] = uVar7;
      puVar3[3] = uVar7;
      *(uint **)(uVar7 + 8) = puVar3;
      *(uint **)(uVar7 + 0xc) = puVar6;
    }
    else {
      uVar8 = uVar4 >> 8;
      if (uVar8 == 0) {
        uVar8 = 0;
      }
      else if (uVar8 < 0x10000) {
        uVar5 = uVar8 - 0x100 >> 0x10 & 8;
        iVar2 = uVar8 << uVar5;
        uVar8 = iVar2 - 0x1000U >> 0x10 & 4;
        iVar2 = iVar2 << uVar8;
        uVar9 = iVar2 - 0x4000U >> 0x10 & 2;
        iVar2 = (((0xe - uVar5) - uVar8) - uVar9) + ((uint)(iVar2 << uVar9) >> 0xf);
        uVar8 = (uVar4 >> (iVar2 + 7U & 0xff) & 1) + iVar2 * 2;
      }
      else {
        uVar8 = 0x1f;
      }
      puVar6 = param_1 + uVar8 + 0x4c;
      *(uint *)(uVar7 + 0x1c) = uVar8;
      *(undefined4 *)(uVar7 + 0x14) = 0;
      *(undefined4 *)(uVar7 + 0x10) = 0;
      if ((int)((param_1[1] >> (uVar8 & 0xff)) << 0x1f) < 0) {
        uVar5 = uVar4;
        uVar9 = *puVar6;
        if (uVar8 != 0x1f) {
          uVar5 = uVar4 << (0x19 - (uVar8 >> 1) & 0xff);
        }
        do {
          uVar8 = uVar9;
          if ((*(uint *)(uVar8 + 4) & 0xfffffff8) == uVar4) {
            uVar4 = *(uint *)(uVar8 + 8);
            if (param_1[4] <= uVar8 && param_1[4] <= uVar4) {
              *(uint *)(uVar4 + 0xc) = uVar7;
              *(uint *)(uVar8 + 8) = uVar7;
              *(uint *)(uVar7 + 8) = uVar4;
              *(uint *)(uVar7 + 0xc) = uVar8;
              *(undefined4 *)(uVar7 + 0x18) = 0;
              return;
            }
            goto LAB_08016e72;
          }
          puVar6 = (uint *)(uVar8 + 0x10 + ((int)uVar5 >> 0x1f) * -4);
          uVar5 = uVar5 << 1;
          uVar9 = *puVar6;
        } while (*puVar6 != 0);
        if (puVar6 < (uint *)param_1[4]) {
LAB_08016e72:
          FUN_0801e7a6();
          return;
        }
        *puVar6 = uVar7;
        *(uint *)(uVar7 + 0x18) = uVar8;
      }
      else {
        param_1[1] = 1 << (uVar8 & 0xff) | param_1[1];
        *puVar6 = uVar7;
        *(uint **)(uVar7 + 0x18) = puVar6;
      }
      *(uint *)(uVar7 + 0xc) = uVar7;
      *(uint *)(uVar7 + 8) = uVar7;
    }
  }
  return;
}



/* FUN_08016e9c at 08016e9c */

int FUN_08016e9c(int param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int unaff_r4;
  uint *puVar6;
  
  piVar2 = DAT_08017068;
  if (*DAT_08017068 == 0) {
    FUN_080168fe();
  }
  iVar4 = piVar2[2];
  uVar5 = iVar4 + param_2 + 0x2f & ~(iVar4 - 1U);
  if (param_2 < uVar5) {
    puVar6 = (uint *)(param_1 + 0x1b0);
    if ((*(uint *)(param_1 + 0x1b8) == 0) ||
       ((uVar5 = uVar5 + *puVar6, *puVar6 < uVar5 && (uVar5 <= *(uint *)(param_1 + 0x1b8))))) {
      piVar1 = (int *)FUN_0801e7ac();
      if (piVar1 != (int *)0x0) {
        unaff_r4 = *piVar1;
      }
      if (piVar1 != (int *)0x0 && piVar1 != (int *)0xffffffff) {
        uVar5 = unaff_r4 + *puVar6;
        *puVar6 = uVar5;
        if (uVar5 < *(uint *)(param_1 + 0x1b4)) {
          uVar5 = *(uint *)(param_1 + 0x1b4);
        }
        *(uint *)(param_1 + 0x1b4) = uVar5;
        if (*(int *)(param_1 + 0x18) == 0) {
          if ((*(int **)(param_1 + 0x10) == (int *)0x0) || (piVar1 < *(int **)(param_1 + 0x10))) {
            *(int **)(param_1 + 0x10) = piVar1;
          }
          *(int **)(param_1 + 0x1c0) = piVar1;
          *(int *)(param_1 + 0x1c4) = unaff_r4;
          *(undefined4 *)(param_1 + 0x1cc) = 0;
          iVar4 = param_1 + 0x28;
          *(int *)(param_1 + 0x24) = *piVar2;
          *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
          uVar5 = 0;
          do {
            *(int *)(iVar4 + 0xc) = iVar4;
            *(int *)(iVar4 + 8) = iVar4;
            *(int *)(iVar4 + 0x14) = iVar4 + 8;
            *(int *)(iVar4 + 0x10) = iVar4 + 8;
            uVar5 = uVar5 + 2;
            iVar4 = iVar4 + 0x10;
          } while (uVar5 < 0x20);
          if (param_1 == DAT_0801706c) {
            iVar4 = unaff_r4 + -0x28;
            piVar2 = piVar1;
          }
          else {
            piVar2 = (int *)(param_1 + (*(uint *)(param_1 + -4) & 0xfffffff8) + -8);
            iVar4 = (int)piVar1 + (unaff_r4 - (int)piVar2) + -0x28;
          }
LAB_08016f90:
          FUN_08016930(param_1,piVar2,iVar4);
        }
        else {
          puVar3 = (uint *)(param_1 + 0x1c0);
          for (puVar6 = puVar3; puVar6 != (uint *)0x0; puVar6 = (uint *)puVar6[2]) {
            if (piVar1 == (int *)(*puVar6 + puVar6[1])) {
              if (-1 < (int)((uint)(byte)puVar6[3] << 0x1c)) {
                if ((*puVar6 <= *(uint *)(param_1 + 0x18)) &&
                   (*(uint *)(param_1 + 0x18) < *puVar6 + puVar6[1])) {
                  puVar6[1] = puVar6[1] + unaff_r4;
                  piVar2 = *(int **)(param_1 + 0x18);
                  iVar4 = unaff_r4 + *(int *)(param_1 + 0xc);
                  goto LAB_08016f90;
                }
              }
              break;
            }
          }
          if (piVar1 < *(int **)(param_1 + 0x10)) {
            *(int **)(param_1 + 0x10) = piVar1;
          }
          for (; puVar3 != (uint *)0x0; puVar3 = (uint *)puVar3[2]) {
            if (*puVar3 == (int)piVar1 + unaff_r4) {
              if (-1 < (int)((uint)(byte)puVar3[3] << 0x1c)) {
                uVar5 = *puVar3;
                *puVar3 = (uint)piVar1;
                puVar3[1] = unaff_r4 + puVar3[1];
                iVar4 = FUN_08016962(param_1,piVar1,uVar5,param_2);
                return iVar4;
              }
              break;
            }
          }
          FUN_08016ca4(param_1,piVar1,unaff_r4,0);
        }
        if (param_2 < *(uint *)(param_1 + 0xc)) {
          uVar5 = *(uint *)(param_1 + 0xc) - param_2;
          iVar4 = *(int *)(param_1 + 0x18);
          *(uint *)(param_1 + 0xc) = uVar5;
          *(uint *)(param_1 + 0x18) = iVar4 + param_2;
          *(uint *)(iVar4 + param_2 + 4) = uVar5 | 1;
          *(uint *)(iVar4 + 4) = param_2 | 3;
          return iVar4 + 8;
        }
      }
    }
  }
  return 0;
}



/* FUN_08017000 at 08017000 */

longlong FUN_08017000(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  piVar1 = DAT_08017068;
  if (*DAT_08017068 == 0) {
    DAT_08017068[1] = 0x1000;
    piVar1[2] = 0x10000;
    piVar1[3] = -1;
    piVar1[4] = -1;
    iVar3 = DAT_08017070;
    iVar2 = DAT_0801706c;
    piVar1[5] = 4;
    *(undefined4 *)(iVar2 + 0x1bc) = 4;
    *piVar1 = iVar3;
  }
  if ((param_2 < 0xffffffc0) && (uVar5 = *(uint *)(param_1 + 0x18), uVar5 != 0)) {
    uVar6 = *(uint *)(param_1 + 0xc);
    if (param_2 + 0x28 < uVar6) {
      puVar4 = (uint *)(param_1 + 0x1c0);
      do {
        if ((*puVar4 <= uVar5) && (uVar5 < *puVar4 + puVar4[1])) break;
        puVar4 = (uint *)puVar4[2];
      } while (puVar4 != (uint *)0x0);
    }
    uVar5 = *(uint *)(param_1 + 0x1c);
    bVar7 = uVar5 < uVar6;
    if (bVar7) {
      uVar5 = 0xffffffff;
    }
    if (bVar7) {
      *(uint *)(param_1 + 0x1c) = uVar5;
    }
  }
  return (ulonglong)param_4 << 0x20;
}



/* FUN_08017074 at 08017074 */

longlong FUN_08017074(uint *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  uVar11 = 0;
  uVar3 = param_2 >> 8;
  uVar2 = -param_2;
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else if (uVar3 < 0x10000) {
    uVar5 = uVar3 - 0x100 >> 0x10 & 8;
    iVar4 = uVar3 << uVar5;
    uVar3 = iVar4 - 0x1000U >> 0x10 & 4;
    iVar4 = iVar4 << uVar3;
    uVar9 = iVar4 - 0x4000U >> 0x10 & 2;
    iVar4 = (((0xe - uVar5) - uVar3) - uVar9) + ((uint)(iVar4 << uVar9) >> 0xf);
    uVar3 = (param_2 >> (iVar4 + 7U & 0xff) & 1) + iVar4 * 2;
  }
  else {
    uVar3 = 0x1f;
  }
  if (param_1[uVar3 + 0x4c] == 0) {
LAB_0801712a:
    iVar4 = 1 << (uVar3 & 0xff);
    uVar3 = (iVar4 * 2 | iVar4 * -2) & param_1[1];
    if (uVar3 == 0) goto LAB_080175f6;
    uVar7 = (uVar3 & -uVar3) - 1;
    uVar3 = uVar7 >> 0xc & 0x10;
    uVar7 = uVar7 >> uVar3;
    uVar5 = uVar7 >> 5 & 8;
    uVar7 = uVar7 >> uVar5;
    uVar9 = uVar7 >> 2 & 4;
    uVar7 = uVar7 >> uVar9;
    uVar10 = uVar7 >> 1 & 2;
    uVar7 = uVar7 >> uVar10;
    uVar6 = -((int)(uVar7 << 0x1e) >> 0x1f);
    uVar10 = param_1[(uVar7 >> (uVar6 & 0xff)) + uVar10 + uVar9 + uVar5 + uVar3 + uVar6 + 0x4c];
LAB_08017196:
    while (uVar10 != 0) {
      do {
        uVar3 = uVar10;
        uVar5 = (*(uint *)(uVar3 + 4) & 0xfffffff8) - param_2;
        if (uVar5 < uVar2) {
          uVar11 = uVar3;
          uVar2 = uVar5;
        }
        uVar10 = *(uint *)(uVar3 + 0x10);
      } while (*(uint *)(uVar3 + 0x10) != 0);
      uVar10 = *(uint *)(uVar3 + 0x14);
    }
  }
  else {
    uVar5 = param_2;
    if (uVar3 != 0x1f) {
      uVar5 = param_2 << (0x19 - (uVar3 >> 1) & 0xff);
    }
    uVar9 = param_1[uVar3 + 0x4c];
    uVar7 = 0;
    while ((uVar10 = uVar9, uVar9 = (*(uint *)(uVar10 + 4) & 0xfffffff8) - param_2, uVar2 <= uVar9
           || (uVar2 = uVar9, uVar11 = uVar10, uVar9 != 0))) {
      uVar6 = *(uint *)(uVar10 + 0x14);
      uVar9 = *(uint *)(uVar10 + 0x10 + ((int)uVar5 >> 0x1f) * -4);
      uVar10 = uVar7;
      if (uVar6 != 0 && uVar6 != uVar9) {
        uVar10 = uVar6;
      }
      if (uVar9 == 0) break;
      uVar5 = uVar5 << 1;
      uVar7 = uVar10;
    }
    if (uVar10 != 0) goto LAB_08017196;
    if (uVar11 == 0) goto LAB_0801712a;
  }
  if ((uVar11 == 0) || (param_1[2] - param_2 <= uVar2)) goto LAB_080175f6;
  if (param_1[4] <= uVar11) {
    uVar3 = *(uint *)(uVar11 + 4) & 0xfffffff8;
    if (uVar3 != param_2 + uVar2) {
      uVar3 = FUN_0801e7a6();
    }
    uVar5 = uVar11 + param_2;
    if (uVar11 < uVar5) {
      uVar9 = *(uint *)(uVar11 + 0xc);
      uVar7 = *(uint *)(uVar11 + 0x18);
      if (uVar9 == uVar11) {
        uVar9 = *(uint *)(uVar11 + 0x14);
        puVar8 = (uint *)(uVar11 + 0x14);
        if (uVar9 == 0) {
          puVar8 = (uint *)(uVar11 + 0x10);
          uVar9 = *puVar8;
          if (uVar9 == 0) goto LAB_0801722c;
        }
        while( true ) {
          puVar1 = (uint *)(uVar9 + 0x14);
          uVar10 = *puVar1;
          if (uVar10 == 0) {
            puVar1 = (uint *)(uVar9 + 0x10);
            uVar3 = *puVar1;
          }
          if (uVar10 == 0 && uVar3 == 0) break;
          uVar9 = *puVar1;
          puVar8 = puVar1;
        }
        if (puVar8 < (uint *)param_1[4]) goto LAB_08017228;
        *puVar8 = uVar3;
      }
      else {
        uVar3 = *(uint *)(uVar11 + 8);
        if (param_1[4] <= uVar3) {
          uVar10 = *(uint *)(uVar3 + 0xc);
          bVar12 = uVar10 == uVar11;
          if (bVar12) {
            uVar10 = *(uint *)(uVar9 + 8);
          }
          if (bVar12 && uVar10 == uVar11) {
            *(uint *)(uVar3 + 0xc) = uVar9;
            *(uint *)(uVar9 + 8) = uVar3;
            goto LAB_0801722c;
          }
        }
LAB_08017228:
        FUN_0801e7a6();
      }
LAB_0801722c:
      if (uVar7 != 0) {
        if (uVar11 == param_1[*(int *)(uVar11 + 0x1c) + 0x4c]) {
          param_1[*(int *)(uVar11 + 0x1c) + 0x4c] = uVar9;
          if (uVar9 == 0) {
            param_1[1] = param_1[1] & ~(1 << (*(uint *)(uVar11 + 0x1c) & 0xff));
            goto LAB_080172a0;
          }
        }
        else if (uVar7 < param_1[4]) {
          FUN_0801e7a6();
        }
        else {
          bVar12 = *(uint *)(uVar7 + 0x10) != uVar11;
          if (bVar12) {
            *(uint *)(uVar7 + 0x14) = uVar9;
          }
          if (!bVar12) {
            *(uint *)(uVar7 + 0x10) = uVar9;
          }
        }
        if (uVar9 != 0) {
          if (uVar9 < param_1[4]) {
LAB_0801729c:
            FUN_0801e7a6();
          }
          else {
            *(uint *)(uVar9 + 0x18) = uVar7;
            uVar3 = *(uint *)(uVar11 + 0x10);
            if (uVar3 != 0) {
              uVar7 = param_1[4];
              if (uVar7 <= uVar3) {
                *(uint *)(uVar9 + 0x10) = uVar3;
              }
              if (uVar7 <= uVar3) {
                *(uint *)(uVar3 + 0x18) = uVar9;
              }
              else {
                FUN_0801e7a6();
              }
            }
            uVar3 = *(uint *)(uVar11 + 0x14);
            if (uVar3 != 0) {
              if (uVar3 < param_1[4]) goto LAB_0801729c;
              *(uint *)(uVar9 + 0x14) = uVar3;
              *(uint *)(uVar3 + 0x18) = uVar9;
            }
          }
        }
      }
LAB_080172a0:
      if (uVar2 < 0x10) {
        param_2 = param_2 + uVar2;
        *(uint *)(uVar11 + 4) = param_2 | 3;
        *(uint *)(uVar11 + 4 + param_2) = *(uint *)(uVar11 + 4 + param_2) | 1;
      }
      else {
        *(uint *)(uVar11 + 4) = param_2 | 3;
        *(uint *)(uVar5 + 4) = uVar2 | 1;
        uVar3 = uVar2 >> 3;
        *(uint *)(uVar5 + uVar2) = uVar2;
        if (uVar3 < 0x20) {
          puVar8 = param_1 + uVar3 * 2 + 10;
          if ((int)((*param_1 >> (uVar3 & 0xff)) << 0x1f) < 0) {
            puVar1 = (uint *)param_1[uVar3 * 2 + 0xc];
            if (puVar1 < (uint *)param_1[4]) {
              FUN_0801e7a6();
              puVar1 = puVar8;
            }
          }
          else {
            *param_1 = 1 << (uVar3 & 0xff) | *param_1;
            puVar1 = puVar8;
          }
          param_1[uVar3 * 2 + 0xc] = uVar5;
          puVar1[3] = uVar5;
          *(uint **)(uVar5 + 8) = puVar1;
          *(uint **)(uVar5 + 0xc) = puVar8;
        }
        else {
          uVar3 = uVar2 >> 8;
          if (uVar3 == 0) {
            uVar3 = 0;
          }
          else if (uVar3 < 0x10000) {
            uVar9 = uVar3 - 0x100 >> 0x10 & 8;
            iVar4 = uVar3 << uVar9;
            uVar3 = iVar4 - 0x1000U >> 0x10 & 4;
            iVar4 = iVar4 << uVar3;
            uVar7 = iVar4 - 0x4000U >> 0x10 & 2;
            iVar4 = (((0xe - uVar9) - uVar3) - uVar7) + ((uint)(iVar4 << uVar7) >> 0xf);
            uVar3 = (uVar2 >> (iVar4 + 7U & 0xff) & 1) + iVar4 * 2;
          }
          else {
            uVar3 = 0x1f;
          }
          *(uint *)(uVar5 + 0x1c) = uVar3;
          *(undefined4 *)(uVar5 + 0x14) = 0;
          *(undefined4 *)(uVar5 + 0x10) = 0;
          puVar8 = param_1 + uVar3 + 0x4c;
          if ((int)((param_1[1] >> (uVar3 & 0xff)) << 0x1f) < 0) {
            uVar9 = uVar2;
            uVar7 = *puVar8;
            if (uVar3 != 0x1f) {
              uVar9 = uVar2 << (0x19 - (uVar3 >> 1) & 0xff);
            }
            do {
              uVar3 = uVar7;
              if ((*(uint *)(uVar3 + 4) & 0xfffffff8) == uVar2) {
                uVar2 = *(uint *)(uVar3 + 8);
                if (uVar3 < param_1[4] || uVar2 < param_1[4]) goto LAB_080173ce;
                *(uint *)(uVar2 + 0xc) = uVar5;
                *(uint *)(uVar3 + 8) = uVar5;
                *(uint *)(uVar5 + 8) = uVar2;
                *(uint *)(uVar5 + 0xc) = uVar3;
                *(undefined4 *)(uVar5 + 0x18) = 0;
                goto LAB_080175fc;
              }
              puVar8 = (uint *)(uVar3 + 0x10 + ((int)uVar9 >> 0x1f) * -4);
              uVar9 = uVar9 << 1;
              uVar7 = *puVar8;
            } while (*puVar8 != 0);
            if (puVar8 < (uint *)param_1[4]) {
LAB_080173ce:
              FUN_0801e7a6();
              goto LAB_080175fc;
            }
            *puVar8 = uVar5;
            *(uint *)(uVar5 + 0x18) = uVar3;
          }
          else {
            param_1[1] = 1 << (uVar3 & 0xff) | param_1[1];
            *puVar8 = uVar5;
            *(uint **)(uVar5 + 0x18) = puVar8;
          }
          *(uint *)(uVar5 + 0xc) = uVar5;
          *(uint *)(uVar5 + 8) = uVar5;
        }
      }
LAB_080175fc:
      return CONCAT44(param_4,uVar11 + 8);
    }
  }
  FUN_0801e7a6();
LAB_080175f6:
  return (ulonglong)param_4 << 0x20;
}



/* FUN_080173f8 at 080173f8 */

longlong FUN_080173f8(uint *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint local_28;
  
  uVar3 = (param_1[1] & -param_1[1]) - 1;
  uVar1 = uVar3 >> 0xc & 0x10;
  uVar3 = uVar3 >> uVar1;
  uVar5 = uVar3 >> 5 & 8;
  uVar3 = uVar3 >> uVar5;
  uVar7 = uVar3 >> 2 & 4;
  uVar3 = uVar3 >> uVar7;
  uVar9 = uVar3 >> 1 & 2;
  uVar3 = uVar3 >> uVar9;
  uVar8 = -((int)(uVar3 << 0x1e) >> 0x1f);
  uVar1 = param_1[(uVar3 >> (uVar8 & 0xff)) + uVar9 + uVar7 + uVar5 + uVar1 + uVar8 + 0x4c];
  uVar3 = uVar1;
  uVar5 = (*(uint *)(uVar1 + 4) & 0xfffffff8) - param_2;
  while ((uVar7 = *(uint *)(uVar1 + 0x10), uVar7 != 0 ||
         (uVar7 = *(uint *)(uVar1 + 0x14), uVar7 != 0))) {
    uVar8 = (*(uint *)(uVar7 + 4) & 0xfffffff8) - param_2;
    uVar1 = uVar7;
    if (uVar8 < uVar5) {
      uVar3 = uVar7;
      uVar5 = uVar8;
    }
  }
  local_28 = param_4;
  if (uVar3 < param_1[4]) {
LAB_080175f2:
    FUN_0801e7a6();
    return (ulonglong)local_28 << 0x20;
  }
  uVar1 = param_2 + uVar5;
  if ((*(uint *)(uVar3 + 4) & 0xfffffff8) != uVar1) {
    FUN_0801e7a6();
  }
  local_28 = uVar3 + param_2;
  if (local_28 <= uVar3) goto LAB_080175f2;
  uVar8 = *(uint *)(uVar3 + 0xc);
  uVar7 = *(uint *)(uVar3 + 0x18);
  if (uVar8 == uVar3) {
    uVar8 = *(uint *)(uVar3 + 0x14);
    uVar9 = local_28;
    puVar6 = (uint *)(uVar3 + 0x14);
    if (uVar8 == 0) {
      puVar6 = (uint *)(uVar3 + 0x10);
      uVar8 = *puVar6;
      if (uVar8 == 0) goto LAB_080174ee;
    }
    while( true ) {
      puVar2 = (uint *)(uVar8 + 0x14);
      uVar4 = *puVar2;
      if (uVar4 == 0) {
        puVar2 = (uint *)(uVar8 + 0x10);
        uVar9 = *puVar2;
      }
      if (uVar4 == 0 && uVar9 == 0) break;
      uVar8 = *puVar2;
      puVar6 = puVar2;
    }
    if (puVar6 < (uint *)param_1[4]) goto LAB_080174ea;
    *puVar6 = uVar9;
  }
  else {
    uVar9 = *(uint *)(uVar3 + 8);
    if (param_1[4] <= uVar9) {
      uVar4 = *(uint *)(uVar9 + 0xc);
      bVar10 = uVar4 == uVar3;
      if (bVar10) {
        uVar4 = *(uint *)(uVar8 + 8);
      }
      if (bVar10 && uVar4 == uVar3) {
        *(uint *)(uVar9 + 0xc) = uVar8;
        *(uint *)(uVar8 + 8) = uVar9;
        goto LAB_080174ee;
      }
    }
LAB_080174ea:
    FUN_0801e7a6();
  }
LAB_080174ee:
  if (uVar7 != 0) {
    if (uVar3 == param_1[*(int *)(uVar3 + 0x1c) + 0x4c]) {
      param_1[*(int *)(uVar3 + 0x1c) + 0x4c] = uVar8;
      if (uVar8 == 0) {
        param_1[1] = param_1[1] & ~(1 << (*(uint *)(uVar3 + 0x1c) & 0xff));
        goto LAB_08017556;
      }
    }
    else if (uVar7 < param_1[4]) {
      FUN_0801e7a6();
    }
    else {
      bVar10 = *(uint *)(uVar7 + 0x10) != uVar3;
      if (bVar10) {
        *(uint *)(uVar7 + 0x14) = uVar8;
      }
      if (!bVar10) {
        *(uint *)(uVar7 + 0x10) = uVar8;
      }
    }
    if (uVar8 != 0) {
      if (param_1[4] <= uVar8) {
        *(uint *)(uVar8 + 0x18) = uVar7;
        uVar7 = *(uint *)(uVar3 + 0x10);
        if (uVar7 != 0) {
          uVar9 = param_1[4];
          if (uVar9 <= uVar7) {
            *(uint *)(uVar8 + 0x10) = uVar7;
          }
          if (uVar9 <= uVar7) {
            *(uint *)(uVar7 + 0x18) = uVar8;
          }
          else {
            FUN_0801e7a6();
          }
        }
        uVar7 = *(uint *)(uVar3 + 0x14);
        if (uVar7 == 0) goto LAB_08017556;
        if (param_1[4] <= uVar7) {
          *(uint *)(uVar8 + 0x14) = uVar7;
          *(uint *)(uVar7 + 0x18) = uVar8;
          goto LAB_08017556;
        }
      }
      FUN_0801e7a6();
    }
  }
LAB_08017556:
  if (uVar5 < 0x10) {
    *(uint *)(uVar3 + 4) = uVar1 | 3;
    *(uint *)(uVar3 + 4 + uVar1) = *(uint *)(uVar3 + 4 + uVar1) | 1;
  }
  else {
    *(uint *)(uVar3 + 4) = param_2 | 3;
    *(uint *)(uVar3 + 4 + param_2) = uVar5 | 1;
    *(uint *)(local_28 + uVar5) = uVar5;
    uVar1 = param_1[2];
    uVar7 = uVar1 >> 3;
    if (0x1f < uVar7) {
      FUN_0801e7a6();
    }
    if (uVar1 != 0) {
      uVar8 = param_1[5];
      puVar6 = param_1 + uVar7 * 2 + 10;
      if (uVar1 < 0x10) {
        FUN_0801e7a6();
      }
      if ((int)((*param_1 >> (uVar7 & 0xff)) << 0x1f) < 0) {
        puVar2 = (uint *)param_1[uVar7 * 2 + 0xc];
        if (puVar2 < (uint *)param_1[4]) {
          FUN_0801e7a6();
          puVar2 = puVar6;
        }
      }
      else {
        *param_1 = *param_1 | 1 << (uVar7 & 0xff);
        puVar2 = puVar6;
      }
      param_1[uVar7 * 2 + 0xc] = uVar8;
      puVar2[3] = uVar8;
      *(uint **)(uVar8 + 8) = puVar2;
      *(uint **)(uVar8 + 0xc) = puVar6;
    }
    param_1[2] = uVar5;
    param_1[5] = local_28;
  }
  return CONCAT44(local_28,uVar3 + 8);
}



/* FUN_08017604 at 08017604 */

uint * FUN_08017604(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  
  puVar7 = DAT_08017db0;
  if (param_1 < 0xf5) {
    if (param_1 < 0xb) {
      uVar8 = 0x10;
    }
    else {
      uVar8 = param_1 + 0xb & 0xfffffff8;
    }
    uVar5 = uVar8 >> 3;
    uVar1 = *DAT_08017db0 >> (uVar5 & 0xff);
    if ((uVar1 & 3) != 0) {
      uVar5 = (~uVar1 & 1) + uVar5;
      puVar11 = DAT_08017db0 + uVar5 * 2 + 10;
      uVar8 = uVar5 * 8;
      puVar9 = (uint *)puVar11[2];
      if ((puVar9[1] & 0xfffffff8) != uVar8) {
        FUN_0801e7a6();
      }
      puVar12 = (uint *)puVar9[2];
      if (puVar9 == puVar11) {
        FUN_0801e7a6();
      }
      if (puVar9 == puVar12) {
        FUN_0801e7a6();
      }
      if ((puVar9[1] & 0xfffffff8) != uVar8) {
        FUN_0801e7a6();
      }
      if (puVar11 == puVar12) {
        *puVar7 = *puVar7 & ~(1 << (uVar5 & 0xff));
      }
      else if ((puVar12 < (uint *)puVar7[4]) || ((uint *)puVar12[3] != puVar9)) {
        FUN_0801e7a6();
      }
      else {
        puVar11[2] = (uint)puVar12;
        puVar12[3] = (uint)puVar11;
      }
      puVar9[1] = uVar8 | 3;
      puVar9[uVar5 * 2 + 1] = puVar9[uVar5 * 2 + 1] | 1;
      return puVar9 + 2;
    }
    if (DAT_08017db0[2] < uVar8) {
      if (uVar1 != 0) {
        iVar2 = 1 << (uVar5 & 0xff);
        uVar1 = uVar1 << (uVar5 & 0xff) & (iVar2 * 2 | iVar2 * -2);
        uVar6 = (uVar1 & -uVar1) - 1;
        uVar1 = uVar6 >> 0xc & 0x10;
        uVar6 = uVar6 >> uVar1;
        uVar5 = uVar6 >> 5 & 8;
        uVar6 = uVar6 >> uVar5;
        uVar3 = uVar6 >> 2 & 4;
        uVar6 = uVar6 >> uVar3;
        uVar4 = uVar6 >> 1 & 2;
        uVar6 = uVar6 >> uVar4;
        uVar10 = -((int)(uVar6 << 0x1e) >> 0x1f);
        uVar1 = (uVar6 >> (uVar10 & 0xff)) + uVar10 + uVar4 + uVar3 + uVar5 + uVar1;
        puVar11 = DAT_08017db0 + uVar1 * 2 + 10;
        uVar5 = uVar1 * 8;
        puVar9 = (uint *)puVar11[2];
        if ((puVar9[1] & 0xfffffff8) != uVar5) {
          FUN_0801e7a6();
        }
        puVar12 = (uint *)puVar9[2];
        if (puVar9 == puVar11) {
          FUN_0801e7a6();
        }
        if (puVar9 == puVar12) {
          FUN_0801e7a6();
        }
        if ((puVar9[1] & 0xfffffff8) != uVar5) {
          FUN_0801e7a6();
        }
        if (puVar11 == puVar12) {
          *puVar7 = *puVar7 & ~(1 << (uVar1 & 0xff));
        }
        else if ((puVar12 < (uint *)puVar7[4]) || ((uint *)puVar12[3] != puVar9)) {
          FUN_0801e7a6();
        }
        else {
          puVar11[2] = (uint)puVar12;
          puVar12[3] = (uint)puVar11;
        }
        puVar9[1] = uVar8 | 3;
        uVar5 = uVar5 - uVar8;
        *(uint *)((int)puVar9 + uVar8 + 4) = uVar5 | 1;
        uVar8 = (int)puVar9 + uVar8;
        *(uint *)(uVar8 + uVar5) = uVar5;
        uVar1 = puVar7[2];
        uVar3 = uVar1 >> 3;
        if (0x1f < uVar3) {
          FUN_0801e7a6();
        }
        if (uVar1 != 0) {
          uVar4 = puVar7[5];
          puVar11 = puVar7 + uVar3 * 2 + 10;
          if (uVar1 < 0x10) {
            FUN_0801e7a6();
          }
          if ((int)((*puVar7 >> (uVar3 & 0xff)) << 0x1f) < 0) {
            puVar12 = (uint *)puVar11[2];
            if (puVar12 < (uint *)puVar7[4]) {
              FUN_0801e7a6();
              puVar12 = puVar11;
            }
          }
          else {
            *puVar7 = 1 << (uVar3 & 0xff) | *puVar7;
            puVar12 = puVar11;
          }
          puVar11[2] = uVar4;
          puVar12[3] = uVar4;
          *(uint **)(uVar4 + 8) = puVar12;
          *(uint **)(uVar4 + 0xc) = puVar11;
        }
        puVar7[2] = uVar5;
        puVar7[5] = uVar8;
        return puVar9 + 2;
      }
      if (DAT_08017db0[1] == 0) goto LAB_08017884;
      puVar9 = (uint *)FUN_080173f8(DAT_08017db0,uVar8);
joined_r0x08017840:
      if (puVar9 != (uint *)0x0) {
        return puVar9;
      }
    }
  }
  else if (param_1 < 0xffffffc0) {
    uVar8 = param_1 + 0xb & 0xfffffff8;
    if (DAT_08017db0[1] != 0) {
      puVar9 = (uint *)FUN_08017074(DAT_08017db0,uVar8,param_3,param_4,param_2,param_3,param_4);
      goto joined_r0x08017840;
    }
  }
  else {
    uVar8 = 0xffffffff;
  }
  uVar1 = puVar7[2];
  if (uVar8 <= uVar1) {
    uVar5 = uVar1 - uVar8;
    uVar3 = puVar7[5];
    if (uVar5 < 0x10) {
      puVar7[2] = 0;
      puVar7[5] = 0;
      *(uint *)(uVar3 + 4) = uVar1 | 3;
      *(uint *)(uVar3 + 4 + uVar1) = *(uint *)(uVar3 + 4 + uVar1) | 1;
    }
    else {
      uVar1 = uVar3 + uVar8;
      puVar7[5] = uVar1;
      puVar7[2] = uVar5;
      *(uint *)(uVar1 + 4) = uVar5 | 1;
      *(uint *)(uVar1 + uVar5) = uVar5;
      *(uint *)(uVar3 + 4) = uVar8 | 3;
    }
    return (uint *)(uVar3 + 8);
  }
LAB_08017884:
  if (uVar8 < puVar7[3]) {
    uVar1 = puVar7[3] - uVar8;
    uVar5 = puVar7[6];
    puVar7[3] = uVar1;
    puVar7[6] = uVar5 + uVar8;
    *(uint *)(uVar5 + uVar8 + 4) = uVar1 | 1;
    *(uint *)(uVar5 + 4) = uVar8 | 3;
    puVar7 = (uint *)(uVar5 + 8);
  }
  else {
    puVar7 = (uint *)FUN_08016e9c(puVar7,uVar8);
  }
  return puVar7;
}



/* FUN_080178ba at 080178ba */

longlong FUN_080178ba(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  bool bVar14;
  
  puVar1 = DAT_08017db0;
  if (param_1 == 0) {
    return (ulonglong)param_2 << 0x20;
  }
  puVar10 = (uint *)(param_1 + -8);
  puVar6 = (uint *)DAT_08017db0[4];
  if ((puVar10 < puVar6) || (uVar2 = *(uint *)(param_1 + -4), (uVar2 & 3) == 1)) {
LAB_08017d8a:
    FUN_0801e7a6();
    goto code_r0x08017d92;
  }
  uVar12 = uVar2 & 0xfffffff8;
  puVar11 = (uint *)((int)puVar10 + uVar12);
  if ((int)(uVar2 << 0x1f) < 0) goto LAB_08017966;
  uVar9 = *puVar10;
  if ((uVar2 & 3) == 0) goto code_r0x08017d92;
  puVar10 = (uint *)((int)puVar10 - uVar9);
  uVar12 = uVar12 + uVar9;
  if (puVar10 < puVar6) goto LAB_08017d8a;
  puVar3 = (uint *)DAT_08017db0[5];
  if (puVar10 == puVar3) {
    if ((puVar11[1] & 3) != 3) goto LAB_08017966;
    DAT_08017db0[2] = uVar12;
    puVar11[1] = puVar11[1] & 0xfffffffe;
    puVar10[1] = uVar12 | 1;
LAB_08017ada:
    *(uint *)((int)puVar10 + uVar12) = uVar12;
    goto code_r0x08017d92;
  }
  uVar9 = uVar9 >> 3;
  if (uVar9 < 0x20) {
    puVar3 = (uint *)puVar10[3];
    puVar6 = (uint *)puVar10[2];
    if (puVar10 == puVar3) {
      FUN_0801e7a6();
    }
    if (puVar10 == puVar6) {
      FUN_0801e7a6();
    }
    if ((puVar10[1] & 0xfffffff8) != uVar9 * 8) {
      FUN_0801e7a6();
    }
    if ((puVar6 != puVar1 + uVar9 * 2 + 10) &&
       ((puVar6 < (uint *)puVar1[4] || ((uint *)puVar6[3] != puVar10)))) goto LAB_080179ce;
    if (puVar3 == puVar6) {
      *puVar1 = *puVar1 & ~(1 << (uVar9 & 0xff));
    }
    else {
      if ((puVar3 != puVar1 + uVar9 * 2 + 10) &&
         ((puVar3 < (uint *)puVar1[4] || ((uint *)puVar3[2] != puVar10)))) goto LAB_080179ce;
      puVar6[3] = (uint)puVar3;
      puVar3[2] = (uint)puVar6;
    }
  }
  else {
    puVar4 = (uint *)puVar10[3];
    uVar2 = puVar10[6];
    if (puVar4 == puVar10) {
      puVar4 = (uint *)puVar10[5];
      puVar7 = puVar10 + 5;
      if (puVar4 == (uint *)0x0) {
        puVar7 = puVar10 + 4;
        puVar4 = (uint *)*puVar7;
        if (puVar4 == (uint *)0x0) goto LAB_08017a2e;
      }
      while( true ) {
        puVar13 = puVar4 + 5;
        uVar9 = *puVar13;
        if (uVar9 == 0) {
          puVar13 = puVar4 + 4;
          puVar3 = (uint *)*puVar13;
        }
        if (uVar9 == 0 && puVar3 == (uint *)0x0) break;
        puVar4 = (uint *)*puVar13;
        puVar7 = puVar13;
      }
      if (puVar7 < puVar6) goto LAB_08017a2a;
      *puVar7 = uVar9;
    }
    else {
      puVar3 = (uint *)puVar10[2];
      if (puVar6 <= puVar3) {
        puVar6 = (uint *)puVar3[3];
        bVar14 = puVar6 == puVar10;
        if (bVar14) {
          puVar6 = (uint *)puVar4[2];
        }
        if (bVar14 && puVar6 == puVar10) {
          puVar3[3] = (uint)puVar4;
          puVar4[2] = (uint)puVar3;
          goto LAB_08017a2e;
        }
      }
LAB_08017a2a:
      FUN_0801e7a6();
    }
LAB_08017a2e:
    if (uVar2 != 0) {
      if (puVar10 == (uint *)puVar1[puVar10[7] + 0x4c]) {
        puVar1[puVar10[7] + 0x4c] = (uint)puVar4;
        if (puVar4 == (uint *)0x0) {
          puVar1[1] = puVar1[1] & ~(1 << (puVar10[7] & 0xff));
          goto LAB_08017966;
        }
      }
      else if (uVar2 < puVar1[4]) {
        FUN_0801e7a6();
      }
      else {
        bVar14 = *(uint **)(uVar2 + 0x10) != puVar10;
        if (bVar14) {
          *(uint **)(uVar2 + 0x14) = puVar4;
        }
        if (!bVar14) {
          *(uint **)(uVar2 + 0x10) = puVar4;
        }
      }
      if (puVar4 != (uint *)0x0) {
        puVar6 = (uint *)puVar1[4];
        if (puVar4 < puVar6) {
LAB_080179ce:
          FUN_0801e7a6();
        }
        else {
          puVar4[6] = uVar2;
          puVar3 = (uint *)puVar10[4];
          if (puVar3 != (uint *)0x0) {
            if (puVar6 <= puVar3) {
              puVar4[4] = (uint)puVar3;
            }
            if (puVar6 <= puVar3) {
              puVar3[6] = (uint)puVar4;
            }
            else {
              FUN_0801e7a6();
            }
          }
          uVar2 = puVar10[5];
          if (uVar2 != 0) {
            if (uVar2 < puVar1[4]) goto LAB_080179ce;
            puVar4[5] = uVar2;
            *(uint **)(uVar2 + 0x18) = puVar4;
          }
        }
      }
    }
  }
LAB_08017966:
  if ((puVar11 <= puVar10) || (uVar2 = puVar11[1], -1 < (int)(uVar2 << 0x1f))) goto LAB_08017d8a;
  if ((int)(uVar2 << 0x1e) < 0) {
    puVar11[1] = uVar2 & 0xfffffffe;
    puVar10[1] = uVar12 | 1;
    *(uint *)((int)puVar10 + uVar12) = uVar12;
  }
  else {
    if (puVar11 == (uint *)puVar1[6]) {
      puVar1[6] = (uint)puVar10;
      uVar12 = uVar12 + puVar1[3];
      puVar1[3] = uVar12;
      puVar10[1] = uVar12 | 1;
      if (puVar10 == (uint *)puVar1[5]) {
        puVar1[5] = 0;
        puVar1[2] = 0;
      }
      if (puVar1[7] < uVar12) {
        FUN_08017000(puVar1,0);
      }
      goto code_r0x08017d92;
    }
    puVar6 = (uint *)puVar1[5];
    if (puVar11 == puVar6) {
      puVar1[5] = (uint)puVar10;
      uVar12 = uVar12 + puVar1[2];
      puVar1[2] = uVar12;
      puVar10[1] = uVar12 | 1;
      goto LAB_08017ada;
    }
    uVar12 = uVar12 + (uVar2 & 0xfffffff8);
    uVar2 = uVar2 >> 3;
    if (uVar2 < 0x20) {
      puVar3 = (uint *)puVar11[3];
      puVar6 = (uint *)puVar11[2];
      if (puVar11 == puVar3) {
        FUN_0801e7a6();
      }
      if (puVar11 == puVar6) {
        FUN_0801e7a6();
      }
      if ((puVar11[1] & 0xfffffff8) != uVar2 * 8) {
        FUN_0801e7a6();
      }
      if ((puVar6 != puVar1 + uVar2 * 2 + 10) &&
         ((puVar6 < (uint *)puVar1[4] || ((uint *)puVar6[3] != puVar11)))) goto LAB_08017c32;
      if (puVar3 == puVar6) {
        *puVar1 = *puVar1 & ~(1 << (uVar2 & 0xff));
      }
      else {
        if ((puVar3 != puVar1 + uVar2 * 2 + 10) &&
           ((puVar3 < (uint *)puVar1[4] || ((uint *)puVar3[2] != puVar11)))) goto LAB_08017c32;
        puVar6[3] = (uint)puVar3;
        puVar3[2] = (uint)puVar6;
      }
    }
    else {
      puVar3 = (uint *)puVar11[3];
      uVar2 = puVar11[6];
      if (puVar3 == puVar11) {
        puVar3 = (uint *)puVar11[5];
        puVar4 = puVar11 + 5;
        if (puVar3 == (uint *)0x0) {
          puVar4 = puVar11 + 4;
          puVar3 = (uint *)*puVar4;
          if (puVar3 == (uint *)0x0) goto LAB_08017bc2;
        }
        while( true ) {
          puVar7 = puVar3 + 5;
          uVar9 = *puVar7;
          if (uVar9 == 0) {
            puVar7 = puVar3 + 4;
            puVar6 = (uint *)*puVar7;
          }
          if (uVar9 == 0 && puVar6 == (uint *)0x0) break;
          puVar3 = (uint *)*puVar7;
          puVar4 = puVar7;
        }
        if (puVar4 < (uint *)puVar1[4]) goto LAB_08017bbe;
        *puVar4 = (uint)puVar6;
      }
      else {
        uVar9 = puVar11[2];
        if (puVar1[4] <= uVar9) {
          puVar6 = *(uint **)(uVar9 + 0xc);
          bVar14 = puVar6 == puVar11;
          if (bVar14) {
            puVar6 = (uint *)puVar3[2];
          }
          if (bVar14 && puVar6 == puVar11) {
            *(uint **)(uVar9 + 0xc) = puVar3;
            puVar3[2] = uVar9;
            goto LAB_08017bc2;
          }
        }
LAB_08017bbe:
        FUN_0801e7a6();
      }
LAB_08017bc2:
      if (uVar2 != 0) {
        if (puVar11 == (uint *)puVar1[puVar11[7] + 0x4c]) {
          puVar1[puVar11[7] + 0x4c] = (uint)puVar3;
          if (puVar3 == (uint *)0x0) {
            puVar1[1] = puVar1[1] & ~(1 << (puVar11[7] & 0xff));
            goto LAB_08017c36;
          }
        }
        else if (uVar2 < puVar1[4]) {
          FUN_0801e7a6();
        }
        else {
          bVar14 = *(uint **)(uVar2 + 0x10) != puVar11;
          if (bVar14) {
            *(uint **)(uVar2 + 0x14) = puVar3;
          }
          if (!bVar14) {
            *(uint **)(uVar2 + 0x10) = puVar3;
          }
        }
        if (puVar3 != (uint *)0x0) {
          puVar6 = (uint *)puVar1[4];
          if (puVar3 < puVar6) {
LAB_08017c32:
            FUN_0801e7a6();
          }
          else {
            puVar3[6] = uVar2;
            puVar4 = (uint *)puVar11[4];
            if (puVar4 != (uint *)0x0) {
              if (puVar6 <= puVar4) {
                puVar3[4] = (uint)puVar4;
              }
              if (puVar6 <= puVar4) {
                puVar4[6] = (uint)puVar3;
              }
              else {
                FUN_0801e7a6();
              }
            }
            uVar2 = puVar11[5];
            if (uVar2 != 0) {
              if (uVar2 < puVar1[4]) goto LAB_08017c32;
              puVar3[5] = uVar2;
              *(uint **)(uVar2 + 0x18) = puVar3;
            }
          }
        }
      }
    }
LAB_08017c36:
    puVar10[1] = uVar12 | 1;
    *(uint *)((int)puVar10 + uVar12) = uVar12;
    if (puVar10 == (uint *)puVar1[5]) {
      puVar1[2] = uVar12;
      goto code_r0x08017d92;
    }
  }
  uVar2 = uVar12 >> 3;
  if (uVar2 < 0x20) {
    puVar6 = puVar1 + uVar2 * 2 + 10;
    if (uVar12 < 0x10) {
      FUN_0801e7a6();
    }
    if ((int)((*puVar1 >> (uVar2 & 0xff)) << 0x1f) < 0) {
      puVar11 = (uint *)puVar6[2];
      if (puVar11 < (uint *)puVar1[4]) {
        FUN_0801e7a6();
        puVar11 = puVar6;
      }
    }
    else {
      *puVar1 = 1 << (uVar2 & 0xff) | *puVar1;
      puVar11 = puVar6;
    }
    puVar6[2] = (uint)puVar10;
    puVar11[3] = (uint)puVar10;
    puVar10[2] = (uint)puVar11;
    puVar10[3] = (uint)puVar6;
    goto code_r0x08017d92;
  }
  uVar2 = uVar12 >> 8;
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else if (uVar2 < 0x10000) {
    uVar9 = uVar2 - 0x100 >> 0x10 & 8;
    iVar5 = uVar2 << uVar9;
    uVar2 = iVar5 - 0x1000U >> 0x10 & 4;
    iVar5 = iVar5 << uVar2;
    uVar8 = iVar5 - 0x4000U >> 0x10 & 2;
    iVar5 = (((0xe - uVar9) - uVar2) - uVar8) + ((uint)(iVar5 << uVar8) >> 0xf);
    uVar2 = (uVar12 >> (iVar5 + 7U & 0xff) & 1) + iVar5 * 2;
  }
  else {
    uVar2 = 0x1f;
  }
  puVar6 = puVar1 + uVar2 + 0x4c;
  puVar10[5] = 0;
  puVar10[4] = 0;
  puVar10[7] = uVar2;
  if ((int)((puVar1[1] >> (uVar2 & 0xff)) << 0x1f) < 0) {
    uVar9 = uVar12;
    uVar8 = *puVar6;
    if (uVar2 != 0x1f) {
      uVar9 = uVar12 << (0x19 - (uVar2 >> 1) & 0xff);
    }
    do {
      uVar2 = uVar8;
      if ((*(uint *)(uVar2 + 4) & 0xfffffff8) == uVar12) {
        uVar12 = *(uint *)(uVar2 + 8);
        if (uVar2 < puVar1[4] || uVar12 < puVar1[4]) goto LAB_08017d6a;
        *(uint **)(uVar12 + 0xc) = puVar10;
        *(uint **)(uVar2 + 8) = puVar10;
        puVar10[2] = uVar12;
        puVar10[3] = uVar2;
        puVar10[6] = 0;
        goto LAB_08017d6e;
      }
      puVar6 = (uint *)(uVar2 + 0x10 + ((int)uVar9 >> 0x1f) * -4);
      uVar9 = uVar9 << 1;
      uVar8 = *puVar6;
    } while (*puVar6 != 0);
    if ((uint *)puVar1[4] <= puVar6) {
      *puVar6 = (uint)puVar10;
      puVar10[6] = uVar2;
      goto LAB_08017d64;
    }
LAB_08017d6a:
    FUN_0801e7a6();
  }
  else {
    puVar1[1] = 1 << (uVar2 & 0xff) | puVar1[1];
    *puVar6 = (uint)puVar10;
    puVar10[6] = (uint)puVar6;
LAB_08017d64:
    puVar10[3] = (uint)puVar10;
    puVar10[2] = (uint)puVar10;
  }
LAB_08017d6e:
  uVar2 = puVar1[8];
  puVar1[8] = uVar2 - 1;
  if (uVar2 - 1 == 0) {
    for (uVar2 = puVar1[0x72]; uVar2 != 0; uVar2 = *(uint *)(uVar2 + 8)) {
    }
    puVar1[8] = 0xffffffff;
  }
code_r0x08017d92:
  return CONCAT44(param_4,param_3);
}



/* FUN_080178c0 at 080178c0 */

undefined8 FUN_080178c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  bool bVar14;
  
  puVar1 = DAT_08017db0;
  puVar10 = (uint *)(param_1 + -8);
  puVar6 = (uint *)DAT_08017db0[4];
  if ((puVar10 < puVar6) || (uVar2 = *(uint *)(param_1 + -4), (uVar2 & 3) == 1)) {
LAB_08017d8a:
    FUN_0801e7a6();
    goto code_r0x08017d92;
  }
  uVar12 = uVar2 & 0xfffffff8;
  puVar11 = (uint *)((int)puVar10 + uVar12);
  if ((int)(uVar2 << 0x1f) < 0) goto LAB_08017966;
  uVar9 = *puVar10;
  if ((uVar2 & 3) == 0) goto code_r0x08017d92;
  puVar10 = (uint *)((int)puVar10 - uVar9);
  uVar12 = uVar12 + uVar9;
  if (puVar10 < puVar6) goto LAB_08017d8a;
  puVar3 = (uint *)DAT_08017db0[5];
  if (puVar10 == puVar3) {
    if ((puVar11[1] & 3) != 3) goto LAB_08017966;
    DAT_08017db0[2] = uVar12;
    puVar11[1] = puVar11[1] & 0xfffffffe;
    puVar10[1] = uVar12 | 1;
LAB_08017ada:
    *(uint *)((int)puVar10 + uVar12) = uVar12;
    goto code_r0x08017d92;
  }
  uVar9 = uVar9 >> 3;
  if (uVar9 < 0x20) {
    puVar3 = (uint *)puVar10[3];
    puVar6 = (uint *)puVar10[2];
    if (puVar10 == puVar3) {
      FUN_0801e7a6();
    }
    if (puVar10 == puVar6) {
      FUN_0801e7a6();
    }
    if ((puVar10[1] & 0xfffffff8) != uVar9 * 8) {
      FUN_0801e7a6();
    }
    if ((puVar6 != puVar1 + uVar9 * 2 + 10) &&
       ((puVar6 < (uint *)puVar1[4] || ((uint *)puVar6[3] != puVar10)))) goto LAB_080179ce;
    if (puVar3 == puVar6) {
      *puVar1 = *puVar1 & ~(1 << (uVar9 & 0xff));
    }
    else {
      if ((puVar3 != puVar1 + uVar9 * 2 + 10) &&
         ((puVar3 < (uint *)puVar1[4] || ((uint *)puVar3[2] != puVar10)))) goto LAB_080179ce;
      puVar6[3] = (uint)puVar3;
      puVar3[2] = (uint)puVar6;
    }
  }
  else {
    puVar4 = (uint *)puVar10[3];
    uVar2 = puVar10[6];
    if (puVar4 == puVar10) {
      puVar4 = (uint *)puVar10[5];
      puVar7 = puVar10 + 5;
      if (puVar4 == (uint *)0x0) {
        puVar7 = puVar10 + 4;
        puVar4 = (uint *)*puVar7;
        if (puVar4 == (uint *)0x0) goto LAB_08017a2e;
      }
      while( true ) {
        puVar13 = puVar4 + 5;
        uVar9 = *puVar13;
        if (uVar9 == 0) {
          puVar13 = puVar4 + 4;
          puVar3 = (uint *)*puVar13;
        }
        if (uVar9 == 0 && puVar3 == (uint *)0x0) break;
        puVar4 = (uint *)*puVar13;
        puVar7 = puVar13;
      }
      if (puVar7 < puVar6) goto LAB_08017a2a;
      *puVar7 = uVar9;
    }
    else {
      puVar3 = (uint *)puVar10[2];
      if (puVar6 <= puVar3) {
        puVar6 = (uint *)puVar3[3];
        bVar14 = puVar6 == puVar10;
        if (bVar14) {
          puVar6 = (uint *)puVar4[2];
        }
        if (bVar14 && puVar6 == puVar10) {
          puVar3[3] = (uint)puVar4;
          puVar4[2] = (uint)puVar3;
          goto LAB_08017a2e;
        }
      }
LAB_08017a2a:
      FUN_0801e7a6();
    }
LAB_08017a2e:
    if (uVar2 != 0) {
      if (puVar10 == (uint *)puVar1[puVar10[7] + 0x4c]) {
        puVar1[puVar10[7] + 0x4c] = (uint)puVar4;
        if (puVar4 == (uint *)0x0) {
          puVar1[1] = puVar1[1] & ~(1 << (puVar10[7] & 0xff));
          goto LAB_08017966;
        }
      }
      else if (uVar2 < puVar1[4]) {
        FUN_0801e7a6();
      }
      else {
        bVar14 = *(uint **)(uVar2 + 0x10) != puVar10;
        if (bVar14) {
          *(uint **)(uVar2 + 0x14) = puVar4;
        }
        if (!bVar14) {
          *(uint **)(uVar2 + 0x10) = puVar4;
        }
      }
      if (puVar4 != (uint *)0x0) {
        puVar6 = (uint *)puVar1[4];
        if (puVar4 < puVar6) {
LAB_080179ce:
          FUN_0801e7a6();
        }
        else {
          puVar4[6] = uVar2;
          puVar3 = (uint *)puVar10[4];
          if (puVar3 != (uint *)0x0) {
            if (puVar6 <= puVar3) {
              puVar4[4] = (uint)puVar3;
            }
            if (puVar6 <= puVar3) {
              puVar3[6] = (uint)puVar4;
            }
            else {
              FUN_0801e7a6();
            }
          }
          uVar2 = puVar10[5];
          if (uVar2 != 0) {
            if (uVar2 < puVar1[4]) goto LAB_080179ce;
            puVar4[5] = uVar2;
            *(uint **)(uVar2 + 0x18) = puVar4;
          }
        }
      }
    }
  }
LAB_08017966:
  if ((puVar11 <= puVar10) || (uVar2 = puVar11[1], -1 < (int)(uVar2 << 0x1f))) goto LAB_08017d8a;
  if ((int)(uVar2 << 0x1e) < 0) {
    puVar11[1] = uVar2 & 0xfffffffe;
    puVar10[1] = uVar12 | 1;
    *(uint *)((int)puVar10 + uVar12) = uVar12;
  }
  else {
    if (puVar11 == (uint *)puVar1[6]) {
      puVar1[6] = (uint)puVar10;
      uVar12 = uVar12 + puVar1[3];
      puVar1[3] = uVar12;
      puVar10[1] = uVar12 | 1;
      if (puVar10 == (uint *)puVar1[5]) {
        puVar1[5] = 0;
        puVar1[2] = 0;
      }
      if (puVar1[7] < uVar12) {
        FUN_08017000(puVar1,0);
      }
      goto code_r0x08017d92;
    }
    puVar6 = (uint *)puVar1[5];
    if (puVar11 == puVar6) {
      puVar1[5] = (uint)puVar10;
      uVar12 = uVar12 + puVar1[2];
      puVar1[2] = uVar12;
      puVar10[1] = uVar12 | 1;
      goto LAB_08017ada;
    }
    uVar12 = uVar12 + (uVar2 & 0xfffffff8);
    uVar2 = uVar2 >> 3;
    if (uVar2 < 0x20) {
      puVar3 = (uint *)puVar11[3];
      puVar6 = (uint *)puVar11[2];
      if (puVar11 == puVar3) {
        FUN_0801e7a6();
      }
      if (puVar11 == puVar6) {
        FUN_0801e7a6();
      }
      if ((puVar11[1] & 0xfffffff8) != uVar2 * 8) {
        FUN_0801e7a6();
      }
      if ((puVar6 != puVar1 + uVar2 * 2 + 10) &&
         ((puVar6 < (uint *)puVar1[4] || ((uint *)puVar6[3] != puVar11)))) goto LAB_08017c32;
      if (puVar3 == puVar6) {
        *puVar1 = *puVar1 & ~(1 << (uVar2 & 0xff));
      }
      else {
        if ((puVar3 != puVar1 + uVar2 * 2 + 10) &&
           ((puVar3 < (uint *)puVar1[4] || ((uint *)puVar3[2] != puVar11)))) goto LAB_08017c32;
        puVar6[3] = (uint)puVar3;
        puVar3[2] = (uint)puVar6;
      }
    }
    else {
      puVar3 = (uint *)puVar11[3];
      uVar2 = puVar11[6];
      if (puVar3 == puVar11) {
        puVar3 = (uint *)puVar11[5];
        puVar4 = puVar11 + 5;
        if (puVar3 == (uint *)0x0) {
          puVar4 = puVar11 + 4;
          puVar3 = (uint *)*puVar4;
          if (puVar3 == (uint *)0x0) goto LAB_08017bc2;
        }
        while( true ) {
          puVar7 = puVar3 + 5;
          uVar9 = *puVar7;
          if (uVar9 == 0) {
            puVar7 = puVar3 + 4;
            puVar6 = (uint *)*puVar7;
          }
          if (uVar9 == 0 && puVar6 == (uint *)0x0) break;
          puVar3 = (uint *)*puVar7;
          puVar4 = puVar7;
        }
        if (puVar4 < (uint *)puVar1[4]) goto LAB_08017bbe;
        *puVar4 = (uint)puVar6;
      }
      else {
        uVar9 = puVar11[2];
        if (puVar1[4] <= uVar9) {
          puVar6 = *(uint **)(uVar9 + 0xc);
          bVar14 = puVar6 == puVar11;
          if (bVar14) {
            puVar6 = (uint *)puVar3[2];
          }
          if (bVar14 && puVar6 == puVar11) {
            *(uint **)(uVar9 + 0xc) = puVar3;
            puVar3[2] = uVar9;
            goto LAB_08017bc2;
          }
        }
LAB_08017bbe:
        FUN_0801e7a6();
      }
LAB_08017bc2:
      if (uVar2 != 0) {
        if (puVar11 == (uint *)puVar1[puVar11[7] + 0x4c]) {
          puVar1[puVar11[7] + 0x4c] = (uint)puVar3;
          if (puVar3 == (uint *)0x0) {
            puVar1[1] = puVar1[1] & ~(1 << (puVar11[7] & 0xff));
            goto LAB_08017c36;
          }
        }
        else if (uVar2 < puVar1[4]) {
          FUN_0801e7a6();
        }
        else {
          bVar14 = *(uint **)(uVar2 + 0x10) != puVar11;
          if (bVar14) {
            *(uint **)(uVar2 + 0x14) = puVar3;
          }
          if (!bVar14) {
            *(uint **)(uVar2 + 0x10) = puVar3;
          }
        }
        if (puVar3 != (uint *)0x0) {
          puVar6 = (uint *)puVar1[4];
          if (puVar3 < puVar6) {
LAB_08017c32:
            FUN_0801e7a6();
          }
          else {
            puVar3[6] = uVar2;
            puVar4 = (uint *)puVar11[4];
            if (puVar4 != (uint *)0x0) {
              if (puVar6 <= puVar4) {
                puVar3[4] = (uint)puVar4;
              }
              if (puVar6 <= puVar4) {
                puVar4[6] = (uint)puVar3;
              }
              else {
                FUN_0801e7a6();
              }
            }
            uVar2 = puVar11[5];
            if (uVar2 != 0) {
              if (uVar2 < puVar1[4]) goto LAB_08017c32;
              puVar3[5] = uVar2;
              *(uint **)(uVar2 + 0x18) = puVar3;
            }
          }
        }
      }
    }
LAB_08017c36:
    puVar10[1] = uVar12 | 1;
    *(uint *)((int)puVar10 + uVar12) = uVar12;
    if (puVar10 == (uint *)puVar1[5]) {
      puVar1[2] = uVar12;
      goto code_r0x08017d92;
    }
  }
  uVar2 = uVar12 >> 3;
  if (uVar2 < 0x20) {
    puVar6 = puVar1 + uVar2 * 2 + 10;
    if (uVar12 < 0x10) {
      FUN_0801e7a6();
    }
    if ((int)((*puVar1 >> (uVar2 & 0xff)) << 0x1f) < 0) {
      puVar11 = (uint *)puVar6[2];
      if (puVar11 < (uint *)puVar1[4]) {
        FUN_0801e7a6();
        puVar11 = puVar6;
      }
    }
    else {
      *puVar1 = 1 << (uVar2 & 0xff) | *puVar1;
      puVar11 = puVar6;
    }
    puVar6[2] = (uint)puVar10;
    puVar11[3] = (uint)puVar10;
    puVar10[2] = (uint)puVar11;
    puVar10[3] = (uint)puVar6;
    goto code_r0x08017d92;
  }
  uVar2 = uVar12 >> 8;
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else if (uVar2 < 0x10000) {
    uVar9 = uVar2 - 0x100 >> 0x10 & 8;
    iVar5 = uVar2 << uVar9;
    uVar2 = iVar5 - 0x1000U >> 0x10 & 4;
    iVar5 = iVar5 << uVar2;
    uVar8 = iVar5 - 0x4000U >> 0x10 & 2;
    iVar5 = (((0xe - uVar9) - uVar2) - uVar8) + ((uint)(iVar5 << uVar8) >> 0xf);
    uVar2 = (uVar12 >> (iVar5 + 7U & 0xff) & 1) + iVar5 * 2;
  }
  else {
    uVar2 = 0x1f;
  }
  puVar6 = puVar1 + uVar2 + 0x4c;
  puVar10[5] = 0;
  puVar10[4] = 0;
  puVar10[7] = uVar2;
  if ((int)((puVar1[1] >> (uVar2 & 0xff)) << 0x1f) < 0) {
    uVar9 = uVar12;
    uVar8 = *puVar6;
    if (uVar2 != 0x1f) {
      uVar9 = uVar12 << (0x19 - (uVar2 >> 1) & 0xff);
    }
    do {
      uVar2 = uVar8;
      if ((*(uint *)(uVar2 + 4) & 0xfffffff8) == uVar12) {
        uVar12 = *(uint *)(uVar2 + 8);
        if (uVar2 < puVar1[4] || uVar12 < puVar1[4]) goto LAB_08017d6a;
        *(uint **)(uVar12 + 0xc) = puVar10;
        *(uint **)(uVar2 + 8) = puVar10;
        puVar10[2] = uVar12;
        puVar10[3] = uVar2;
        puVar10[6] = 0;
        goto LAB_08017d6e;
      }
      puVar6 = (uint *)(uVar2 + 0x10 + ((int)uVar9 >> 0x1f) * -4);
      uVar9 = uVar9 << 1;
      uVar8 = *puVar6;
    } while (*puVar6 != 0);
    if ((uint *)puVar1[4] <= puVar6) {
      *puVar6 = (uint)puVar10;
      puVar10[6] = uVar2;
      goto LAB_08017d64;
    }
LAB_08017d6a:
    FUN_0801e7a6();
  }
  else {
    puVar1[1] = 1 << (uVar2 & 0xff) | puVar1[1];
    *puVar6 = (uint)puVar10;
    puVar10[6] = (uint)puVar6;
LAB_08017d64:
    puVar10[3] = (uint)puVar10;
    puVar10[2] = (uint)puVar10;
  }
LAB_08017d6e:
  uVar2 = puVar1[8];
  puVar1[8] = uVar2 - 1;
  if (uVar2 - 1 == 0) {
    for (uVar2 = puVar1[0x72]; uVar2 != 0; uVar2 = *(uint *)(uVar2 + 8)) {
    }
    puVar1[8] = 0xffffffff;
  }
code_r0x08017d92:
  return CONCAT44(param_4,param_3);
}



/* FUN_08017db4 at 08017db4 */

undefined4 FUN_08017db4(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  while( true ) {
    uVar3 = (uint)*param_1;
    uVar4 = (uint)*param_2;
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 + 0x20;
    }
    if (uVar4 - 0x41 < 0x1a) {
      uVar4 = uVar4 + 0x20;
    }
    if (uVar3 != uVar4) break;
    if (*param_1 == 0) {
      return 0;
    }
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  bVar1 = FUN_080189d4(*param_1);
  bVar2 = *param_2;
  if (bVar2 - 0x41 < 0x1a) {
    bVar2 = bVar2 + 0x20;
  }
  if (bVar1 < bVar2) {
    return 0xffffffff;
  }
  return 1;
}



/* FUN_08017e0a at 08017e0a */

void FUN_08017e0a(undefined4 param_1)

{
  FUN_080184cc(param_1,0);
  return;
}



/* FUN_08017e10 at 08017e10 */

uint FUN_08017e10(int param_1)

{
  return -(uint)((*(byte *)(param_1 + 0xb) & 0x18) == 0) >> 0x1f;
}



/* FUN_08017e1e at 08017e1e */

undefined4 FUN_08017e1e(int param_1)

{
  if ((*(byte *)(param_1 + 0xb) & 0x18) == 0x10) {
    return 1;
  }
  return 0;
}



/* FUN_08017e30 at 08017e30 */

int FUN_08017e30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_08018674(*(undefined4 *)(param_1 + 0x1c),1,param_1 + 4);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 4);
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 0x80;
    }
    iVar1 = 1;
  }
  return iVar1;
}



/* FUN_08017e54 at 08017e54 */

undefined4 FUN_08017e54(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  
  if (((*(uint *)(param_1 + 0x14) >> 5 < 0xffff) && (iVar1 = FUN_08017e30(param_1), iVar1 != 0)) &&
     (iVar1 = FUN_08018724(), uVar3 = DAT_0801845c, iVar1 != 0)) {
    iVar1 = FUN_0801e7d8(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 4));
    *DAT_08018460 = 1;
    *DAT_08018464 = iVar1;
    FUN_08012510(uVar3,0x200);
    for (bVar4 = 1; iVar2 = *(int *)(param_1 + 0x1c), bVar4 < *(byte *)(iVar2 + 4);
        bVar4 = bVar4 + 1) {
      iVar2 = FUN_0801e7e4(iVar2,iVar1 + (uint)bVar4,uVar3);
      if (iVar2 == 0) goto LAB_08017eba;
    }
    *(int *)(param_1 + 0x14) = (0x200 << *(sbyte *)(iVar2 + 0x10)) + *(int *)(param_1 + 0x14);
    uVar3 = 1;
  }
  else {
LAB_08017eba:
    uVar3 = 0;
  }
  return uVar3;
}



/* FUN_08017ece at 08017ece */

int FUN_08017ece(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    param_2 = 1;
  }
  iVar1 = FUN_0801875c(*(undefined4 *)(param_1 + 0xc),param_2);
  if (iVar1 != 0) {
    iVar1 = DAT_0801845c + (uint)*(byte *)(param_1 + 0x10) * 0x20;
  }
  return iVar1;
}



/* FUN_08017eec at 08017eec */

void FUN_08017eec(int param_1)

{
  FUN_08018526();
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* FUN_08017efa at 08017efa */

void FUN_08017efa(void)

{
  FUN_08017ece();
  return;
}



/* FUN_08017efc at 08017efc */

void FUN_08017efc(void)

{
  FUN_08017ece();
  return;
}



/* FUN_08017f00 at 08017f00 */

void FUN_08017f00(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = 0;
  iVar2 = 0;
  do {
    if (*(char *)(param_1 + iVar2) != ' ') {
      if (iVar2 == 8) {
        *(undefined1 *)(param_2 + (uint)bVar1) = 0x2e;
        bVar1 = bVar1 + 1;
      }
      uVar3 = (uint)bVar1;
      bVar1 = bVar1 + 1;
      *(undefined1 *)(param_2 + uVar3) = *(undefined1 *)(param_1 + iVar2);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xb);
  *(undefined1 *)(param_2 + (uint)bVar1) = 0;
  return;
}



/* FUN_08017f2e at 08017f2e */

longlong FUN_08017f2e(int param_1,undefined1 *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)*(byte *)(param_1 + 3);
  if (uVar1 != 0) {
    iVar2 = FUN_08017fe0();
    if (iVar2 == 0) {
      iVar2 = FUN_08017efa();
      if (iVar2 == 0) {
        return (ulonglong)param_4 << 0x20;
      }
      FUN_08017f00(iVar2,param_2);
    }
    else {
      *param_2 = 0x2f;
      param_2[1] = 0;
    }
    uVar1 = 1;
  }
  return CONCAT44(param_4,uVar1);
}



/* FUN_08017f5c at 08017f5c */

undefined4 FUN_08017f5c(byte *param_1,char *param_2,undefined4 *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  
  uVar3 = 7;
  bVar4 = 0xb;
  do {
    bVar4 = bVar4 - 1;
    param_2[bVar4] = ' ';
  } while (bVar4 != 0);
  while( true ) {
    while( true ) {
      if ((*param_1 == 0) || (*param_1 == 0x2f)) {
        *param_3 = param_1;
        if (*param_2 == ' ') {
          return 0;
        }
        return 1;
      }
      bVar5 = *param_1;
      uVar6 = (uint)bVar5;
      if (uVar6 != 0x2e) break;
      if (uVar3 == 10) {
        return 0;
      }
      uVar3 = 10;
      bVar4 = 8;
      param_1 = param_1 + 1;
    }
    pbVar7 = &DAT_08017fd0;
    while( true ) {
      bVar1 = *pbVar7;
      if (bVar1 == 0) break;
      pbVar7 = pbVar7 + 1;
      if (bVar1 == uVar6) {
        return 0;
      }
    }
    uVar2 = (uint)bVar4;
    if (uVar3 < uVar2) {
      return 0;
    }
    if (uVar6 < 0x21) break;
    if (uVar6 == 0x7f) {
      return 0;
    }
    bVar4 = bVar4 + 1;
    if (uVar6 - 0x61 < 0x1a) {
      bVar5 = bVar5 - 0x20;
    }
    param_2[uVar2] = bVar5;
    param_1 = param_1 + 1;
  }
  return 0;
}



/* FUN_08017fe0 at 08017fe0 */

undefined4 FUN_08017fe0(void)

{
  int unaff_r4;
  
  if (*(char *)(unaff_r4 + 3) == '\x02' || *(char *)(unaff_r4 + 3) == '\x03') {
    return 1;
  }
  return 0;
}



/* FUN_08017fe6 at 08017fe6 */

undefined1 * FUN_08017fe6(int param_1,undefined1 *param_2,char *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [32];
  undefined1 auStack_3c [32];
  char *local_1c;
  
  cVar4 = param_2 == (undefined1 *)0x0;
  local_1c = param_3;
  FUN_0801809e(0);
  if ((cVar4 == '\0') && (*(char *)(param_1 + 3) == '\0')) {
    puVar2 = param_2;
    puVar3 = auStack_3c;
    if (*local_1c == '/') {
      iVar1 = FUN_08017fe0();
      if (iVar1 == 0) {
        iVar1 = FUN_08018240(auStack_5c,*(undefined4 *)(param_2 + 0x1c));
        if (iVar1 == 0) goto LAB_0801806e;
        puVar2 = auStack_5c;
      }
      for (; *local_1c == '/'; local_1c = local_1c + 1) {
      }
    }
    while (iVar1 = FUN_08018096(), iVar1 != 0) {
      for (; *local_1c == '/'; local_1c = local_1c + 1) {
      }
      if (*local_1c == '\0') {
        FUN_080180c6(param_1,puVar2,auStack_68);
        FUN_080180b8();
        FUN_080180b2();
        return param_2;
      }
      iVar1 = FUN_080180c6(puVar3,puVar2,auStack_68,1);
      if (iVar1 == 0) break;
      if (puVar2 != param_2) {
        FUN_08017eec(puVar2);
      }
      puVar2 = puVar3;
      if (puVar3 == auStack_3c) {
        puVar3 = auStack_5c;
      }
      else {
        puVar3 = auStack_3c;
      }
    }
  }
LAB_0801806e:
  FUN_080180ba();
  FUN_080180b2();
  return (undefined1 *)0x0;
}



/* FUN_08018096 at 08018096 */

void FUN_08018096(void)

{
  undefined4 in_stack_0000004c;
  
  FUN_08017f5c(in_stack_0000004c);
  return;
}



/* FUN_0801809e at 0801809e */

void FUN_0801809e(void)

{
  return;
}



/* FUN_080180b2 at 080180b2 */

void FUN_080180b2(void)

{
  FUN_08018628(&stack0x0000002c);
  return;
}



/* FUN_080180b8 at 080180b8 */

void FUN_080180b8(void)

{
  FUN_08018628(&stack0x0000000c);
  return;
}



/* FUN_080180ba at 080180ba */

void FUN_080180ba(void)

{
  FUN_08018628(&stack0x0000000c);
  return;
}



/* FUN_080180c6 at 080180c6 */

int FUN_080180c6(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  puVar2 = DAT_0801861c;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = param_4;
  FUN_08017e0a(param_2);
  bVar1 = false;
  do {
    while( true ) {
      uVar8 = *(uint *)(param_2 + 8);
      if (*(uint *)(param_2 + 0x14) <= uVar8) goto LAB_0801811a;
      pcVar4 = (char *)FUN_0801842a(param_2);
      uVar8 = uVar8 >> 5 & 0xf;
      if (pcVar4 == (char *)0x0) {
        return 0;
      }
      if (*pcVar4 == '\0' || *pcVar4 == -0x1b) break;
      iVar5 = FUN_08015bc8(param_3,pcVar4,0xb);
      if (iVar5 == 0) {
        if ((int)(param_4 << 0x18) < 0) {
          return 0;
        }
        goto LAB_08018146;
      }
    }
    if (!bVar1) {
      *(undefined4 *)(param_1 + 0xc) = *puVar2;
      *(char *)(param_1 + 0x10) = (char)uVar8;
      bVar1 = true;
    }
  } while (*pcVar4 != '\0');
LAB_0801811a:
  if ((param_4 & 0x42) != 0x42) {
    return 0;
  }
  if (bVar1) {
    uVar8 = (uint)*(byte *)(param_1 + 0x10);
    iVar5 = FUN_080184c4();
    if (iVar5 == 0) {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 3) == '\x02') {
      return 0;
    }
    iVar5 = FUN_08017e54();
    if (iVar5 == 0) {
      return 0;
    }
    uVar8 = 0;
    iVar5 = DAT_0801845c;
  }
  FUN_08016290(iVar5,0x20);
  FUN_0800f62c(iVar5,param_3,0xb);
  if ((code *)*DAT_08018620 == (code *)0x0) {
    *(undefined2 *)(iVar5 + 0x10) = 0x2821;
    *(undefined2 *)(iVar5 + 0xe) = 0x800;
  }
  else {
    (*(code *)*DAT_08018620)(iVar5 + 0x10,iVar5 + 0xe);
  }
  *(undefined2 *)(iVar5 + 0x12) = *(undefined2 *)(iVar5 + 0x10);
  *(undefined2 *)(iVar5 + 0x18) = *(undefined2 *)(iVar5 + 0x10);
  *(undefined2 *)(iVar5 + 0x16) = *(undefined2 *)(iVar5 + 0xe);
  iVar5 = FUN_08018724();
  if (iVar5 == 0) {
    return 0;
  }
LAB_08018146:
  iVar5 = DAT_0801845c + uVar8 * 0x20;
  if ((*(byte *)(iVar5 + 0xb) & 0x11) == 0 || (param_4 & 0x12) == 0) {
    *(undefined4 *)(param_1 + 0xc) = *DAT_0801861c;
    *(char *)(param_1 + 0x10) = (char)uVar8;
    *(uint *)(param_1 + 0x18) =
         CONCAT22(*(undefined2 *)(iVar5 + 0x14),*(undefined2 *)(iVar5 + 0x1a));
    iVar6 = FUN_08017e10(iVar5);
    if (iVar6 == 0) {
      iVar5 = FUN_08017e1e(iVar5);
      if ((iVar5 == 0) ||
         (iVar5 = FUN_0801878c(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x18),
                               param_1 + 0x14), iVar5 == 0)) goto LAB_0801823a;
      uVar3 = 4;
    }
    else {
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar5 + 0x1c);
      uVar3 = 1;
    }
    *(undefined1 *)(param_1 + 3) = uVar3;
    *(byte *)(param_1 + 1) = (byte)param_4 & 0xf;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    if ((-1 < (int)(param_4 << 0x1b)) || (iVar5 = FUN_08018586(param_1,0), iVar5 != 0)) {
      if (-1 < (int)(param_4 << 0x1a)) {
        return 1;
      }
      iVar5 = FUN_080184cc(param_1,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x14),
                           uVar7);
      return iVar5;
    }
  }
  else {
LAB_0801823a:
    iVar5 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return iVar5;
}



/* FUN_08018240 at 08018240 */

longlong FUN_08018240(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 3) == '\0') {
    if (*(char *)(param_2 + 0x20) == '\x10') {
      *(undefined1 *)(param_1 + 3) = 2;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(uint *)(param_1 + 0x14) = (uint)*(ushort *)(param_2 + 0x22) << 5;
LAB_08018260:
      *(undefined1 *)(param_1 + 1) = 1;
      *(int *)(param_1 + 0x1c) = param_2;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined1 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      return CONCAT44(param_4,1);
    }
    if (*(char *)(param_2 + 0x20) == ' ') {
      *(undefined1 *)(param_1 + 3) = 3;
      uVar2 = *(undefined4 *)(param_2 + 0x24);
      *(undefined4 *)(param_1 + 0x18) = uVar2;
      iVar1 = FUN_0801878c(param_2,uVar2,param_1 + 0x14);
      if (iVar1 != 0) goto LAB_08018260;
    }
  }
  return (ulonglong)param_4 << 0x20;
}



/* FUN_08018292 at 08018292 */

ulonglong FUN_08018292(undefined4 param_1)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_080182ac(param_1,&stack0xfffffff8,1);
  if (iVar1 == 1) {
    return CONCAT44(unaff_r7,unaff_r7) & 0xffffffff000000ff;
  }
  return CONCAT44(unaff_r7,0xffffffff);
}



/* FUN_080182ac at 080182ac */

undefined8 FUN_080182ac(int param_1,int param_2,uint param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_28;
  
  puVar2 = DAT_08018624;
  piVar1 = DAT_08018464;
  iVar5 = DAT_0801845c;
  local_28 = param_4;
  if ((*(char *)(param_1 + 3) == '\0') || (-1 < (int)((uint)*(byte *)(param_1 + 1) << 0x1f))) {
LAB_0801837a:
    iVar5 = -1;
  }
  else {
    if ((uint)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 8)) < param_3) {
      param_3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 8);
    }
    local_28 = DAT_0801845c;
    for (uVar7 = param_3; (uVar7 & 0xffff) != 0; uVar7 = uVar7 - uVar8) {
      uVar6 = *(uint *)(param_1 + 8) & 0x1ff;
      if (*(char *)(param_1 + 3) == '\x02') {
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x24) + (*(uint *)(param_1 + 8) >> 9);
      }
      else {
        iVar4 = FUN_0801e80a();
        if (iVar4 == 0 && uVar6 == 0) {
          if (*(int *)(param_1 + 8) == 0) {
            *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x18);
          }
          else {
            iVar3 = FUN_080187be(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 4),
                                 param_1 + 4);
            if (iVar3 == 0) goto LAB_0801837a;
          }
        }
        iVar3 = FUN_0801e7d8(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 4));
        iVar3 = iVar3 + iVar4;
      }
      uVar8 = uVar7 & 0xffff;
      if ((int)(0x200 - uVar6) < (int)uVar8) {
        uVar8 = 0x200 - uVar6 & 0xffff;
      }
      if ((uVar8 == 0x200) && (iVar3 != *piVar1)) {
        iVar4 = FUN_0801864c(*puVar2,iVar3,param_2);
        if (iVar4 == 0) goto LAB_0801837a;
      }
      else {
        iVar4 = FUN_0801875c(iVar3,0);
        if (iVar4 == 0) goto LAB_0801837a;
        FUN_0800f62c(param_2,iVar5 + uVar6,uVar8);
      }
      param_2 = param_2 + uVar8;
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar8;
    }
    iVar5 = (int)(short)param_3;
  }
  return CONCAT44(local_28,iVar5);
}



/* FUN_08018386 at 08018386 */

int FUN_08018386(int param_1,byte *param_2,undefined1 *param_3)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  byte *pbVar7;
  bool bVar8;
  
  if ((*(byte *)(param_1 + 3) < 2) || ((*(byte *)(param_1 + 8) & 0x1f) != 0)) {
    return -1;
  }
  do {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    while( true ) {
      iVar3 = FUN_080182ac(param_1,param_2,0x20);
      if (iVar3 != 0x20) {
        if (iVar3 != 0) {
          return -1;
        }
        return 0;
      }
      uVar2 = (ushort)*param_2;
      if (uVar2 == 0) {
        return 0;
      }
      if (uVar2 == 0xe5 || uVar2 == 0x2e) break;
      iVar3 = 0x20;
      if (param_3 != (undefined1 *)0x0) {
        uVar6 = param_2[0xb] & 0x3f;
        bVar8 = uVar6 == 0xf;
        if (bVar8) {
          uVar6 = *(ushort *)(param_2 + 0x1a);
        }
        if (((bVar8 && uVar6 == 0) && ((*param_2 & 0x1f) != 0)) && ((uVar2 & 0x1f) < 3)) {
          iVar3 = (int)(short)(((uVar2 & 0x1f) - 1) * 0xd);
          iVar4 = 0;
          do {
            pbVar7 = (byte *)(uint)*(ushort *)(param_2 + iVar4 * 2 + 1);
            iVar5 = iVar4;
            while( true ) {
              iVar4 = iVar5 + 1;
              param_3[iVar5 + iVar3] = (char)pbVar7;
              if (0xc < iVar4) {
                if ((int)((uint)*param_2 << 0x19) < 0) {
                  param_3[iVar3 + 0xd] = 0;
                }
                goto LAB_08018420;
              }
              if (iVar4 < 5) break;
              pbVar7 = param_2 + iVar4 * 2;
              iVar1 = iVar5 + -10;
              if (iVar4 < 0xb) {
                pbVar7 = (byte *)(uint)*(ushort *)(pbVar7 + 4);
              }
              iVar5 = iVar4;
              if (iVar1 < 0 == SBORROW4(iVar4,0xb)) {
                pbVar7 = (byte *)(uint)*(ushort *)(pbVar7 + 6);
              }
            }
          } while( true );
        }
      }
LAB_08018420:
      if (-1 < (int)((uint)param_2[0xb] << 0x1c)) {
        return (int)(char)iVar3;
      }
    }
  } while( true );
}



/* FUN_0801842a at 0801842a */

longlong FUN_0801842a(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (1 < *(byte *)(param_1 + 3)) {
    uVar3 = *(uint *)(param_1 + 8);
    iVar2 = FUN_08018292(param_1);
    iVar1 = DAT_0801845c;
    if (-1 < iVar2) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x1f;
      return CONCAT44(param_4,iVar1 + (uVar3 >> 5 & 0xf) * 0x20);
    }
  }
  return (ulonglong)param_4 << 0x20;
}



/* FUN_08018468 at 08018468 */

void FUN_08018468(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_08018586(param_1,0);
  if ((iVar1 != 0) && (puVar2 = (undefined1 *)FUN_08017efc(iVar1,1), puVar2 != (undefined1 *)0x0)) {
    *puVar2 = 0xe5;
    *(undefined1 *)(param_1 + 3) = 0;
    FUN_08018724();
    return;
  }
  return;
}



/* FUN_0801848e at 0801848e */

undefined4 FUN_0801848e(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_28 [3];
  undefined1 local_25;
  
  local_28[0] = 0;
  uVar2 = 0;
  local_25 = 0;
  iVar1 = FUN_08017fe6(local_28,param_1,param_2,2);
  if (iVar1 != 0) {
    uVar2 = FUN_08018468(local_28);
  }
  FUN_080184be();
  return uVar2;
}



/* FUN_080184be at 080184be */

void FUN_080184be(void)

{
  FUN_08018628();
  return;
}



/* FUN_080184c4 at 080184c4 */

void FUN_080184c4(void)

{
  FUN_08017ece();
  return;
}



/* FUN_080184cc at 080184cc */

undefined4 FUN_080184cc(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(char *)(param_1 + 3) != '\0') && (param_2 <= *(uint *)(param_1 + 0x14))) {
    if (*(char *)(param_1 + 3) != '\x02') {
      if (param_2 == 0) {
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 4) = 0;
        return 1;
      }
      uVar3 = *(byte *)(*(int *)(param_1 + 0x1c) + 0x10) + 9;
      uVar2 = *(int *)(param_1 + 8) - 1U >> (uVar3 & 0xff);
      uVar3 = param_2 - 1 >> (uVar3 & 0xff);
      if ((uVar3 < uVar2) || (*(int *)(param_1 + 8) == 0)) {
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x18);
      }
      else {
        uVar3 = uVar3 - uVar2;
      }
      while (uVar3 != 0) {
        iVar1 = FUN_080187be(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 4),
                             param_1 + 4);
        uVar3 = uVar3 - 1;
        if (iVar1 == 0) {
          return 0;
        }
      }
    }
    *(uint *)(param_1 + 8) = param_2;
    return 1;
  }
  return 0;
}



/* FUN_08018526 at 08018526 */

undefined4
FUN_08018526(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 uVar3;
  
  if (param_1[3] == '\0') {
LAB_0801857c:
    *param_1 = 1;
    return 0;
  }
  if ((int)((uint)(byte)param_1[1] << 0x18) < 0) {
    pbVar1 = (byte *)FUN_08017ece(param_1,1);
    pbVar2 = pbVar1;
    if (pbVar1 != (byte *)0x0) {
      pbVar2 = (byte *)(uint)*pbVar1;
    }
    if (pbVar1 == (byte *)0x0 || pbVar2 == (byte *)0xe5) goto LAB_0801857c;
    if ((byte)param_1[3] < 2) {
      pbVar2 = *(byte **)(param_1 + 0x14);
    }
    if ((byte)param_1[3] < 2) {
      *(byte **)(pbVar1 + 0x1c) = pbVar2;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(short *)(pbVar1 + 0x1a) = (short)uVar3;
    *(short *)(pbVar1 + 0x14) = (short)((uint)uVar3 >> 0x10);
    if ((code *)*DAT_08018620 != (code *)0x0) {
      (*(code *)*DAT_08018620)(pbVar1 + 0x18,pbVar1 + 0x16);
      *(undefined2 *)(pbVar1 + 0x12) = *(undefined2 *)(pbVar1 + 0x18);
    }
    param_1[1] = param_1[1] & 0x7f;
  }
  uVar3 = FUN_08018724(param_4);
  return uVar3;
}



/* FUN_08018586 at 08018586 */

longlong FUN_08018586(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint local_18;
  undefined4 uStack_14;
  
  if (((*(char *)(param_1 + 3) != '\x01') || (-1 < (int)((uint)*(byte *)(param_1 + 1) << 0x1e))) ||
     (*(uint *)(param_1 + 0x14) < param_2)) {
    return (ulonglong)param_3 << 0x20;
  }
  if (*(uint *)(param_1 + 0x14) == 0) {
    return CONCAT44(param_3,1);
  }
  uVar2 = param_2;
  if (*(uint *)(param_1 + 8) < param_2) {
    uVar2 = *(uint *)(param_1 + 8);
  }
  local_18 = param_3;
  uStack_14 = param_4;
  iVar1 = FUN_080184cc(param_1,param_2);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      iVar1 = FUN_0801888a(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x18));
      if (iVar1 == 0) goto LAB_0801861a;
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    else {
      iVar1 = FUN_080187be(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 4),&local_18);
      if (iVar1 == 0) goto LAB_0801861a;
      iVar1 = FUN_0801e818(*(undefined4 *)(param_1 + 0x1c),local_18);
      if (iVar1 == 0) {
        iVar1 = FUN_0801888a(*(undefined4 *)(param_1 + 0x1c),local_18);
        if (iVar1 == 0) goto LAB_0801861a;
        iVar1 = FUN_08018822(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 4),0xfffffff)
        ;
        if (iVar1 == 0) {
          return (ulonglong)local_18 << 0x20;
        }
      }
    }
    *(uint *)(param_1 + 0x14) = param_2;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 0x80;
    iVar1 = FUN_08018526(param_1);
    if (iVar1 == 0) {
      return (ulonglong)local_18 << 0x20;
    }
    iVar1 = FUN_080184cc(param_1,uVar2);
  }
LAB_0801861a:
  return CONCAT44(local_18,iVar1);
}



/* FUN_08018628 at 08018628 */

int FUN_08018628(int param_1)

{
  if (*(char *)(param_1 + 3) != '\0') {
    FUN_08017eec(param_1);
  }
  return param_1;
}



/* thunk_FUN_08017fe6 at 0801863a */

undefined1 * thunk_FUN_08017fe6(int param_1,undefined1 *param_2,char *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [32];
  undefined1 auStack_3c [32];
  char *pcStack_1c;
  
  cVar4 = param_2 == (undefined1 *)0x0;
  pcStack_1c = param_3;
  FUN_0801809e(0);
  if ((cVar4 == '\0') && (*(char *)(param_1 + 3) == '\0')) {
    puVar2 = param_2;
    puVar3 = auStack_3c;
    if (*pcStack_1c == '/') {
      iVar1 = FUN_08017fe0();
      if (iVar1 == 0) {
        iVar1 = FUN_08018240(auStack_5c,*(undefined4 *)(param_2 + 0x1c));
        if (iVar1 == 0) goto LAB_0801806e;
        puVar2 = auStack_5c;
      }
      for (; *pcStack_1c == '/'; pcStack_1c = pcStack_1c + 1) {
      }
    }
    while (iVar1 = FUN_08018096(), iVar1 != 0) {
      for (; *pcStack_1c == '/'; pcStack_1c = pcStack_1c + 1) {
      }
      if (*pcStack_1c == '\0') {
        FUN_080180c6(param_1,puVar2,auStack_68);
        FUN_080180b8();
        FUN_080180b2();
        return param_2;
      }
      iVar1 = FUN_080180c6(puVar3,puVar2,auStack_68,1);
      if (iVar1 == 0) break;
      if (puVar2 != param_2) {
        FUN_08017eec(puVar2);
      }
      puVar2 = puVar3;
      if (puVar3 == auStack_3c) {
        puVar3 = auStack_5c;
      }
      else {
        puVar3 = auStack_3c;
      }
    }
  }
LAB_0801806e:
  FUN_080180ba();
  FUN_080180b2();
  return (undefined1 *)0x0;
}



/* FUN_0801863e at 0801863e */

undefined8 FUN_0801863e(int param_1)

{
  int iVar1;
  undefined4 unaff_r7;
  
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  iVar1 = FUN_0801e838();
  return CONCAT44(unaff_r7,-(uint)(iVar1 == 0) >> 0x1f);
}



/* FUN_0801864c at 0801864c */

undefined8 FUN_0801864c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_0801e882(param_3,param_2,1,1000);
  return CONCAT44(unaff_r7,-(uint)(iVar1 == 0) >> 0x1f);
}



/* FUN_08018662 at 08018662 */

undefined8 FUN_08018662(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_0801e8b6(param_3,param_2,1,1000);
  return CONCAT44(unaff_r7,-(uint)(iVar1 == 0) >> 0x1f);
}



/* FUN_08018674 at 08018674 */

undefined8 FUN_08018674(uint *param_1,int param_2,uint *param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int local_28;
  
  uVar2 = param_1[3];
  if (*param_3 == 0) {
    uVar3 = *param_1;
    if (param_2 != 1) goto LAB_0801869c;
    bVar1 = true;
  }
  else {
    uVar3 = *param_3 + 1;
LAB_0801869c:
    bVar1 = false;
  }
  uVar9 = uVar3;
  local_28 = param_4;
  for (uVar6 = 0; uVar6 < param_1[3]; uVar6 = uVar6 + 1) {
    uVar7 = uVar9;
    uVar8 = uVar3;
    if (uVar2 + 1 < uVar3) {
      uVar7 = 2;
      uVar8 = uVar7;
    }
    iVar4 = FUN_080187be(param_1,uVar8,&local_28);
    if (iVar4 == 0) break;
    uVar3 = uVar8 + 1;
    uVar9 = uVar3;
    if ((local_28 == 0) && (uVar9 = uVar7, (uVar8 - uVar7) + 1 == param_2)) {
      iVar4 = FUN_08018822(param_1,uVar8,0xfffffff);
      if (iVar4 != 0) goto LAB_080186fa;
      break;
    }
  }
LAB_0801870c:
  uVar5 = 0;
LAB_08018720:
  return CONCAT44(local_28,uVar5);
  while( true ) {
    iVar4 = FUN_08018822(param_1,uVar8 - 1,uVar8);
    uVar8 = uVar8 - 1;
    if (iVar4 == 0) break;
LAB_080186fa:
    if (uVar8 <= uVar7) {
      if ((*param_3 == 0) || (iVar4 = FUN_08018822(param_1,*param_3,uVar7), iVar4 != 0)) {
        *param_3 = uVar7;
        if (bVar1) {
          *param_1 = uVar7 + 1;
        }
        uVar5 = 1;
        goto LAB_08018720;
      }
      break;
    }
  }
  goto LAB_0801870c;
}



/* FUN_08018724 at 08018724 */

longlong FUN_08018724(void)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_r3;
  
  uVar2 = DAT_080189d0;
  pcVar1 = DAT_080189cc;
  if (*DAT_080189cc != '\0') {
    iVar3 = FUN_08018662(*(undefined4 *)(DAT_080189cc + 8),*(undefined4 *)(DAT_080189cc + 4),
                         DAT_080189d0);
    if (iVar3 == 0) {
LAB_0801874c:
      return (ulonglong)in_r3 << 0x20;
    }
    if (*(int *)(pcVar1 + 0xc) != 0) {
      iVar3 = FUN_08018662(*(undefined4 *)(pcVar1 + 8),*(int *)(pcVar1 + 0xc),uVar2);
      if (iVar3 == 0) goto LAB_0801874c;
      pcVar1[0xc] = '\0';
      pcVar1[0xd] = '\0';
      pcVar1[0xe] = '\0';
      pcVar1[0xf] = '\0';
    }
    *pcVar1 = '\0';
  }
  return CONCAT44(in_r3,1);
}



/* FUN_0801875c at 0801875c */

undefined4 FUN_0801875c(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = DAT_080189cc;
  if (*(int *)(DAT_080189cc + 4) != param_1) {
    iVar2 = FUN_08018724();
    if ((iVar2 == 0) ||
       (iVar2 = FUN_0801864c(*(undefined4 *)(puVar1 + 8),param_1,DAT_080189d0), iVar2 == 0)) {
      return 0;
    }
    *(int *)(puVar1 + 4) = param_1;
  }
  if (param_2 != 0) {
    *puVar1 = 1;
  }
  return 1;
}



/* FUN_0801878c at 0801878c */

undefined8 FUN_0801878c(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  
  iVar2 = 0;
  local_18 = param_2;
  do {
    iVar1 = FUN_080187be(param_1,local_18,&local_18);
    if (iVar1 == 0) goto LAB_080187bc;
    iVar2 = (0x200 << *(sbyte *)(param_1 + 0x10)) + iVar2;
    iVar1 = FUN_0801e818(param_1,local_18);
  } while (iVar1 == 0);
  *param_3 = iVar2;
  iVar1 = 1;
LAB_080187bc:
  return CONCAT44(local_18,iVar1);
}



/* FUN_080187be at 080187be */

undefined4 FUN_080187be(int param_1,uint param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 <= *(int *)(param_1 + 0xc) + 1U) {
    if (*(char *)(param_1 + 0x20) == '\x10') {
      iVar1 = *(int *)(param_1 + 0x1c) + (param_2 >> 8);
    }
    else {
      if (*(char *)(param_1 + 0x20) != ' ') {
        return 0;
      }
      iVar1 = *(int *)(param_1 + 0x1c) + (param_2 >> 7);
    }
    if ((iVar1 == *(int *)(DAT_080189cc + 4)) || (iVar1 = FUN_0801875c(iVar1,0), iVar1 != 0)) {
      if (*(char *)(param_1 + 0x20) == '\x10') {
        uVar2 = (uint)*(ushort *)(DAT_080189d0 + (param_2 & 0xff) * 2);
      }
      else {
        uVar2 = *(uint *)(DAT_080189d0 + (param_2 & 0x7f) * 4) & 0xfffffff;
      }
      *param_3 = uVar2;
      return 1;
    }
  }
  return 0;
}



/* FUN_08018822 at 08018822 */

longlong FUN_08018822(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  if ((1 < param_2) && (param_2 <= *(int *)(param_1 + 0xc) + 1U)) {
    if (*(char *)(param_1 + 0x20) == '\x10') {
      iVar2 = *(int *)(param_1 + 0x1c) + (param_2 >> 8);
    }
    else {
      if (*(char *)(param_1 + 0x20) != ' ') goto LAB_0801885a;
      iVar2 = *(int *)(param_1 + 0x1c) + (param_2 >> 7);
    }
    iVar1 = FUN_0801875c(iVar2,1);
    if (iVar1 != 0) {
      if (*(char *)(param_1 + 0x20) == '\x10') {
        *(short *)(DAT_080189d0 + (param_2 & 0xff) * 2) = (short)param_3;
      }
      else {
        *(undefined4 *)(DAT_080189d0 + (param_2 & 0x7f) * 4) = param_3;
      }
      if (1 < *(byte *)(param_1 + 0x18)) {
        *(int *)(DAT_080189cc + 0xc) = *(int *)(param_1 + 8) + iVar2;
      }
      return CONCAT44(param_4,1);
    }
  }
LAB_0801885a:
  return (ulonglong)param_4 << 0x20;
}



/* FUN_0801888a at 0801888a */

longlong FUN_0801888a(undefined4 *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint local_10;
  
  *param_1 = 2;
  local_10 = param_4;
  while ((iVar1 = FUN_080187be(param_1,param_2,&local_10), iVar1 != 0 &&
         (iVar1 = FUN_08018822(param_1,param_2,0), param_2 = local_10, iVar1 != 0))) {
    iVar1 = FUN_0801e818(param_1,local_10);
    if (iVar1 != 0) {
      return CONCAT44(local_10,1);
    }
  }
  return (ulonglong)local_10 << 0x20;
}



/* FUN_080189d4 at 080189d4 */

int FUN_080189d4(int param_1)

{
  if (param_1 - 0x41U < 0x1a) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}



/* FUN_080189e0 at 080189e0 */

uint * FUN_080189e0(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  puVar2 = param_1;
  if (((uint)param_2 & 3) != 0) {
    puVar1 = param_1;
    puVar3 = param_2;
    uVar4 = param_3;
    if (param_3 < 4) goto LAB_08018a34;
    do {
      param_2 = (uint *)((int)puVar3 + 1);
      uVar5 = *puVar3;
      uVar4 = uVar4 - 1;
      puVar2 = (uint *)((int)puVar1 + 1);
      *(char *)puVar1 = (char)uVar5;
      if ((char)uVar5 == '\0') goto LAB_08018a44;
      puVar1 = puVar2;
      puVar3 = param_2;
      param_3 = uVar4;
    } while (((uint)param_2 & 3) != 0);
  }
  puVar1 = puVar2;
  if (((uint)puVar2 & 3) == 0) {
    while (uVar4 = param_3 - 4, 3 < param_3) {
      uVar5 = *param_2;
      uVar6 = uVar5 + 0xfefefeff & ~uVar5;
      uVar7 = uVar6 & 0x80808080;
      if (uVar7 != 0) {
        uVar6 = 0x18 - LZCOUNT((uVar6 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                               (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18);
        puVar2 = puVar1 + 1;
        *puVar1 = (uVar5 << (uVar6 & 0xff)) >> (uVar6 & 0xff);
        goto LAB_08018a44;
      }
      *puVar1 = uVar5;
      puVar1 = puVar1 + 1;
      param_2 = param_2 + 1;
      param_3 = uVar4;
    }
  }
LAB_08018a34:
  uVar4 = param_3;
  if (param_3 != 0) {
    do {
      uVar5 = *param_2;
      uVar4 = uVar4 - 1;
      puVar2 = (uint *)((int)puVar1 + 1);
      *(char *)puVar1 = (char)uVar5;
      if ((char)uVar5 == '\0') break;
      puVar1 = puVar2;
      param_2 = (uint *)((int)param_2 + 1);
    } while (uVar4 != 0);
LAB_08018a44:
    if (uVar4 != 0) {
      FUN_08018a58(puVar2,uVar4,0);
    }
  }
  return param_1;
}



/* FUN_08018a58 at 08018a58 */

undefined4 * FUN_08018a58(int param_1,uint param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  puVar3 = (undefined4 *)(param_1 + param_2);
  uVar5 = (uint)puVar3 & 3;
  uVar1 = (undefined1)param_3;
  if (uVar5 != 0) {
    uVar4 = param_2 - uVar5;
    if (param_2 < uVar5) {
      if (uVar4 + uVar5 != 0) {
        puVar3 = (undefined4 *)((int)puVar3 + -1);
        *(undefined1 *)puVar3 = uVar1;
      }
      if ((uVar4 + uVar5 & 2) != 0) {
        puVar3 = (undefined4 *)((int)puVar3 + -1);
        *(undefined1 *)puVar3 = uVar1;
      }
      return puVar3;
    }
    uVar2 = (uint)puVar3 & 2;
    if ((int)(uVar5 << 0x1f) < 0) {
      puVar3 = (undefined4 *)((int)puVar3 + -1);
      *(undefined1 *)puVar3 = uVar1;
    }
    param_2 = uVar4;
    if (uVar2 != 0) {
      puVar3 = (undefined4 *)((int)puVar3 + -2);
      *(short *)puVar3 = (short)param_3;
    }
  }
  do {
    uVar5 = param_2;
    param_2 = uVar5 - 0x10;
    if (0xf < uVar5) {
      puVar3[-1] = param_3;
      puVar3[-2] = param_3;
      puVar3[-3] = param_3;
      puVar3 = puVar3 + -4;
      *puVar3 = param_3;
    }
  } while (0xf < uVar5 && param_2 != 0);
  if ((param_2 & 8) != 0) {
    puVar3[-1] = param_3;
    puVar3 = puVar3 + -2;
    *puVar3 = param_3;
  }
  if ((int)(uVar5 * 0x20000000) < 0) {
    puVar3 = puVar3 + -1;
    *puVar3 = param_3;
  }
  if ((uVar5 * 0x20000000 & 0x40000000) != 0) {
    puVar3 = (undefined4 *)((int)puVar3 + -2);
    *(short *)puVar3 = (short)param_3;
  }
  if ((int)(uVar5 * -0x80000000) < 0) {
    puVar3 = (undefined4 *)((int)puVar3 + -1);
    *(undefined1 *)puVar3 = uVar1;
  }
  return puVar3;
}



/* FUN_08018ab8 at 08018ab8 */

void FUN_08018ab8(char param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  
  pcVar1 = DAT_08018ad4;
  uVar3 = (byte)DAT_08018ad4[2] + 1;
  DAT_08018ad4[(byte)DAT_08018ad4[2] + 4] = param_1;
  cVar2 = (char)uVar3;
  if (5 < (uVar3 & 0xff)) {
    cVar2 = '\0';
  }
  pcVar1[2] = cVar2;
  *pcVar1 = *pcVar1 + '\x01';
  return;
}



/* FUN_08018ad8 at 08018ad8 */

longlong FUN_08018ad8(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  if (*param_1 != ';') {
    if (*DAT_08018b0c < 6) {
      FUN_08016870(DAT_08018b10 + (uint)DAT_08018b0c[2] * 0x60,param_1);
      FUN_08018ab8(param_2);
      return CONCAT44(param_4,1);
    }
  }
  return (ulonglong)param_4 << 0x20;
}



/* FUN_08018b14 at 08018b14 */

undefined4 FUN_08018b14(void)

{
  char cVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 in_r3;
  undefined4 uVar13;
  char *pcVar14;
  byte bVar15;
  char *pcVar16;
  
  pbVar3 = DAT_08018c80;
  uVar7 = DAT_08018c7c;
  pcVar6 = DAT_08018c78;
  pcVar5 = DAT_08018c74;
  uVar4 = DAT_08018c70;
  uVar13 = in_r3;
  do {
    while( true ) {
      while( true ) {
        do {
          if ((5 < *pbVar3) || (iVar8 = FUN_0800dec0(uVar7), iVar8 == 0)) {
            return in_r3;
          }
          iVar8 = FUN_080135c8(0);
        } while (iVar8 < 0);
        cVar1 = (char)iVar8;
        iVar8 = *(int *)(pbVar3 + 0x18);
        if (cVar1 == '\n' || cVar1 == '\r') break;
        if (iVar8 < 0x5f) {
          if (cVar1 == '\\') {
            iVar8 = FUN_080135c8(0);
            if ((-1 < iVar8) && (*pcVar6 == '\0')) {
              iVar11 = *(int *)(pbVar3 + 0x18);
              pcVar5[iVar11] = (char)iVar8;
              *(int *)(pbVar3 + 0x18) = iVar11 + 1;
            }
          }
          else if (cVar1 == ';') {
            *pcVar6 = '\x01';
          }
          else if (*pcVar6 == '\0') {
            pcVar5[iVar8] = cVar1;
            *(int *)(pbVar3 + 0x18) = iVar8 + 1;
          }
        }
      }
      *pcVar6 = '\0';
      if (iVar8 != 0) break;
      FUN_0801441c();
    }
    pcVar5[iVar8] = '\0';
    pbVar3[0x18] = 0;
    pbVar3[0x19] = 0;
    pbVar3[0x1a] = 0;
    pbVar3[0x1b] = 0;
    for (pcVar14 = pcVar5; *pcVar14 == ' '; pcVar14 = pcVar14 + 1) {
    }
    if ((*pcVar14 == 'N') && (pcVar14 != (char *)0x0)) {
      iVar8 = FUN_08016530(pcVar14,uVar4);
      pcVar16 = pcVar14;
      if (iVar8 == 0) {
        bVar2 = false;
      }
      else {
        pcVar9 = (char *)FUN_0801174c(pcVar14 + 4,0x4e);
        bVar2 = true;
        if (pcVar9 != (char *)0x0) {
          pcVar16 = pcVar9;
        }
      }
      iVar8 = FUN_08011748(pcVar16 + 1,0,10);
      *(int *)(pbVar3 + 0x10) = iVar8;
      if (((iVar8 != *(int *)(pbVar3 + 0x14) + 1) && (uVar10 = DAT_08018c84, !bVar2)) ||
         (iVar8 = FUN_0801e8f8(pcVar14,0x2a), uVar10 = DAT_08018c94, iVar8 == 0)) {
LAB_0801359c:
        FUN_0800bb0c(DAT_080136c8,0,in_r3);
        iVar8 = DAT_080136a4;
        FUN_0800bb0c(uVar10);
        FUN_0800c004(DAT_080136b0,*(undefined4 *)(iVar8 + 0x14),10);
        FUN_08013578();
        *(undefined4 *)(iVar8 + 0x18) = 0;
        return uVar13;
      }
      bVar15 = 0;
      uVar12 = iVar8 - (int)pcVar14;
      while ((uVar12 & 0xff) != 0) {
        uVar12 = uVar12 - 1;
        bVar15 = bVar15 ^ pcVar14[uVar12 & 0xff];
      }
      uVar12 = FUN_08011748(iVar8 + 1,0,10);
      uVar10 = DAT_08018c88;
      if (uVar12 != bVar15) goto LAB_0801359c;
      *(undefined4 *)(pbVar3 + 0x14) = *(undefined4 *)(pbVar3 + 0x10);
    }
    if (((*DAT_08018c8c == '\0') && (iVar8 = FUN_0801174c(pcVar14,0x47), iVar8 != 0)) &&
       (uVar12 = FUN_08011748(iVar8 + 1,0,10), uVar12 < 4)) {
      FUN_0800bb0c(DAT_08018c90);
    }
    FUN_08018ad8(pcVar5,1);
  } while( true );
}



/* FUN_08018e58 at 08018e58 */

undefined4 FUN_08018e58(void)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 in_r3;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined4 local_10;
  
  if (*DAT_08018e70 == '\0') {
    return 0;
  }
  FUN_0801378c();
  pbVar3 = DAT_0800ad34;
  pbVar2 = DAT_0800ad28;
  *DAT_0800ad40 = *DAT_0800ad3c;
  local_10 = in_r3;
  if (-1 < (int)((uint)*pbVar3 << 0x1c)) {
    fVar6 = *(float *)(pbVar2 + 0x24);
    uVar1 = in_fpscr & 0xfffffff;
    in_fpscr = uVar1 | (uint)(fVar6 == *(float *)(pbVar2 + 0x14)) << 0x1e;
    if ((byte)(in_fpscr >> 0x1e) == 0) {
      fVar5 = ABS(fVar6 - *(float *)(pbVar2 + 0x14)) * *(float *)(DAT_0800ad44 + (uint)*pbVar2 * 4);
      uVar1 = uVar1 | (uint)(fVar5 < DAT_0800aab8) << 0x1f;
      in_fpscr = uVar1 | (uint)(NAN(fVar5) || NAN(DAT_0800aab8)) << 0x1c;
      if ((byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
        *(float *)(pbVar2 + 0x14) = fVar6;
        FUN_0800a8f4();
        FUN_0800bb0c(s_too_long_extrusion_prevented_0800adf4);
      }
    }
  }
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(pbVar2 + 2),(byte)(in_fpscr >> 0x15) & 3);
  uVar7 = FUN_0800bca0(fVar6 * *(float *)(pbVar2 + 0x40));
  FUN_0800c284((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0800ad48,DAT_0800ad4c);
  local_10 = FUN_0800bef8();
  iVar4 = FUN_080112ec(pbVar2 + 0x18,&local_10);
  if (iVar4 == 0) {
    *(undefined4 *)(pbVar2 + 8) = *(undefined4 *)(pbVar2 + 0x18);
    *(undefined4 *)(pbVar2 + 0xc) = *(undefined4 *)(pbVar2 + 0x1c);
    *(undefined4 *)(pbVar2 + 0x10) = *(undefined4 *)(pbVar2 + 0x20);
    *(undefined4 *)(pbVar2 + 0x14) = *(undefined4 *)(pbVar2 + 0x24);
  }
  return local_10;
}



/* FUN_08018e74 at 08018e74 */

undefined4 FUN_08018e74(void)

{
  char cVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  char *pcVar6;
  undefined4 in_r3;
  char *pcVar7;
  undefined8 uVar8;
  
  iVar4 = FUN_0800b020(0x50);
  pfVar3 = DAT_08018f0c;
  fVar5 = DAT_08018f04;
  if ((iVar4 != 0) && (fVar5 = *DAT_08018f0c, fVar5 != 0.0)) {
    fVar5 = (float)FUN_080163e4(fVar5,0,10);
  }
  iVar4 = FUN_0800b020(0x53);
  if (iVar4 != 0) {
    pcVar6 = (char *)*pfVar3;
    pcVar7 = pcVar6;
    fVar5 = DAT_08018f04;
    if (pcVar6 != (char *)0x0) {
      for (; (cVar1 = *pcVar7, cVar1 != '\0' && (cVar1 != ' ')); pcVar7 = pcVar7 + 1) {
        if (cVar1 == 'E' || cVar1 == 'e') {
          *pcVar7 = '\0';
          uVar8 = FUN_08015900(*pfVar3,0);
          *pcVar7 = cVar1;
          goto LAB_08018ede;
        }
      }
      uVar8 = FUN_08015900(pcVar6,0);
LAB_08018ede:
      fVar5 = (float)FUN_0800bef8((int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
      fVar5 = fVar5 * DAT_08018f08;
    }
    fVar5 = (float)VectorFloatToUnsigned(fVar5,3);
  }
  FUN_08010028();
  piVar2 = DAT_08013d64;
  iVar4 = *DAT_08013d64;
  *DAT_08013d68 = iVar4;
  while (*piVar2 - (iVar4 + (int)fVar5) < 0) {
    FUN_0800b806(0);
  }
  return in_r3;
}



/* FUN_08018f10 at 08018f10 */

undefined8 FUN_08018f10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  iVar4 = FUN_0800a88c(1,1,1);
  if (iVar4 != 0) goto LAB_08018f98;
  FUN_0801e978(0x41a00000,DAT_08018f9c,0x41a00000,&uStack_18);
  iVar4 = FUN_0801174c(*DAT_08018fa0,0x50);
  if (iVar4 == 0) {
LAB_08018f8e:
    uVar3 = 0;
  }
  else {
    pcVar1 = (char *)(iVar4 + 1);
    iVar5 = (int)*pcVar1;
    if (9 < iVar5 - 0x30U) {
      if (iVar5 == 0x2e) {
        cVar2 = *(char *)(iVar4 + 2);
joined_r0x08018f88:
        if ((int)cVar2 - 0x30U < 10) goto LAB_08018f5a;
      }
      else if (iVar5 == 0x2d || iVar5 == 0x2b) {
        if ((int)*(char *)(iVar4 + 2) - 0x30U < 10) goto LAB_08018f5a;
        if (*(char *)(iVar4 + 2) == 0x2e) {
          cVar2 = *(char *)(iVar4 + 3);
          goto joined_r0x08018f88;
        }
      }
      *DAT_08018fa4 = 0;
      goto LAB_08018f8e;
    }
LAB_08018f5a:
    *DAT_08018fa4 = (int)pcVar1;
    if (pcVar1 == (char *)0x0) goto LAB_08018f8e;
    uVar3 = FUN_08011748(pcVar1,0,10);
  }
  FUN_0801e988(uVar3,&uStack_18);
LAB_08018f98:
  return CONCAT44(uStack_14,uStack_18);
}



/* thunk_FUN_08008194 at 08018fa8 */

/* WARNING: Removing unreachable block (ram,0x08008726) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_08008194(void)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 in_r3;
  byte bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 uStack_48;
  float fStack_44;
  float afStack_40 [2];
  
  iVar5 = FUN_08008c6c();
  if (iVar5 != 0) {
    return in_r3;
  }
  iVar5 = FUN_0800a88c(1,1,1);
  if (iVar5 != 0) {
    iVar5 = FUN_0800b020(0x50);
    if (iVar5 == 0) {
      cVar3 = -1;
    }
    else {
      cVar3 = FUN_0800b038();
    }
    if (((cVar3 == '\x01' || cVar3 == '\x02') || cVar3 == '\x04') ||
       (iVar5 = FUN_0800b04c(0x4a), iVar5 != 0)) {
      FUN_0800b0ac(1);
    }
  }
  iVar5 = FUN_0800b04c(0x49);
  pcVar6 = DAT_08008e10;
  uVar17 = DAT_08008454;
  if (iVar5 != 0) {
    bVar12 = 0;
    if (*_DAT_08008e14 == 0) {
      pcVar6[0xc] = '\x01';
      pcVar6[0xd] = '\0';
      pcVar6[0xe] = '\0';
      pcVar6[0xf] = '\0';
LAB_08008226:
      while (iVar5 = *(int *)(pcVar6 + 0xc), *(int *)(pcVar6 + 0xc) = iVar5 + -1, iVar5 != 0) {
        if (0x14 < bVar12) {
          FUN_0800b806(0);
          bVar12 = 0;
        }
        fStack_44 = 0.0;
        uStack_48 = 0;
        FUN_0800991c(afStack_40,1,pcVar6 + 0x18,pcVar6 + 0x1c);
        if (afStack_40[0]._0_1_ < '\0') {
          FUN_0800b3b4(uVar17);
          FUN_0800bb0c(s_Entire_Mesh_invalidated__08008770);
          break;
        }
        uVar20 = FUN_0800892a();
        bVar12 = bVar12 + 1;
        *(undefined4 *)((int)uVar20 + (int)((ulonglong)uVar20 >> 0x20) * 4) = uVar17;
      }
    }
    else {
      sVar4 = FUN_0800b038();
      *(int *)(pcVar6 + 0xc) = (int)sVar4;
      if (sVar4 < 0x19) goto LAB_08008226;
      FUN_0800b3b4(uVar17);
    }
    FUN_0800bb0c(s_Locations_invalidated__0800878c);
  }
  iVar5 = FUN_0800b04c(0x51);
  if (iVar5 != 0) {
    if (*_DAT_08008e14 == 0) {
      iVar5 = -99;
    }
    else {
      sVar4 = FUN_0800b038();
      iVar5 = (int)sVar4;
    }
    iVar15 = DAT_0800900c;
    if (3 < iVar5 + 1U) {
      pcVar6 = s_Invalid_test_pattern_value____1_t_080087a8;
      goto LAB_08008728;
    }
    FUN_0800bb0c(s_Loading_test_pattern_values__080087d0);
    switch(iVar5) {
    case 0:
      uVar13 = 0;
      do {
        iVar5 = iVar15 + uVar13 * 0x14;
        fVar18 = (float)FUN_0800a1be(uVar13 & 0xff);
        uVar16 = 0;
        do {
          fVar19 = (float)FUN_0800a1be(uVar16 & 0xff);
          uVar20 = FUN_0800bca0(*(undefined4 *)(iVar5 + uVar16 * 4));
          FUN_0800bce8((2.5 - fVar18) * (2.5 - fVar18) + (2.5 - fVar19) * (2.5 - fVar19));
          FUN_08009c0e();
          uVar21 = FUN_08009bfc();
          FUN_0800bd80((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar20,
                       (int)((ulonglong)uVar20 >> 0x20));
          uVar17 = FUN_0800bef8();
          *(undefined4 *)(iVar5 + uVar16 * 4) = uVar17;
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < 5);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < 5);
      break;
    case 1:
      iVar5 = 0;
      do {
        iVar14 = iVar15 + iVar5 * 0x14;
        FUN_0800bca0(*(undefined4 *)(iVar14 + iVar5 * 4));
        FUN_08008918();
        uVar17 = FUN_0800bef8();
        *(undefined4 *)(iVar15 + iVar5 * 0x18) = uVar17;
        iVar10 = -4;
        if (iVar5 + (uint)(iVar5 < 4) != 0) {
          iVar10 = 4;
        }
        iVar5 = iVar5 + 1;
        FUN_0800bca0(*(undefined4 *)(iVar14 + iVar10));
        FUN_08008918();
        uVar17 = FUN_0800bef8();
        *(undefined4 *)(iVar14 + iVar10) = uVar17;
      } while (iVar5 < 5);
      break;
    case 2:
      iVar5 = 1;
      do {
        iVar14 = 1;
        iVar10 = iVar15 + iVar5 * 0x14;
        do {
          iVar7 = FUN_0800b04c(0x43);
          if (iVar7 != 0) {
            FUN_0800bca0(*(undefined4 *)(pcVar6 + 0x20));
          }
          FUN_0800bca0(*(undefined4 *)(iVar10 + iVar14 * 4));
          FUN_08008918();
          uVar17 = FUN_0800bef8();
          *(undefined4 *)(iVar10 + iVar14 * 4) = uVar17;
          iVar14 = iVar14 + 1;
        } while (iVar14 < 3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      break;
    case -1:
      FUN_080095ac();
    }
  }
  iVar5 = FUN_0800b04c(0x4a);
  if (iVar5 != 0) {
    iVar5 = *(int *)(pcVar6 + 0x24);
    if (iVar5 == 0) {
      FUN_08008f78();
    }
    else {
      FUN_08008f78();
    }
    FUN_08009cb0(iVar5 == 0);
    FUN_08008fe8();
    uStack_48 = 0;
    afStack_40[0] = DAT_0800862c;
    fStack_44 = DAT_0800862c;
    FUN_0800a76c(afStack_40,&fStack_44,&uStack_48);
  }
  iVar5 = FUN_0800b04c(0x50);
  uVar17 = DAT_080091ac;
  pcVar2 = DAT_0800901c;
  if (iVar5 == 0) goto switchD_0800843a_caseD_7;
  if ((*(uint *)(pcVar6 + 8) < 2) && (*DAT_0800901c == -1)) {
    *DAT_0800901c = '\0';
    FUN_0800bb0c(s_Default_storage_slot_0_selected__080087f0);
  }
  switch(*(undefined4 *)(pcVar6 + 8)) {
  case 0:
    FUN_0800b368();
    FUN_0800bb0c(s_Mesh_zeroed__08008814);
    break;
  case 1:
    iVar5 = FUN_0800b04c(0x43);
    if (iVar5 == 0) {
      FUN_0800b3a4();
      FUN_0800bb0c(s_Mesh_invalidated__Probing_mesh__08008824);
    }
    if (1 < *(int *)(pcVar6 + 4)) {
      uVar11 = FUN_0800bb78(*(undefined4 *)(pcVar6 + 0x18),
                            s_Probing_Mesh_Points_Closest_to___08008848);
      FUN_08008902(uVar11,0x2c);
      uVar11 = FUN_0800bca0(*(undefined4 *)(pcVar6 + 0x1c));
      FUN_0800bfd0(uVar11,uVar17,2);
      FUN_0800bb0c(&DAT_0800886c);
    }
    afStack_40[0] = *(float *)(pcVar6 + 0x18) + 25.0;
    fStack_44 = *(float *)(pcVar6 + 0x1c) + 10.0;
    uVar11 = FUN_0800b04c(0x55);
    uVar8 = FUN_0800b04c(0x45);
    uVar9 = FUN_0800b04c(0x54);
    uStack_48 = uVar11;
    FUN_08008aec(afStack_40,&fStack_44,uVar9,uVar8);
    break;
  case 2:
    pcVar6 = s__P2_is_only_available_when_an_LC_08008874;
    goto LAB_08008728;
  case 3:
    if (*pcVar6 == '\0') {
      fVar18 = (float)FUN_0800c204();
      fVar19 = (float)FUN_0800c258(fVar18 * 10.0);
      if ((int)fVar19 == 0x1f) {
        uVar20 = FUN_0800bca0(fVar18);
        uVar20 = FUN_0800bd80((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_08009020,DAT_08009024
                             );
        FUN_0800c284((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0,_DAT_08009028);
        fVar18 = (float)FUN_0800bef8();
        if (fVar18 == 0.0) {
          uStack_48 = 0;
        }
        else {
          uStack_48 = FUN_0800c804(0x41200000);
        }
        FUN_0800a1dc(&uStack_48);
      }
      else {
        FUN_08009c16();
      }
    }
    else {
      if (*(int *)(pcVar6 + 0xc) < 0x19) {
LAB_08008506:
        iVar5 = *(int *)(pcVar6 + 0xc);
        *(int *)(pcVar6 + 0xc) = iVar5 + -1;
        if (iVar5 != 0) {
          fStack_44 = 0.0;
          uStack_48 = 0;
          FUN_0800991c(afStack_40,0,pcVar6 + 0x18,pcVar6 + 0x1c);
          iVar5 = DAT_0800900c;
          if (-1 < afStack_40[0]._0_1_) goto LAB_080084fc;
          iVar15 = 0;
          do {
            iVar10 = 0;
            iVar14 = iVar5 + iVar15 * 0x14;
            do {
              iVar7 = FUN_08009afa(iVar14 + iVar10 * 4);
              if (iVar7 != 0) {
                *(undefined4 *)(iVar14 + iVar10 * 4) = *(undefined4 *)(pcVar6 + 0x20);
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < 5);
            iVar15 = iVar15 + 1;
          } while (iVar15 < 5);
        }
        break;
      }
      FUN_0800b3b4(*(undefined4 *)(pcVar6 + 0x20));
    }
    break;
  case 4:
    pcVar6 = s__P4_is_only_available_when_an_LC_080088a4;
LAB_08008728:
    FUN_0800bb0c(pcVar6);
    return in_r3;
  case 5:
    FUN_08008944();
    break;
  case 6:
    FUN_08008aac();
  }
switchD_0800843a_caseD_7:
  iVar5 = FUN_0800b04c(0x57);
  if (iVar5 != 0) {
    FUN_0800906c();
  }
  iVar5 = FUN_0800b04c(0x4b);
  if (iVar5 != 0) {
    FUN_08009628();
  }
  iVar5 = FUN_0800b04c(0x4c);
  uVar8 = DAT_080092f4;
  uVar11 = DAT_080092f0;
  piVar1 = _DAT_08008e14;
  if (iVar5 == 0) {
LAB_0800866a:
    iVar5 = FUN_0800b04c(0x53);
    if (iVar5 != 0) {
      if (*piVar1 == 0) {
        iVar5 = (int)*pcVar2;
      }
      else {
        sVar4 = FUN_0800b038();
        iVar5 = (int)sVar4;
      }
      *(int *)(pcVar6 + 0x10) = iVar5;
      iVar15 = DAT_0800900c;
      if (iVar5 == -1) {
        FUN_0800bb0c(s_G29_I_999_080088dc);
        uVar13 = 0;
        do {
          uVar16 = 0;
          iVar5 = iVar15 + uVar13 * 0x14;
          do {
            iVar10 = FUN_08009afa(iVar5 + uVar16 * 4);
            if (iVar10 == 0) {
              FUN_0800bb4c(s_M421_I_080088e8,uVar13);
              FUN_0800bb4c(&DAT_0800893c,uVar16);
              FUN_0800bb0c(&DAT_08008940);
              uVar11 = FUN_0800bca0(*(undefined4 *)(iVar5 + uVar16 * 4));
              FUN_0800bfd0(uVar11,uVar17,6);
              FUN_08008908(s___X_080088f0,DAT_08009300,uVar13 & 0xff);
              FUN_08008908(&DAT_080088f8,DAT_08009308,uVar16 & 0xff);
              FUN_08008900();
            }
            uVar16 = uVar16 + 1;
          } while ((int)uVar16 < 5);
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < 5);
        return in_r3;
      }
      iVar5 = *(int *)(pcVar6 + 0x10);
      uVar17 = 0;
      if ((iVar5 < 0) || (0 < iVar5)) {
        FUN_0800bb0c(uVar8);
        goto LAB_08008744;
      }
      FUN_0800d3bc((int)(char)iVar5);
      FUN_08008920();
    }
    iVar5 = FUN_0800b04c(0x54);
    if (iVar5 != 0) {
      FUN_0800b3e4(*(undefined4 *)(pcVar6 + 0x14));
    }
  }
  else {
    if (*_DAT_08008e14 == 0) {
      iVar5 = (int)*pcVar2;
    }
    else {
      sVar4 = FUN_0800b038();
      iVar5 = (int)sVar4;
    }
    *(int *)(pcVar6 + 0x10) = iVar5;
    iVar5 = *(int *)(pcVar6 + 0x10);
    uStack_48 = 0;
    if ((-1 < iVar5) && (iVar5 < 1)) {
      FUN_0800d3fe((int)(char)iVar5,0);
      FUN_08008920();
      goto LAB_0800866a;
    }
    FUN_0800bb0c(uVar8);
    uVar17 = uStack_48;
LAB_08008744:
    FUN_0800bb4c(uVar11,uVar17);
    FUN_08008900();
  }
  return in_r3;
LAB_080084fc:
  uVar20 = FUN_0800892a();
  *(undefined4 *)((int)uVar20 + (int)((ulonglong)uVar20 >> 0x20) * 4) =
       *(undefined4 *)(pcVar6 + 0x20);
  goto LAB_08008506;
}



/* FUN_08018fac at 08018fac */

void FUN_08018fac(void)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float local_24;
  float local_20 [2];
  
  pfVar1 = DAT_08019100;
  fVar6 = *DAT_08019100 + 25.0;
  iVar3 = FUN_0800b020(0x58);
  if (iVar3 != 0) {
    fVar6 = (float)FUN_0800c204();
  }
  fVar7 = pfVar1[1] + 10.0;
  local_20[0] = fVar6;
  iVar3 = FUN_0800b020(0x59);
  if (iVar3 != 0) {
    fVar7 = (float)FUN_0800c204();
  }
  if (local_20[0] < DAT_08019104 != (NAN(local_20[0]) || NAN(DAT_08019104))) {
    return;
  }
  if (-1 < (int)((uint)(local_20[0] < DAT_08019108) << 0x1f)) {
    return;
  }
  if (fVar7 < DAT_0801910c != (NAN(fVar7) || NAN(DAT_0801910c))) {
    return;
  }
  if (-1 < (int)((uint)(fVar7 < DAT_08019108) << 0x1f)) {
    return;
  }
  local_24 = fVar7;
  FUN_0800e4d4(0);
  FUN_0800a7cc();
  iVar3 = FUN_0800b020(0x45);
  if (iVar3 == 0) {
    uVar4 = FUN_0800b04c(0x45);
  }
  else {
    if (*DAT_0801911c != 0) {
      iVar3 = FUN_0800b038();
      if (iVar3 < 0) {
        uVar4 = 0;
        goto LAB_08019056;
      }
      iVar3 = FUN_0800b038();
      if (iVar3 < 0x100) {
        bVar2 = FUN_0800b038();
        uVar4 = (uint)bVar2;
        if (uVar4 == 0) goto LAB_08019056;
      }
    }
    uVar4 = 1;
  }
LAB_08019056:
  uVar4 = FUN_0800e058(local_20,&local_24,uVar4,1,1);
  if (((int)(uVar4 << 1) >> 0x18 != -1) || ((uVar4 & 0x7fffff) == 0)) {
    FUN_0800bca0(local_20[0]);
    uVar5 = FUN_08019120();
    FUN_0800bb9e(uVar5,s_Bed_X__08019128);
    FUN_0800bca0(local_24);
    uVar5 = FUN_08019120();
    FUN_0800bb9e(uVar5,&DAT_08019130);
    FUN_0800bca0(uVar4);
    uVar5 = FUN_08019120();
    FUN_0800bb9e(uVar5,&DAT_08019138);
    FUN_0800de78(DAT_08019118,10);
  }
  FUN_0800a7d0();
  FUN_0800a500();
  return;
}



/* FUN_08019120 at 08019120 */

void FUN_08019120(void)

{
  FUN_0800bd80();
  return;
}



/* FUN_08019140 at 08019140 */

void FUN_08019140(void)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  undefined4 in_r3;
  int iVar12;
  char *pcVar13;
  float fVar15;
  undefined8 uVar14;
  
  FUN_08010028();
  puVar8 = DAT_08019288;
  iVar7 = DAT_08019284;
  iVar6 = DAT_08019280;
  fVar5 = DAT_0801927c;
  fVar4 = DAT_08019278;
  bVar3 = false;
  iVar12 = 0;
  do {
    iVar9 = FUN_0801174c(*DAT_0801928c,(int)(char)(&DAT_08019294)[iVar12]);
    if (iVar9 != 0) {
      pcVar1 = (char *)(iVar9 + 1);
      iVar11 = (int)*pcVar1;
      if (iVar11 - 0x30U < 10) {
LAB_08019192:
        *puVar8 = pcVar1;
        pcVar13 = pcVar1;
        if (pcVar1 != (char *)0x0) {
          for (; cVar2 = *pcVar13, cVar2 != '\0' && cVar2 != ' '; pcVar13 = pcVar13 + 1) {
            if (cVar2 == 'E' || cVar2 == 'e') {
              *pcVar13 = '\0';
              uVar14 = FUN_08015900(*puVar8,0);
              *pcVar13 = cVar2;
              goto LAB_08019242;
            }
          }
          uVar14 = FUN_08015900(pcVar1,0);
LAB_08019242:
          fVar10 = (float)FUN_0800bef8((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
          if (iVar12 != 3) {
            fVar10 = fVar10 - *(float *)(DAT_08019290 + iVar12 * 4);
          }
          fVar15 = fVar10 - *(float *)(iVar7 + iVar12 * 4);
          if ((fVar15 < fVar5 != (NAN(fVar15) || NAN(fVar5))) ||
             (-1 < (int)((uint)(fVar15 < fVar4) << 0x1f))) {
            if (iVar12 == 3) {
              bVar3 = true;
              *(float *)(iVar7 + 0xc) = fVar10;
            }
            else {
              *(float *)(iVar6 + iVar12 * 4) = *(float *)(iVar6 + iVar12 * 4) + fVar15;
              FUN_0800ac98((int)(char)iVar12);
            }
          }
        }
      }
      else {
        if (iVar11 == 0x2e) {
          cVar2 = *(char *)(iVar9 + 2);
joined_r0x080191d4:
          if ((int)cVar2 - 0x30U < 10) goto LAB_08019192;
        }
        else if (iVar11 == 0x2d || iVar11 == 0x2b) {
          if ((int)*(char *)(iVar9 + 2) - 0x30U < 10) goto LAB_08019192;
          if (*(char *)(iVar9 + 2) == 0x2e) {
            cVar2 = *(char *)(iVar9 + 3);
            goto joined_r0x080191d4;
          }
        }
        *puVar8 = 0;
      }
    }
    iVar12 = iVar12 + 1;
    if (3 < iVar12) {
      if (bVar3) {
        FUN_0800a5b6();
      }
      FUN_0800a500(in_r3);
      return;
    }
  } while( true );
}



/* FUN_08019298 at 08019298 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08019298(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  float *pfVar4;
  int *piVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  char *pcVar13;
  float fVar14;
  char *pcVar15;
  float fVar16;
  float fVar17;
  bool bVar18;
  uint in_fpscr;
  undefined8 uVar19;
  
  if (*DAT_08019410 == '\0') {
    return param_1;
  }
  iVar9 = FUN_0800b020(0x49);
  if (iVar9 == 0) {
    bVar6 = 0;
  }
  else {
    bVar6 = FUN_0800b038();
  }
  iVar10 = FUN_0800b020(0x4a);
  if (iVar10 == 0) {
    bVar7 = 0;
  }
  else {
    bVar7 = FUN_0800b038();
  }
  pfVar4 = DAT_08019418;
  if (((iVar9 != 0) && (4 < bVar6)) || ((iVar10 != 0 && (4 < bVar7)))) {
    uVar11 = FUN_0800bb0c(s_Mesh_point_cannot_be_resolved_0801942b + 1,param_4);
    return uVar11;
  }
  fVar14 = DAT_08019414[1];
  fVar16 = DAT_08019414[2];
  fVar17 = DAT_08019414[3];
  *DAT_08019418 = *DAT_08019414;
  pfVar4[1] = fVar14;
  pfVar4[2] = fVar16;
  pfVar4[3] = fVar17;
  fVar14 = DAT_08019408;
  if (iVar9 != 0) {
    if (bVar6 < 5) {
      fVar16 = *(float *)(DAT_0801941c + (uint)bVar6 * 4);
    }
    else {
      fVar16 = (float)VectorUnsignedToFloat((uint)bVar6,(byte)(in_fpscr >> 0x15) & 3);
      fVar16 = fVar16 * DAT_08019408 + 20.0;
    }
    *pfVar4 = fVar16;
  }
  if (iVar10 != 0) {
    if (bVar7 < 5) {
      fVar14 = *(float *)(DAT_08019420 + (uint)bVar7 * 4);
    }
    else {
      fVar16 = (float)VectorUnsignedToFloat((uint)bVar7,(byte)(in_fpscr >> 0x15) & 3);
      fVar14 = fVar16 * fVar14 + 20.0;
    }
    pfVar4[1] = fVar14;
  }
  iVar12 = FUN_0800b020(0x50);
  piVar5 = DAT_08019424;
  if (iVar12 == 0) {
    iVar12 = FUN_0800b04c(0x50);
    if (iVar12 == 0) goto LAB_0801939c;
  }
  else if ((*DAT_08019424 != 0) &&
          ((iVar12 = FUN_0800b038(), iVar12 < 0 ||
           ((iVar12 = FUN_0800b038(), iVar12 < 0x100 && (cVar8 = FUN_0800b038(), cVar8 == '\0'))))))
  goto LAB_0801939c;
  if (iVar9 != 0) {
    *pfVar4 = *pfVar4 + -25.0;
  }
  if (iVar10 != 0) {
    pfVar4[1] = pfVar4[1] + -10.0;
  }
LAB_0801939c:
  pcVar13 = (char *)FUN_0800b020(0x46);
  bVar18 = pcVar13 != (char *)0x0;
  if (bVar18) {
    pcVar13 = (char *)*piVar5;
  }
  pcVar15 = pcVar13;
  if (bVar18 && pcVar13 != (char *)0x0) {
    for (; (cVar8 = *pcVar15, cVar8 != '\0' && (cVar8 != ' ')); pcVar15 = pcVar15 + 1) {
      if (cVar8 == 'E' || cVar8 == 'e') {
        *pcVar15 = '\0';
        uVar19 = FUN_08015900(*piVar5,0);
        *pcVar15 = cVar8;
        goto LAB_080193ca;
      }
    }
    uVar19 = FUN_08015900(pcVar13,0);
LAB_080193ca:
    fVar14 = (float)FUN_0800bef8((int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar14 < 0.0) << 0x1f | (uint)(fVar14 == 0.0) << 0x1e;
    in_fpscr = uVar1 | (uint)NAN(fVar14) << 0x1c;
    bVar6 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar6 >> 6 & 1) && bVar6 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
      *_DAT_08019428 = fVar14 / DAT_0801940c;
    }
  }
  pbVar3 = DAT_0800ad34;
  pbVar2 = DAT_0800ad28;
  *DAT_0800ad40 = *DAT_0800ad3c;
  if (-1 < (int)((uint)*pbVar3 << 0x1c)) {
    fVar14 = *(float *)(pbVar2 + 0x24);
    uVar1 = in_fpscr & 0xfffffff;
    in_fpscr = uVar1 | (uint)(fVar14 == *(float *)(pbVar2 + 0x14)) << 0x1e;
    if (((byte)(in_fpscr >> 0x1e) == 0) &&
       (fVar16 = ABS(fVar14 - *(float *)(pbVar2 + 0x14)) *
                 *(float *)(DAT_0800ad44 + (uint)*pbVar2 * 4),
       uVar1 = uVar1 | (uint)(fVar16 < DAT_0800aab8) << 0x1f,
       in_fpscr = uVar1 | (uint)(NAN(fVar16) || NAN(DAT_0800aab8)) << 0x1c,
       (byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1))) {
      *(float *)(pbVar2 + 0x14) = fVar14;
      FUN_0800a8f4();
      FUN_0800bb0c(s_too_long_extrusion_prevented_0800adf4);
    }
  }
  fVar14 = (float)VectorSignedToFloat((int)*(short *)(pbVar2 + 2),(byte)(in_fpscr >> 0x15) & 3);
  uVar19 = FUN_0800bca0(fVar14 * *(float *)(pbVar2 + 0x40));
  FUN_0800c284((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),DAT_0800ad48,DAT_0800ad4c);
  uVar11 = FUN_0800bef8();
  iVar9 = FUN_080112ec(pbVar2 + 0x18,&stack0xfffffff0);
  if (iVar9 == 0) {
    *(undefined4 *)(pbVar2 + 8) = *(undefined4 *)(pbVar2 + 0x18);
    *(undefined4 *)(pbVar2 + 0xc) = *(undefined4 *)(pbVar2 + 0x1c);
    *(undefined4 *)(pbVar2 + 0x10) = *(undefined4 *)(pbVar2 + 0x20);
    *(undefined4 *)(pbVar2 + 0x14) = *(undefined4 *)(pbVar2 + 0x24);
  }
  return uVar11;
}



/* FUN_0801944c at 0801944c */

undefined4 FUN_0801944c(void)

{
  char cVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  float fVar5;
  char *pcVar6;
  undefined4 in_r3;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  undefined8 uVar13;
  
  piVar2 = DAT_08019550;
  pcVar8 = (char *)*DAT_0801954c;
  iVar7 = 0;
  iVar4 = FUN_0800b020(0x50);
  bVar11 = false;
  bVar10 = false;
  if (iVar4 != 0) {
    if (*piVar2 != 0) {
      iVar7 = FUN_080163e4(*piVar2,0,10);
    }
    if (iVar7 != 0) {
      bVar11 = true;
    }
  }
  fVar5 = (float)FUN_0800b020(0x53);
  if (fVar5 != 0.0) {
    pcVar6 = (char *)*piVar2;
    pcVar9 = pcVar6;
    if (pcVar6 == (char *)0x0) {
      fVar5 = 0.0;
      fVar12 = DAT_08019544;
    }
    else {
      for (; cVar1 = *pcVar9, cVar1 != '\0' && cVar1 != ' '; pcVar9 = pcVar9 + 1) {
        if (cVar1 == 'E' || cVar1 == 'e') {
          *pcVar9 = '\0';
          uVar13 = FUN_08015900(*piVar2,0);
          *pcVar9 = cVar1;
          goto LAB_0801950a;
        }
      }
      uVar13 = FUN_08015900(pcVar6,0);
LAB_0801950a:
      fVar5 = (float)FUN_0800bef8((int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
      fVar12 = fVar5 * DAT_08019548;
    }
    iVar7 = VectorFloatToUnsigned(fVar12,3);
    if (iVar7 != 0) {
      bVar10 = true;
    }
  }
  if (!bVar10 && !bVar11) {
    if (pcVar8 != (char *)0x0) {
      fVar5 = (float)(int)*pcVar8;
    }
    if (pcVar8 != (char *)0x0 && fVar5 != 0.0) {
      FUN_0800bb0c(DAT_08019554);
      FUN_0800bfec(DAT_08019558,pcVar8);
    }
  }
  piVar2 = DAT_08019564;
  pcVar8 = DAT_08019560;
  puVar3 = DAT_0801955c;
  *DAT_0801955c = 3;
  *pcVar8 = '\x01';
  FUN_08010028();
  iVar4 = *piVar2;
  *DAT_08019568 = iVar4;
  if (iVar7 == 0) {
    while (*pcVar8 != '\0') {
      FUN_0800b806(0);
    }
  }
  else {
    while ((*piVar2 - (iVar4 + iVar7) < 0 && (*pcVar8 != '\0'))) {
      FUN_0800b806(0);
    }
  }
  *pcVar8 = '\0';
  *puVar3 = 1;
  return in_r3;
}



/* thunk_FUN_0800b748 at 0801956c */

void thunk_FUN_0800b748(void)

{
  int *piVar1;
  
  piVar1 = DAT_0800b9b0;
  *(int *)(DAT_0800b9b0[0x18] + 0x18) = DAT_0800b9b0[0x19] << 0x10;
  *(int *)(piVar1[8] + 0x18) = piVar1[9] << 0x10;
  *(int *)(*piVar1 + 0x18) = piVar1[1] << 0x10;
  *(int *)(piVar1[0x16] + 0x18) = piVar1[0x17] << 0x10;
  return;
}



/* FUN_08019570 at 08019570 */

undefined4
FUN_08019570(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  char *pcVar8;
  bool bVar9;
  undefined8 uVar10;
  
  pcVar4 = (char *)FUN_0800b04c(0x53);
  bVar9 = pcVar4 != (char *)0x0;
  if (bVar9) {
    pcVar4 = (char *)*DAT_08019640;
    param_3 = DAT_08019640;
  }
  pcVar8 = pcVar4;
  if (!bVar9 || pcVar4 == (char *)0x0) {
    iVar5 = FUN_0800b04c(0x58);
    if ((((iVar5 == 0) && (iVar5 = FUN_0800b04c(0x59), iVar5 == 0)) &&
        (iVar5 = FUN_0800b04c(0x5a), iVar5 == 0)) && (iVar5 = FUN_0800b04c(0x45), iVar5 == 0)) {
      uVar6 = FUN_080100ba(param_4);
      return uVar6;
    }
    FUN_08010028();
    iVar5 = FUN_0800b04c(0x58);
    puVar3 = DAT_08019648;
    piVar2 = DAT_08019644;
    if (iVar5 != 0) {
      *(int *)(DAT_08019644[0x18] + 0x18) = DAT_08019644[0x19];
      *puVar3 = 0;
    }
    iVar5 = FUN_0800b04c(0x59);
    if (iVar5 != 0) {
      *(int *)(piVar2[8] + 0x18) = piVar2[9];
      puVar3[1] = 0;
    }
    iVar5 = FUN_0800b04c(0x5a);
    if (iVar5 != 0) {
      *(int *)(*piVar2 + 0x18) = piVar2[1];
      puVar3[2] = 0;
    }
    return param_4;
  }
  for (; (cVar1 = *pcVar8, cVar1 != '\0' && (cVar1 != ' ')); pcVar8 = pcVar8 + 1) {
    if (cVar1 == 'E' || cVar1 == 'e') {
      *pcVar8 = '\0';
      uVar10 = FUN_08015900(*param_3,0);
      *pcVar8 = cVar1;
      goto LAB_0801960a;
    }
  }
  uVar10 = FUN_08015900(pcVar4,0);
LAB_0801960a:
  fVar7 = (float)FUN_0800bef8((int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
  uVar6 = VectorFloatToUnsigned(fVar7 * DAT_0801963c,3);
  *DAT_0801964c = uVar6;
  return param_4;
}



/* FUN_08019650 at 08019650 */

void FUN_08019650(void)

{
  undefined4 unaff_r7;
  
  FUN_0800bb0c(s_Begin_file_list_08019847 + 1);
  FUN_08012754(DAT_08019830);
  FUN_0800bb0c(s_End_file_list_0801985c,unaff_r7);
  return;
}



/* FUN_0801966a at 0801966a */

void FUN_0801966a(void)

{
  FUN_0801288a(DAT_08019830);
  return;
}



/* FUN_08019670 at 08019670 */

void FUN_08019670(void)

{
  int iVar1;
  
  iVar1 = DAT_08019830;
  *(undefined1 *)(DAT_08019830 + 0x23) = 0;
  *(undefined1 *)(iVar1 + 0x24) = 0;
  return;
}



/* FUN_08019676 at 08019676 */

void FUN_08019676(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  
  puVar1 = DAT_08019834;
  for (pcVar2 = (char *)*DAT_08019834; *pcVar2 != '\0'; pcVar2 = pcVar2 + 1) {
    if (*pcVar2 == ' ') {
      *pcVar2 = '\0';
    }
  }
  FUN_08012a56(DAT_08019830,*puVar1,1,0);
  return;
}



/* FUN_0801969c at 0801969c */

void FUN_0801969c(void)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 in_r3;
  int iVar5;
  
  iVar4 = FUN_0800b04c(0x53);
  uVar2 = DAT_08019838;
  iVar1 = DAT_08019830;
  iVar5 = 0;
  if (iVar4 == 0) {
    FUN_08012990(DAT_08019830);
    FUN_08016480(DAT_0801983c,in_r3);
    return;
  }
  FUN_0800bb0c(s_Start_reading_file__0801986c);
  while (*(uint *)(iVar1 + 0x358) < *(uint *)(iVar1 + 0x354)) {
    *(undefined4 *)(iVar1 + 0x358) = *(undefined4 *)(iVar1 + 0x130);
    cVar3 = FUN_08018292(iVar1 + 0x128);
    if (cVar3 == -1) {
      FUN_0800bb0c(s_ERROR__08019884);
      iVar5 = iVar5 + 1;
    }
    else {
      FUN_0800de78(uVar2,cVar3);
    }
  }
  if (iVar5 == 0) {
    FUN_0800bb0c(s_Finished_reading_file__no_error__08019890,in_r3);
    return;
  }
  FUN_0800bb4c(s_Error__080198b4,iVar5);
  FUN_0800de78(uVar2,10,in_r3);
  return;
}



/* FUN_08019722 at 08019722 */

void FUN_08019722(void)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_08019840;
  DAT_08019840[3] = 0;
  *puVar1 = 1;
  FUN_08016466(DAT_0801983c);
  return;
}



/* FUN_08019732 at 08019732 */

void FUN_08019732(void)

{
  int iVar1;
  
  if ((*(char *)(DAT_08019830 + 0x24) != '\0') && (iVar1 = FUN_0800b020(0x53), iVar1 != 0)) {
    FUN_0800b038();
    FUN_0801980e();
    FUN_080184cc();
    return;
  }
  return;
}



/* FUN_08019756 at 08019756 */

void FUN_08019756(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = DAT_08019830;
  puVar2 = DAT_08013164;
  uVar1 = DAT_08013150;
  FUN_0800bb0c(s_CID_ManufacturerID__0801330c);
  FUN_0800e69a(*puVar2);
  FUN_0800bb0c(s_CID_OEM_AppliID__08013320);
  FUN_0800e6a8(*(undefined2 *)(puVar2 + 2));
  FUN_0800bb0c(s_CID_ProdName1__08013334);
  uVar4 = FUN_0800e62e(*(undefined4 *)(puVar2 + 4));
  FUN_0800bf6c(uVar1,uVar4);
  FUN_0800bb0c(s_CID_ProdName2__08013344);
  FUN_0800e69a(puVar2[8]);
  FUN_0800bb0c(s_CID_ProdRev__08013354);
  FUN_0800e69a(puVar2[9]);
  FUN_0800bb0c(s_CID_ProdSN__08013364);
  uVar4 = FUN_0800e62e(*(undefined4 *)(puVar2 + 0xc));
  FUN_0800bf6c(uVar1,uVar4);
  FUN_0800bb0c(s_CID_ManufactDate__08013374);
  FUN_0800e6a8(*(undefined2 *)(puVar2 + 0x12));
  FUN_0800bfd4(uVar1);
  if (*(char *)(iVar3 + 0x24) != '\0') {
    FUN_0800bb0c(s_SD_printing_byte_08013388);
    FUN_0800bf76(uVar1,*(undefined4 *)(iVar3 + 0x358),10);
    FUN_0800de78(uVar1,0x2f);
    FUN_0800bffa(uVar1,*(undefined4 *)(iVar3 + 0x354),10);
    return;
  }
  FUN_0800bb0c(s_Not_SD_printing_0801339c);
  return;
}



/* FUN_0801975c at 0801975c */

void FUN_0801975c(void)

{
  FUN_08012a56(DAT_08019830,*DAT_08019834,0,0);
  return;
}



/* FUN_0801976a at 0801976a */

void FUN_0801976a(void)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 auStack_50 [16];
  undefined1 local_40 [3];
  undefined1 local_3d;
  
  iVar2 = DAT_08019830;
  if (*(char *)(DAT_08019830 + 0x24) == '\0') {
    return;
  }
  FUN_08012f54(DAT_08019830,0);
  pcVar6 = (char *)*DAT_08019834;
  if (*(char *)(iVar2 + 0x24) != '\0') {
    FUN_0801299e(iVar2);
    local_40[0] = 0;
    local_3d = 0;
    *(int *)(iVar2 + 0x7c) = iVar2 + 0x5c;
    uVar1 = DAT_08013150;
    if (*pcVar6 == '/') {
      pcVar3 = (char *)FUN_08012c70();
      while (((pcVar7 = pcVar3 + 1, pcVar8 = pcVar6, pcVar7 != (char *)0x0 &&
              (pcVar3 = (char *)FUN_0801174c(pcVar7,0x2f), pcVar8 = pcVar7, pcVar3 != (char *)0x0))
             && (pcVar7 < pcVar3))) {
        FUN_080189e0(auStack_50,pcVar7,(int)pcVar3 - (int)pcVar7);
        auStack_50[(int)pcVar3 - (int)pcVar7] = 0;
        FUN_0800bfec(uVar1,auStack_50);
        iVar4 = FUN_08017fe6(local_40,*(undefined4 *)(iVar2 + 0x7c),auStack_50,1);
        if (iVar4 == 0) {
          FUN_0800bb28(s_open_failed__File__0801328c,auStack_50);
          FUN_0800de78(uVar1,0x2e);
          uVar5 = 10;
          goto LAB_08012d52;
        }
        *(undefined1 **)(iVar2 + 0x7c) = local_40;
      }
    }
    else {
      *(int *)(iVar2 + 0x7c) = iVar2 + 0x80;
      pcVar8 = pcVar6;
    }
    iVar4 = FUN_0801848e(*(undefined4 *)(iVar2 + 0x7c),pcVar8);
    if (iVar4 == 0) {
      FUN_0800bb0c(s_Deletion_failed__File__080132ec);
      FUN_0800bf6c(uVar1,pcVar8);
      uVar5 = 0x2e;
LAB_08012d52:
      FUN_0800de78(uVar1,uVar5);
    }
    else {
      FUN_0800bb0c(s_File_deleted__080132dc);
      FUN_0800bfec(uVar1,pcVar8);
      *(undefined4 *)(iVar2 + 0x358) = 0;
    }
    FUN_08018628(local_40);
  }
  return;
}



/* FUN_0801978c at 0801978c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0801978c(void)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_r3;
  uint uVar5;
  
  iVar1 = DAT_08019830;
  if (*(char *)(DAT_08019830 + 0x23) != '\0') {
    FUN_08010028();
  }
  if (*(char *)(iVar1 + 0x24) == '\0') {
    return in_r3;
  }
  iVar4 = FUN_0800b020(0x50);
  if (iVar4 == 0) {
    uVar5 = FUN_0800b04c(0x50);
  }
  else {
    if (*_DAT_08019844 != 0) {
      iVar4 = FUN_0800b038();
      if (iVar4 < 0) {
        uVar5 = 0;
        goto LAB_080197dc;
      }
      iVar4 = FUN_0800b038();
      if (iVar4 < 0x100) {
        bVar2 = FUN_0800b038();
        uVar5 = (uint)bVar2;
        if (uVar5 == 0) goto LAB_080197dc;
      }
    }
    uVar5 = 1;
  }
LAB_080197dc:
  FUN_08012a56(iVar1,*DAT_08019834,1,uVar5);
  iVar4 = FUN_0800b020(0x53);
  if (iVar4 != 0) {
    FUN_0800b038();
    FUN_0801980e();
    FUN_080184cc();
  }
  FUN_08012990(iVar1);
  if (uVar5 != 0) {
    return in_r3;
  }
  uVar3 = FUN_08016480(DAT_0801983c,in_r3);
  return uVar3;
}



/* FUN_0801980e at 0801980e */

undefined8 FUN_0801980e(undefined4 param_1)

{
  int unaff_r4;
  
  *(undefined4 *)(unaff_r4 + 0x358) = param_1;
  return CONCAT44(param_1,unaff_r4 + 0x128);
}



/* FUN_0801981a at 0801981a */

void FUN_0801981a(void)

{
  FUN_0801277e(DAT_08019830,*DAT_08019834);
  return;
}



/* FUN_08019824 at 08019824 */

void FUN_08019824(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_08019830;
  uVar2 = *DAT_08019834;
  *(undefined1 *)(DAT_08019830 + 0x22) = 1;
  FUN_08012a56(iVar1,uVar2,0,0);
  return;
}



/* FUN_080198bc at 080198bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080198bc(void)

{
  undefined4 local_20;
  undefined1 auStack_1c [28];
  
  local_20 = FUN_080164c8(DAT_080198ec);
  FUN_0801ea0c(&local_20,auStack_1c);
  FUN_0800bb0c(DAT_080198f0);
  FUN_0800bb28(s_Print_time__080198f7 + 1,auStack_1c);
  FUN_0800de78(_DAT_080198f4,10);
  return;
}



/* FUN_08019908 at 08019908 */

undefined4 FUN_08019908(void)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  undefined4 in_r3;
  
  iVar4 = FUN_0800b020(0x53);
  if (iVar4 != 0) {
    iVar4 = FUN_0800b038();
    if (iVar4 < 0) {
      bVar2 = 0;
    }
    else {
      iVar4 = FUN_0800b038();
      if (iVar4 < 0x100) {
        bVar2 = FUN_0800b038();
      }
      else {
        bVar2 = 0xff;
      }
    }
    iVar4 = FUN_0800b020(0x50);
    if (iVar4 == 0) {
      sVar3 = -1;
    }
    else {
      sVar3 = FUN_0800b038();
    }
    if (-1 < sVar3) {
      cVar1 = (char)sVar3;
      FUN_08014c98(cVar1,bVar2);
      FUN_08014cce(cVar1,bVar2);
      if (cVar1 == '\0') {
        *DAT_08019970 = (ushort)bVar2;
      }
    }
  }
  return in_r3;
}



/* FUN_08019974 at 08019974 */

void FUN_08019974(void)

{
  FUN_08016480(DAT_08019988);
  return;
}



/* FUN_0801997a at 0801997a */

void FUN_0801997a(void)

{
  FUN_08016466(DAT_08019988);
  return;
}



/* FUN_08019980 at 08019980 */

void FUN_08019980(void)

{
  FUN_08016448(DAT_08019988);
  return;
}



/* FUN_0801998c at 0801998c */

undefined4 FUN_0801998c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r7;
  float extraout_s0;
  float fVar3;
  
  iVar1 = FUN_08013710();
  if ((iVar1 == 0) && (-1 < (int)((uint)*DAT_08019bcc << 0x1c))) {
    iVar1 = FUN_0800b020(0x53);
    if (iVar1 != 0) {
      uVar2 = FUN_0800c204();
      fVar3 = (float)FUN_08019bf0((int)extraout_s0,uVar2,DAT_08019bd0);
      if ((int)((uint)(fVar3 < DAT_08019bbc) << 0x1f) < 0) {
        FUN_08016448(DAT_08019bd4);
      }
    }
    uVar2 = FUN_08011222(unaff_r7);
    return uVar2;
  }
  return unaff_r7;
}



/* FUN_080199d0 at 080199d0 */

undefined4 FUN_080199d0(void)

{
  bool bVar1;
  float fVar2;
  undefined4 uVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 in_r3;
  int iVar9;
  int iVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  uint in_fpscr;
  uint uVar14;
  float extraout_s0;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  undefined4 local_50;
  int local_4c;
  
  iVar6 = FUN_08013710();
  if (((iVar6 != 0) || ((int)((uint)*DAT_08019bcc << 0x1c) < 0)) ||
     ((iVar7 = FUN_0800b020(0x53), iVar6 = iVar7, iVar7 == 0 &&
      (iVar6 = FUN_0800b020(0x52), iVar6 == 0)))) {
    return in_r3;
  }
  cVar11 = iVar6 < 0;
  uVar8 = FUN_0800c204();
  uVar3 = DAT_08019bd4;
  uVar8 = FUN_08019bf0((int)extraout_s0,uVar8,DAT_08019bd0);
  FUN_08019bfa(uVar8,DAT_08019bbc);
  if (cVar11 == '\0') {
    FUN_08016480(uVar3);
  }
  else {
    FUN_08016448();
  }
  FUN_08011222();
  piVar4 = DAT_08019be0;
  uVar3 = DAT_08019bdc;
  *DAT_08019bd8 = '\x01';
  fVar2 = DAT_08019bc4;
  bVar1 = false;
  fVar20 = *DAT_08019be4;
  fVar16 = -1.0;
  iVar10 = 0;
  iVar9 = 0;
  cVar11 = '\0';
  iVar21 = (int)fVar20;
  iVar6 = 0;
  fVar19 = DAT_08019bc0;
  local_4c = iVar7;
  do {
    fVar15 = (float)VectorSignedToFloat((int)*DAT_08019bd0,(byte)(in_fpscr >> 0x15) & 3);
    uVar14 = in_fpscr & 0xfffffff | (uint)(fVar16 < fVar15) << 0x1f |
             (uint)(fVar16 == fVar15) << 0x1e;
    bVar13 = (byte)(uVar14 >> 0x18);
    bVar12 = bVar13 >> 7;
    if ((bVar13 >> 6 & 1) == 0) {
      fVar16 = (float)FUN_08019bfa(fVar15,*DAT_08019be4);
      if (bVar12 == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
        if (local_4c != 0) {
LAB_08019a8a:
          if (*DAT_08019bd8 == '\0') {
            return in_r3;
          }
          FUN_0801e964();
          return in_r3;
        }
      }
    }
    iVar7 = *piVar4;
    if (-1 < iVar7 - iVar10) {
      FUN_08014938();
      FUN_0800bb0c(&DAT_08019bc8);
      iVar10 = iVar7 + 1000;
      if (iVar6 == 0) {
        FUN_0800de78(uVar3,0x3f);
      }
      else {
        FUN_0800bf84(uVar3,(uint)(iVar6 + (2000 - iVar7)) / 1000,10);
      }
      FUN_0800de78(uVar3,10);
    }
    FUN_0800b806(0);
    if (*DAT_08019be8 == '\x01') {
      return in_r3;
    }
    *DAT_08019bec = *piVar4;
    fVar15 = *DAT_08019be4;
    if (!bVar1) {
      uVar14 = uVar14 & 0xfffffff;
      iVar18 = iVar21;
      if ((fVar20 <= fVar15) && (iVar18 = (int)fVar16, fVar15 <= fVar16)) {
        iVar18 = (int)fVar15;
      }
      local_50 = 0;
      cVar5 = FUN_08014d44(iVar18,iVar21,(int)fVar16,0xff);
      if (cVar5 != cVar11) {
        FUN_0801e910(&local_50,0xff,0,cVar5);
        FUN_0801e918();
        cVar11 = cVar5;
      }
    }
    fVar17 = ABS(fVar16 - fVar15);
    if (iVar6 == 0) {
      in_fpscr = uVar14 & 0xfffffff | (uint)(fVar17 < 3.0) << 0x1f;
      bVar13 = -(char)((int)in_fpscr >> 0x1f);
      if (bVar13 != 0) {
LAB_08019b7e:
        iVar6 = iVar7;
      }
    }
    else {
      uVar14 = uVar14 & 0xfffffff | (uint)(fVar17 < fVar2) << 0x1f;
      in_fpscr = uVar14 | (uint)(NAN(fVar17) || NAN(fVar2)) << 0x1c;
      bVar13 = (byte)(uVar14 >> 0x1f);
      if (bVar13 == ((byte)(in_fpscr >> 0x1c) & 1)) goto LAB_08019b7e;
    }
    if ((bVar1) && ((iVar9 == 0 || (bVar13 = iVar7 - iVar9 < 0, !(bool)bVar13)))) {
      FUN_08019bfa(fVar19 - fVar15,0x3fc00000);
      if (bVar13 != 0) goto LAB_08019a8a;
      iVar9 = iVar7 + 60000;
      fVar19 = fVar15;
    }
    if ((*DAT_08019bd8 == '\0') || ((iVar6 != 0 && (-1 < (iVar7 - iVar6) + -2000))))
    goto LAB_08019a8a;
  } while( true );
}



/* FUN_08019bf0 at 08019bf0 */

void FUN_08019bf0(undefined2 param_1,undefined4 param_2,undefined2 *param_3)

{
  *param_3 = param_1;
  FUN_0800c204();
  return;
}



/* FUN_08019bfa at 08019bfa */

void FUN_08019bfa(void)

{
  return;
}



/* FUN_08019c04 at 08019c04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08019c04(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar3 = FUN_0801174c(*DAT_08019c74,0x4e);
  if (iVar3 == 0) goto LAB_08019c3e;
  pcVar1 = (char *)(iVar3 + 1);
  iVar5 = (int)*pcVar1;
  if (iVar5 - 0x30U < 10) {
LAB_08019c2e:
    *DAT_08019c78 = (int)pcVar1;
    if (pcVar1 != (char *)0x0) {
      uVar4 = FUN_08011748(pcVar1,0,10);
      *_DAT_08019c7c = uVar4;
    }
  }
  else {
    if (iVar5 == 0x2e) {
      cVar2 = *(char *)(iVar3 + 2);
joined_r0x08019c6a:
      if ((int)cVar2 - 0x30U < 10) goto LAB_08019c2e;
    }
    else if (iVar5 == 0x2d || iVar5 == 0x2b) {
      if ((int)*(char *)(iVar3 + 2) - 0x30U < 10) goto LAB_08019c2e;
      if (*(char *)(iVar3 + 2) == 0x2e) {
        cVar2 = *(char *)(iVar3 + 3);
        goto joined_r0x08019c6a;
      }
    }
    *DAT_08019c78 = 0;
  }
LAB_08019c3e:
  FUN_08011842(s__SYS_BUILD__08019c7f + 1,param_3,param_4);
  return;
}



/* FUN_08019c8c at 08019c8c */

void FUN_08019c8c(void)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_r3;
  char cVar5;
  uint uVar6;
  bool bVar7;
  
  iVar4 = FUN_0800b04c(0x53);
  pbVar1 = DAT_08019d28;
  if (iVar4 != 0) {
    iVar4 = FUN_0800b04c(0x53);
    bVar7 = iVar4 == 0;
    if (!bVar7) {
      iVar4 = *DAT_08019d2c;
    }
    if ((bVar7 || iVar4 == 0) || (iVar4 = FUN_0800b038(), iVar4 < 0)) {
      bVar3 = 0;
    }
    else {
      iVar4 = FUN_0800b038();
      if (iVar4 < 0x100) {
        bVar3 = FUN_0800b038();
      }
      else {
        bVar3 = 0xff;
      }
    }
    *pbVar1 = bVar3;
  }
  uVar2 = DAT_08019d34;
  FUN_0800bb0c(DAT_08019d30);
  FUN_0800bb0c(s_DEBUG__08019d38);
  if (*pbVar1 == 0) {
    FUN_0800bb0c(&DAT_08019d24);
  }
  else {
    cVar5 = '\0';
    uVar6 = 0;
    do {
      if (((uint)*pbVar1 & 1 << (uVar6 & 0xff)) != 0) {
        if (cVar5 != '\0') {
          FUN_0800de78(uVar2,0x2c);
        }
        FUN_0800bb0c((&DAT_08019d40)[uVar6]);
        cVar5 = cVar5 + '\x01';
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 6);
  }
  FUN_0800de78(uVar2,10,in_r3);
  return;
}



/* FUN_08019d58 at 08019d58 */

undefined4 FUN_08019d58(void)

{
  char *pcVar1;
  char cVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 in_r3;
  
  pbVar3 = DAT_08019df8;
  iVar5 = FUN_0801174c(*DAT_08019df4,0x53);
  if (iVar5 == 0) goto LAB_08019dba;
  pcVar1 = (char *)(iVar5 + 1);
  iVar7 = (int)*pcVar1;
  if (iVar7 - 0x30U < 10) {
LAB_08019d84:
    *DAT_08019dfc = (int)pcVar1;
    if (pcVar1 != (char *)0x0) {
      iVar5 = FUN_0800b038();
      if (iVar5 < 0) {
        bVar4 = 0;
      }
      else {
        iVar5 = FUN_0800b038();
        if (iVar5 < 0x100) {
          bVar4 = FUN_0800b038();
        }
        else {
          bVar4 = 0xff;
        }
      }
      *pbVar3 = bVar4;
      if (0x3c < *pbVar3) {
        *pbVar3 = 0x3c;
      }
      return in_r3;
    }
  }
  else {
    if (iVar7 == 0x2e) {
      cVar2 = *(char *)(iVar5 + 2);
joined_r0x08019db4:
      if ((int)cVar2 - 0x30U < 10) goto LAB_08019d84;
    }
    else if (iVar7 == 0x2d || iVar7 == 0x2b) {
      if ((int)*(char *)(iVar5 + 2) - 0x30U < 10) goto LAB_08019d84;
      if (*(char *)(iVar5 + 2) == 0x2e) {
        cVar2 = *(char *)(iVar5 + 3);
        goto joined_r0x08019db4;
      }
    }
    *DAT_08019dfc = 0;
  }
LAB_08019dba:
  FUN_0800bb0c(DAT_08019e00);
  FUN_0800bbdc(s_M113_S_08019e08,*pbVar3);
  uVar6 = FUN_0800de78(DAT_08019e04,10,in_r3);
  return uVar6;
}



/* FUN_08019e10 at 08019e10 */

byte * FUN_08019e10(void)

{
  int iVar1;
  byte *pbVar2;
  byte *unaff_r7;
  float fVar3;
  
  if ((int)((uint)*DAT_0801a034 << 0x1c) < 0) {
    return DAT_0801a034;
  }
  iVar1 = FUN_0800b020(0x53);
  if (iVar1 != 0) {
    fVar3 = (float)FUN_0800c204();
    pbVar2 = (byte *)FUN_0801eaa8((int)(short)(int)fVar3,unaff_r7);
    return pbVar2;
  }
  return unaff_r7;
}



/* FUN_08019e3c at 08019e3c */

byte * FUN_08019e3c(void)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  byte *in_r3;
  int iVar8;
  char cVar9;
  int iVar10;
  uint in_fpscr;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  undefined4 uStack_50;
  int iStack_4c;
  
  if ((int)((uint)*DAT_0801a034 << 0x1c) < 0) {
    return DAT_0801a034;
  }
  iVar6 = FUN_0800b020(0x53);
  if ((iVar6 == 0) && (iVar7 = FUN_0800b020(0x52), iVar7 == 0)) {
    return in_r3;
  }
  fVar13 = (float)FUN_0800c204();
  FUN_0801eaa8((int)(short)(int)fVar13);
  fVar14 = (float)FUN_0800c204();
  fVar13 = DAT_0801a028;
  uVar12 = in_fpscr & 0xfffffff | (uint)(fVar14 < DAT_0801a028) << 0x1f;
  uVar11 = uVar12 | (uint)(NAN(fVar14) || NAN(DAT_0801a028)) << 0x1c;
  if ((byte)(uVar12 >> 0x1f) == ((byte)(uVar11 >> 0x1c) & 1)) {
    FUN_08016480(DAT_0801a038);
  }
  piVar4 = DAT_0801a048;
  uVar3 = DAT_0801a044;
  puVar2 = DAT_0801a040;
  *DAT_0801a03c = '\x01';
  bVar1 = false;
  *puVar2 = *DAT_0801a04c;
  fVar14 = -1.0;
  fVar19 = *DAT_0801a050;
  iVar10 = 0;
  iVar8 = 0;
  cVar9 = -1;
  iVar20 = (int)fVar19;
  iVar7 = 0;
  fVar18 = DAT_0801a02c;
  iStack_4c = iVar6;
  do {
    fVar15 = (float)VectorSignedToFloat((int)*DAT_0801a054,(byte)(uVar11 >> 0x15) & 3);
    uVar11 = uVar11 & 0xfffffff;
    uVar12 = uVar11 | (uint)(fVar14 == fVar15) << 0x1e;
    if ((byte)(uVar12 >> 0x1e) == 0) {
      uVar12 = uVar11;
      fVar14 = fVar15;
      if (*DAT_0801a050 <= fVar15) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
        if (iStack_4c != 0) {
          return in_r3;
        }
      }
    }
    iVar6 = *piVar4;
    if (-1 < iVar6 - iVar10) {
      FUN_08014938();
      FUN_0800bb0c(&DAT_0801a030);
      iVar10 = iVar6 + 1000;
      if (iVar7 == 0) {
        FUN_0800de78(uVar3,0x3f);
      }
      else {
        FUN_0800bf84(uVar3,(uint)(iVar7 + (2000 - iVar6)) / 1000,10);
      }
      FUN_0800de78(uVar3,10);
    }
    FUN_0800b806(0);
    if (*DAT_0801a058 == '\x01') {
      return in_r3;
    }
    *DAT_0801a05c = *piVar4;
    fVar15 = *DAT_0801a050;
    if (!bVar1) {
      uVar12 = uVar12 & 0xfffffff;
      iVar17 = iVar20;
      if ((fVar19 <= fVar15) && (iVar17 = (int)fVar14, fVar15 <= fVar14)) {
        iVar17 = (int)fVar15;
      }
      uStack_50 = 0xff;
      cVar5 = FUN_08014d44(iVar17,iVar20,(int)fVar14,0);
      if (cVar5 != cVar9) {
        FUN_0801e910(&uStack_50,cVar5,0,0xff);
        FUN_0801e918();
        cVar9 = cVar5;
      }
    }
    fVar16 = ABS(fVar14 - fVar15);
    if (iVar7 == 0) {
      uVar11 = uVar12 & 0xfffffff;
      if (fVar16 < 3.0) {
LAB_08019fe4:
        iVar7 = iVar6;
      }
    }
    else {
      uVar12 = uVar12 & 0xfffffff | (uint)(fVar16 < fVar13) << 0x1f;
      uVar11 = uVar12 | (uint)(NAN(fVar16) || NAN(fVar13)) << 0x1c;
      if ((byte)(uVar12 >> 0x1f) == ((byte)(uVar11 >> 0x1c) & 1)) goto LAB_08019fe4;
    }
    if ((bVar1) && ((iVar8 == 0 || (-1 < iVar6 - iVar8)))) {
      uVar11 = uVar11 & 0xfffffff;
      if (fVar18 - fVar15 < 1.5) {
        return in_r3;
      }
      iVar8 = iVar6 + 60000;
      fVar18 = fVar15;
    }
    if (*DAT_0801a03c == '\0') {
      return in_r3;
    }
    if ((iVar7 != 0) && (-1 < (iVar6 - iVar7) + -2000)) {
      return in_r3;
    }
  } while( true );
}



/* FUN_08019e46 at 08019e46 */

undefined4 FUN_08019e46(void)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 in_r3;
  int iVar8;
  char cVar9;
  int iVar10;
  uint in_fpscr;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  undefined4 local_50;
  int local_4c;
  
  iVar6 = FUN_0800b020(0x53);
  if ((iVar6 == 0) && (iVar7 = FUN_0800b020(0x52), iVar7 == 0)) {
    return in_r3;
  }
  fVar13 = (float)FUN_0800c204();
  FUN_0801eaa8((int)(short)(int)fVar13);
  fVar14 = (float)FUN_0800c204();
  fVar13 = DAT_0801a028;
  uVar12 = in_fpscr & 0xfffffff | (uint)(fVar14 < DAT_0801a028) << 0x1f;
  uVar11 = uVar12 | (uint)(NAN(fVar14) || NAN(DAT_0801a028)) << 0x1c;
  if ((byte)(uVar12 >> 0x1f) == ((byte)(uVar11 >> 0x1c) & 1)) {
    FUN_08016480(DAT_0801a038);
  }
  piVar4 = DAT_0801a048;
  uVar3 = DAT_0801a044;
  puVar2 = DAT_0801a040;
  *DAT_0801a03c = '\x01';
  bVar1 = false;
  *puVar2 = *DAT_0801a04c;
  fVar14 = -1.0;
  fVar19 = *DAT_0801a050;
  iVar10 = 0;
  iVar8 = 0;
  cVar9 = -1;
  iVar20 = (int)fVar19;
  iVar7 = 0;
  fVar18 = DAT_0801a02c;
  local_4c = iVar6;
  do {
    fVar15 = (float)VectorSignedToFloat((int)*DAT_0801a054,(byte)(uVar11 >> 0x15) & 3);
    uVar11 = uVar11 & 0xfffffff;
    uVar12 = uVar11 | (uint)(fVar14 == fVar15) << 0x1e;
    if ((byte)(uVar12 >> 0x1e) == 0) {
      uVar12 = uVar11;
      fVar14 = fVar15;
      if (*DAT_0801a050 <= fVar15) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
        if (local_4c != 0) {
          return in_r3;
        }
      }
    }
    iVar6 = *piVar4;
    if (-1 < iVar6 - iVar10) {
      FUN_08014938();
      FUN_0800bb0c(&DAT_0801a030);
      iVar10 = iVar6 + 1000;
      if (iVar7 == 0) {
        FUN_0800de78(uVar3,0x3f);
      }
      else {
        FUN_0800bf84(uVar3,(uint)(iVar7 + (2000 - iVar6)) / 1000,10);
      }
      FUN_0800de78(uVar3,10);
    }
    FUN_0800b806(0);
    if (*DAT_0801a058 == '\x01') {
      return in_r3;
    }
    *DAT_0801a05c = *piVar4;
    fVar15 = *DAT_0801a050;
    if (!bVar1) {
      uVar12 = uVar12 & 0xfffffff;
      iVar17 = iVar20;
      if ((fVar19 <= fVar15) && (iVar17 = (int)fVar14, fVar15 <= fVar14)) {
        iVar17 = (int)fVar15;
      }
      local_50 = 0xff;
      cVar5 = FUN_08014d44(iVar17,iVar20,(int)fVar14,0);
      if (cVar5 != cVar9) {
        FUN_0801e910(&local_50,cVar5,0,0xff);
        FUN_0801e918();
        cVar9 = cVar5;
      }
    }
    fVar16 = ABS(fVar14 - fVar15);
    if (iVar7 == 0) {
      uVar11 = uVar12 & 0xfffffff;
      if (fVar16 < 3.0) {
LAB_08019fe4:
        iVar7 = iVar6;
      }
    }
    else {
      uVar12 = uVar12 & 0xfffffff | (uint)(fVar16 < fVar13) << 0x1f;
      uVar11 = uVar12 | (uint)(NAN(fVar16) || NAN(fVar13)) << 0x1c;
      if ((byte)(uVar12 >> 0x1f) == ((byte)(uVar11 >> 0x1c) & 1)) goto LAB_08019fe4;
    }
    if ((bVar1) && ((iVar8 == 0 || (-1 < iVar6 - iVar8)))) {
      uVar11 = uVar11 & 0xfffffff;
      if (fVar18 - fVar15 < 1.5) {
        return in_r3;
      }
      iVar8 = iVar6 + 60000;
      fVar18 = fVar15;
    }
    if (*DAT_0801a03c == '\0') {
      return in_r3;
    }
    if ((iVar7 != 0) && (-1 < (iVar6 - iVar7) + -2000)) {
      return in_r3;
    }
  } while( true );
}



/* FUN_0801a060 at 0801a060 */

undefined4 FUN_0801a060(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r7;
  
  iVar1 = FUN_08013710();
  if (iVar1 == 0) {
    FUN_0800bb0c(&DAT_0801a080);
    FUN_08014938();
    uVar2 = FUN_0800de78(DAT_0801a084,10,unaff_r7);
    return uVar2;
  }
  return unaff_r7;
}



/* FUN_0801a088 at 0801a088 */

undefined8 FUN_0801a088(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar4 = FUN_0801174c(*DAT_0801a118,0x53);
  if (iVar4 == 0) goto LAB_0801a116;
  pcVar1 = (char *)(iVar4 + 1);
  iVar5 = (int)*pcVar1;
  if (iVar5 - 0x30U < 10) {
LAB_0801a0b4:
    *DAT_0801a11c = (int)pcVar1;
    if (pcVar1 == (char *)0x0) goto LAB_0801a116;
    iVar4 = FUN_0800b038();
    if (iVar4 < 0) {
      bVar3 = 0;
    }
    else {
      iVar4 = FUN_0800b038();
      if ((0xff < iVar4) || (bVar3 = FUN_0800b038(), 0x3c < bVar3)) {
        bVar3 = 0x3c;
      }
    }
    piVar6 = DAT_0801a124;
    *DAT_0801a120 = bVar3;
    iVar4 = (short)(ushort)bVar3 * 1000 + *piVar6;
    piVar6 = DAT_0801a128;
  }
  else {
    if (iVar5 == 0x2e) {
      cVar2 = *(char *)(iVar4 + 2);
joined_r0x0801a0e4:
      if ((int)cVar2 - 0x30U < 10) goto LAB_0801a0b4;
    }
    else if (iVar5 == 0x2d || iVar5 == 0x2b) {
      if ((int)*(char *)(iVar4 + 2) - 0x30U < 10) goto LAB_0801a0b4;
      if (*(char *)(iVar4 + 2) == 0x2e) {
        cVar2 = *(char *)(iVar4 + 3);
        goto joined_r0x0801a0e4;
      }
    }
    iVar4 = 0;
    piVar6 = DAT_0801a11c;
  }
  *piVar6 = iVar4;
LAB_0801a116:
  return CONCAT44(param_4,param_3);
}



/* FUN_0801a12c at 0801a12c */

void FUN_0801a12c(void)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  
  iVar3 = FUN_0800b020(0x50);
  if (((iVar3 == 0) || (iVar3 = FUN_0800b038(), iVar3 < 0)) ||
     ((iVar3 = FUN_0800b038(), iVar3 < 0x100 && (cVar1 = FUN_0800b038(), cVar1 == '\0')))) {
    iVar3 = FUN_0800b020(0x53);
    if (iVar3 == 0) {
      uVar2 = 0xff;
    }
    else {
      uVar2 = FUN_0800b038();
    }
    uVar4 = 0xff;
    if (uVar2 < 0xff) {
      uVar4 = uVar2;
    }
    *DAT_0801a188 = uVar4;
  }
  return;
}



/* FUN_0801a16e at 0801a16e */

undefined4 FUN_0801a16e(void)

{
  short sVar1;
  int iVar2;
  undefined4 unaff_r7;
  
  iVar2 = FUN_0800b020(0x50);
  if ((iVar2 == 0) || (sVar1 = FUN_0800b038(), sVar1 == 0)) {
    *DAT_0801a188 = 0;
  }
  return unaff_r7;
}



/* FUN_0801a18c at 0801a18c */

void FUN_0801a18c(void)

{
  undefined4 unaff_r7;
  
  FUN_0801477a();
  FUN_080100ba();
  *DAT_0801a1a8 = 0;
  FUN_0800e6c8(1000,unaff_r7);
  return;
}



/* FUN_0801a1ac at 0801a1ac */

void FUN_0801a1ac(void)

{
  *(undefined1 *)(DAT_0801a1bc + 3) = 0;
  return;
}



/* FUN_0801a1b4 at 0801a1b4 */

void FUN_0801a1b4(void)

{
  *(undefined1 *)(DAT_0801a1bc + 3) = 1;
  return;
}



/* FUN_0801a1c0 at 0801a1c0 */

undefined4 FUN_0801a1c0(void)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  undefined4 in_r3;
  char *pcVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  iVar4 = FUN_0801174c(*DAT_0801a274,0x53);
  puVar3 = DAT_0801a278;
  if (iVar4 == 0) {
    return in_r3;
  }
  pcVar1 = (char *)(iVar4 + 1);
  iVar6 = (int)*pcVar1;
  if (iVar6 - 0x30U < 10) {
LAB_0801a1ec:
    *DAT_0801a278 = pcVar1;
    pcVar7 = pcVar1;
    fVar5 = DAT_0801a26c;
    if (pcVar1 != (char *)0x0) {
      for (; (cVar2 = *pcVar7, cVar2 != '\0' && (cVar2 != ' ')); pcVar7 = pcVar7 + 1) {
        if (cVar2 == 'E' || cVar2 == 'e') {
          *pcVar7 = '\0';
          uVar9 = FUN_08015900(*puVar3,0);
          *pcVar7 = cVar2;
          goto LAB_0801a244;
        }
      }
      uVar9 = FUN_08015900(pcVar1,0);
LAB_0801a244:
      fVar5 = (float)FUN_0800bef8((int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
      fVar5 = fVar5 * DAT_0801a270;
    }
  }
  else {
    if (iVar6 == 0x2e) {
      cVar2 = *(char *)(iVar4 + 2);
joined_r0x0801a228:
      if ((int)cVar2 - 0x30U < 10) goto LAB_0801a1ec;
    }
    else if (iVar6 == 0x2d || iVar6 == 0x2b) {
      if ((int)*(char *)(iVar4 + 2) - 0x30U < 10) goto LAB_0801a1ec;
      if (*(char *)(iVar4 + 2) == 0x2e) {
        cVar2 = *(char *)(iVar4 + 3);
        goto joined_r0x0801a228;
      }
    }
    *DAT_0801a278 = 0;
    fVar5 = DAT_0801a26c;
  }
  uVar8 = VectorFloatToUnsigned(fVar5,3);
  *DAT_0801a27c = uVar8;
  return in_r3;
}



/* FUN_0801a280 at 0801a280 */

void FUN_0801a280(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  undefined4 in_r3;
  int iVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  
  puVar7 = DAT_0801a374;
  piVar6 = DAT_0801a370;
  iVar5 = DAT_0801a36c;
  iVar4 = DAT_0801a368;
  iVar3 = DAT_0801a364;
  iVar2 = DAT_0801a360;
  iVar11 = 0;
  do {
    iVar8 = FUN_0801174c(*puVar7,(int)(char)(&DAT_0801a378)[iVar11]);
    if (iVar8 != 0) {
      pcVar9 = (char *)(iVar8 + 1);
      iVar10 = (int)*pcVar9;
      if (9 < iVar10 - 0x30U) {
        if (iVar10 == 0x2e) {
          cVar1 = *(char *)(iVar8 + 2);
joined_r0x0801a33a:
          if ((int)cVar1 - 0x30U < 10) goto LAB_0801a2cc;
        }
        else if (iVar10 == 0x2d || iVar10 == 0x2b) {
          if ((int)*(char *)(iVar8 + 2) - 0x30U < 10) goto LAB_0801a2cc;
          if (*(char *)(iVar8 + 2) == 0x2e) {
            cVar1 = *(char *)(iVar8 + 3);
            goto joined_r0x0801a33a;
          }
        }
        pcVar9 = (char *)0x0;
      }
LAB_0801a2cc:
      *piVar6 = (int)pcVar9;
      if (iVar11 == 3) {
        fVar12 = (float)FUN_0800c204();
        in_fpscr = in_fpscr & 0xfffffff;
        if (fVar12 < 20.0) {
          fVar13 = *(float *)(iVar5 + 0xc) / fVar12;
          *(float *)(iVar4 + 0xc) = *(float *)(iVar4 + 0xc) * fVar13;
          *(float *)(iVar3 + 0xc) = *(float *)(iVar3 + 0xc) * fVar13;
          fVar15 = (float)VectorUnsignedToFloat
                                    (*(undefined4 *)(iVar2 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
          uVar14 = VectorFloatToUnsigned(fVar15 * fVar13,3);
          *(undefined4 *)(iVar2 + 0xc) = uVar14;
        }
        *(float *)(iVar5 + 0xc) = fVar12;
      }
      else {
        uVar14 = FUN_0800c204();
        *(undefined4 *)(iVar5 + iVar11 * 4) = uVar14;
      }
    }
    iVar11 = iVar11 + 1;
    if (3 < iVar11) {
      FUN_080111ec(in_r3);
      return;
    }
  } while( true );
}



/* FUN_0801a37c at 0801a37c */

void FUN_0801a37c(void)

{
  undefined4 unaff_r7;
  
  FUN_08010028();
  FUN_0800a500(unaff_r7);
  return;
}



/* FUN_0801a38c at 0801a38c */

void FUN_0801a38c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  FUN_0800bb0c(&DAT_0801a584);
  FUN_0800bb0c(param_1);
  uVar1 = DAT_0801a554;
  FUN_0800de78(DAT_0801a554,0x3a);
  if (param_2 != 0) {
    param_2 = 1;
  }
  FUN_0800bff0(uVar1,param_2,10,param_4);
  return;
}



/* FUN_0801a3bc at 0801a3bc */

undefined8 FUN_0801a3bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  undefined4 uStack_10;
  uint local_c;
  
  uStack_10 = param_3;
  local_c = param_4;
  iVar4 = FUN_0800b020(0x53);
  if (iVar4 == 0) goto code_r0x0801a404;
  iVar4 = FUN_0800b020(0x53);
  if (iVar4 == 0) {
    cVar3 = FUN_0800b04c(0x53);
  }
  else if (*DAT_0801a558 == 0) {
LAB_0801a3f4:
    cVar3 = '\x01';
  }
  else {
    iVar4 = FUN_0800b038();
    if (iVar4 < 0) {
      cVar3 = '\0';
    }
    else {
      iVar4 = FUN_0800b038();
      if ((0xff < iVar4) || (cVar3 = FUN_0800b038(), cVar3 != '\0')) goto LAB_0801a3f4;
    }
  }
  *DAT_0801a55c = cVar3;
code_r0x0801a404:
  pbVar2 = DAT_0801a560;
  FUN_0800bb0c(s_VERSION__72_PROTOCOL_VERSION_1_0_0801a58c);
  FUN_0800bb0c(s_Boot_reason____0801a608);
  if ((int)((uint)*pbVar2 << 0x1f) < 0) {
    FUN_0800bb0c(0x801a618);
  }
  if ((int)((uint)*pbVar2 << 0x1e) < 0) {
    FUN_0800bb0c(0x801a620);
  }
  if ((int)((uint)*pbVar2 << 0x1d) < 0) {
    FUN_0800bb0c(0x801a628);
  }
  if ((int)((uint)*pbVar2 << 0x1c) < 0) {
    FUN_0800bb0c(0x801a630);
  }
  if ((int)((uint)*pbVar2 << 0x1b) < 0) {
    FUN_0800bb0c(0x801a638);
  }
  if ((int)((uint)*pbVar2 << 0x1a) < 0) {
    FUN_0800bb0c(0x801a640);
  }
  if ((int)((uint)*pbVar2 << 0x19) < 0) {
    FUN_0800bb0c(0x801a648);
  }
  uVar1 = DAT_0801a554;
  FUN_0800bfec(DAT_0801a554,&DAT_0801a550);
  FUN_080189e0(&uStack_10,DAT_0801a564 + 0xc,4);
  local_c = local_c & 0xffffff00;
  FUN_0800bb0c(s_BOOT_0801a650);
  FUN_0800bfec(uVar1,&uStack_10);
  FUN_0800bb0c(s_Uptime_ms___0801a658);
  FUN_0800bffa(uVar1,*DAT_0801a568,10);
  FUN_0800bb0c(s_SDIO_error__0801a668);
  FUN_0801a578(DAT_0801a56c);
  FUN_0800bb0c(s_Filament_Sensor__0801a678);
  FUN_0801a578(DAT_0801a570);
  FUN_0800bb0c(s_CPU_temperature__0801a68c);
  FUN_0801a57a(DAT_0801a574,*DAT_0801a574);
  FUN_0801a38c(s_SERIAL_XON_XOFF_0801a6a0,0);
  FUN_0801a38c(s_EEPROM_0801a6b0,1);
  FUN_0801a38c(s_VOLUMETRIC_0801a6b8,1);
  FUN_0801a38c(s_AUTOREPORT_TEMP_0801a6c4,1);
  FUN_0801a38c(s_PROGRESS_0801a6d4,0);
  FUN_0801a38c(s_PRINT_JOB_0801a6e0,1);
  FUN_0801a38c(s_AUTOLEVEL_0801a6ec,1);
  FUN_0801a38c(s_Z_PROBE_0801a6f8,1);
  FUN_0801a38c(s_LEVELING_DATA_0801a700,1);
  FUN_0801a38c(s_BUILD_PERCENT_0801a710,0);
  FUN_0801a38c(s_SOFTWARE_POWER_0801a720,0);
  FUN_0801a38c(s_TOGGLE_LIGHTS_0801a730,0);
  FUN_0801a38c(s_CASE_LIGHT_BRIGHTNESS_0801a740,0);
  FUN_0801a38c(s_EMERGENCY_PARSER_0801a758,1);
  return CONCAT44(local_c,uStack_10);
}



/* FUN_0801a578 at 0801a578 */

void FUN_0801a578(void)

{
  FUN_0800bff0();
  return;
}



/* FUN_0801a57a at 0801a57a */

void FUN_0801a57a(void)

{
  FUN_0800bff0();
  return;
}



/* FUN_0801a76c at 0801a76c */

void FUN_0801a76c(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_0800b020(0x45);
  if ((iVar1 != 0) && (iVar1 = FUN_0801eab8(), iVar1 != 0)) {
    FUN_0800bb0c(DAT_0801a7a8);
  }
  iVar1 = FUN_0800b020(0x41);
  if ((iVar1 != 0) && (iVar1 = FUN_0801eab8(), iVar1 != 0)) {
    FUN_0800bb0c(&DAT_0801a7a4);
  }
  FUN_0800bfec(DAT_0801a7b0,*DAT_0801a7ac,unaff_r7);
  return;
}



/* thunk_FUN_080153ac at 0801a7b4 */

void thunk_FUN_080153ac(void)

{
  int *piVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 in_r3;
  char *pcVar4;
  
  uVar2 = DAT_08015508;
  piVar1 = DAT_080154f4;
  pcVar4 = s_TRIGGERED_08015554;
  FUN_0800bb0c(s_Reporting_endstop_status_08015530);
  FUN_0800bb0c(s_x_min__0801554c);
  if ((*(uint *)(piVar1[4] + 0x10) & piVar1[5]) == 0) {
    pcVar3 = s_TRIGGERED_08015554;
  }
  else {
    pcVar3 = (char *)0x8015560;
  }
  FUN_0800bfec(uVar2,pcVar3);
  FUN_0800bb0c(s_y_min__08015568);
  if ((*(uint *)(piVar1[2] + 0x10) & piVar1[3]) == 0) {
    pcVar3 = s_TRIGGERED_08015554;
  }
  else {
    pcVar3 = (char *)0x8015560;
  }
  FUN_0800bfec(uVar2,pcVar3);
  FUN_0800bb0c(s_z_min__08015570);
  if ((*(uint *)(*piVar1 + 0x10) & piVar1[1]) != 0) {
    pcVar4 = (char *)0x8015560;
  }
  FUN_0800bfec(uVar2,pcVar4,in_r3);
  return;
}



/* FUN_0801a7b8 at 0801a7b8 */

void FUN_0801a7b8(void)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_0801a7d0;
  *DAT_0801a7cc = 1;
  *puVar1 = 1;
  return;
}



/* FUN_0801a7c0 at 0801a7c0 */

void FUN_0801a7c0(void)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_0801a7d0;
  *DAT_0801a7cc = 0;
  *puVar1 = 0;
  return;
}



/* FUN_0801a7d4 at 0801a7d4 */

undefined4 FUN_0801a7d4(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_r3;
  undefined4 uVar5;
  undefined4 uStack_18;
  
  uStack_18 = in_r3;
  iVar2 = FUN_0800b04c(0x42);
  piVar1 = DAT_0801a838;
  uVar5 = 0xff;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else if (*DAT_0801a838 == 0) {
    uVar3 = 0xff;
  }
  else {
    uVar3 = FUN_0801eae8();
  }
  iVar2 = FUN_0800b04c(0x55);
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else if (*piVar1 == 0) {
    uVar4 = 0xff;
  }
  else {
    uVar4 = FUN_0801eae8();
  }
  iVar2 = FUN_0800b04c(0x52);
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else if (*piVar1 != 0) {
    uVar5 = FUN_0801eae8();
  }
  FUN_0801e910(&uStack_18,uVar5,uVar4,uVar3);
  FUN_0801e918();
  return uStack_18;
}



/* FUN_0801a83c at 0801a83c */

undefined4 FUN_0801a83c(void)

{
  char *pcVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r7;
  float fVar5;
  
  iVar3 = FUN_08013710();
  if (iVar3 != 0) {
    return unaff_r7;
  }
  iVar3 = FUN_0800b04c(0x44);
  if (iVar3 != 0) {
    fVar5 = (float)FUN_0800c204();
    pcVar1 = DAT_0801a9fc;
    *DAT_0801a9fc = fVar5 != 0.0;
    if (*pcVar1 != '\0') {
      fVar5 = (float)FUN_0800c204();
      pfVar2 = DAT_0801aa04;
      DAT_0801aa04[*DAT_0801aa00] = fVar5;
      if (*pfVar2 == 0.0) {
        *pfVar2 = DAT_0801aa08;
      }
    }
  }
  uVar4 = FUN_08010774(unaff_r7);
  return uVar4;
}



/* FUN_0801a894 at 0801a894 */

void FUN_0801a894(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_0801aa0c;
  iVar3 = 0;
  do {
    iVar2 = FUN_0800b04c((int)(char)(&DAT_0801aac0)[iVar3]);
    if (iVar2 != 0) {
      uVar4 = FUN_0800c204();
      uVar4 = VectorFloatToUnsigned(uVar4,3);
      *(undefined4 *)(iVar1 + iVar3 * 4) = uVar4;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  FUN_08011194();
  return;
}



/* FUN_0801a8c4 at 0801a8c4 */

void FUN_0801a8c4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_0801aa10;
  iVar3 = 0;
  do {
    iVar2 = FUN_0800b04c((int)(char)(&DAT_0801aac0)[iVar3]);
    if (iVar2 != 0) {
      uVar4 = FUN_0800c204();
      *(undefined4 *)(iVar1 + iVar3 * 4) = uVar4;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return;
}



/* FUN_0801a8ec at 0801a8ec */

void FUN_0801a8ec(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = FUN_0800b04c(0x53);
  puVar3 = DAT_0801aa1c;
  puVar2 = DAT_0801aa18;
  uVar1 = DAT_0801aa14;
  if (iVar4 != 0) {
    uVar5 = FUN_0800c204();
    *puVar3 = uVar5;
    *puVar2 = uVar5;
    FUN_0800bb78(s_Setting_Print_and_Travel_Acceler_0801aa37 + 1);
    FUN_0801a970();
  }
  iVar4 = FUN_0800b04c(0x50);
  if (iVar4 != 0) {
    uVar5 = FUN_0800c204();
    *puVar3 = uVar5;
    FUN_0800bb78(s_Setting_Print_Acceleration__0801aa60);
    FUN_0801a970();
  }
  iVar4 = FUN_0800b04c(0x52);
  if (iVar4 != 0) {
    uVar5 = FUN_0800c204();
    *DAT_0801aa20 = uVar5;
    FUN_0800bb78(s_Setting_Retract_Acceleration__0801aa80);
    FUN_0801a970();
  }
  iVar4 = FUN_0800b04c(0x54);
  if (iVar4 != 0) {
    uVar5 = FUN_0800c204();
    *puVar2 = uVar5;
    FUN_0800bb78(s_Setting_Travel_Acceleration__0801aaa0);
    FUN_0800de78(uVar1,10);
    return;
  }
  return;
}



/* FUN_0801a970 at 0801a970 */

void FUN_0801a970(void)

{
  FUN_0800de78();
  return;
}



/* FUN_0801a978 at 0801a978 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801a978(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_0800b04c(0x53);
  if (iVar2 != 0) {
    uVar3 = FUN_0800c204();
    *DAT_0801aa24 = uVar3;
  }
  iVar2 = FUN_0800b04c(0x54);
  if (iVar2 != 0) {
    uVar3 = FUN_0800c204();
    *DAT_0801aa28 = uVar3;
  }
  iVar2 = FUN_0800b04c(0x42);
  if (iVar2 != 0) {
    iVar2 = *DAT_0801aa2c;
    if (iVar2 != 0) {
      iVar2 = FUN_080163e4(iVar2,0,10);
    }
    *DAT_0801aa30 = iVar2;
  }
  iVar2 = FUN_0800b04c(0x58);
  puVar1 = _DAT_0801aa34;
  if (iVar2 != 0) {
    uVar3 = FUN_0800c204();
    *puVar1 = uVar3;
  }
  iVar2 = FUN_0800b04c(0x59);
  if (iVar2 != 0) {
    uVar3 = FUN_0800c204();
    puVar1[1] = uVar3;
  }
  iVar2 = FUN_0800b04c(0x5a);
  if (iVar2 != 0) {
    uVar3 = FUN_0800c204();
    puVar1[2] = uVar3;
  }
  iVar2 = FUN_0800b04c(0x45);
  if (iVar2 != 0) {
    uVar3 = FUN_0800c204();
    puVar1[3] = uVar3;
  }
  return;
}



/* FUN_0801aac4 at 0801aac4 */

void FUN_0801aac4(void)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 in_r3;
  int iVar8;
  char *pcVar9;
  undefined8 uVar10;
  
  puVar4 = DAT_0801ac38;
  puVar3 = DAT_0801ac34;
  iVar8 = 0;
  do {
    iVar5 = FUN_0801174c(*puVar4,(int)(char)(&DAT_0801ac6c)[iVar8]);
    if (iVar5 != 0) {
      pcVar1 = (char *)(iVar5 + 1);
      iVar7 = (int)*pcVar1;
      if (iVar7 - 0x30U < 10) {
LAB_0801aafc:
        *puVar3 = pcVar1;
        pcVar9 = pcVar1;
        uVar6 = DAT_0801ac2c;
        if (pcVar1 != (char *)0x0) {
          for (; (cVar2 = *pcVar9, cVar2 != '\0' && (cVar2 != ' ')); pcVar9 = pcVar9 + 1) {
            if (cVar2 == 'E' || cVar2 == 'e') {
              *pcVar9 = '\0';
              uVar10 = FUN_08015900(*puVar3,0);
              *pcVar9 = cVar2;
              goto LAB_0801ab5c;
            }
          }
          uVar10 = FUN_08015900(pcVar1,0);
LAB_0801ab5c:
          uVar6 = FUN_0800bef8((int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
        }
      }
      else {
        if (iVar7 == 0x2e) {
          cVar2 = *(char *)(iVar5 + 2);
joined_r0x0801ab38:
          if ((int)cVar2 - 0x30U < 10) goto LAB_0801aafc;
        }
        else if (iVar7 == 0x2d || iVar7 == 0x2b) {
          if ((int)*(char *)(iVar5 + 2) - 0x30U < 10) goto LAB_0801aafc;
          if (*(char *)(iVar5 + 2) == 0x2e) {
            cVar2 = *(char *)(iVar5 + 3);
            goto joined_r0x0801ab38;
          }
        }
        *puVar3 = 0;
        uVar6 = DAT_0801ac2c;
      }
      FUN_0800ad14(uVar6,(int)(char)iVar8);
    }
    iVar8 = iVar8 + 1;
    if (2 < iVar8) {
      FUN_0800a500(in_r3);
      return;
    }
  } while( true );
}



/* FUN_0801ab7c at 0801ab7c */

undefined8 FUN_0801ab7c(undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float local_20 [3];
  
  local_20[0] = param_2;
  local_20[1] = (float)param_3;
  local_20[2] = (float)param_4;
  iVar1 = FUN_0800a88c(1,1,1);
  if (iVar1 == 0) {
    iVar1 = 0;
    do {
      fVar2 = *(float *)(DAT_0801ac40 + iVar1 * 4);
      fVar3 = *(float *)(DAT_0801ac44 + (char)iVar1 * 4) - fVar2;
      local_20[iVar1] = fVar3;
      if (((fVar3 < -20.0 != NAN(fVar3)) || (-1 < (int)((uint)(fVar3 < DAT_0801ac30) << 0x1f))) &&
         ('\0' < *(char *)(DAT_0801ac3c + (char)iVar1))) {
        local_20[iVar1] = -fVar2;
      }
      fVar2 = local_20[iVar1];
      if ((fVar2 < -20.0 != NAN(fVar2)) || (-1 < (int)((uint)(fVar2 < DAT_0801ac30) << 0x1f))) {
        FUN_0800bb0c(DAT_0801ac48);
        FUN_0800bb0c(s_Too_far_from_reference_point_0801ac4c);
        return CONCAT44(local_20[1],local_20[0]);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
    iVar1 = 0;
    do {
      FUN_0800ad14(local_20[iVar1],(int)(char)iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
    FUN_0800a500();
  }
  return CONCAT44(local_20[1],local_20[0]);
}



/* FUN_0801ac70 at 0801ac70 */

void FUN_0801ac70(void)

{
  FUN_0800bb0c(DAT_0801acd8);
  FUN_0800bb0c(s_Soft_endstops__0801ad24);
  FUN_0800bb0c(&DAT_0801acc8);
  FUN_0800bb0c(s_Min__0801ad34);
  FUN_0801ad10();
  FUN_0801acfe();
  FUN_0801acec();
  FUN_0800bb0c(s_Max__0801ad3c);
  FUN_0801ad10();
  FUN_0801acfe();
  FUN_0801acec();
  FUN_0800de78(DAT_0801ace8,10);
  return;
}



/* FUN_0801acec at 0801acec */

void FUN_0801acec(void)

{
  int unaff_r5;
  int unaff_r8;
  
  FUN_0800bb78(*(float *)(unaff_r8 + 8) + *(float *)(unaff_r5 + 8));
  return;
}



/* FUN_0801acfe at 0801acfe */

void FUN_0801acfe(void)

{
  int unaff_r5;
  int unaff_r8;
  
  FUN_0800bb78(*(float *)(unaff_r8 + 4) + *(float *)(unaff_r5 + 4));
  return;
}



/* FUN_0801ad10 at 0801ad10 */

void FUN_0801ad10(void)

{
  float *unaff_r5;
  float *unaff_r8;
  
  FUN_0800bb78(*unaff_r8 + *unaff_r5);
  return;
}



/* FUN_0801ad44 at 0801ad44 */

undefined8 FUN_0801ad44(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = FUN_0801174c(*DAT_0801ada8,0x53);
  if (iVar4 == 0) goto LAB_0801ad7e;
  pcVar1 = (char *)(iVar4 + 1);
  iVar5 = (int)*pcVar1;
  if (9 < iVar5 - 0x30U) {
    if (iVar5 == 0x2e) {
      cVar2 = *(char *)(iVar4 + 2);
    }
    else {
      if (iVar5 != 0x2d && iVar5 != 0x2b) goto LAB_0801ada2;
      if ((int)*(char *)(iVar4 + 2) - 0x30U < 10) goto LAB_0801ad6e;
      if (*(char *)(iVar4 + 2) != 0x2e) goto LAB_0801ada2;
      cVar2 = *(char *)(iVar4 + 3);
    }
    if (9 < (int)cVar2 - 0x30U) {
LAB_0801ada2:
      *DAT_0801adac = 0;
      return CONCAT44(param_4,param_3);
    }
  }
LAB_0801ad6e:
  *DAT_0801adac = (int)pcVar1;
  if (pcVar1 != (char *)0x0) {
    uVar3 = FUN_08011748(pcVar1,0,10);
    *DAT_0801adb0 = uVar3;
  }
LAB_0801ad7e:
  return CONCAT44(param_4,param_3);
}



/* FUN_0801adb4 at 0801adb4 */

undefined4 FUN_0801adb4(void)

{
  char *pcVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_r3;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  iVar4 = FUN_08013710();
  if (iVar4 != 0) {
    return in_r3;
  }
  iVar4 = FUN_0801174c(*DAT_0801ae58,0x53);
  if (iVar4 == 0) {
    return in_r3;
  }
  pcVar1 = (char *)(iVar4 + 1);
  iVar6 = (int)*pcVar1;
  if (9 < iVar6 - 0x30U) {
    if (iVar6 == 0x2e) {
      cVar2 = *(char *)(iVar4 + 2);
    }
    else {
      if (iVar6 != 0x2d && iVar6 != 0x2b) goto LAB_0801ae50;
      if ((int)*(char *)(iVar4 + 2) - 0x30U < 10) goto LAB_0801ade6;
      if (*(char *)(iVar4 + 2) != 0x2e) goto LAB_0801ae50;
      cVar2 = *(char *)(iVar4 + 3);
    }
    if (9 < (int)cVar2 - 0x30U) {
LAB_0801ae50:
      *DAT_0801ae5c = 0;
      return in_r3;
    }
  }
LAB_0801ade6:
  *DAT_0801ae5c = (int)pcVar1;
  if (pcVar1 != (char *)0x0) {
    uVar3 = FUN_08011748(pcVar1,0,10);
    iVar6 = DAT_0801ae68;
    iVar4 = DAT_0801ae64;
    uVar7 = (uint)*DAT_0801ae60;
    *(undefined2 *)(DAT_0801ae68 + uVar7 * 2) = uVar3;
    uVar8 = FUN_0800eecc((int)*(short *)(iVar6 + uVar7 * 2));
    uVar8 = FUN_0800c284((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_0801ae6c,DAT_0801ae70);
    uVar9 = FUN_0800bca0(*(undefined4 *)(iVar4 + uVar7 * 4));
    FUN_0800c284((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar8,
                 (int)((ulonglong)uVar8 >> 0x20));
    uVar5 = FUN_0800bef8();
    *(undefined4 *)(DAT_0801ae74 + uVar7 * 4) = uVar5;
  }
  return in_r3;
}



/* FUN_0801ae78 at 0801ae78 */

void FUN_0801ae78(void)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_r1;
  undefined8 uVar6;
  
  iVar3 = FUN_0800b04c(0x50);
  if (iVar3 != 0) {
    iVar3 = FUN_0800b020(0x50);
    if (iVar3 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = FUN_0800b038();
    }
    iVar3 = FUN_0800b020(0x53);
    if (iVar3 == 0) {
      sVar2 = -1;
    }
    else {
      sVar2 = FUN_0800b038();
    }
    iVar3 = (int)sVar2;
    if (((iVar3 + 1U < 3) && (-1 < cVar1)) && (iVar4 = FUN_0800b706(), iVar4 == 0)) {
      FUN_08010028();
      uVar5 = 2;
      iVar4 = 0;
      if ((iVar3 == 1) ||
         ((iVar3 == -1 &&
          (uVar6 = FUN_08014cbc(cVar1,2), uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20),
          (int)uVar6 == 0)))) {
        iVar4 = 1;
      }
      while (iVar3 = FUN_08014cbc(cVar1,uVar5), iVar3 != iVar4) {
        FUN_0800b806(0);
        uVar5 = extraout_r1;
      }
    }
  }
  return;
}



/* FUN_0801aef4 at 0801aef4 */

void FUN_0801aef4(void)

{
  float fVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float *pfVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  float fVar9;
  
  iVar6 = FUN_0800b04c(0x45);
  bVar7 = iVar6 != 0;
  if (bVar7) {
    iVar6 = *DAT_0801afd4;
  }
  if (((bVar7 && iVar6 != 0) && (iVar6 = FUN_0800b038(), -1 < iVar6)) &&
     ((iVar6 = FUN_0800b038(), 0xff < iVar6 || (cVar5 = FUN_0800b038(), cVar5 != '\0')))) {
    FUN_0800bb0c(DAT_0801afec);
    FUN_0800bb0c(s_Invalid_extruder_0801aff0);
    return;
  }
  iVar6 = FUN_0800b04c(0x50);
  puVar2 = DAT_0801afd8;
  if (iVar6 != 0) {
    uVar8 = FUN_0800c204();
    *puVar2 = uVar8;
  }
  iVar6 = FUN_0800b04c(0x49);
  pfVar3 = DAT_0801afdc;
  fVar1 = DAT_0801afc4;
  if (iVar6 != 0) {
    fVar9 = (float)FUN_0800c204();
    *pfVar3 = fVar9 * fVar1;
  }
  iVar6 = FUN_0800b04c(0x44);
  pfVar4 = DAT_0801afe0;
  if (iVar6 != 0) {
    fVar9 = (float)FUN_0800c204();
    *pfVar4 = fVar9 / DAT_0801afc4;
  }
  FUN_0800bb0c(DAT_0801afe4);
  FUN_0800bb78(*puVar2,&DAT_0801afc8);
  FUN_0800bb78(*pfVar3 / DAT_0801afc4,&DAT_0801afcc);
  FUN_0800bb78(*pfVar4 * fVar1,&DAT_0801afd0);
  FUN_0800de78(DAT_0801afe8,10);
  return;
}



/* FUN_0801b004 at 0801b004 */

void FUN_0801b004(void)

{
  float fVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  
  iVar5 = FUN_0800b04c(0x50);
  puVar2 = DAT_0801b0a0;
  if (iVar5 != 0) {
    uVar6 = FUN_0800c204();
    *puVar2 = uVar6;
  }
  iVar5 = FUN_0800b04c(0x49);
  pfVar3 = DAT_0801b0a4;
  fVar1 = DAT_0801b090;
  if (iVar5 != 0) {
    fVar7 = (float)FUN_0800c204();
    *pfVar3 = fVar7 * fVar1;
  }
  iVar5 = FUN_0800b04c(0x44);
  pfVar4 = DAT_0801b0a8;
  if (iVar5 != 0) {
    fVar7 = (float)FUN_0800c204();
    *pfVar4 = fVar7 / DAT_0801b090;
  }
  FUN_0800bb0c(DAT_0801b0ac);
  FUN_0800bb78(*puVar2,&DAT_0801b094);
  FUN_0800bb78(*pfVar3 / DAT_0801b090,&DAT_0801b098);
  FUN_0800bb78(*pfVar4 * fVar1,&DAT_0801b09c);
  FUN_0800de78(DAT_0801b0b0,10);
  return;
}



/* FUN_0801b0b4 at 0801b0b4 */

undefined4 FUN_0801b0b4(void)

{
  char cVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  char *pcVar7;
  float fVar8;
  undefined4 in_r3;
  uint uVar9;
  char *pcVar10;
  uint in_fpscr;
  undefined8 uVar11;
  undefined4 local_30 [2];
  
  iVar6 = FUN_0800b020(0x45);
  if (iVar6 == 0) {
    sVar5 = 0;
  }
  else {
    sVar5 = FUN_0800b038();
  }
  iVar6 = FUN_0800b020(0x43);
  if (iVar6 == 0) {
    cVar3 = '\x05';
  }
  else {
    cVar3 = FUN_0800b038();
  }
  iVar6 = FUN_0800b020(0x55);
  piVar2 = DAT_0801b1b8;
  if (iVar6 == 0) {
    uVar9 = FUN_0800b04c(0x55);
  }
  else {
    if (*DAT_0801b1b8 != 0) {
      iVar6 = FUN_0800b038();
      if (iVar6 < 0) {
        uVar9 = 0;
        goto LAB_0801b120;
      }
      iVar6 = FUN_0800b038();
      if (iVar6 < 0x100) {
        bVar4 = FUN_0800b038();
        uVar9 = (uint)bVar4;
        if (uVar9 == 0) goto LAB_0801b120;
      }
    }
    uVar9 = 1;
  }
LAB_0801b120:
  fVar8 = DAT_0801b1b0;
  if (-1 < sVar5) {
    fVar8 = DAT_0801b1b4;
  }
  iVar6 = FUN_0800b020(0x53);
  if (iVar6 != 0) {
    pcVar7 = (char *)*piVar2;
    pcVar10 = pcVar7;
    if (pcVar7 == (char *)0x0) goto LAB_0801b16c;
    for (; (cVar1 = *pcVar10, cVar1 != '\0' && (cVar1 != ' ')); pcVar10 = pcVar10 + 1) {
      if (cVar1 == 'E' || cVar1 == 'e') {
        *pcVar10 = '\0';
        uVar11 = FUN_08015900(*piVar2,0);
        *pcVar10 = cVar1;
        goto LAB_0801b158;
      }
    }
    uVar11 = FUN_08015900(pcVar7,0);
LAB_0801b158:
    fVar8 = (float)FUN_0800bef8((int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
  }
  pcVar7 = (char *)(int)fVar8;
LAB_0801b16c:
  if (sVar5 == 0) {
    *DAT_0801b1bc = 0;
  }
  local_30[0] = VectorSignedToFloat((int)(short)pcVar7,(byte)(in_fpscr >> 0x15) & 3);
  FUN_08013de0(local_30,(int)(char)sVar5,(int)cVar3,uVar9);
  return in_r3;
}



/* FUN_0801b1c0 at 0801b1c0 */

void FUN_0801b1c0(void)

{
  undefined4 unaff_r7;
  
  FUN_08010028();
  FUN_08011842(s__TQ_100__0801b1d4,unaff_r7);
  return;
}



/* FUN_0801b1e0 at 0801b1e0 */

void FUN_0801b1e0(void)

{
  FUN_0800df0c(1);
  return;
}



/* FUN_0801b1e6 at 0801b1e6 */

void FUN_0801b1e6(void)

{
  FUN_0800df0c(0);
  return;
}



/* FUN_0801b1ec at 0801b1ec */

/* WARNING: Removing unreachable block (ram,0x0801b228) */

undefined8 FUN_0801b1ec(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  char *pcVar12;
  int iVar13;
  float fVar15;
  undefined8 uVar14;
  float extraout_s2;
  float fVar16;
  float fVar17;
  float extraout_s3;
  float extraout_s4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  piVar5 = DAT_0801b454;
  pcVar12 = DAT_0801b450;
  uVar4 = DAT_0801b44c;
  puVar3 = DAT_0801b448;
  local_24 = DAT_0801b448[1];
  local_28 = *DAT_0801b448;
  local_20 = DAT_0801b448[2];
  iVar7 = FUN_0800b04c(0x4c);
  if (iVar7 != 0) {
    if (*piVar5 == 0) {
      cVar6 = *pcVar12;
    }
    else {
      cVar6 = FUN_0800b038();
    }
    iVar7 = (int)cVar6;
    if ((iVar7 < 0) || (0 < iVar7)) {
      FUN_0800bb0c(s__Invalid_storage_slot__0801b494);
      FUN_0800bb4c(s__Use_0_to_0801b4ac,0);
      FUN_0801b46c();
      goto LAB_0801b412;
    }
    FUN_0800d3fe(iVar7,0);
    *pcVar12 = cVar6;
  }
  iVar7 = FUN_0800b04c(0x4c);
  if ((iVar7 != 0) || (iVar7 = FUN_0800b04c(0x56), iVar7 != 0)) {
    FUN_0800b3e4(0);
    fVar15 = *DAT_0801b458;
    bVar1 = fVar15 != DAT_0801b458[1];
    fVar16 = extraout_s2;
    if (!bVar1) {
      fVar16 = DAT_0801b458[2];
    }
    if (bVar1 || (bVar1 || DAT_0801b458[1] != fVar16)) {
LAB_0801b2f4:
      if (((int)fVar15 << 1) >> 0x18 == -1) {
        uVar10 = -(uint)(((uint)fVar15 & 0x7fffff) == 0) >> 0x1f;
      }
      else {
        uVar10 = 1;
      }
    }
    else {
      fVar17 = DAT_0801b458[5];
      bVar1 = fVar17 != DAT_0801b458[6];
      fVar16 = extraout_s3;
      if (!bVar1) {
        fVar16 = DAT_0801b458[7];
      }
      if (bVar1 || (bVar1 || DAT_0801b458[6] != fVar16)) goto LAB_0801b2f4;
      bVar1 = DAT_0801b458[10] != DAT_0801b458[0xb];
      fVar16 = extraout_s4;
      if (!bVar1) {
        fVar16 = DAT_0801b458[0xc];
      }
      if (bVar1 || (bVar1 || DAT_0801b458[0xb] != fVar16)) goto LAB_0801b2f4;
      bVar1 = fVar15 == 0.0;
      bVar2 = bVar1 && (bVar1 && fVar17 == 0.0);
      if (bVar1 && (bVar1 && fVar17 == 0.0)) {
        bVar2 = DAT_0801b458[10] == 0.0;
      }
      if (!bVar2) goto LAB_0801b2f4;
      uVar10 = 0;
    }
    FUN_0800bb4c(s_ubl_mesh_is_valid___0801b4b8,uVar10);
    FUN_0801b46c();
    FUN_0800bb4c(s_ubl_storage_slot___0801b4d0,(int)*pcVar12);
    FUN_0801b46c();
  }
  FUN_0800b04c(0x56);
  iVar7 = FUN_0800b04c(0x5a);
  if (iVar7 != 0) {
    pcVar8 = (char *)*piVar5;
    pcVar12 = pcVar8;
    uVar9 = DAT_0801b43c;
    if (pcVar8 != (char *)0x0) {
      for (; cVar6 = *pcVar12, cVar6 != '\0' && cVar6 != ' '; pcVar12 = pcVar12 + 1) {
        if (cVar6 == 'E' || cVar6 == 'e') {
          *pcVar12 = '\0';
          uVar14 = FUN_08015900(*piVar5,0);
          *pcVar12 = cVar6;
          goto LAB_0801b41c;
        }
      }
      uVar14 = FUN_08015900(pcVar8,0);
LAB_0801b41c:
      uVar9 = FUN_0800bef8((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
    }
    FUN_0800e500(uVar9,0);
  }
  iVar7 = FUN_0800b04c(0x53);
  pcVar12 = DAT_0801b45c;
  iVar13 = 0;
  if (iVar7 == 0) {
    cVar6 = *DAT_0801b45c;
  }
  else {
    if ((*piVar5 == 0) ||
       ((iVar7 = FUN_0800b038(), -1 < iVar7 &&
        ((iVar7 = FUN_0800b038(), 0xff < iVar7 || (cVar6 = FUN_0800b038(), cVar6 != '\0')))))) {
      iVar13 = 1;
    }
    FUN_0800e4d4(iVar13);
    cVar6 = *pcVar12;
    if ((iVar13 != 0) && (cVar6 == '\0')) {
      FUN_0800bb0c(DAT_0801b460);
      FUN_0800bb0c(s_Failed_to_enable_Bed_Leveling_0801b4e4);
    }
  }
  uVar9 = DAT_0801b464;
  FUN_0800bb0c(DAT_0801b464);
  if (cVar6 == '\0') {
    uVar11 = 0x801b444;
  }
  else {
    uVar11 = 0x801b440;
  }
  FUN_0800bb28(s_Bed_Leveling_0801b504,uVar11);
  FUN_0801b46c();
  FUN_0800bb0c(uVar9);
  FUN_0800bb0c(s_Fade_Height_0801b514);
  fVar16 = *DAT_0801b468;
  if (fVar16 == 0.0 || fVar16 < 0.0 != NAN(fVar16)) {
    FUN_0800bb0c(&DAT_0801b524);
  }
  else {
    uVar9 = FUN_0800bca0(fVar16);
    FUN_0800c014(uVar9,uVar4,2);
  }
  iVar7 = FUN_08015bc8(&local_28,puVar3,0xc);
  if (iVar7 != 0) {
    FUN_0800a500();
  }
LAB_0801b412:
  return CONCAT44(local_24,local_28);
}



/* FUN_0801b46c at 0801b46c */

void FUN_0801b46c(void)

{
  FUN_0800de78();
  return;
}



/* FUN_0801b52c at 0801b52c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0801b52c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  char *pcVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar16;
  undefined8 uVar15;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_28 = param_3;
  uStack_24 = param_4;
  iVar4 = FUN_0800b020(0x49);
  cVar3 = -1;
  if (iVar4 == 0) {
    cVar2 = -1;
  }
  else {
    cVar2 = FUN_0800b038();
  }
  uVar12 = (uint)cVar2;
  iVar4 = FUN_0800b020(0x4a);
  if (iVar4 != 0) {
    cVar3 = FUN_0800b038();
  }
  uVar13 = (uint)cVar3;
  uVar5 = ~uVar13;
  iVar4 = FUN_0800b04c(0x43);
  iVar6 = FUN_0800b04c(0x5a);
  uVar14 = ~uVar12;
  if (iVar6 == 0) {
    iVar7 = FUN_0800b04c(0x51);
    if (iVar7 != 0) {
      iVar7 = 1;
    }
  }
  else {
    iVar7 = 0;
  }
  if (iVar4 != 0) {
    param_1 = 0;
    FUN_0800991c(&local_28,1,DAT_0801b64c,DAT_0801b64c + 4,0,0);
    uVar12 = (uint)(char)local_28;
    uVar13 = (uint)local_28._1_1_;
  }
  puVar1 = DAT_0801b654;
  if ((iVar4 - ((int)(uVar5 & uVar14) >> 0x1f) == 1) && ((iVar6 != 0 || (iVar7 != 0)))) {
    if (uVar12 < 5 && uVar13 < 5) {
      pcVar10 = (char *)*DAT_0801b654;
      pcVar8 = pcVar10;
      fVar11 = DAT_0801b648;
      if (pcVar10 != (char *)0x0) {
        for (; (cVar3 = *pcVar8, cVar3 != '\0' && (cVar3 != ' ')); pcVar8 = pcVar8 + 1) {
          if (cVar3 == 'E' || cVar3 == 'e') {
            *pcVar8 = '\0';
            uVar15 = FUN_08015900(*puVar1,0);
            *pcVar8 = cVar3;
            goto LAB_0801b628;
          }
        }
        uVar15 = FUN_08015900(pcVar10,0);
LAB_0801b628:
        fVar11 = (float)FUN_0800bef8((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
      }
      iVar4 = _DAT_0801b658 + uVar12 * 0x14;
      fVar16 = DAT_0801b648;
      if (iVar7 != 0) {
        fVar16 = *(float *)(iVar4 + uVar13 * 4);
      }
      *(float *)(iVar4 + uVar13 * 4) = fVar11 + fVar16;
      return param_1;
    }
    FUN_0800bb0c(DAT_0801b650);
    pcVar8 = s_Mesh_point_cannot_be_resolved_0801b67c;
  }
  else {
    FUN_0800bb0c(DAT_0801b650);
    pcVar8 = s_M421_incorrect_parameter_usage_0801b65b + 1;
  }
  uVar9 = FUN_0800bb0c(pcVar8);
  return uVar9;
}



/* thunk_FUN_0800c894 at 0801b69c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint thunk_FUN_0800c894(void)

{
  byte *pbVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  char cVar12;
  undefined2 uStack_58;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  uint uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 auStack_3c [2];
  undefined1 auStack_38 [24];
  
  pbVar1 = DAT_0800d454;
  uStack_48 = 0;
  *DAT_0800d454 = 0;
  uStack_58 = 0;
  uStack_50 = 6;
  uStack_54 = 1;
  uVar7 = FUN_0800cc8c(1,&uStack_54,1,&uStack_58);
  uVar7 = FUN_0800cc8c(uVar7,DAT_0800d458,0x10,&uStack_58);
  uVar7 = FUN_0800cc8c(uVar7,DAT_0800d45c,0x10,&uStack_58);
  uVar7 = FUN_0800cc8c(uVar7,DAT_0800d460,0x10,&uStack_58);
  uVar7 = FUN_0800cc8c(uVar7,DAT_0800d464,4,&uStack_58);
  uVar7 = FUN_0800cc8c(uVar7,DAT_0800d468,4,&uStack_58);
  uVar7 = FUN_0800cc8c(uVar7,DAT_0800d46c,4,&uStack_58);
  uVar7 = FUN_0800cc8c(uVar7,DAT_0800d470,4,&uStack_58);
  uVar7 = FUN_0800cc8c(uVar7,DAT_0800d474,4,&uStack_58);
  uVar7 = FUN_0800cc8c(uVar7,DAT_0800d478,4,&uStack_58);
  uVar7 = FUN_0800cc8c(uVar7,DAT_0800d47c,0x10,&uStack_58);
  FUN_0800cc8c(uVar7,DAT_0800d480,0xc,&uStack_58);
  uStack_44 = *DAT_0800d484;
  FUN_0800cc8c(DAT_0800d484,&uStack_44,4,&uStack_58);
  uStack_48 = 0;
  uStack_55 = 3;
  uStack_56 = 3;
  uVar7 = FUN_0800cc8c(3,&uStack_48,4,&uStack_58);
  uVar7 = FUN_0800cc8c(uVar7,&uStack_55,1,&uStack_58);
  uVar7 = FUN_0800cc8c(uVar7,&uStack_56,1,&uStack_58);
  uVar7 = FUN_0800cc8c(uVar7,DAT_0800d488,4,&uStack_58);
  FUN_0800cc8c(uVar7,DAT_0800d48c,1,&uStack_58);
  uStack_48 = 0;
  cVar12 = '\0';
  while (FUN_0800d2e8(), cVar12 == '\0') {
    FUN_0800cc92();
  }
  uStack_52 = 3;
  uStack_53 = 3;
  uStack_48 = 0;
  uVar7 = FUN_0800cc8c(0,&uStack_52,1,&uStack_58);
  uVar8 = FUN_0800cc8c(uVar7,&uStack_53,1,&uStack_58);
  uVar4 = DAT_0800d5ec;
  uVar3 = DAT_0800d5e8;
  uVar7 = DAT_0800d5e4;
  pcVar2 = DAT_0800d5e0;
  uVar8 = FUN_0800cc8c(uVar8,&DAT_0800cc3c,8,&uStack_58);
  uVar8 = FUN_0800cc8c(uVar8,&DAT_0800cc44,8,&uStack_58);
  uVar8 = FUN_0800cc8c(uVar8,DAT_0800d5f0,1,&uStack_58);
  uVar8 = FUN_0800cc8c(uVar8,pcVar2,1,&uStack_58);
  uVar8 = FUN_0800cc8c(uVar8,&DAT_0800cc4c,4,&uStack_58);
  uVar8 = FUN_0800cc8c(uVar8,&DAT_0800cc50,4,&uStack_58);
  uVar9 = FUN_0800cc8c(uVar8,&DAT_0800cc54,4,&uStack_58);
  bVar10 = 0;
  do {
    uVar8 = FUN_0800cc8c(uVar9,uVar4,4,&uStack_58);
    uVar8 = FUN_0800cc8c(uVar8,uVar3,4,&uStack_58);
    FUN_0800cc8c(uVar8,uVar7,4,&uStack_58);
    FUN_0800cc9e(0x3f800000);
    while( true ) {
      bVar10 = bVar10 + 1;
      uVar9 = (uint)bVar10;
      if (1 < uVar9) {
        uStack_40 = 0x14;
        uVar7 = FUN_0800cc8c(0x14,&uStack_40,4,&uStack_58);
        puVar5 = DAT_0800d5fc;
        uVar7 = FUN_0800cc8c(uVar7,DAT_0800d5f8,4,&uStack_58);
        uVar7 = FUN_0800cc8c(uVar7,DAT_0800d600,4,&uStack_58);
        FUN_0800cc8c(uVar7,DAT_0800d604,4,&uStack_58);
        uStack_4c = 0x24;
        FUN_0800cc8c(0x24,&uStack_4c,2,&uStack_58);
        uStack_51 = 0;
        uVar7 = FUN_0800cc8c(0,&uStack_51,1,&uStack_58);
        uVar7 = FUN_0800cc8c(uVar7,&DAT_0800cc58,0x20,&uStack_58);
        FUN_0800cc8c(uVar7,DAT_0800d608,1,&uStack_58);
        iVar11 = 0;
        do {
          uStack_48 = *puVar5;
          do {
            FUN_0800cc92();
            iVar11 = iVar11 + 1;
            if (1 < iVar11) {
              uVar7 = FUN_08012510(auStack_38,0x18);
              FUN_0800cc8c(uVar7,auStack_38,0x16,&uStack_58);
              uStack_4a = 0;
              cVar12 = '\0';
              while (uVar7 = FUN_0800d2e8(), cVar12 == '\0') {
                cVar12 = '\0';
                FUN_0800cc8c(uVar7,&uStack_4a,2,&uStack_58);
              }
              FUN_0800cc9e();
              FUN_0800cc92();
              iVar11 = DAT_0800d60c;
              cVar12 = '\0';
              while (uVar7 = FUN_0800d2e8(), cVar12 == '\0') {
                cVar12 = '\0';
                FUN_0800cc8c(3,iVar11 + 0xc,4,&uStack_58);
              }
              cVar12 = '\0';
              uStack_48 = uVar7;
              while (uVar7 = FUN_0800d2e8(), cVar12 == '\0') {
                FUN_0800cc92();
              }
              cVar12 = '\0';
              uStack_48 = uVar7;
              while (FUN_0800d2e8(), puVar5 = DAT_0800d610, cVar12 == '\0') {
                FUN_0800cc92();
              }
              iVar11 = 0;
              do {
                uStack_48 = *puVar5;
                do {
                  FUN_0800cc92();
                  puVar6 = DAT_0800d614;
                  iVar11 = iVar11 + 1;
                  if (1 < iVar11) {
                    iVar11 = 0;
                    do {
                      uStack_48 = *puVar6;
                      do {
                        FUN_0800cc92();
                        uVar9 = uStack_50;
                        iVar11 = iVar11 + 1;
                        if (1 < iVar11) {
                          if (*pbVar1 == 0) {
                            auStack_3c[0] = uStack_58;
                            uStack_50 = 0;
                            uVar7 = FUN_0800cc8c(uStack_58,&DAT_0800d284,4,&uStack_58);
                            FUN_0800cc8c(uVar7,auStack_3c,2,&uStack_58);
                            FUN_0800bb0c(DAT_0800d618);
                            FUN_0800bb4c(s_ASettings_Stored___0800cc77 + 1,uVar9 & 0xffff);
                            FUN_0800bbc8(s_bytes__crc_0800d2a8,auStack_3c[0]);
                            FUN_0800bb0c(&DAT_0800cc38);
                            uVar9 = FUN_0800c85c(uVar9 & 0xffff);
                            uVar9 = uVar9 | *pbVar1;
                            if (uVar9 != 0) {
                              uVar9 = 1;
                            }
                            *pbVar1 = (byte)uVar9;
                          }
                          if (-1 < *pcVar2) {
                            FUN_0800d3bc();
                          }
                          FUN_0800ea18();
                          return -(uint)(*pbVar1 == 0) >> 0x1f;
                        }
                      } while (iVar11 != 0);
                    } while( true );
                  }
                } while (iVar11 != 0);
              } while( true );
            }
          } while (iVar11 != 0);
        } while( true );
      }
      if (uVar9 == 0) break;
      FUN_0800cc9e(_DAT_0800d1d0);
      uStack_48 = 0;
      cVar12 = '\x03';
      while( true ) {
        if (cVar12 == '\0') break;
        FUN_0800cc92();
        cVar12 = cVar12 + -1;
      }
    }
  } while( true );
}



/* thunk_FUN_0800d37e at 0801b6a0 */

undefined4 thunk_FUN_0800d37e(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r7;
  
  iVar1 = FUN_0800d36c();
  if (iVar1 != 0) {
    uVar2 = FUN_0800ccac(unaff_r7);
    return uVar2;
  }
  FUN_0800d490();
  return 1;
}



/* thunk_FUN_0800d490 at 0801b6a4 */

undefined8 thunk_FUN_0800d490(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 unaff_r4;
  char cVar9;
  
  iVar6 = DAT_0800d9c8;
  iVar5 = DAT_0800d9c4;
  iVar4 = DAT_0800d9c0;
  iVar8 = 0;
  do {
    *(undefined4 *)(iVar6 + iVar8 * 4) = (&DAT_0800ddfc)[iVar8];
    *(undefined4 *)(iVar5 + iVar8 * 4) = (&DAT_0800de0c)[iVar8];
    *(undefined4 *)(iVar4 + iVar8 * 4) = (&DAT_0800de1c)[iVar8];
    uVar3 = DAT_0800d5f4;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 4);
  *DAT_0800d9cc = DAT_0800d5f4;
  *DAT_0800d9d0 = uVar3;
  *DAT_0800d9d4 = uVar3;
  *DAT_0800d9d8 = 0;
  *DAT_0800d9dc = 0;
  uVar3 = DAT_0800d9e4;
  *DAT_0800d9e0 = 20000;
  puVar1 = DAT_0800d9e8;
  DAT_0800d9e8[2] = uVar3;
  *puVar1 = 0x41200000;
  puVar1[1] = 0x41200000;
  puVar1[3] = DAT_0800d9ec;
  puVar1 = DAT_0800d9f0;
  *DAT_0800d9f0 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(DAT_0800d9f4 + 4) = 0;
  FUN_0800e5a8();
  *DAT_0800d9f8 = 9;
  puVar1 = DAT_0800d5ec;
  *DAT_0800d9fc = 0;
  puVar2 = DAT_0800d5e8;
  *puVar1 = DAT_0800da00;
  puVar1 = DAT_0800d5e4;
  *puVar2 = DAT_0800da04;
  puVar2 = DAT_0800d5f8;
  *puVar1 = DAT_0800da08;
  puVar1 = DAT_0800d600;
  *puVar2 = DAT_0800da0c;
  puVar2 = DAT_0800d604;
  *puVar1 = DAT_0800da10;
  *puVar2 = DAT_0800da14;
  puVar1 = DAT_0800d5fc;
  *DAT_0800d608 = 0;
  *puVar1 = DAT_0800da18;
  *DAT_0800da1c = 0;
  *DAT_0800da20 = 0;
  uVar7 = DAT_0800dab4;
  uVar3 = DAT_0800dab0;
  iVar4 = DAT_0800d60c;
  cVar9 = '\0';
  while (FUN_0800d2e8(), cVar9 == '\0') {
    *(undefined4 *)(iVar4 + 0xc) = unaff_r4;
    FUN_0801019a(3,(int)(short)unaff_r4);
  }
  *DAT_0800d610 = DAT_0800da24;
  *DAT_0800d614 = 0;
  FUN_0800c808();
  FUN_0800bb0c(DAT_0800d998);
  FUN_0800bb0c(s_Hardcoded_Default_Settings_Loade_0800dabc);
  return CONCAT44(uVar7,uVar3);
}



/* FUN_0801b6a8 at 0801b6a8 */

void FUN_0801b6a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = FUN_0801174c(*DAT_0801b748,0x53);
  if (iVar3 != 0) {
    pcVar1 = (char *)(iVar3 + 1);
    iVar5 = (int)*pcVar1;
    if (iVar5 - 0x30U < 10) {
LAB_0801b6d2:
      *DAT_0801b74c = (int)pcVar1;
      if (pcVar1 != (char *)0x0) {
        iVar3 = FUN_0800b038();
        if (iVar3 < 0) {
          uVar4 = 1;
          goto LAB_0801b71e;
        }
        iVar3 = FUN_0800b038();
        if (iVar3 < 0x100) {
          cVar2 = FUN_0800b038();
          uVar4 = -(uint)(cVar2 == '\0') >> 0x1f;
          goto LAB_0801b71e;
        }
      }
    }
    else {
      if (iVar5 == 0x2e) {
        cVar2 = *(char *)(iVar3 + 2);
joined_r0x0801b716:
        if ((int)cVar2 - 0x30U < 10) goto LAB_0801b6d2;
      }
      else if (iVar5 == 0x2d || iVar5 == 0x2b) {
        if ((int)*(char *)(iVar3 + 2) - 0x30U < 10) goto LAB_0801b6d2;
        if (*(char *)(iVar3 + 2) == 0x2e) {
          cVar2 = *(char *)(iVar3 + 3);
          goto joined_r0x0801b716;
        }
      }
      *DAT_0801b74c = 0;
    }
  }
  uVar4 = 0;
LAB_0801b71e:
  FUN_0800d61c(uVar4,param_3,param_4);
  return;
}



/* FUN_0801b72c at 0801b72c */

undefined4 FUN_0801b72c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r7;
  
  iVar1 = FUN_0800d36c();
  if (iVar1 != 0) {
    FUN_0800bb0c(DAT_0801b750);
    uVar2 = FUN_0800bb0c(s_EEPROM_OK_0801b754,unaff_r7);
    return uVar2;
  }
  return unaff_r7;
}



/* FUN_0801b760 at 0801b760 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801b760(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char cVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  char *pcVar8;
  undefined8 uVar9;
  
  pfVar3 = DAT_0801b854;
  FUN_0800bb0c(DAT_0801b850);
  FUN_0800bb0c(s_Probe_Z_Offset_0801b863 + 1);
  iVar5 = FUN_0801174c(*DAT_0801b858,0x5a);
  puVar4 = DAT_0801b85c;
  if (iVar5 == 0) goto LAB_0801b7e4;
  pcVar1 = (char *)(iVar5 + 1);
  iVar7 = (int)*pcVar1;
  if (iVar7 - 0x30U < 10) {
LAB_0801b79a:
    *DAT_0801b85c = pcVar1;
    pcVar8 = pcVar1;
    fVar6 = DAT_0801b844;
    if (pcVar1 != (char *)0x0) {
      for (; (cVar2 = *pcVar8, cVar2 != '\0' && (cVar2 != ' ')); pcVar8 = pcVar8 + 1) {
        if (cVar2 == 'E' || cVar2 == 'e') {
          *pcVar8 = '\0';
          uVar9 = FUN_08015900(*puVar4,0);
          *pcVar8 = cVar2;
          goto LAB_0801b800;
        }
      }
      uVar9 = FUN_08015900(pcVar1,0);
LAB_0801b800:
      fVar6 = (float)FUN_0800bef8((int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
      if ((fVar6 < -20.0 != NAN(fVar6)) || (-1 < (int)((uint)(fVar6 < DAT_0801b84c) << 0x1f))) {
        FUN_0800bb0c(s_z_min___20_z_max__20_0801b874,param_3,param_4);
        return;
      }
    }
  }
  else {
    if (iVar7 == 0x2e) {
      cVar2 = *(char *)(iVar5 + 2);
joined_r0x0801b7d6:
      if ((int)cVar2 - 0x30U < 10) goto LAB_0801b79a;
    }
    else if (iVar7 == 0x2d || iVar7 == 0x2b) {
      if ((int)*(char *)(iVar5 + 2) - 0x30U < 10) goto LAB_0801b79a;
      if (*(char *)(iVar5 + 2) == 0x2e) {
        cVar2 = *(char *)(iVar5 + 3);
        goto joined_r0x0801b7d6;
      }
    }
    *DAT_0801b85c = 0;
    fVar6 = DAT_0801b844;
  }
  *pfVar3 = fVar6;
LAB_0801b7e4:
  FUN_0800bb78(*pfVar3,&DAT_0801b848);
  FUN_0800de78(_DAT_0801b860,10,param_3,param_4);
  return;
}



/* FUN_0801b890 at 0801b890 */

void FUN_0801b890(void)

{
  byte *pbVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 in_r3;
  float fVar6;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_14 = in_r3;
  FUN_0801e978(0x41a00000,DAT_0801b9cc,0x41a00000,&local_20);
  iVar4 = FUN_08013710();
  if (iVar4 == 0) {
    iVar4 = FUN_0800b04c(0x45);
    if (iVar4 == 0) {
      fVar6 = 2.0;
    }
    else {
      fVar6 = (float)FUN_0800c204();
    }
    local_28 = -ABS(fVar6);
    iVar4 = FUN_0800b020(0x58);
    if ((iVar4 != 0) && (iVar4 = FUN_0800b020(0x58), local_20 = DAT_0801b9d0, iVar4 != 0)) {
      local_20 = FUN_0800c204();
    }
    iVar4 = FUN_0800b020(0x59);
    if ((iVar4 != 0) && (iVar4 = FUN_0800b020(0x59), local_1c = DAT_0801b9d0, iVar4 != 0)) {
      local_1c = FUN_0800c204();
    }
    iVar4 = FUN_0800b020(0x5a);
    if ((iVar4 != 0) && (iVar4 = FUN_0800b020(0x5a), local_18 = DAT_0801b9d0, iVar4 != 0)) {
      local_18 = FUN_0800c204();
    }
    iVar4 = FUN_0800b04c(0x55);
    pbVar1 = DAT_0801b9d4;
    if (iVar4 == 0) {
      fVar6 = *(float *)(DAT_0801b9d8 + (uint)*DAT_0801b9d4 * 4);
    }
    else {
      fVar6 = (float)FUN_0800c204();
    }
    local_2c = -ABS(fVar6);
    iVar4 = FUN_0800b04c(0x4c);
    if (iVar4 == 0) {
      local_30 = *(float *)(DAT_0801b9dc + (uint)*pbVar1 * 4);
    }
    else {
      local_30 = (float)FUN_0800c204();
    }
    local_30 = ABS(local_30);
    iVar4 = FUN_0800b020(0x42);
    if (iVar4 == 0) {
      cVar3 = '\n';
    }
    else if (*DAT_0801b9e0 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = FUN_08011748(*DAT_0801b9e0,0,10);
    }
    uVar2 = DAT_0801b9e4;
    iVar4 = FUN_080164bc(DAT_0801b9e4);
    iVar5 = FUN_0801ec8c(&local_28,&local_20,&local_2c,1);
    if (iVar5 != 0) {
      FUN_0801ed10((int)cVar3);
      local_24 = DAT_0801b9e8;
      FUN_0801edb4(&local_30,&local_24,(int)cVar3);
    }
    if (iVar4 != 0) {
      FUN_08016480(uVar2);
    }
  }
  return;
}



/* FUN_0801b9ec at 0801b9ec */

void FUN_0801b9ec(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  char cVar4;
  char in_OV;
  undefined8 uVar5;
  
  iVar3 = FUN_08013710();
  if (iVar3 == 0) {
    cVar4 = '\0';
    iVar3 = FUN_0800b04c();
    puVar2 = DAT_0801ba50;
    uVar1 = DAT_0801ba48;
    if (iVar3 != 0) {
      FUN_0800c204();
      uVar5 = FUN_0801ba5c(*puVar2,DAT_0801ba54);
      if (cVar4 == in_OV) {
        *(undefined4 *)((int)((ulonglong)uVar5 >> 0x20) + (int)uVar5 * 4) = uVar1;
      }
    }
    cVar4 = '\0';
    iVar3 = FUN_0800b04c();
    if (iVar3 != 0) {
      FUN_0800c204();
      uVar5 = FUN_0801ba5c(*puVar2,DAT_0801ba58);
      if (cVar4 == in_OV) {
        *(undefined4 *)((int)((ulonglong)uVar5 >> 0x20) + (int)uVar5 * 4) = uVar1;
      }
    }
  }
  return;
}



/* FUN_0801ba5c at 0801ba5c */

void FUN_0801ba5c(float param_1,int param_2,int param_3)

{
  *(float *)(param_3 + param_2 * 4) = ABS(param_1);
  return;
}



/* FUN_0801ba72 at 0801ba72 */

undefined4 FUN_0801ba72(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r7;
  
  iVar2 = FUN_0800b04c(0x58);
  if (iVar2 != 0) {
    sVar1 = FUN_0800b038();
    FUN_0801019a(0,(int)sVar1);
  }
  iVar2 = FUN_0800b04c(0x45);
  if (iVar2 != 0) {
    sVar1 = FUN_0800b038();
    uVar3 = FUN_0801019a(2,(int)sVar1,unaff_r7);
    return uVar3;
  }
  return unaff_r7;
}



/* FUN_0801baa4 at 0801baa4 */

void FUN_0801baa4(void)

{
  undefined4 unaff_r7;
  
  FUN_0800bb0c(DAT_0801bab8);
  FUN_0800bb0c(s_No_case_light_0801babc,unaff_r7);
  return;
}



/* FUN_0801bacc at 0801bacc */

undefined4 FUN_0801bacc(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r7;
  bool bVar4;
  
  *DAT_0801bb1c = 1;
  iVar2 = FUN_0800b04c(0x53);
  bVar4 = iVar2 == 0;
  if (!bVar4) {
    iVar2 = *DAT_0801bb20;
  }
  if (bVar4 || iVar2 == 0) {
    iVar2 = FUN_0800b04c(0x53);
    if (iVar2 != 0) {
      return unaff_r7;
    }
  }
  else {
    iVar2 = FUN_0800b038();
    if (-1 < iVar2) {
      iVar2 = FUN_0800b038();
      if (0xff < iVar2) {
        return unaff_r7;
      }
      cVar1 = FUN_0800b038();
      if (cVar1 != '\0') {
        return unaff_r7;
      }
    }
  }
  uVar3 = FUN_08013578(unaff_r7);
  return uVar3;
}



/* FUN_0801bb24 at 0801bb24 */

uint * FUN_0801bb24(void)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar2 = DAT_0801bb90;
  puVar4 = (uint *)*DAT_0801bb8c;
  if ((char)*puVar4 == '\0') {
    puVar4 = (uint *)FUN_0800bfec(DAT_0801bb94,DAT_0801bb90);
    return puVar4;
  }
  puVar3 = DAT_0801bb90;
  if ((((uint)DAT_0801bb90 ^ (uint)puVar4) & 3) == 0) {
    uVar5 = (uint)DAT_0801bb90 & 3;
    while (uVar5 != 0) {
      uVar5 = *puVar4;
      *(char *)puVar3 = (char)uVar5;
      if ((char)uVar5 == '\0') {
        return puVar2;
      }
      uVar5 = (uint)((int)puVar3 + 1) & 3;
      puVar4 = (uint *)((int)puVar4 + 1);
      puVar3 = (uint *)((int)puVar3 + 1);
    }
    uVar5 = *puVar4;
    while ((uVar5 + 0xfefefeff & ~uVar5 & 0x80808080) == 0) {
      *puVar3 = uVar5;
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      uVar5 = *puVar4;
    }
  }
  cVar1 = (char)*puVar4;
  while( true ) {
    puVar4 = (uint *)((int)puVar4 + 1);
    *(char *)puVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = *(char *)puVar4;
    puVar3 = (uint *)((int)puVar3 + 1);
  }
  return puVar2;
}



/* FUN_0801bb3c at 0801bb3c */

void FUN_0801bb3c(void)

{
  int iVar1;
  
  iVar1 = DAT_0801bb90;
  if (*(char *)*DAT_0801bb8c != '\0') {
    FUN_08016870(DAT_0801bb90 + 0x20);
    FUN_0801183e(&DAT_0801bb98);
    FUN_0801183e(iVar1);
    FUN_0801183e(s___WP__0801bba0);
    FUN_0801183e(iVar1 + 0x20);
    FUN_0801183e(&DAT_0801bb88);
    return;
  }
  FUN_0800bfec(DAT_0801bb94,DAT_0801bb90 + 0x20);
  return;
}



/* FUN_0801bba8 at 0801bba8 */

void FUN_0801bba8(undefined4 param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = DAT_0801bc1c;
  uVar2 = DAT_0801bc18;
  pbVar1 = DAT_0801bc14;
  if ((int)((uint)*DAT_0801bc14 << 0x1a) < 0) {
    FUN_0800bb4c(s_>>>_T__0801bc20,param_1);
    FUN_0800de78(uVar3,0x29);
    FUN_0800de78(uVar3,10);
    thunk_FUN_0800bc92(s_current_position__0801bc28,s___BEFORE_0801bc3c,uVar2);
  }
  FUN_0801ef20(DAT_0801bc10,param_1,0);
  if ((int)((uint)*pbVar1 << 0x1a) < 0) {
    thunk_FUN_0800bc92(s_current_position__0801bc28,s___AFTER_0801bc48,uVar2);
    FUN_0800bb0c(s_<<<_T()_0801bc54);
    return;
  }
  return;
}



/* FUN_0801bc60 at 0801bc60 */

void FUN_0801bc60(void)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_0801be2c;
  *(undefined4 *)(DAT_0801be2c + 8) = 0;
  *puVar1 = 0x3f;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  return;
}



/* FUN_0801bc70 at 0801bc70 */

undefined8 FUN_0801bc70(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  char *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  char cVar12;
  
  FUN_0801bc60();
  for (; bVar1 = *param_1, bVar1 == 0x20; param_1 = param_1 + 1) {
  }
  cVar12 = 0x4d < bVar1;
  bVar11 = bVar1 == 0x4e;
  if (bVar11) {
    iVar4 = FUN_0801bdfc((int)(char)param_1[1]);
    if (cVar12 != '\0') {
      bVar11 = iVar4 == 0x2d;
      if (!bVar11) {
        bVar11 = iVar4 == 0x2b;
      }
      goto LAB_0801bc98;
    }
  }
  else {
LAB_0801bc98:
    if (!bVar11) goto LAB_0801bdbe;
  }
  for (param_1 = param_1 + 2; (int)(char)*param_1 - 0x30U < 10; param_1 = param_1 + 1) {
  }
  for (; *param_1 == 0x20; param_1 = param_1 + 1) {
  }
LAB_0801bdbe:
  pbVar3 = DAT_0801be2c;
  *(byte **)(DAT_0801be2c + 4) = param_1;
  pbVar10 = param_1 + 1;
  bVar1 = *param_1;
  pcVar8 = (char *)FUN_0801174c(pbVar10,0x2a);
  if (pcVar8 != (char *)0x0) {
    do {
      pcVar5 = pcVar8;
      pcVar8 = pcVar5 + -1;
    } while (*pcVar8 == ' ');
    *pcVar5 = '\0';
  }
  if ((bVar1 != 0x47 && bVar1 != 0x4d) && bVar1 != 0x54) {
    return CONCAT44(param_4,param_3);
  }
  for (; cVar12 = 0x1f < *pbVar10, *pbVar10 == 0x20; pbVar10 = pbVar10 + 1) {
  }
  FUN_0801bdfc();
  if (cVar12 == '\0') {
    *pbVar3 = bVar1;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    do {
      iVar4 = *(int *)(pbVar3 + 0xc);
      *(int *)(pbVar3 + 0xc) = iVar4 * 10;
      *(int *)(pbVar3 + 0xc) = (char)*pbVar10 + -0x30 + iVar4 * 10;
      pbVar10 = pbVar10 + 1;
    } while ((int)(char)*pbVar10 - 0x30U < 10);
    for (; *pbVar10 == 0x20; pbVar10 = pbVar10 + 1) {
    }
    *(byte **)(pbVar3 + 0x10) = pbVar10;
    if ((bVar1 == 0x4d) &&
       ((iVar4 = *(int *)(pbVar3 + 0xc), iVar4 == 0x17 || iVar4 == 0x1c ||
        ((iVar4 == 0x1e || iVar4 == 0x75) || iVar4 == 0x3a0)))) {
      *(byte **)(pbVar3 + 8) = pbVar10;
      return CONCAT44(param_4,param_3);
    }
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    while( true ) {
      pbVar9 = pbVar10 + 1;
      bVar2 = *pbVar10;
      if (bVar2 == 0) break;
      bVar11 = bVar2 == 0x21 && bVar1 == 0x4d;
      if (bVar2 == 0x21 && bVar1 == 0x4d) {
        bVar11 = *(int *)(pbVar3 + 0xc) == 0x20;
      }
      pbVar10 = pbVar9;
      if (bVar11) {
        *(byte **)(pbVar3 + 8) = pbVar9;
        puVar6 = (undefined1 *)FUN_0801174c(pbVar9,0x23);
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = 0;
          return CONCAT44(param_4,param_3);
        }
        break;
      }
      for (; cVar12 = 0x1f < *pbVar10, *pbVar10 == 0x20; pbVar10 = pbVar10 + 1) {
      }
      uVar7 = FUN_0801bdfc();
      if (cVar12 != '\0') {
        if (uVar7 == 0x2e) {
          bVar2 = pbVar10[1];
joined_r0x0801bd7e:
          if ((int)(char)bVar2 - 0x30U < 10) goto LAB_0801bd88;
        }
        else {
          cVar12 = 0x2c < uVar7;
          if (uVar7 != 0x2d) {
            cVar12 = 0x2a < uVar7;
          }
          if (uVar7 == 0x2d || uVar7 == 0x2b) {
            iVar4 = FUN_0801bdfc((int)(char)pbVar10[1]);
            if (cVar12 == '\0') goto LAB_0801bd88;
            if (iVar4 == 0x2e) {
              bVar2 = pbVar10[2];
              goto joined_r0x0801bd7e;
            }
          }
        }
        if (*(int *)(pbVar3 + 8) == 0) {
          *(byte **)(pbVar3 + 8) = pbVar10 + -1;
        }
      }
LAB_0801bd88:
      cVar12 = 0x19 < (int)(char)*pbVar10 - 0x41U;
      if ((bool)cVar12) {
        while ((*pbVar10 != 0 &&
               ((iVar4 = FUN_0801bdfc(), cVar12 == '\0' ||
                ((iVar4 == 0x2e || iVar4 == 0x2d) || iVar4 == 0x2b))))) {
          cVar12 = (byte *)0xfffffffe < pbVar10;
          pbVar10 = pbVar10 + 1;
        }
        for (; *pbVar10 == 0x20; pbVar10 = pbVar10 + 1) {
        }
      }
    }
  }
  return CONCAT44(param_4,param_3);
}



/* FUN_0801bdfc at 0801bdfc */

void FUN_0801bdfc(void)

{
  return;
}



/* FUN_0801be04 at 0801be04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801be04(void)

{
  undefined4 uVar1;
  
  uVar1 = _DAT_0801be34;
  FUN_0800bb0c(DAT_0801be30);
  FUN_0800bb28(s_Unknown_command____0801be37 + 1,*(undefined4 *)(DAT_0801be2c + 4));
  FUN_0800de78(uVar1,0x22);
  FUN_0800de78(uVar1,10);
  return;
}



/* FUN_0801be4c at 0801be4c */

void FUN_0801be4c(int param_1)

{
  uint *puVar1;
  
  puVar1 = DAT_0801be6c;
  if ((param_1 == DAT_0801be68) || (puVar1 = DAT_0801be74, param_1 == DAT_0801be70)) {
    *puVar1 = *puVar1 | 1;
  }
  return;
}



/* FUN_0801be88 at 0801be88 */

ulonglong FUN_0801be88(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int local_28 [2];
  
  uVar2 = param_2 & 0x7fffffff;
  if (uVar2 < 0x100000) {
    local_28[0] = 0;
    if (uVar2 != 0 || param_1 != 0) {
      uVar5 = FUN_0801ef98(param_1,param_2,local_28);
      param_2 = (uint)((ulonglong)uVar5 >> 0x20);
      param_1 = (int)uVar5;
    }
  }
  else {
    local_28[0] = DAT_0801c390 + (uVar2 >> 0x14);
    param_2 = param_2 & DAT_0801c394 | DAT_0801c398;
  }
  uVar6 = FUN_0800c284(param_3,param_4,param_1,param_2);
  uVar3 = (uint)(uVar6 >> 0x20);
  iVar1 = (int)uVar6;
  uVar2 = (uVar3 << 1) >> 0x15;
  iVar4 = local_28[0] + uVar2;
  if ((uVar2 == 0) || (iVar4 < 1)) {
    if ((uVar6 & 0x7fffffff00000000) != 0 || iVar1 != 0) {
      uVar6 = FUN_0801f008(iVar1,uVar3,local_28[0]);
    }
  }
  else if (iVar4 < 0x7ff) {
    uVar6 = CONCAT44(uVar3 & 0x800fffff | iVar4 * 0x100000,iVar1);
  }
  else {
    uVar6 = CONCAT44((uint)((ulonglong)DAT_0801c1d8 >> 0x20) | uVar3 & 0x80000000,(int)DAT_0801c1d8)
    ;
  }
  return uVar6;
}



/* FUN_0801bf5c at 0801bf5c */

ulonglong FUN_0801bf5c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int local_28 [2];
  
  uVar2 = param_2 & 0x7fffffff;
  if (uVar2 < 0x100000) {
    local_28[0] = 0;
    if (uVar2 != 0 || param_1 != 0) {
      uVar5 = FUN_0801ef98(param_1,param_2,local_28);
      param_2 = (uint)((ulonglong)uVar5 >> 0x20);
      param_1 = (int)uVar5;
    }
  }
  else {
    local_28[0] = DAT_0801c390 + (uVar2 >> 0x14);
    param_2 = param_2 & DAT_0801c394 | DAT_0801c398;
  }
  uVar6 = FUN_0800eb88(param_1,param_2,param_3,param_4);
  uVar3 = (uint)(uVar6 >> 0x20);
  iVar1 = (int)uVar6;
  uVar2 = (uVar3 << 1) >> 0x15;
  iVar4 = local_28[0] + uVar2;
  if ((uVar2 == 0) || (iVar4 < 1)) {
    if ((uVar6 & 0x7fffffff00000000) != 0 || iVar1 != 0) {
      uVar6 = FUN_0801f008(iVar1,uVar3,local_28[0]);
    }
  }
  else if (iVar4 < 0x7ff) {
    uVar6 = CONCAT44(uVar3 & 0x800fffff | iVar4 * 0x100000,iVar1);
  }
  else {
    uVar6 = CONCAT44((uint)((ulonglong)DAT_0801c1d8 >> 0x20) | uVar3 & 0x80000000,(int)DAT_0801c1d8)
    ;
  }
  return uVar6;
}



/* FUN_0801c03c at 0801c03c */

ulonglong FUN_0801c03c(int param_1,uint param_2,int param_3,uint *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  uVar6 = CONCAT44(param_2,param_1);
  if (((param_3 != 0) && ((param_2 & 0x7fffffff) != 0 || param_1 != 0)) &&
     (((int)(param_2 << 1) >> 0x15 != -1 || ((param_2 & 0xfffff) != 0)))) {
    if (param_3 < 0) {
      uVar2 = -param_3;
      puVar4 = &DAT_0801c3e0;
      iVar3 = 8;
      uVar5 = DAT_0801c1e0;
      while( true ) {
        uVar1 = (undefined4)((ulonglong)uVar5 >> 0x20);
        if (uVar2 == 0 || iVar3 == 0) break;
        if ((int)(uVar2 << 0x1f) < 0) {
          uVar5 = FUN_0800c284((int)uVar5,uVar1,*puVar4,puVar4[1]);
        }
        uVar2 = uVar2 >> 1;
        puVar4 = puVar4 + 2;
        iVar3 = iVar3 + -1;
      }
      uVar6 = FUN_0801bf5c(param_1,param_2,(int)uVar5,uVar1);
      if (((uVar6 & 0x7fffffff00000000) != 0 || (int)uVar6 != 0) &&
         ((((int)(uVar6 >> 0x20) << 1) >> 0x15 != -1 || ((uVar6 & 0xfffff00000000) != 0)))) {
        while( true ) {
          if (uVar2 == 0) break;
          uVar6 = FUN_0801be88((int)uVar6,(int)(uVar6 >> 0x20),DAT_0801c3a4,DAT_0801c3c8);
          if (((uVar6 & 0x7fffffff00000000) == 0 && (int)uVar6 == 0) ||
             ((((int)(uVar6 >> 0x20) << 1) >> 0x15 == -1 && ((uVar6 & 0xfffff00000000) == 0))))
          break;
          uVar2 = uVar2 - 1;
        }
      }
    }
    else if (0 < param_3) {
      puVar4 = &DAT_0801c3e0;
      iVar3 = 8;
      uVar5 = DAT_0801c1e0;
      do {
        if (param_3 << 0x1f < 0) {
          uVar5 = FUN_0800c284((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),*puVar4,puVar4[1]);
        }
        param_3 = param_3 >> 1;
        puVar4 = puVar4 + 2;
        iVar3 = iVar3 + -1;
      } while ((0 < param_3) && (iVar3 != 0));
      uVar6 = FUN_0801be88(param_1,param_2,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      if (((uVar6 & 0x7fffffff00000000) != 0 || (int)uVar6 != 0) &&
         ((((int)(uVar6 >> 0x20) << 1) >> 0x15 != -1 || ((uVar6 & 0xfffff00000000) != 0)))) {
        for (; 0 < param_3; param_3 = param_3 + -1) {
          uVar6 = FUN_0801be88((int)uVar6,(int)(uVar6 >> 0x20),DAT_0801c39c,DAT_0801c3a0);
          if (((uVar6 & 0x7fffffff00000000) == 0 && (int)uVar6 == 0) ||
             ((((int)(uVar6 >> 0x20) << 1) >> 0x15 == -1 && ((uVar6 & 0xfffff00000000) == 0))))
          break;
        }
      }
    }
    if ((((uVar6 & 0x7fffffff00000000) == 0 && (int)uVar6 == 0) ||
        ((((int)(uVar6 >> 0x20) << 1) >> 0x15 == -1 && ((uVar6 & 0xfffff00000000) == 0)))) &&
       (param_4 != (uint *)0x0)) {
      *param_4 = *param_4 | 1;
    }
  }
  return uVar6;
}



/* FUN_0801c3d4 at 0801c3d4 */

/* WARNING: Removing unreachable block (ram,0x0801c1fa) */
/* WARNING: Removing unreachable block (ram,0x0801c1fc) */

ulonglong FUN_0801c3d4(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_24;
  
  local_24 = param_1;
  uVar2 = FUN_0801f142(&local_24);
  uVar3 = uVar2 & 0xfffffff7;
  if (uVar3 == 1) {
    iVar4 = FUN_0801f264(param_1,local_24,param_2,&local_3c,2);
    uVar8 = DAT_0801c3cc;
    if ((iVar4 != 0) && (uVar8 = FUN_0800eecc(local_38), uVar1 = DAT_0801c3a8, 1 < iVar4)) {
      iVar4 = iVar4 + -1;
      puVar7 = &uStack_34;
      do {
        uVar9 = FUN_0800c284((int)uVar8,(int)(uVar8 >> 0x20),(int)uVar1,
                             (int)((ulonglong)uVar1 >> 0x20));
        uVar10 = FUN_0800eecc(*puVar7);
        uVar8 = FUN_0800bd80((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                             (int)((ulonglong)uVar9 >> 0x20));
        iVar4 = iVar4 + -1;
        puVar7 = puVar7 + 1;
      } while (iVar4 != 0);
    }
  }
  else {
    if (uVar3 != 2) {
      uVar8 = DAT_0801c3b8;
      if ((uVar3 != 3) && (uVar8 = DAT_0801c3c0, uVar3 != 4)) {
        uVar8 = DAT_0801c3cc;
      }
      goto LAB_0801c36e;
    }
    iVar4 = FUN_0801f42c(param_1,local_24,param_2,&local_3c,2);
    uVar8 = DAT_0801c3cc;
    if ((iVar4 != 0) && (uVar8 = FUN_0800eecc(local_38), uVar1 = DAT_0801c3b0, 1 < iVar4)) {
      iVar4 = iVar4 + -1;
      puVar7 = &uStack_34;
      do {
        uVar9 = FUN_0800c284((int)uVar8,(int)(uVar8 >> 0x20),(int)uVar1,
                             (int)((ulonglong)uVar1 >> 0x20));
        uVar10 = FUN_0800eecc(*puVar7);
        uVar8 = FUN_0800bd80((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                             (int)((ulonglong)uVar9 >> 0x20));
        iVar4 = iVar4 + -1;
        puVar7 = puVar7 + 1;
      } while (iVar4 != 0);
    }
    uVar5 = (uint)(uVar8 >> 0x20);
    uVar3 = (uVar5 << 1) >> 0x15;
    iVar4 = local_3c + uVar3;
    iVar6 = (int)uVar8;
    if ((uVar3 == 0) || (iVar4 < 1)) {
      if ((uVar8 & 0x7fffffff00000000) != 0 || iVar6 != 0) {
        uVar8 = FUN_0801f008(iVar6,uVar5,local_3c);
      }
    }
    else {
      if (iVar4 < 0x7ff) {
        uVar3 = uVar5 & 0x800fffff | iVar4 * 0x100000;
      }
      else {
        uVar3 = (uint)(DAT_0801c3b8 >> 0x20) | uVar5 & 0x80000000;
        iVar6 = (int)DAT_0801c3b8;
      }
      uVar8 = CONCAT44(uVar3,iVar6);
    }
    local_3c = 0;
  }
  uVar8 = FUN_0801c03c((int)uVar8,(int)(uVar8 >> 0x20),local_3c,0);
LAB_0801c36e:
  if (((int)uVar2 >> 3 & 1U) != 0) {
    uVar8 = ((ulonglong)((uint)(uVar8 >> 0x20) ^ 0x80000000) << 0x20) + (uVar8 & 0xffffffff);
  }
  return uVar8;
}



/* FUN_0801c428 at 0801c428 */

float FUN_0801c428(float param_1,uint param_2)

{
  uint uVar1;
  uint in_fpscr;
  
  uVar1 = (uint)((int)param_1 << 1) >> 0x18;
  if (-1 < (int)param_2) {
    if (uVar1 == 0) {
      if (ABS(param_1) == 0.0) {
        return param_1;
      }
      if (param_2 < 0x80) {
        return param_1;
      }
      param_1 = param_1 * 1.7014118e+38;
      param_2 = param_2 - 0x7f;
      uVar1 = (uint)((int)param_1 << 1) >> 0x18;
    }
    else if (uVar1 == 0xff) {
      return param_1;
    }
    if (uVar1 + param_2 < 0xff) {
      return param_1;
    }
    return param_1;
  }
  param_2 = -param_2;
  if (uVar1 == 0) {
    if (ABS(param_1) == 0.0) {
      return param_1;
    }
  }
  else {
    if (uVar1 == 0xff) {
      return param_1;
    }
    if (param_2 < uVar1) {
      return param_1;
    }
    param_2 = param_2 - (uVar1 - 1);
    param_1 = (float)((int)param_1 + (uVar1 - 1) * -0x800000);
  }
  if (0x19 < param_2) {
    return (float)((uint)param_1 & 0x80000000);
  }
  return (float)((in_fpscr & 0xffffe0e0) >> 4);
}



/* FUN_0801c4ec at 0801c4ec */

undefined8 FUN_0801c4ec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_0801c564();
    uVar2 = 0x200;
  }
  else {
    FUN_0801c564();
    uVar2 = 0x40;
  }
  FUN_0801f7de(param_1,1,2,uVar2,param_3,param_4);
  FUN_0801f7de(param_1,0x82,3,8);
  iVar1 = FUN_08017604(0x21c);
  uVar3 = (uint)(iVar1 == 0);
  *(int *)(param_1 + 0x218) = iVar1;
  if (iVar1 != 0) {
    (*(code *)**(undefined4 **)(param_1 + 0x21c))();
    *(uint *)(iVar1 + 0x214) = uVar3;
    *(uint *)(iVar1 + 0x218) = uVar3;
    FUN_0801f8a0(param_1,1,*(undefined4 *)(iVar1 + 0x204));
  }
  return CONCAT44(param_3,uVar3);
}



/* FUN_0801c564 at 0801c564 */

void FUN_0801c564(void)

{
  FUN_0801f7de();
  return;
}



/* FUN_0801c56e at 0801c56e */

undefined4 FUN_0801c56e(int param_1)

{
  int *piVar1;
  
  FUN_0801f7fe(param_1,0x81);
  FUN_0801f7fe(param_1,1);
  FUN_0801f7fe(param_1,0x82);
  piVar1 = (int *)(param_1 + 0x218);
  if (*piVar1 != 0) {
    (**(code **)(*(int *)(param_1 + 0x21c) + 4))();
    thunk_FUN_080178ba(*piVar1);
    *piVar1 = 0;
  }
  return 0;
}



/* FUN_0801c5a4 at 0801c5a4 */

longlong FUN_0801c5a4(int param_1,byte *param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  
  bVar1 = *param_2;
  iVar3 = *(int *)(param_1 + 0x218);
  if ((bVar1 & 0x60) == 0) {
    if (param_2[1] != 10) goto LAB_0801c606;
    uVar2 = 1;
    iVar3 = DAT_0801c690;
  }
  else {
    if ((bVar1 & 0x60) != 0x20) goto LAB_0801c606;
    if (*(short *)(param_2 + 6) == 0) {
      (**(code **)(*(int *)(param_1 + 0x21c) + 8))(param_2[1],param_2);
      goto LAB_0801c606;
    }
    if (-1 < (int)((uint)bVar1 << 0x18)) {
      *(byte *)(iVar3 + 0x200) = param_2[1];
      *(char *)(iVar3 + 0x201) = (char)*(undefined2 *)(param_2 + 6);
      FUN_0801f914(param_1,iVar3,*(undefined2 *)(param_2 + 6));
      goto LAB_0801c606;
    }
    (**(code **)(*(int *)(param_1 + 0x21c) + 8))(param_2[1],iVar3);
    uVar2 = *(undefined2 *)(param_2 + 6);
  }
  FUN_0801f8f4(param_1,iVar3,uVar2);
LAB_0801c606:
  return (ulonglong)param_4 << 0x20;
}



/* FUN_0801c6a4 at 0801c6a4 */

undefined4 FUN_0801c6a4(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (param_2 != 0) {
    *(int *)(param_1 + 0x21c) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_0801c6b2 at 0801c6b2 */

undefined4 FUN_0801c6b2(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x218);
  *(undefined4 *)(iVar1 + 0x208) = param_2;
  *(undefined4 *)(iVar1 + 0x210) = param_3;
  return 0;
}



/* FUN_0801c6c2 at 0801c6c2 */

undefined4 FUN_0801c6c2(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0x218) + 0x204) = param_2;
  return 0;
}



/* FUN_0801c6fa at 0801c6fa */

longlong FUN_0801c6fa(int param_1)

{
  undefined4 uVar1;
  uint unaff_r7;
  
  if (*(int *)(param_1 + 0x218) == 0) {
    return CONCAT44(unaff_r7,2);
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar1 = 0x200;
  }
  else {
    uVar1 = 0x40;
  }
  FUN_0801f8a0(param_1,1,*(undefined4 *)(*(int *)(param_1 + 0x218) + 0x204),uVar1);
  return (ulonglong)unaff_r7 << 0x20;
}



/* FUN_0801c724 at 0801c724 */

undefined4 FUN_0801c724(void)

{
  return *(undefined4 *)(DAT_0801c72c + 4);
}



/* FUN_0801c730 at 0801c730 */

char * FUN_0801c730(uint *param_1,char param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  while (((uint)param_1 & 3) != 0) {
    bVar6 = param_3 == 0;
    param_3 = param_3 - 1;
    bVar5 = param_3 == 0;
    if (bVar6) goto LAB_0801c780;
    puVar1 = (uint *)((int)param_1 + 1);
    uVar2 = *param_1;
    param_1 = puVar1;
    if (param_2 == (char)uVar2) goto LAB_0801c784;
  }
  uVar2 = param_3 - 8;
  if (7 < param_3) {
    uVar2 = param_3 - 4;
    puVar1 = param_1;
    do {
      param_1 = puVar1;
      bVar5 = 3 < uVar2;
      uVar2 = uVar2 - 4;
      uVar4 = uVar2;
      if (bVar5) {
        uVar4 = *param_1 ^ CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
        uVar4 = uVar4 + 0xfefefeff & ~uVar4 & 0x80808080;
      }
      puVar1 = param_1 + 1;
    } while (uVar4 == 0);
  }
  iVar3 = uVar2 + 8;
  puVar1 = param_1;
  do {
    param_1 = (uint *)((int)puVar1 + 1);
    bVar6 = iVar3 != 0;
    iVar3 = iVar3 + -1;
    bVar5 = iVar3 == 0;
    if (bVar6) {
      bVar5 = param_2 == (char)*puVar1;
    }
    puVar1 = param_1;
  } while (bVar6 && !bVar5);
LAB_0801c780:
  puVar1 = param_1;
  if (!bVar5) {
    puVar1 = (uint *)0x1;
  }
LAB_0801c784:
  return (char *)((int)puVar1 + -1);
}



/* FUN_0801c788 at 0801c788 */

int FUN_0801c788(code *param_1,int param_2,byte *param_3,int *param_4,undefined1 param_5)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined1 auStack_98 [8];
  int local_90;
  undefined1 *local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  int local_64;
  ushort local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 auStack_58 [60];
  
  iVar1 = DAT_0801d27c;
  local_5d = param_5;
  local_6c = 0;
  local_90 = param_2;
  do {
    while( true ) {
      if (*param_3 == 0) {
        return local_6c;
      }
      if (*param_3 == 0x25) break;
      local_90 = (*param_1)(local_90,*param_3);
      if (local_90 == 0) {
        return -1;
      }
      local_6c = local_6c + 1;
      param_3 = param_3 + 1;
    }
    local_60 = 0;
    local_84 = 0;
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              pbVar8 = param_3 + 1;
              bVar2 = *pbVar8;
              if (bVar2 != 0x20) break;
              local_60 = local_60 | 1;
              param_3 = pbVar8;
            }
            if (bVar2 != 0x23) break;
            local_60 = local_60 | 8;
            param_3 = pbVar8;
          }
          if (bVar2 != 0x2b) break;
          local_60 = local_60 | 2;
          param_3 = pbVar8;
        }
        if (bVar2 != 0x2d) break;
        local_60 = local_60 | 4;
        param_3 = pbVar8;
      }
      if (bVar2 != 0x30) break;
      local_60 = local_60 | 0x10;
      param_3 = pbVar8;
    }
    if (bVar2 == 0x2a) {
      piVar6 = (int *)*param_4;
      *param_4 = (int)piVar6;
      local_64 = *piVar6;
      *param_4 = (int)(piVar6 + 1);
      if (local_64 < 0) {
        local_64 = -local_64;
        local_60 = local_60 | 4;
      }
      pbVar8 = param_3 + 2;
    }
    else {
      local_64 = 0;
      for (; *pbVar8 - 0x30 < 10; pbVar8 = pbVar8 + 1) {
        if (local_64 < iVar1) {
          local_64 = (uint)*pbVar8 + local_64 * 10 + -0x30;
        }
      }
    }
    if (*pbVar8 == 0x2e) {
      pbVar7 = pbVar8 + 1;
      if (*pbVar7 == 0x2a) {
        piVar6 = (int *)*param_4;
        *param_4 = (int)piVar6;
        pbVar8 = pbVar8 + 2;
        local_68 = *piVar6;
        *param_4 = (int)(piVar6 + 1);
      }
      else {
        if (*pbVar7 == 0x2d) {
          bVar2 = *pbVar7;
          pbVar8 = pbVar8 + 2;
        }
        else {
          bVar2 = 0;
          pbVar8 = pbVar7;
        }
        local_68 = 0;
        for (; *pbVar8 - 0x30 < 10; pbVar8 = pbVar8 + 1) {
          if ((bVar2 == 0) && (local_68 < iVar1)) {
            local_68 = (uint)*pbVar8 + local_68 * 10 + -0x30;
          }
        }
      }
    }
    else {
      local_68 = -1;
    }
    uVar10 = FUN_0801174c(s_hjltzL_0801c92c,*pbVar8);
    uVar5 = (uint)((ulonglong)uVar10 >> 0x20);
    uVar3 = (uint)uVar10;
    pbVar7 = pbVar8;
    if (uVar3 != 0) {
      pbVar7 = pbVar8 + 1;
      uVar3 = (uint)*pbVar8;
    }
    local_5e = (undefined1)uVar3;
    uVar3 = uVar3 & 0xff;
    if (uVar3 == 0x68) {
      uVar5 = (uint)*pbVar7;
    }
    if (uVar3 != 0x68 || uVar5 != 0x68) {
      bVar9 = uVar3 == 0x6c;
      if (bVar9) {
        uVar3 = (uint)*pbVar7;
      }
      if (bVar9 && uVar3 == 0x6c) {
        local_5e = 0x71;
        goto LAB_0801c8de;
      }
    }
    else {
      local_5e = 0x62;
LAB_0801c8de:
      pbVar7 = pbVar7 + 1;
    }
    local_88 = auStack_58;
    iVar4 = FUN_0801c9b4(param_1,auStack_98,param_4,*pbVar7);
    if (iVar4 != 0) {
      return -1;
    }
    iVar4 = FUN_0801cc18(param_1,auStack_98,auStack_58);
    param_3 = pbVar7 + 1;
    if (iVar4 < 0) {
      return -1;
    }
  } while( true );
}



/* FUN_0801c93a at 0801c93a */

ulonglong FUN_0801c93a(int param_1,int *param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  uint uVar3;
  uint *puVar4;
  
  if (param_1 == 0x62) {
    puVar4 = (uint *)*param_2;
    *param_2 = (int)puVar4;
    uVar3 = *puVar4;
    if (param_3 == 0) {
      *param_2 = (int)(puVar4 + 1);
      uVar3 = uVar3 & 0xff;
      goto LAB_0801c9b0;
    }
    *param_2 = (int)(puVar4 + 1);
    uVar3 = (uint)(char)uVar3;
  }
  else if (param_1 == 0x68) {
    puVar4 = (uint *)*param_2;
    *param_2 = (int)puVar4;
    uVar3 = *puVar4;
    if (param_3 == 0) {
      *param_2 = (int)(puVar4 + 1);
      uVar3 = uVar3 & 0xffff;
      goto LAB_0801c9b0;
    }
    *param_2 = (int)(puVar4 + 1);
    uVar3 = (uint)(short)uVar3;
  }
  else {
    if ((param_1 == 0x6a) || ((param_1 != 0x6c && (param_1 == 0x71)))) {
      puVar2 = (ulonglong *)(*param_2 + 7U & 0xfffffff8);
      *param_2 = (int)puVar2;
      uVar1 = *puVar2;
      *param_2 = (int)(puVar2 + 1);
      return uVar1;
    }
    puVar4 = (uint *)*param_2;
    *param_2 = (int)puVar4;
    uVar3 = *puVar4;
    if (param_3 == 0) {
      *param_2 = (int)(puVar4 + 1);
LAB_0801c9b0:
      return (ulonglong)uVar3;
    }
    *param_2 = (int)(puVar4 + 1);
  }
  return (longlong)(int)uVar3;
}



/* FUN_0801c9b4 at 0801c9b4 */

int FUN_0801c9b4(undefined4 param_1,longlong *param_2,uint *param_3,uint param_4)

{
  char cVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  
  iVar12 = (int)param_2[2];
  if (param_4 == 0x25) {
    iVar8 = *(int *)((int)param_2 + 0x14);
    *(int *)((int)param_2 + 0x14) = iVar8 + 1;
    *(undefined1 *)(iVar12 + iVar8) = 0x25;
    return 0;
  }
  if ((param_4 != 0x41) && (2 < param_4 - 0x45)) {
    if (param_4 == 0x58) {
LAB_0801ca5c:
      lVar13 = FUN_0801c93a(*(undefined1 *)((int)param_2 + 0x3a),param_3,0);
      *param_2 = lVar13;
      if ((((int)((uint)*(byte *)(param_2 + 7) << 0x1c) < 0) &&
          (*(int *)((int)param_2 + 4) != 0 || (int)*param_2 != 0)) && ((param_4 | 0x20) == 0x78)) {
        iVar8 = *(int *)((int)param_2 + 0x14);
        *(undefined1 *)(iVar12 + iVar8) = 0x30;
        *(int *)((int)param_2 + 0x14) = iVar8 + 2;
        *(char *)(iVar12 + iVar8 + 1) = (char)param_4;
      }
    }
    else {
      if (param_4 == 0x61) goto LAB_0801caa0;
      if (param_4 == 99) {
        iVar8 = *(int *)((int)param_2 + 0x14);
        *(int *)((int)param_2 + 0x14) = iVar8 + 1;
        puVar9 = (undefined4 *)*param_3;
        *param_3 = (uint)puVar9;
        uVar11 = *puVar9;
        *param_3 = (uint)(puVar9 + 1);
        *(char *)(iVar12 + iVar8) = (char)uVar11;
        return 0;
      }
      if (param_4 != 100) {
        if (param_4 - 0x65 < 3) goto LAB_0801caa0;
        if (param_4 != 0x69) {
          if (param_4 == 0x6e) {
            if (*(char *)((int)param_2 + 0x3b) == '\0') {
              cVar1 = *(char *)((int)param_2 + 0x3a);
              if (cVar1 == 'b') {
                puVar9 = (undefined4 *)*param_3;
                *param_3 = (uint)puVar9;
                puVar2 = (undefined1 *)*puVar9;
                *param_3 = (uint)(puVar9 + 1);
                if (puVar2 != (undefined1 *)0x0) {
                  *puVar2 = (char)*(int *)((int)param_2 + 0x2c);
                  return 0;
                }
                pcVar5 = s_printf__bad__n_argument_0801d564;
              }
              else if (cVar1 == 'h') {
                puVar9 = (undefined4 *)*param_3;
                *param_3 = (uint)puVar9;
                puVar3 = (undefined2 *)*puVar9;
                *param_3 = (uint)(puVar9 + 1);
                if (puVar3 != (undefined2 *)0x0) {
                  *puVar3 = (short)*(int *)((int)param_2 + 0x2c);
                  return 0;
                }
                pcVar5 = s_printf__bad__n_argument_0801d564;
              }
              else if ((cVar1 == 'j') || ((cVar1 != 'l' && (cVar1 == 'q')))) {
                piVar10 = (int *)*param_3;
                *param_3 = (uint)piVar10;
                piVar4 = (int *)*piVar10;
                *param_3 = (uint)(piVar10 + 1);
                if (piVar4 != (int *)0x0) {
                  iVar12 = *(int *)((int)param_2 + 0x2c);
                  *piVar4 = iVar12;
                  piVar4[1] = iVar12 >> 0x1f;
                  return 0;
                }
                pcVar5 = s_printf__bad__n_argument_0801d564;
              }
              else {
                piVar10 = (int *)*param_3;
                *param_3 = (uint)piVar10;
                piVar4 = (int *)*piVar10;
                *param_3 = (uint)(piVar10 + 1);
                if (piVar4 != (int *)0x0) {
                  *piVar4 = *(int *)((int)param_2 + 0x2c);
                  return 0;
                }
                pcVar5 = s_printf__bad__n_argument_0801d564;
              }
            }
            else {
              pcVar5 = s_printf_s___n_disallowed_0801d54c;
            }
LAB_0801cbc6:
            iVar12 = FUN_0801f954(pcVar5);
            return -1 - iVar12;
          }
          if (param_4 != 0x6f) {
            if (param_4 == 0x70) {
              piVar4 = (int *)*param_3;
              *param_3 = (uint)piVar4;
              iVar8 = *piVar4;
              *param_3 = (uint)(piVar4 + 1);
              *(int *)param_2 = iVar8;
              *(int *)((int)param_2 + 4) = 0;
              *(int *)((int)param_2 + 0xc) = iVar12;
              param_4 = 0x78;
              goto LAB_0801cba8;
            }
            if (param_4 == 0x73) {
              piVar4 = (int *)*param_3;
              *param_3 = (uint)piVar4;
              iVar12 = *piVar4;
              *param_3 = (uint)(piVar4 + 1);
              *(int *)((int)param_2 + 0xc) = iVar12;
              if (iVar12 != 0) {
                iVar8 = (int)param_2[6];
                if (iVar8 < 0) {
                  iVar8 = FUN_08015d58(iVar12);
                }
                else {
                  iVar6 = FUN_0801c730(iVar12,0,iVar8);
                  if (iVar6 != 0) {
                    iVar8 = iVar6 - iVar12;
                  }
                }
                *(int *)(param_2 + 3) = iVar8;
                return 0;
              }
              pcVar5 = s_printf_s__bad__s_argument_0801d57c;
              goto LAB_0801cbc6;
            }
            if ((param_4 != 0x75) && (param_4 != 0x78)) {
              iVar8 = *(int *)((int)param_2 + 0x14);
              *(int *)((int)param_2 + 0x14) = iVar8 + 1;
              *(undefined1 *)(iVar12 + iVar8) = 0x25;
              if (param_4 == 0) {
                return 0;
              }
              *(int *)((int)param_2 + 0x14) = iVar8 + 2;
              *(char *)(iVar12 + iVar8 + 1) = (char)param_4;
              return 0;
            }
          }
          goto LAB_0801ca5c;
        }
      }
      lVar13 = FUN_0801c93a(*(undefined1 *)((int)param_2 + 0x3a),param_3,1);
      *param_2 = lVar13;
      if (lVar13 < 0) {
        iVar8 = *(int *)((int)param_2 + 0x14);
        *(int *)((int)param_2 + 0x14) = iVar8 + 1;
        uVar7 = 0x2d;
      }
      else if ((int)((uint)*(ushort *)(param_2 + 7) << 0x1e) < 0) {
        iVar8 = *(int *)((int)param_2 + 0x14);
        *(int *)((int)param_2 + 0x14) = iVar8 + 1;
        uVar7 = 0x2b;
      }
      else {
        if (-1 < (int)((uint)*(ushort *)(param_2 + 7) << 0x1f)) goto LAB_0801ca96;
        iVar8 = *(int *)((int)param_2 + 0x14);
        *(int *)((int)param_2 + 0x14) = iVar8 + 1;
        uVar7 = 0x20;
      }
      *(undefined1 *)(iVar12 + iVar8) = uVar7;
    }
LAB_0801ca96:
    *(int *)((int)param_2 + 0xc) = *(int *)((int)param_2 + 0x14) + iVar12;
LAB_0801cba8:
    FUN_0801cd24(param_2,param_4);
    return 0;
  }
LAB_0801caa0:
  piVar4 = (int *)(*param_3 + 7 & 0xfffffff8);
  *param_3 = (uint)piVar4;
  iVar8 = *piVar4;
  iVar6 = piVar4[1];
  *param_3 = (uint)(piVar4 + 2);
  *(int *)param_2 = iVar8;
  *(int *)((int)param_2 + 4) = iVar6;
  if (*(int *)((int)param_2 + 4) < 0) {
    iVar8 = *(int *)((int)param_2 + 0x14);
    *(int *)((int)param_2 + 0x14) = iVar8 + 1;
    uVar7 = 0x2d;
  }
  else if ((int)((uint)*(ushort *)(param_2 + 7) << 0x1e) < 0) {
    iVar8 = *(int *)((int)param_2 + 0x14);
    *(int *)((int)param_2 + 0x14) = iVar8 + 1;
    uVar7 = 0x2b;
  }
  else {
    if (-1 < (int)((uint)*(ushort *)(param_2 + 7) << 0x1f)) goto LAB_0801cae6;
    iVar8 = *(int *)((int)param_2 + 0x14);
    *(int *)((int)param_2 + 0x14) = iVar8 + 1;
    uVar7 = 0x20;
  }
  *(undefined1 *)(iVar12 + iVar8) = uVar7;
LAB_0801cae6:
  *(int *)((int)param_2 + 0xc) = *(int *)((int)param_2 + 0x14) + iVar12;
  FUN_0801ce7c(param_2,param_4);
  return 0;
}



/* FUN_0801cc18 at 0801cc18 */

longlong FUN_0801cc18(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_20;
  undefined4 uStack_1c;
  
  iVar2 = (((((*(int *)(param_2 + 0x34) - *(int *)(param_2 + 0x14)) - *(int *)(param_2 + 0x20)) -
            *(int *)(param_2 + 0x18)) - *(int *)(param_2 + 0x24)) - *(int *)(param_2 + 0x1c)) -
          *(int *)(param_2 + 0x28);
  local_20 = param_3;
  uStack_1c = param_4;
  if (-1 < (int)((uint)*(byte *)(param_2 + 0x38) << 0x1d)) {
    local_20._1_3_ = (undefined3)(param_3 >> 8);
    local_20 = CONCAT31(local_20._1_3_,0x20);
    iVar3 = iVar2;
    if (0 < iVar2) {
      do {
        iVar1 = FUN_0801d51c(param_1,param_2,&local_20,1);
        if (iVar1 != 0) goto LAB_0801cd1c;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  iVar3 = FUN_0801d51c(param_1,param_2,param_3,*(undefined4 *)(param_2 + 0x14));
  if (iVar3 == 0) {
    local_20 = CONCAT31(local_20._1_3_,0x30);
    iVar3 = *(int *)(param_2 + 0x20);
    if (0 < iVar3) {
      do {
        iVar1 = FUN_0801d51c(param_1,param_2,&local_20,1);
        if (iVar1 != 0) goto LAB_0801cd1c;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = FUN_0801d51c(param_1,param_2,*(undefined4 *)(param_2 + 0xc),
                         *(undefined4 *)(param_2 + 0x18));
    if (iVar3 == 0) {
      local_20 = CONCAT31(local_20._1_3_,0x30);
      iVar3 = *(int *)(param_2 + 0x24);
      if (0 < iVar3) {
        do {
          iVar1 = FUN_0801d51c(param_1,param_2,&local_20,1);
          if (iVar1 != 0) goto LAB_0801cd1c;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar3 = FUN_0801d51c(param_1,param_2,*(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x18),
                           *(undefined4 *)(param_2 + 0x1c));
      if (iVar3 == 0) {
        local_20 = CONCAT31(local_20._1_3_,0x30);
        iVar3 = *(int *)(param_2 + 0x28);
        if (0 < iVar3) {
          do {
            iVar1 = FUN_0801d51c(param_1,param_2,&local_20,1);
            if (iVar1 != 0) goto LAB_0801cd1c;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        if ((int)((uint)*(byte *)(param_2 + 0x38) << 0x1d) < 0) {
          local_20 = CONCAT31(local_20._1_3_,0x20);
          if (0 < iVar2) {
            do {
              iVar3 = FUN_0801d51c(param_1,param_2,&local_20,1);
              if (iVar3 != 0) goto LAB_0801cd1c;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
        }
        return (ulonglong)local_20 << 0x20;
      }
    }
  }
LAB_0801cd1c:
  return CONCAT44(local_20,0xffffffff);
}



/* FUN_0801cd24 at 0801cd24 */

undefined8 FUN_0801cd24(int *param_1,uint param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  longlong lVar9;
  undefined4 local_28;
  int local_24;
  
  iVar6 = param_1[4];
  if (param_2 == 0x6f) {
    iVar4 = 8;
  }
  else if ((param_2 | 0x20) == 0x78) {
    iVar4 = 0x10;
  }
  else {
    iVar4 = 10;
  }
  iVar5 = 0x3c;
  iVar2 = *param_1;
  iVar3 = param_1[1];
  if ((param_2 == 100 || param_2 == 0x69) && (iVar3 < 0)) {
    bVar8 = iVar2 != 0;
    iVar2 = -iVar2;
    iVar3 = -iVar3 - (uint)bVar8;
  }
  lVar9 = CONCAT44(iVar3,iVar2);
  if ((iVar3 == 0 && iVar2 == 0) && (param_1[0xc] == 0)) {
    local_28 = param_3;
    local_24 = param_4;
    if ((iVar4 == 8) && ((int)((uint)*(byte *)(param_1 + 0xe) << 0x1c) < 0)) {
      *(undefined1 *)(iVar6 + 0x3b) = 0x30;
      iVar5 = 0x3b;
    }
  }
  else {
    local_28 = CONCAT31((int3)((uint)param_3 >> 8),(char)param_2);
    do {
      iVar3 = iVar5;
      uVar7 = (undefined4)((ulonglong)lVar9 >> 0x20);
      iVar2 = iVar4;
      FUN_080155bc((int)lVar9,uVar7,iVar4,0);
      cVar1 = (char)(iVar2 + 0x30U);
      local_24 = iVar3 + -1;
      if (0x39 < (iVar2 + 0x30U & 0xff)) {
        cVar1 = (char)param_2 + -0x51 + cVar1;
      }
      *(char *)(iVar6 + local_24) = cVar1;
      lVar9 = FUN_080155bc((int)lVar9,uVar7,iVar4,0);
      iVar5 = local_24;
    } while ((lVar9 != 0) && ((uint)param_1[3] < (uint)(iVar6 + local_24)));
    if ((iVar4 == 8) &&
       (((int)((uint)*(byte *)(param_1 + 0xe) << 0x1c) < 0 && (*(char *)(iVar6 + local_24) != '0')))
       ) {
      iVar5 = iVar3 + -2;
      *(undefined1 *)(iVar6 + iVar5) = 0x30;
    }
  }
  iVar4 = 0x3c - iVar5;
  param_1[6] = iVar4;
  param_1[3] = iVar6 + iVar5;
  iVar6 = param_1[0xc];
  if (iVar6 <= iVar4) {
    if ((iVar6 < 0) && ((*(byte *)(param_1 + 0xe) & 0x14) == 0x10)) {
      iVar4 = ((param_1[0xd] - param_1[5]) - param_1[8]) - iVar4;
      if (0 < iVar4) {
        param_1[8] = iVar4;
      }
    }
    return CONCAT44(local_24,local_28);
  }
  param_1[8] = iVar6 - iVar4;
  *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) & 0xffef;
  return CONCAT44(local_24,local_28);
}



/* FUN_0801ce36 at 0801ce36 */

undefined8 FUN_0801ce36(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = CONCAT44(param_2,param_1);
  uVar1 = 0;
  uVar2 = DAT_0801d280;
  for (; param_3 != 0; param_3 = param_3 >> 1) {
    if (param_3 << 0x1f < 0) {
      uVar3 = FUN_0800c284((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),uVar1,uVar2);
    }
    uVar4 = FUN_0800c284(uVar1,uVar2,uVar1,uVar2);
    uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    uVar1 = (undefined4)uVar4;
  }
  return uVar3;
}



/* FUN_0801ce7c at 0801ce7c */

void FUN_0801ce7c(int *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  undefined1 uVar7;
  undefined *puVar8;
  uint extraout_r1;
  char *pcVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  int iVar15;
  byte bVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  bool bVar20;
  char cVar21;
  char cVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  int local_5c;
  char local_58 [7];
  byte local_51 [33];
  int local_30;
  int *piStack_2c;
  uint local_28;
  
  uVar13 = param_2 | 0x20;
  iVar17 = *param_1;
  uVar18 = param_1[1];
  pcVar14 = local_58;
  if (uVar13 != 0x61) {
    if (param_1[0xc] < 0) {
      iVar4 = 6;
    }
    else {
      if (param_1[0xc] != 0 || uVar13 != 0x67) goto LAB_0801cea6;
      iVar4 = 1;
    }
    param_1[0xc] = iVar4;
  }
LAB_0801cea6:
  iVar4 = *param_1;
  uVar11 = param_1[1];
  uVar23 = *(undefined8 *)param_1;
  piStack_2c = param_1;
  local_28 = param_2;
  if (((int)(uVar11 << 1) >> 0x15 == -1) && ((uVar11 & 0xfffff) != 0)) {
    param_1[6] = 3;
    if ((param_2 & 0xff) - 0x61 < 0x1a) {
      puVar8 = &DAT_0801d598;
    }
    else {
      puVar8 = &DAT_0801d59c;
    }
  }
  else {
    if (((int)(uVar11 << 1) >> 0x15 != -1) || ((uVar11 & 0xfffff) != 0)) {
      uVar12 = uVar11 & 0x7fffffff;
      if (uVar12 < 0x100000) {
        local_5c = 0;
        if (uVar12 != 0 || iVar4 != 0) {
          uVar23 = FUN_0801ef98(iVar4,uVar11,&local_5c);
        }
      }
      else {
        local_5c = DAT_0801d284 + (uVar12 >> 0x14);
        uVar23 = CONCAT44(uVar11 & DAT_0801d288 | DAT_0801d28c,iVar4);
      }
      *(undefined8 *)param_1 = uVar23;
      if (uVar13 == 0x61) {
        puVar5 = (undefined1 *)param_1[3];
        *puVar5 = 0x30;
        param_1[3] = (int)(puVar5 + 2);
        if ((char)local_28 == 'a') {
          uVar7 = 0x78;
        }
        else {
          uVar7 = 0x58;
        }
        puVar5[1] = uVar7;
        param_1[5] = param_1[5] + 2;
      }
      iVar4 = *param_1;
      uVar12 = param_1[1];
      uVar11 = uVar12 & 0x7fffffff;
      sVar3 = 0;
      bVar20 = uVar11 == 0;
      if (bVar20 && iVar4 == 0) {
        uVar11 = 0;
      }
      sVar10 = (short)uVar11;
      if (!bVar20 || iVar4 != 0) {
        cVar21 = 0x60 < uVar13;
        if (uVar13 == 0x61) {
          if (param_1[0xc] < 0) {
            uVar13 = 0x21;
          }
          else {
            uVar13 = param_1[0xc] + 1;
          }
          cVar22 = 0xfffffffe < uVar13;
          iVar15 = uVar13 + 1;
          cVar21 = '\0';
          FUN_0801581c(iVar17,uVar18,0,0);
          uVar18 = DAT_0801d290;
          local_58[0] = cVar21;
          if (cVar22 == '\0') {
            uVar12 = uVar12 ^ 0x80000000;
          }
          local_5c = local_5c + -4;
          pbVar6 = (byte *)(local_58 + 1);
          if (0 < iVar15) {
            local_30 = 0x7ff;
            uVar1 = CONCAT44(uVar12,iVar4);
            do {
              uVar11 = (uint)(uVar1 >> 0x20);
              iVar17 = (int)uVar1;
              cVar21 = '\x01';
              FUN_080157ec(iVar17,uVar11,0,0);
              uVar24 = CONCAT44(extraout_r1,iVar17);
              if (cVar21 != '\0') break;
              uVar12 = (extraout_r1 << 1) >> 0x15;
              iVar4 = uVar12 + 0x1c;
              if ((uVar12 == 0) || (iVar4 == 0)) {
                if ((uVar1 & 0x7fffffff00000000) != 0 || iVar17 != 0) {
                  uVar24 = FUN_0801f008();
                }
              }
              else if (iVar4 < local_30) {
                uVar24 = CONCAT44(DAT_0801d288 & extraout_r1 | iVar4 * 0x100000,iVar17);
              }
              else {
                uVar24 = (ulonglong)(uVar11 & 0x80000000 | uVar18) << 0x20;
              }
              iVar17 = FUN_08012518();
              iVar15 = iVar15 + -7;
              if (0 < iVar15) {
                uVar23 = FUN_0800eecc();
                uVar24 = FUN_0800ede8((int)uVar24,(int)(uVar24 >> 0x20),(int)uVar23,
                                      (int)((ulonglong)uVar23 >> 0x20));
              }
              pbVar6 = pbVar6 + 7;
              iVar4 = 7;
              while ((0 < iVar17 && (iVar4 = iVar4 + -1, -1 < iVar4))) {
                pbVar6 = pbVar6 + -1;
                *pbVar6 = (byte)iVar17 & 0xf;
                iVar17 = iVar17 >> 4;
              }
              while (iVar4 = iVar4 + -1, -1 < iVar4) {
                pbVar6 = pbVar6 + -1;
                *pbVar6 = 0;
              }
              pbVar6 = pbVar6 + 7;
              uVar1 = uVar24;
            } while (0 < iVar15);
          }
          uVar11 = (int)pbVar6 - (int)(local_58 + 1);
          uVar18 = uVar11;
          if ((int)uVar13 < (int)uVar11) {
            uVar18 = uVar13;
          }
          pcVar14 = local_58 + 1;
          if (-1 < (int)uVar18) {
            if (((int)uVar18 < (int)uVar11) && (7 < (byte)local_58[uVar18 + 1])) {
              cVar21 = '\x0f';
            }
            else {
              cVar21 = '\0';
            }
            uVar13 = uVar18;
            pcVar9 = local_58 + uVar18;
            while( true ) {
              if (*pcVar9 != cVar21) break;
              uVar18 = uVar18 - 1;
              uVar13 = uVar13 - 1;
              pcVar9 = pcVar9 + -1;
            }
            if (cVar21 == '\x0f') {
              local_58[uVar13] = local_58[uVar13] + '\x01';
            }
            if ((int)(uVar13 - 1) < 0) {
              local_5c = local_5c + 4;
              pcVar14 = local_58;
              uVar18 = uVar18 + 1;
            }
            iVar17 = uVar18 - 1;
            if (-1 < iVar17) {
              cVar21 = (char)local_28;
              pbVar6 = (byte *)(pcVar14 + iVar17);
              do {
                bVar16 = *pbVar6 + 0x30;
                if (0x39 < bVar16) {
                  bVar16 = bVar16 + cVar21 + -0x3a;
                }
                iVar17 = iVar17 + -1;
                *pbVar6 = bVar16;
                pbVar6 = pbVar6 + -1;
              } while (-1 < iVar17);
              local_28 = CONCAT31(local_28._1_3_,cVar21);
            }
          }
          if (param_1[0xc] < 0) {
            param_1[0xc] = uVar18 - 1;
          }
        }
        else {
          FUN_0801581c(iVar17,uVar18,0,0);
          if (cVar21 == '\0') {
            uVar18 = uVar18 ^ 0x80000000;
          }
          local_5c = (local_5c * 0x7597) / DAT_0801d294;
          if (7 - local_5c == 0 || 7 < local_5c) {
            uVar23 = FUN_0801ce36(0,DAT_0801d298,-(7 - local_5c));
            uVar23 = FUN_0800eb88(iVar17,uVar18,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
          }
          else {
            uVar23 = FUN_0801ce36(iVar17,uVar18);
          }
          uVar2 = DAT_0801d29c;
          if (uVar13 == 0x66) {
            iVar17 = local_5c + 10;
          }
          else {
            iVar17 = 6;
          }
          iVar17 = iVar17 + param_1[0xc];
          if (0x14 < iVar17) {
            iVar17 = 0x14;
          }
          local_58[0] = '0';
          pcVar14 = local_58 + 1;
          while (0 < iVar17) {
            while( true ) {
              uVar19 = (undefined4)((ulonglong)uVar23 >> 0x20);
              uVar11 = FUN_0801f994((int)uVar23,uVar19);
              iVar4 = 4;
              uVar18 = uVar11;
              pcVar9 = pcVar14 + 8;
              do {
                pcVar14 = pcVar9;
                cVar21 = (char)(uVar18 / 10);
                pcVar14[-1] = (char)uVar18 + cVar21 * -10 + '0';
                uVar18 = (uVar18 / 10) / 10;
                iVar4 = iVar4 + -1;
                pcVar14[-2] = cVar21 + (char)uVar18 * -10 + '0';
                pcVar9 = pcVar14 + -2;
              } while (iVar4 != 0);
              iVar17 = iVar17 + -8;
              pcVar14 = pcVar14 + 6;
              if (iVar17 < 1) break;
              uVar25 = FUN_0800eb6c(uVar11);
              uVar23 = FUN_0800ede8((int)uVar23,uVar19,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20))
              ;
              uVar23 = FUN_0800c284((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),0,uVar2);
            }
          }
          iVar17 = (int)pcVar14 - (int)(local_58 + 1);
          pcVar14 = local_58;
          while (pcVar14 = pcVar14 + 1, *pcVar14 == '0') {
            local_5c = local_5c + -1;
            iVar17 = iVar17 + -1;
          }
          if (uVar13 == 0x66) {
            iVar4 = local_5c + 1;
          }
          else if (uVar13 == 0x65) {
            iVar4 = 1;
          }
          else {
            iVar4 = 0;
          }
          uVar13 = iVar4 + param_1[0xc];
          if (iVar17 < (int)uVar13) {
            uVar13 = iVar17 - 1;
          }
          uVar18 = uVar13;
          if (-1 < (int)uVar13) {
            if (((int)uVar13 < iVar17) && (0x34 < (byte)pcVar14[uVar13])) {
              cVar21 = '9';
            }
            else {
              cVar21 = '0';
            }
            pcVar9 = pcVar14 + -1 + uVar13;
            while( true ) {
              uVar13 = uVar13 - 1;
              if (*pcVar9 != cVar21) break;
              uVar18 = uVar18 - 1;
              pcVar9 = pcVar9 + -1;
            }
            if (cVar21 == '9') {
              pcVar14[uVar13] = pcVar14[uVar13] + '\x01';
            }
            if ((int)uVar13 < 0) {
              local_5c = local_5c + 1;
              uVar18 = uVar18 + 1;
              pcVar14 = pcVar14 + -1;
            }
          }
        }
        sVar10 = (short)uVar18;
        sVar3 = (short)local_5c;
      }
      FUN_0801d2a8(param_1,local_28 & 0xff,pcVar14,(int)sVar10,(int)sVar3);
      return;
    }
    param_1[6] = 3;
    if ((param_2 & 0xff) - 0x61 < 0x1a) {
      puVar8 = &DAT_0801d5a0;
    }
    else {
      puVar8 = &DAT_0801d5a4;
    }
  }
  FUN_0800f62c(param_1[3],puVar8,3);
  return;
}



/* FUN_0801d2a8 at 0801d2a8 */

void FUN_0801d2a8(int param_1,uint param_2,undefined1 *param_3,int param_4,short param_5)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  char acStack_31 [13];
  undefined1 *puStack_24;
  int iStack_20;
  
  iStack_20 = param_4;
  puStack_24 = param_3;
  iVar7 = *(int *)(param_1 + 0x30);
  if (param_4 < 1) {
    param_4 = 1;
    param_3 = &DAT_0801d5a8;
  }
  iVar5 = (int)param_5;
  if ((param_2 | 0x20) == 0x66) {
LAB_0801d304:
    param_5 = param_5 + 1;
    iVar8 = (int)param_5;
    iVar5 = *(int *)(param_1 + 0x18);
    if (iVar8 < 1) {
      iVar4 = iVar5 + 1;
      *(undefined1 *)(*(int *)(param_1 + 0xc) + iVar5) = 0x30;
      if ((0 < iVar7) || ((int)((uint)*(byte *)(param_1 + 0x38) << 0x1c) < 0)) {
        *(undefined1 *)(*(int *)(param_1 + 0xc) + iVar4) = 0x2e;
        iVar4 = iVar5 + 2;
      }
      if (iVar7 + iVar8 < 0 != SCARRY4(iVar7,iVar8)) {
        param_5 = -(short)iVar7;
      }
      *(int *)(param_1 + 0x24) = -(int)param_5;
      iVar7 = iVar7 + param_5;
      *(int *)(param_1 + 0x18) = iVar4;
      if (iVar7 < param_4) {
        param_4 = iVar7;
      }
      iVar5 = (int)(short)param_4;
      *(int *)(param_1 + 0x1c) = iVar5;
      FUN_0800f62c(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x18),param_3,iVar5);
      *(int *)(param_1 + 0x28) = iVar7 - iVar5;
    }
    else {
      iVar5 = *(int *)(param_1 + 0xc) + iVar5;
      if (param_4 < param_5) {
        FUN_0800f62c(iVar5,param_3,param_4);
        iVar5 = param_4 + *(int *)(param_1 + 0x18);
        *(int *)(param_1 + 0x18) = iVar5;
        *(int *)(param_1 + 0x24) = iVar8 - param_4;
        if ((0 < iVar7) || ((int)((uint)*(byte *)(param_1 + 0x38) << 0x1c) < 0)) {
          *(undefined1 *)(*(int *)(param_1 + 0xc) + iVar5) = 0x2e;
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        }
        *(int *)(param_1 + 0x28) = iVar7;
      }
      else {
        FUN_0800f62c(iVar5,param_3);
        param_5 = (short)param_4 - param_5;
        iVar5 = *(int *)(param_1 + 0x18) + iVar8;
        if ((0 < iVar7) || ((int)((uint)*(byte *)(param_1 + 0x38) << 0x1c) < 0)) {
          *(undefined1 *)(*(int *)(param_1 + 0xc) + iVar5) = 0x2e;
          iVar5 = iVar5 + 1;
        }
        *(int *)(param_1 + 0x18) = iVar5;
        if (iVar7 < param_5) {
          param_5 = (short)iVar7;
        }
        FUN_0800f62c(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x18),param_3 + iVar8,(int)param_5
                    );
        *(int *)(param_1 + 0x18) = (int)param_5 + *(int *)(param_1 + 0x18);
        *(int *)(param_1 + 0x24) = iVar7 - param_5;
      }
    }
  }
  else {
    if ((param_2 | 0x20) == 0x67) {
      if ((iVar5 + 4 < 0 == SCARRY4(iVar5,4)) && (iVar5 < iVar7)) {
        if ((-1 < (int)((uint)*(byte *)(param_1 + 0x38) << 0x1c)) && (param_4 < iVar7)) {
          iVar7 = param_4;
        }
        iVar7 = iVar7 - (short)(param_5 + 1);
        if (iVar7 < 0) {
          iVar7 = 0;
        }
        goto LAB_0801d304;
      }
      if ((param_4 < iVar7) && (-1 < (int)((uint)*(byte *)(param_1 + 0x38) << 0x1c))) {
        iVar7 = param_4;
      }
      iVar7 = iVar7 + -1;
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      if (param_2 == 0x67) {
        param_2 = 0x65;
      }
      else {
        param_2 = 0x45;
      }
    }
    else if (param_2 == 0x61) {
      param_2 = 0x70;
    }
    else if (param_2 == 0x41) {
      param_2 = 0x50;
    }
    iVar8 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = iVar8 + 1;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + iVar8) = *param_3;
    if ((0 < iVar7) || ((int)((uint)*(byte *)(param_1 + 0x38) << 0x1c) < 0)) {
      *(int *)(param_1 + 0x18) = iVar8 + 2;
      *(undefined1 *)(*(int *)(param_1 + 0xc) + iVar8 + 1) = 0x2e;
      if (0 < iVar7) {
        sVar6 = (short)param_4 + -1;
        if (iVar7 < sVar6) {
          sVar6 = (short)iVar7;
        }
        FUN_0800f62c(*(int *)(param_1 + 0xc) + iVar8 + 2,param_3 + 1,(int)sVar6);
        *(int *)(param_1 + 0x18) = (int)sVar6 + *(int *)(param_1 + 0x18);
        *(int *)(param_1 + 0x24) = iVar7 - sVar6;
      }
    }
    puVar1 = (undefined1 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x18));
    *puVar1 = (char)param_2;
    if (iVar5 < 0) {
      puVar1[1] = 0x2d;
      iVar5 = -iVar5;
    }
    else {
      puVar1[1] = 0x2b;
    }
    pcVar2 = puVar1 + 2;
    iVar7 = 0;
    pcVar3 = acStack_31 + 1;
    while (0 < (short)iVar5) {
      iVar8 = (int)(short)iVar5 / 10;
      *pcVar3 = (char)iVar5 + (char)iVar8 * -10;
      iVar7 = iVar7 + 1;
      pcVar3 = pcVar3 + 1;
      iVar5 = iVar8;
    }
    pcVar3 = pcVar2;
    if ((iVar7 < 2) && ((param_2 | 0x20) == 0x65)) {
      pcVar3 = puVar1 + 3;
      *pcVar2 = '0';
    }
    pcVar2 = pcVar3;
    if (iVar7 == 0) {
      pcVar2 = pcVar3 + 1;
      *pcVar3 = '0';
    }
    else {
      for (; 0 < iVar7; iVar7 = iVar7 + -1) {
        *pcVar2 = acStack_31[iVar7] + '0';
        pcVar2 = pcVar2 + 1;
      }
    }
    *(int *)(param_1 + 0x1c) = (int)pcVar2 - (*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x18));
  }
  if ((*(byte *)(param_1 + 0x38) & 0x14) == 0x10) {
    iVar8 = *(int *)(param_1 + 0x28) +
            *(int *)(param_1 + 0x1c) +
            *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14);
    iVar5 = *(int *)(param_1 + 0x34);
    iVar7 = iVar8;
    if (iVar8 < iVar5) {
      iVar7 = iVar5 - iVar8;
    }
    if (iVar8 < iVar5) {
      *(int *)(param_1 + 0x20) = iVar7;
    }
  }
  return;
}



/* FUN_0801d51c at 0801d51c */

longlong FUN_0801d51c(code *param_1,int param_2,undefined1 *param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = 0;
  uVar3 = param_4;
  if (param_4 != 0) {
    while( true ) {
      iVar2 = (*param_1)(*(undefined4 *)(param_2 + 8),*param_3);
      *(int *)(param_2 + 8) = iVar2;
      if (iVar2 == 0) break;
      *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
      if (uVar3 == 0) {
        return (ulonglong)param_4 << 0x20;
      }
    }
    uVar1 = 0xffffffff;
  }
  return CONCAT44(param_4,uVar1);
}



/* FUN_0801d5ac at 0801d5ac */

undefined4
FUN_0801d5ac(undefined4 param_1,undefined4 param_2,char param_3,undefined1 param_4,
            undefined4 param_5)

{
  undefined1 auStack_28 [24];
  
  FUN_080164f0(auStack_28,s____d__df_0801d5e4,(int)param_3,param_4);
  FUN_080164f0(param_5,auStack_28,param_1,param_2);
  return param_5;
}



/* FUN_0801d5f0 at 0801d5f0 */

undefined2 FUN_0801d5f0(undefined2 *param_1)

{
  return *param_1;
}



/* FUN_0801d5f6 at 0801d5f6 */

undefined4 FUN_0801d5f6(undefined4 *param_1)

{
  return *param_1;
}



/* FUN_0801d60c at 0801d60c */

void FUN_0801d60c(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (char)param_2;
  param_1[1] = (char)((uint)param_2 >> 8);
  return;
}



/* FUN_0801d614 at 0801d614 */

void FUN_0801d614(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (char)param_2;
  param_1[1] = (char)((uint)param_2 >> 8);
  param_1[2] = (char)((uint)param_2 >> 0x10);
  param_1[3] = (char)((uint)param_2 >> 0x18);
  return;
}



/* FUN_0801d624 at 0801d624 */

void FUN_0801d624(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  if (param_3 != 0) {
    do {
      *param_1 = *param_2;
      param_3 = param_3 + -1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}



/* FUN_0801d634 at 0801d634 */

void FUN_0801d634(undefined1 *param_1,undefined1 param_2,int param_3)

{
  do {
    param_3 = param_3 + -1;
    *param_1 = param_2;
    param_1 = param_1 + 1;
  } while (param_3 != 0);
  return;
}



/* FUN_0801d63e at 0801d63e */

undefined4 FUN_0801d63e(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  
  bVar1 = false;
  uVar3 = 0;
  do {
    piVar4 = (int *)(DAT_0801e044 + uVar3 * 0x10);
    iVar2 = *piVar4;
    if (iVar2 == 0) {
      bVar1 = true;
    }
    else {
      iVar5 = *param_1;
      bVar6 = iVar2 == iVar5;
      if (bVar6) {
        iVar2 = piVar4[1];
        iVar5 = param_1[2];
      }
      bVar7 = bVar6 && iVar2 == iVar5;
      if (bVar6 && iVar2 == iVar5) {
        bVar7 = piVar4[2] == param_1[5];
      }
      if (bVar7) break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  if (uVar3 == 2) {
    if ((!bVar1) && (param_2 != 2)) {
      return 0x12;
    }
  }
  else if ((param_2 != 0) || (*(short *)(DAT_0801e044 + uVar3 * 0x10 + 0xc) == 0x100)) {
    return 0x10;
  }
  return 0;
}



/* FUN_0801d698 at 0801d698 */

longlong FUN_0801d698(int *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  
  piVar1 = DAT_0801e044;
  iVar4 = param_1[2];
  uVar3 = 0;
  do {
    iVar6 = DAT_0801e044[uVar3 * 4];
    bVar7 = iVar6 == *param_1;
    if (bVar7) {
      iVar6 = DAT_0801e044[uVar3 * 4 + 1];
    }
    bVar8 = bVar7 && iVar6 == iVar4;
    if (bVar7 && iVar6 == iVar4) {
      bVar8 = DAT_0801e044[uVar3 * 4 + 2] == param_1[5];
    }
  } while ((!bVar8) && (uVar3 = uVar3 + 1, uVar3 < 2));
  if (uVar3 == 2) {
    iVar6 = *DAT_0801e044;
    bVar7 = iVar6 != 0;
    uVar3 = (uint)bVar7;
    if (bVar7) {
      iVar6 = DAT_0801e044[4];
    }
    if (bVar7 && iVar6 != 0) goto LAB_0801d700;
    piVar5 = DAT_0801e044 + uVar3 * 4;
    *piVar5 = *param_1;
    piVar5[1] = iVar4;
    piVar1[uVar3 * 4 + 2] = param_1[5];
    *(undefined2 *)(piVar5 + 3) = 0;
  }
  if (param_2 == 0) {
    sVar2 = (short)piVar1[uVar3 * 4 + 3] + 1;
  }
  else {
    if ((short)piVar1[uVar3 * 4 + 3] != 0) {
LAB_0801d700:
      return (ulonglong)param_4 << 0x20;
    }
    sVar2 = 0x100;
  }
  *(short *)(piVar1 + uVar3 * 4 + 3) = sVar2;
  return CONCAT44(param_4,uVar3 + 1);
}



/* FUN_0801d712 at 0801d712 */

longlong FUN_0801d712(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_0801e044;
  if (1 < param_1 - 1U) {
    return CONCAT44(param_4,2);
  }
  iVar3 = (param_1 - 1U) * 0x10;
  iVar4 = DAT_0801e044 + iVar3;
  sVar1 = *(short *)(iVar4 + 0xc);
  if ((sVar1 == 0x100) || (sVar1 == 0)) {
    *(undefined2 *)(iVar4 + 0xc) = 0;
  }
  else {
    *(short *)(iVar4 + 0xc) = sVar1 + -1;
    if ((short)(sVar1 + -1) != 0) goto LAB_0801d740;
  }
  *(undefined4 *)(iVar2 + iVar3) = 0;
LAB_0801d740:
  return (ulonglong)param_4 << 0x20;
}



/* FUN_0801d748 at 0801d748 */

void FUN_0801d748(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = DAT_0801e044;
  uVar2 = 0;
  do {
    iVar3 = *(int *)(iVar1 + uVar2 * 0x10);
    bVar4 = iVar3 == param_1;
    if (bVar4) {
      iVar3 = 0;
    }
    if (bVar4) {
      *(int *)(iVar1 + uVar2 * 0x10) = iVar3;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  return;
}



/* FUN_0801d764 at 0801d764 */

undefined8 FUN_0801d764(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 3) != '\0') {
    iVar3 = *(int *)(param_1 + 0x2c);
    iVar1 = FUN_0801d79c();
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 3) = 0;
      if ((uint)(iVar3 - *(int *)(param_1 + 0x20)) < *(uint *)(param_1 + 0x18)) {
        for (uVar4 = (uint)*(byte *)(param_1 + 2); 1 < uVar4; uVar4 = uVar4 - 1) {
          FUN_0801d79c(*(undefined4 *)(param_1 + 0x18));
        }
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return CONCAT44(param_4,uVar2);
}



/* FUN_0801d79c at 0801d79c */

void FUN_0801d79c(void)

{
  int unaff_r5;
  
  FUN_0801f9f8(*(undefined1 *)(unaff_r5 + 1),unaff_r5 + 0x30);
  return;
}



/* FUN_0801d7aa at 0801d7aa */

int FUN_0801d7aa(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = 0;
  if ((param_2 != *(int *)(param_1 + 0x2c)) &&
     (uVar3 = FUN_0801d764(param_1), iVar2 = (int)uVar3, iVar2 == 0)) {
    iVar1 = FUN_0801e78a(*(undefined1 *)(param_1 + 1),(int)((ulonglong)uVar3 >> 0x20),param_3,1);
    if (iVar1 != 0) {
      param_2 = -1;
      iVar2 = 1;
    }
    *(int *)(param_1 + 0x2c) = param_2;
  }
  return iVar2;
}



/* FUN_0801d86c at 0801d86c */

uint FUN_0801d86c(undefined4 *param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)*param_1;
  if ((1 < param_2) && (param_2 < *(uint *)(pbVar5 + 0x14))) {
    bVar1 = *pbVar5;
    if (bVar1 == 1) {
      uVar4 = param_2 + (param_2 >> 1);
      iVar3 = FUN_0801dd6a(1,*(undefined4 *)(pbVar5 + 0x20));
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      bVar1 = (pbVar5 + 0x30)[uVar4 & 0x1ff];
      iVar3 = FUN_0801dd6a(pbVar5 + 0x30,*(undefined4 *)(pbVar5 + 0x20));
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      uVar2 = CONCAT11(pbVar5[(uVar4 + 1 & 0x1ff) + 0x30],bVar1);
      if ((int)(param_2 << 0x1f) < 0) {
        return (uint)(uVar2 >> 4);
      }
      return uVar2 & 0xfff;
    }
    if (bVar1 != 0) {
      if (bVar1 == 3) {
        iVar3 = FUN_0801dd6e(3,*(int *)(pbVar5 + 0x20) + (param_2 >> 7));
        if (iVar3 != 0) {
          return 0xffffffff;
        }
        uVar4 = FUN_0801d5f6(pbVar5 + ((param_2 << 0x19) >> 0x17) + 0x30);
        return uVar4 & 0xfffffff;
      }
      if (bVar1 < 3) {
        iVar3 = FUN_0801dd6e(bVar1,*(int *)(pbVar5 + 0x20) + (param_2 >> 8));
        if (iVar3 != 0) {
          return 0xffffffff;
        }
        uVar4 = FUN_0801d5f0(pbVar5 + ((param_2 << 0x18) >> 0x17) + 0x30);
        return uVar4;
      }
    }
  }
  return 1;
}



/* FUN_0801d916 at 0801d916 */

int FUN_0801d916(byte *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (param_2 < 2) {
    return 2;
  }
  if (*(uint *)(param_1 + 0x14) <= param_2) {
    return 2;
  }
  bVar3 = *param_1;
  if (bVar3 == 1) {
    uVar2 = param_2 + (param_2 >> 1);
    iVar1 = FUN_0801dd6a(1,*(undefined4 *)(param_1 + 0x20));
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar5 = uVar2 + 1;
    uVar4 = param_2 << 0x1f;
    bVar6 = (int)uVar4 < 0;
    if (bVar6) {
      uVar4 = (uint)param_1[(uVar2 & 0x1ff) + 0x30];
    }
    bVar3 = (byte)uVar4;
    if (bVar6) {
      bVar3 = bVar3 & 0xf;
    }
    if (bVar6) {
      bVar3 = bVar3 | (byte)(param_3 << 4);
    }
    else {
      bVar3 = (byte)param_3;
    }
    param_1[(uVar2 & 0x1ff) + 0x30] = bVar3;
    param_1[3] = 1;
    iVar1 = FUN_0801d7aa(param_1,*(int *)(param_1 + 0x20) + (uVar5 >> 9));
    if (iVar1 != 0) {
      return iVar1;
    }
    if ((int)(param_2 << 0x1f) < 0) {
      bVar3 = (byte)(param_3 >> 4);
    }
    else {
      bVar3 = (byte)(param_3 >> 8) & 0xf | param_1[(uVar5 & 0x1ff) + 0x30] & 0xf0;
    }
    param_1[(uVar5 & 0x1ff) + 0x30] = bVar3;
  }
  else {
    if (bVar3 == 0) {
      return 2;
    }
    if (bVar3 == 3) {
      iVar1 = FUN_0801dd6e(3,*(int *)(param_1 + 0x20) + (param_2 >> 7));
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar2 = FUN_0801d5f6(param_1 + ((param_2 << 0x19) >> 0x17) + 0x30);
      FUN_0801d614(param_1 + ((param_2 << 0x19) >> 0x17) + 0x30,
                   uVar2 & 0xf0000000 | param_3 & 0xfffffff);
    }
    else {
      if (2 < bVar3) {
        return 2;
      }
      iVar1 = FUN_0801dd6e(bVar3,*(int *)(param_1 + 0x20) + (param_2 >> 8));
      if (iVar1 != 0) {
        return iVar1;
      }
      FUN_0801d60c(param_1 + ((param_2 << 0x18) >> 0x17) + 0x30,param_3 & 0xffff);
    }
  }
  param_1[3] = 1;
  return 0;
}



/* FUN_0801da04 at 0801da04 */

undefined8 FUN_0801da04(int *param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *param_1;
  if ((param_2 < 2) || (*(uint *)(iVar2 + 0x14) <= param_2)) {
LAB_0801da66:
    return CONCAT44(param_4,2);
  }
  if ((param_3 == 0) ||
     (iVar1 = FUN_0801db12(*(uint *)(iVar2 + 0x14),param_3,0xffffffff), iVar1 == 0)) {
    do {
      uVar3 = FUN_0801d86c(param_1,param_2);
      param_2 = (uint)uVar3;
      if (param_2 == 0) break;
      if (param_2 == 1) goto LAB_0801da66;
      if (param_2 == 0xffffffff) {
        return CONCAT44(param_4,1);
      }
      iVar1 = FUN_0801db10(param_2,(int)((ulonglong)uVar3 >> 0x20),0);
      if (iVar1 != 0) goto LAB_0801da64;
      if (*(uint *)(iVar2 + 0x10) < *(uint *)(iVar2 + 0x14) - 2) {
        *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) + 1;
        *(byte *)(iVar2 + 4) = *(byte *)(iVar2 + 4) | 1;
      }
    } while (param_2 < *(uint *)(iVar2 + 0x14));
    iVar1 = 0;
  }
LAB_0801da64:
  return CONCAT44(param_4,iVar1);
}



/* FUN_0801da6e at 0801da6e */

uint FUN_0801da6e(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  
  iVar5 = *param_1;
  if (param_2 == 0) {
    uVar3 = *(uint *)(iVar5 + 0xc);
    if ((uVar3 == 0) || (uVar4 = uVar3, *(uint *)(iVar5 + 0x14) <= uVar3)) {
      uVar3 = 1;
      uVar4 = 1;
    }
  }
  else {
    uVar2 = FUN_0801d86c();
    if (uVar2 < 2) {
      return 1;
    }
    if (uVar2 == 0xffffffff) {
      return 0xffffffff;
    }
    uVar3 = param_2;
    uVar4 = param_2;
    if (uVar2 < *(uint *)(iVar5 + 0x14)) {
      return uVar2;
    }
  }
  while( true ) {
    uVar3 = uVar3 + 1;
    if ((*(uint *)(iVar5 + 0x14) <= uVar3) && (uVar3 = 2, uVar4 < 2)) {
      return 0;
    }
    uVar7 = FUN_0801d86c(param_1,uVar3);
    uVar2 = (uint)uVar7;
    if (uVar2 == 0) break;
    if (uVar2 == 1 || uVar2 == 0xffffffff) {
      return uVar2;
    }
    if (uVar3 == uVar4) {
      return 0;
    }
  }
  iVar1 = FUN_0801db10(0,(int)((ulonglong)uVar7 >> 0x20),0xffffffff);
  if (iVar1 == 0) {
    if (param_2 == 0) goto LAB_0801dae6;
    iVar1 = FUN_0801db12(0,param_2,uVar3);
  }
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      return 0xffffffff;
    }
    return 1;
  }
LAB_0801dae6:
  *(uint *)(iVar5 + 0xc) = uVar3;
  uVar2 = *(uint *)(iVar5 + 0x10);
  bVar6 = uVar2 <= *(int *)(iVar5 + 0x14) - 2U;
  if (bVar6) {
    uVar2 = uVar2 - 1;
  }
  if (bVar6) {
    *(uint *)(iVar5 + 0x10) = uVar2;
  }
  *(byte *)(iVar5 + 4) = *(byte *)(iVar5 + 4) | 1;
  return uVar3;
}



/* FUN_0801db10 at 0801db10 */

void FUN_0801db10(void)

{
  FUN_0801d916();
  return;
}



/* FUN_0801db12 at 0801db12 */

void FUN_0801db12(void)

{
  FUN_0801d916();
  return;
}



/* FUN_0801db16 at 0801db16 */

int FUN_0801db16(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1[0xb] + 4);
  uVar1 = (param_2 >> 9) / (uint)*(ushort *)(*param_1 + 10);
  while( true ) {
    uVar2 = *puVar3;
    if (uVar2 == 0) {
      return 0;
    }
    if (uVar1 < uVar2) break;
    uVar1 = uVar1 - uVar2;
    puVar3 = puVar3 + 2;
  }
  return puVar3[1] + uVar1;
}



/* FUN_0801db3e at 0801db3e */

undefined8 FUN_0801db3e(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)*param_1;
  if ((param_2 < 0x200000) && ((param_2 & 0x1f) == 0)) {
    puVar4 = (undefined4 *)param_1[2];
    param_1[5] = param_2;
    puVar2 = param_1;
    if (puVar4 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(uint)*pbVar5;
      if ((undefined4 *)0x2 < puVar2) {
        puVar4 = *(undefined4 **)(pbVar5 + 0x24);
        goto LAB_0801db62;
      }
LAB_0801db64:
      if ((uint)*(ushort *)(pbVar5 + 8) <= param_2 >> 5) goto LAB_0801dbc4;
      uVar3 = *(undefined4 *)(pbVar5 + 0x24);
    }
    else {
LAB_0801db62:
      if (puVar4 == (undefined4 *)0x0) goto LAB_0801db64;
      uVar1 = *(ushort *)(pbVar5 + 10);
      for (; (uint)uVar1 << 9 <= param_2; param_2 = param_2 + (uint)uVar1 * -0x200) {
        puVar4 = (undefined4 *)FUN_0801d86c(param_1);
        if (puVar4 == (undefined4 *)0xffffffff) {
          uVar3 = 1;
          goto LAB_0801dbb2;
        }
        if ((puVar4 < (undefined4 *)0x2) ||
           (puVar2 = *(undefined4 **)(pbVar5 + 0x14), puVar2 <= puVar4)) goto LAB_0801dbc4;
      }
      uVar3 = FUN_0801dcaa(puVar2,puVar4);
    }
    param_1[7] = uVar3;
    param_1[6] = puVar4;
    if (param_1[7] != 0) {
      param_1[7] = param_1[7] + (param_2 >> 9);
      param_1[8] = pbVar5 + (param_2 & 0x1ff) + 0x30;
      uVar3 = 0;
      goto LAB_0801dbb2;
    }
  }
LAB_0801dbc4:
  uVar3 = 2;
LAB_0801dbb2:
  return CONCAT44(param_3,uVar3);
}



/* FUN_0801dbc8 at 0801dbc8 */

undefined4 FUN_0801dbc8(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *param_1;
  uVar5 = param_1[5] + 0x20;
  if ((param_1[7] == 0) || (0x1fffff < uVar5)) {
LAB_0801dc20:
    uVar2 = 4;
  }
  else {
    if ((uVar5 & 0x1ff) == 0) {
      param_1[7] = param_1[7] + 1;
      if (param_1[6] == 0) {
        if ((uint)*(ushort *)(iVar6 + 8) <= uVar5 >> 5) {
LAB_0801dc1c:
          param_1[7] = 0;
          goto LAB_0801dc20;
        }
      }
      else if ((*(ushort *)(iVar6 + 10) - 1 & uVar5 >> 9) == 0) {
        uVar1 = FUN_0801d86c(param_1);
        if (uVar1 < 2) {
          return 2;
        }
        if (uVar1 == 0xffffffff) {
          return 1;
        }
        if (*(uint *)(iVar6 + 0x14) <= uVar1) {
          if (param_2 == 0) goto LAB_0801dc1c;
          uVar1 = FUN_0801da6e(param_1,param_1[6]);
          if (uVar1 == 0) {
            return 7;
          }
          if (uVar1 == 1) {
            return 2;
          }
          if (uVar1 == 0xffffffff) {
            return 1;
          }
          iVar3 = FUN_0801d764(iVar6);
          if (iVar3 != 0) {
            return 1;
          }
          FUN_0801d634(iVar6 + 0x30,0,0x200);
          iVar3 = FUN_0801dca8();
          for (uVar4 = 0; *(int *)(iVar6 + 0x2c) = iVar3, uVar4 < *(ushort *)(iVar6 + 10);
              uVar4 = uVar4 + 1) {
            *(undefined1 *)(iVar6 + 3) = 1;
            iVar3 = FUN_0801d764(iVar6);
            if (iVar3 != 0) {
              return 1;
            }
            iVar3 = *(int *)(iVar6 + 0x2c) + 1;
          }
          *(uint *)(iVar6 + 0x2c) = *(int *)(iVar6 + 0x2c) - uVar4;
        }
        param_1[6] = uVar1;
        iVar3 = FUN_0801dca8();
        param_1[7] = iVar3;
      }
    }
    param_1[5] = uVar5;
    param_1[8] = iVar6 + 0x30 + (uVar5 & 0x1ff);
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_0801dca8 at 0801dca8 */

int FUN_0801dca8(void)

{
  int unaff_r7;
  int unaff_r8;
  
  if (*(int *)(unaff_r7 + 0x14) - 2U <= unaff_r8 - 2U) {
    return 0;
  }
  return (uint)*(ushort *)(unaff_r7 + 10) * (unaff_r8 - 2U) + *(int *)(unaff_r7 + 0x28);
}



/* FUN_0801dcaa at 0801dcaa */

int FUN_0801dcaa(undefined4 param_1,int param_2)

{
  int unaff_r7;
  
  if (*(int *)(unaff_r7 + 0x14) - 2U <= param_2 - 2U) {
    return 0;
  }
  return (uint)*(ushort *)(unaff_r7 + 10) * (param_2 - 2U) + *(int *)(unaff_r7 + 0x28);
}



/* FUN_0801dcae at 0801dcae */

uint FUN_0801dcae(char *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0801d5f0(param_2 + 0x1a);
  if (*param_1 == '\x03') {
    iVar2 = FUN_0801d5f0(param_2 + 0x14);
    uVar1 = uVar1 | iVar2 << 0x10;
  }
  return uVar1;
}



/* FUN_0801dcd4 at 0801dcd4 */

void FUN_0801dcd4(char *param_1,int param_2,uint param_3)

{
  FUN_0801d60c(param_2 + 0x1a,param_3 & 0xffff);
  if (*param_1 == '\x03') {
    FUN_0801d60c(param_2 + 0x14,param_3 >> 0x10);
    return;
  }
  return;
}



/* FUN_0801dcfa at 0801dcfa */

undefined8 FUN_0801dcfa(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  iVar1 = FUN_0801db3e(param_1,0);
  if (iVar1 == 0) {
    iVar3 = 0;
    do {
      iVar1 = FUN_0801dd64();
      if (iVar1 != 0) break;
      if (*(char *)param_1[8] == -0x1b || *(char *)param_1[8] == '\0') {
        iVar3 = iVar3 + 1;
        if (iVar3 == 1) goto LAB_0801dd3a;
      }
      else {
        iVar3 = 0;
      }
      iVar1 = FUN_0801dbc8(param_1,1);
    } while (iVar1 == 0);
  }
  if (iVar1 == 4) {
    iVar1 = 7;
  }
LAB_0801dd3a:
  if ((iVar1 == 0) && (iVar1 = FUN_0801dd64(), iVar1 == 0)) {
    FUN_0801d634(param_1[8],0,0x20);
    FUN_0801d624(param_1[8],param_1 + 9,0xb);
    *(undefined1 *)(iVar2 + 3) = 1;
  }
  return CONCAT44(param_4,iVar1);
}



/* FUN_0801dd64 at 0801dd64 */

void FUN_0801dd64(void)

{
  FUN_0801d7aa();
  return;
}



/* FUN_0801dd66 at 0801dd66 */

void FUN_0801dd66(void)

{
  FUN_0801d7aa();
  return;
}



/* FUN_0801dd6a at 0801dd6a */

void FUN_0801dd6a(void)

{
  FUN_0801d7aa();
  return;
}



/* FUN_0801dd6e at 0801dd6e */

void FUN_0801dd6e(void)

{
  FUN_0801d7aa();
  return;
}



/* FUN_0801dd72 at 0801dd72 */

undefined8 FUN_0801dd72(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  
  pcVar8 = (char *)(param_1 + 0x24);
  iVar7 = *param_2;
  FUN_0801d634(pcVar8,0x20,0xb,param_4,param_3,param_4);
  uVar4 = 0;
  iVar6 = 0;
  uVar9 = 8;
  while( true ) {
    uVar5 = (uint)*(byte *)(iVar7 + iVar6);
    iVar6 = iVar6 + 1;
    if (uVar5 < 0x21) break;
    if (uVar5 == 0x2f || uVar5 == 0x5c) goto LAB_0801ddb2;
    if (uVar5 == 0x2e) {
      if (uVar9 == 0xb) goto LAB_0801de0a;
      uVar4 = 8;
      uVar9 = 0xb;
    }
    else {
      if (uVar9 <= uVar4) goto LAB_0801de0a;
      if (0x7f < uVar5) {
        uVar5 = (uint)*(byte *)(uVar5 + 0x801ddb4);
      }
      for (pcVar10 = &DAT_0801de24; (uVar2 = (uint)*pcVar10, uVar2 != 0 && (uVar2 != uVar5));
          pcVar10 = pcVar10 + 1) {
      }
      if (uVar2 != 0) goto LAB_0801de0a;
      if (uVar5 - 0x61 < 0x1a) {
        uVar5 = uVar5 - 0x20;
      }
      pcVar8[uVar4] = (char)uVar5;
      uVar4 = uVar4 + 1;
    }
  }
LAB_0801de02:
  *param_2 = iVar7 + iVar6;
  if (uVar4 == 0) {
LAB_0801de0a:
    uVar3 = 6;
  }
  else {
    if (*pcVar8 == -0x1b) {
      *pcVar8 = '\x05';
    }
    if (uVar5 < 0x21) {
      uVar1 = 4;
    }
    else {
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x2f) = uVar1;
    uVar3 = 0;
  }
  return CONCAT44(param_3,uVar3);
LAB_0801ddb2:
  for (; *(char *)(iVar7 + iVar6) == '/' || *(char *)(iVar7 + iVar6) == '\\'; iVar6 = iVar6 + 1) {
  }
  goto LAB_0801de02;
}



/* FUN_0801deb4 at 0801deb4 */

undefined8 FUN_0801deb4(int *param_1,byte *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uStack_20;
  byte *local_18;
  
  iVar6 = *param_1;
  for (local_18 = param_2; *local_18 == 0x2f || *local_18 == 0x5c; local_18 = local_18 + 1) {
  }
  param_1[2] = 0;
  if (*local_18 < 0x20) {
    *(undefined1 *)((int)param_1 + 0x2f) = 0x80;
    iVar3 = FUN_0801db3e(param_1,0);
  }
  else {
    while (iVar3 = FUN_0801dd72(param_1,&local_18), iVar3 == 0) {
      iVar7 = *param_1;
      iVar3 = FUN_0801db3e(param_1,0);
      while( true ) {
        if ((iVar3 != 0) || (iVar3 = FUN_0801d7aa(iVar7,param_1[7]), iVar3 != 0)) goto LAB_0801df70;
        pcVar5 = (char *)param_1[8];
        if (*pcVar5 == '\0') break;
        *(byte *)((int)param_1 + 6) = pcVar5[0xb] & 0x3f;
        if (-1 < (int)((uint)(byte)pcVar5[0xb] << 0x1c)) {
          iVar4 = 0xb;
          piVar8 = param_1 + 9;
          do {
            cVar1 = *pcVar5;
            iVar2 = *piVar8;
            iVar4 = iVar4 + -1;
            if (iVar4 == 0) break;
            pcVar5 = pcVar5 + 1;
            piVar8 = (int *)((int)piVar8 + 1);
          } while (cVar1 == (char)iVar2);
          if (cVar1 == (char)iVar2) goto LAB_0801df70;
        }
        iVar3 = FUN_0801dbc8(param_1,0);
      }
      iVar3 = 4;
LAB_0801df70:
      if (iVar3 != 0) {
        if (iVar3 == 4 && (*(byte *)((int)param_1 + 0x2f) & 4) == 0) {
LAB_0801df8a:
          iVar3 = 5;
        }
        break;
      }
      if ((*(byte *)((int)param_1 + 0x2f) & 4) != 0) break;
      if (-1 < (int)((uint)*(byte *)((int)param_1 + 6) << 0x1b)) goto LAB_0801df8a;
      iVar3 = FUN_0801dcae(iVar6,iVar6 + (param_1[5] & 0x1ffU) + 0x30);
      param_1[2] = iVar3;
    }
  }
  return CONCAT44(uStack_20,iVar3);
}



/* FUN_0801df90 at 0801df90 */

undefined4 FUN_0801df90(undefined4 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  uVar2 = 0xffffffff;
  pbVar3 = (byte *)*param_1;
  pbVar4 = pbVar3;
  if (pbVar3 == (byte *)0x0) {
    return uVar2;
  }
  for (; (bVar1 = *pbVar4, 0x20 < bVar1 && (bVar1 != 0x3a)); pbVar4 = pbVar4 + 1) {
  }
  if (bVar1 == 0x3a) {
    if (((int)(char)*pbVar3 - 0x30U < 10) && (pbVar3 + 1 == pbVar4 && (char)*pbVar3 == 0x30)) {
      *param_1 = pbVar4 + 1;
      return 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_0801df9e at 0801df9e */

undefined4 FUN_0801df9e(undefined4 param_1,undefined4 param_2,byte *param_3,undefined4 *param_4)

{
  byte bVar1;
  byte *pbVar2;
  
  for (pbVar2 = param_3; (bVar1 = *pbVar2, 0x20 < bVar1 && (bVar1 != 0x3a)); pbVar2 = pbVar2 + 1) {
  }
  if (bVar1 == 0x3a) {
    if (((int)(char)*param_3 - 0x30U < 10) && (param_3 + 1 == pbVar2 && (char)*param_3 == 0x30)) {
      *param_4 = pbVar2 + 1;
      return 0;
    }
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



/* FUN_0801dfd6 at 0801dfd6 */

longlong FUN_0801dfd6(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  iVar2 = FUN_0801dd66();
  if (iVar2 != 0) {
    return CONCAT44(param_3,4);
  }
  iVar2 = FUN_0801d5f0(param_1 + 0x22e);
  if (iVar2 != 0xaa55) {
    return CONCAT44(param_3,3);
  }
  pcVar3 = (char *)(param_1 + 0x30);
  cVar1 = *pcVar3;
  if (cVar1 != -0x17) {
    if (cVar1 == -0x15) {
      pcVar3 = (char *)(uint)*(byte *)(param_1 + 0x32);
    }
    if (cVar1 != -0x15 || pcVar3 != (char *)0x90) goto LAB_0801e03e;
  }
  uVar4 = FUN_0801d5f6(param_1 + 0x66);
  if (((uVar4 & 0xffffff) == DAT_0801e514) ||
     (iVar2 = FUN_0801d5f6(param_1 + 0x82), iVar2 == DAT_0801e518)) {
    return (ulonglong)param_3 << 0x20;
  }
LAB_0801e03e:
  return CONCAT44(param_3,2);
}



/* FUN_0801e048 at 0801e048 */

undefined4 FUN_0801e048(uint param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  short *psVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  char cVar13;
  bool bVar14;
  uint local_28;
  undefined4 *puStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  *param_2 = 0;
  local_28 = param_1;
  puStack_24 = param_2;
  uStack_20 = param_3;
  uStack_1c = param_4;
  iVar5 = FUN_0801df90();
  psVar2 = DAT_0801e51c;
  if (iVar5 < 0) {
    return 0xb;
  }
  pcVar11 = *(char **)(DAT_0801e51c + iVar5 * 2 + 2);
  if (pcVar11 == (char *)0x0) {
    return 0xc;
  }
  *param_2 = pcVar11;
  if ((*pcVar11 == '\0') || (iVar6 = FUN_0801f9bc(pcVar11[1]), iVar6 << 0x1f < 0)) {
    *pcVar11 = '\0';
    pcVar11[1] = (char)iVar5;
    iVar5 = FUN_0801f9ce(pcVar11[1]);
    if (iVar5 << 0x1f < 0) {
      return 3;
    }
    if (((param_3 & 0xfe) != 0) && (iVar5 << 0x1d < 0)) {
      return 10;
    }
    iVar5 = FUN_0801dfd6(pcVar11,0);
    uVar12 = 0;
    if (iVar5 == 2) {
      uVar10 = 0;
      do {
        uVar7 = (uint)(byte)pcVar11[uVar10 * 0x10 + 0x1f2];
        if (uVar7 != 0) {
          uVar7 = FUN_0801d5f6(pcVar11 + uVar10 * 0x10 + 0x1f6);
        }
        (&local_28)[uVar10] = uVar7;
        uVar10 = uVar10 + 1;
        uVar7 = uVar12;
      } while (uVar10 < 4);
      do {
        uVar12 = (&local_28)[uVar7];
        if (uVar12 == 0) {
          iVar5 = 3;
        }
        else {
          iVar5 = FUN_0801dfd6(pcVar11,uVar12);
        }
      } while ((1 < iVar5) && (uVar7 = uVar7 + 1, uVar7 < 4));
    }
    if (iVar5 == 4) {
      return 1;
    }
    if ((iVar5 < 2) && (iVar5 = FUN_0801d5f0(pcVar11 + 0x3b), iVar5 == 0x200)) {
      iVar5 = FUN_0801d5f0(pcVar11 + 0x46);
      if (iVar5 == 0) {
        iVar5 = FUN_0801d5f6(pcVar11 + 0x54);
      }
      *(int *)(pcVar11 + 0x18) = iVar5;
      uVar10 = (uint)(byte)pcVar11[0x40];
      pcVar11[2] = pcVar11[0x40];
      if (uVar10 == 1 || uVar10 == 2) {
        bVar1 = pcVar11[0x3d];
        *(ushort *)(pcVar11 + 10) = (ushort)bVar1;
        if ((bVar1 != 0) && ((bVar1 & bVar1 - 1) == 0)) {
          uVar3 = FUN_0801d5f0(pcVar11 + 0x41);
          *(ushort *)(pcVar11 + 8) = uVar3;
          if ((uVar3 & 0xf) == 0) {
            uVar7 = FUN_0801d5f0(pcVar11 + 0x43);
            if (uVar7 == 0) {
              uVar7 = FUN_0801d5f6(pcVar11 + 0x50);
            }
            iVar6 = FUN_0801d5f0(pcVar11 + 0x3e);
            if (iVar6 != 0) {
              uVar9 = uVar10 * iVar5 + iVar6 + (uint)(*(ushort *)(pcVar11 + 8) >> 4);
              if ((uVar9 <= uVar7) &&
                 (uVar7 = (uVar7 - uVar9) / (uint)*(ushort *)(pcVar11 + 10), uVar7 != 0)) {
                cVar13 = '\x03';
                if (uVar7 < 0xfff6) {
                  cVar13 = '\x02';
                }
                if (uVar7 < 0xff6) {
                  cVar13 = '\x01';
                }
                *(uint *)(pcVar11 + 0x14) = uVar7 + 2;
                *(uint *)(pcVar11 + 0x1c) = uVar12;
                *(uint *)(pcVar11 + 0x20) = iVar6 + uVar12;
                *(uint *)(pcVar11 + 0x28) = uVar9 + uVar12;
                if (cVar13 == '\x03') {
                  uVar10 = FUN_0801d5f0(pcVar11 + 0x5a);
                  bVar14 = uVar10 == 0;
                  if (bVar14) {
                    uVar10 = (uint)*(ushort *)(pcVar11 + 8);
                  }
                  if (bVar14 && uVar10 == 0) {
                    iVar5 = FUN_0801d5f6(pcVar11 + 0x5c);
                    iVar6 = *(int *)(pcVar11 + 0x14) << 2;
LAB_0801e1fc:
                    *(int *)(pcVar11 + 0x24) = iVar5;
                    if (iVar6 + 0x1ffU >> 9 <= *(uint *)(pcVar11 + 0x18)) {
                      pcVar11[0x10] = -1;
                      pcVar11[0x11] = -1;
                      pcVar11[0x12] = -1;
                      pcVar11[0x13] = -1;
                      pcVar11[0xc] = -1;
                      pcVar11[0xd] = -1;
                      pcVar11[0xe] = -1;
                      pcVar11[0xf] = -1;
                      pcVar11[4] = -0x80;
                      if (((cVar13 == '\x03') && (iVar5 = FUN_0801d5f0(pcVar11 + 0x60), iVar5 == 1))
                         && (iVar5 = FUN_0801dd6e(1,uVar12 + 1), iVar5 == 0)) {
                        pcVar11[4] = '\0';
                        iVar5 = FUN_0801d5f0(pcVar11 + 0x22e);
                        if (((iVar5 == 0xaa55) &&
                            (iVar5 = FUN_0801d5f6(pcVar11 + 0x30), iVar5 == DAT_0801e31c)) &&
                           (iVar5 = FUN_0801d5f6(pcVar11 + 0x214), iVar5 == DAT_0801e320)) {
                          uVar8 = FUN_0801d5f6(pcVar11 + 0x218);
                          *(undefined4 *)(pcVar11 + 0x10) = uVar8;
                          uVar8 = FUN_0801d5f6(pcVar11 + 0x21c);
                          *(undefined4 *)(pcVar11 + 0xc) = uVar8;
                        }
                      }
                      *pcVar11 = cVar13;
                      sVar4 = *psVar2 + 1;
                      *psVar2 = sVar4;
                      *(short *)(pcVar11 + 6) = sVar4;
                      FUN_0801d748(pcVar11);
                      goto LAB_0801e288;
                    }
                  }
                }
                else if (*(ushort *)(pcVar11 + 8) != 0) {
                  iVar5 = uVar10 * iVar5 + *(int *)(pcVar11 + 0x20);
                  uVar10 = *(uint *)(pcVar11 + 0x14);
                  if (cVar13 == '\x02') {
                    iVar6 = uVar10 << 1;
                  }
                  else {
                    iVar6 = (uVar10 & 1) + (uVar10 * 3 >> 1);
                  }
                  goto LAB_0801e1fc;
                }
              }
            }
          }
        }
      }
    }
    uVar8 = 0xd;
  }
  else {
    if (((param_3 & 0xfe) != 0) && (iVar6 << 0x1d < 0)) {
      return 10;
    }
LAB_0801e288:
    uVar8 = 0;
  }
  return uVar8;
}



/* FUN_0801e290 at 0801e290 */

longlong FUN_0801e290(undefined4 *param_1,char *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = param_2;
  if (param_1 != (undefined4 *)0x0) {
    pcVar2 = (char *)*param_1;
  }
  if ((((param_1 != (undefined4 *)0x0 && pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) &&
      (*(short *)(pcVar2 + 6) == *(short *)(param_1 + 1))) &&
     (iVar1 = FUN_0801f9bc(pcVar2[1]), -1 < iVar1 << 0x1f)) {
    *(undefined4 *)param_2 = *param_1;
    return (ulonglong)param_4 << 0x20;
  }
  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  return CONCAT44(param_4,9);
}



/* FUN_0801e2c4 at 0801e2c4 */

undefined4 FUN_0801e2c4(undefined1 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 local_20 [2];
  undefined1 *local_18;
  undefined4 uStack_14;
  
  local_20[0] = param_2;
  local_18 = param_1;
  uStack_14 = param_2;
  iVar1 = FUN_0801df90(local_20);
  if (iVar1 < 0) {
    uVar2 = 0xb;
  }
  else {
    iVar1 = DAT_0801e51c + iVar1 * 4;
    puVar3 = *(undefined1 **)(iVar1 + 4);
    if (puVar3 != (undefined1 *)0x0) {
      FUN_0801d748(puVar3);
      *puVar3 = 0;
    }
    if (local_18 == (undefined1 *)0x0) {
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    else {
      *local_18 = 0;
      *(undefined1 **)(iVar1 + 4) = local_18;
      if ((local_18 != (undefined1 *)0x0) && (param_3 == 1)) {
        uVar2 = FUN_0801e048(&uStack_14,&local_18,0);
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_0801e524 at 0801e524 */

void FUN_0801e524(void)

{
  int unaff_r4;
  
  FUN_0801d634(unaff_r4 + 0x30,0);
  return;
}



/* FUN_0801e52e at 0801e52e */

undefined8 FUN_0801e52e(int param_1,int param_2,uint param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int extraout_r1;
  uint uVar5;
  int unaff_r5;
  uint unaff_r6;
  int unaff_r10;
  bool bVar6;
  char cVar7;
  uint local_28;
  int *piStack_24;
  
  *param_4 = 0;
  local_28 = param_3;
  piStack_24 = param_4;
  iVar2 = FUN_0801e290(param_1,&local_28);
  bVar6 = iVar2 == 0;
  if (bVar6) {
    iVar2 = (int)*(char *)(param_1 + 0x15);
    bVar6 = iVar2 == 0;
  }
  if (bVar6) {
    if ((int)((uint)*(byte *)(param_1 + 0x14) << 0x1e) < 0) {
      uVar3 = *(uint *)(param_1 + 0x18);
      if (param_3 + uVar3 < uVar3) {
        param_3 = -uVar3 - 1;
      }
      do {
        bVar6 = param_3 == 0;
        do {
          if (bVar6) {
            *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 0x40;
            iVar2 = 0;
            goto LAB_0801e6a6;
          }
          cVar7 = (*(uint *)(param_1 + 0x18) & 0x1ff) == 0;
          if (!(bool)cVar7) goto LAB_0801e672;
          FUN_0801e6b4();
          if (cVar7 == '\0') goto LAB_0801e592;
          if (extraout_r1 == 0) {
            iVar2 = *(int *)(param_1 + 8);
            if (iVar2 == 0) {
              uVar4 = 0;
LAB_0801e574:
              iVar2 = FUN_0801da6e(param_1,uVar4);
            }
          }
          else {
            if (*(int *)(param_1 + 0x2c) == 0) {
              uVar4 = *(undefined4 *)(param_1 + 0x1c);
              goto LAB_0801e574;
            }
            iVar2 = FUN_0801db16(param_1);
          }
          bVar6 = iVar2 == 0;
        } while (bVar6);
        bVar6 = iVar2 == 1;
        if (bVar6) {
LAB_0801e5bc:
          if (bVar6) {
            iVar2 = 2;
            goto LAB_0801e6ac;
          }
          unaff_r6 = param_3 >> 9;
          unaff_r10 = unaff_r5 + iVar2;
          if (unaff_r6 != 0) {
            if ((uint)*(ushort *)(local_28 + 10) < unaff_r6 + unaff_r5) {
              unaff_r6 = (uint)*(ushort *)(local_28 + 10) - unaff_r5;
            }
            iVar2 = FUN_0801f9f8(*(undefined1 *)(local_28 + 1),param_2,unaff_r10,unaff_r6);
            bVar6 = iVar2 == 0;
            goto LAB_0801e5e2;
          }
          if (((*(int *)(param_1 + 0x20) != unaff_r10) &&
              (*(uint *)(param_1 + 0x18) < *(uint *)(param_1 + 0xc))) &&
             (iVar2 = FUN_0801f9ec(*(undefined1 *)(local_28 + 1),param_1 + 0x30,unaff_r10,1),
             iVar2 != 0)) goto LAB_0801e6b0;
          *(int *)(param_1 + 0x20) = unaff_r10;
LAB_0801e672:
          uVar5 = *(uint *)(param_1 + 0x18) & 0x1ff;
          uVar3 = 0x200 - uVar5;
          unaff_r6 = param_3;
          if (uVar3 < param_3) {
            unaff_r6 = uVar3;
          }
          FUN_0801d624(param_1 + 0x30 + uVar5,param_2,unaff_r6);
          *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 0x80;
        }
        else {
          if (iVar2 == -1) goto LAB_0801e6b0;
          *(int *)(param_1 + 0x1c) = iVar2;
          if (*(int *)(param_1 + 8) == 0) {
            *(int *)(param_1 + 8) = iVar2;
          }
LAB_0801e592:
          bVar1 = *(byte *)(param_1 + 0x14);
          if (-1 < (int)((uint)bVar1 << 0x18)) {
LAB_0801e5b4:
            iVar2 = FUN_0801e6c2(bVar1,*(undefined4 *)(param_1 + 0x1c));
            bVar6 = iVar2 == 0;
            goto LAB_0801e5bc;
          }
          iVar2 = FUN_0801f9f8(*(undefined1 *)(local_28 + 1),param_1 + 0x30,
                               *(undefined4 *)(param_1 + 0x20),1);
          bVar6 = iVar2 == 0;
          if (bVar6) {
            bVar1 = *(byte *)(param_1 + 0x14) & 0x7f;
            *(byte *)(param_1 + 0x14) = bVar1;
            goto LAB_0801e5b4;
          }
LAB_0801e5e2:
          if (!bVar6) goto LAB_0801e6b0;
          uVar3 = *(int *)(param_1 + 0x20) - unaff_r10;
          if (uVar3 < unaff_r6) {
            FUN_0801d624(param_1 + 0x30,param_2 + uVar3 * 0x200,0x200);
            *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0x7f;
          }
          unaff_r6 = unaff_r6 << 9;
        }
        param_2 = param_2 + unaff_r6;
        uVar3 = unaff_r6 + *(int *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x18) = uVar3;
        if (uVar3 < *(uint *)(param_1 + 0xc)) {
          uVar3 = *(uint *)(param_1 + 0xc);
        }
        *(uint *)(param_1 + 0xc) = uVar3;
        param_3 = param_3 - unaff_r6;
        *param_4 = unaff_r6 + *param_4;
      } while( true );
    }
    iVar2 = 7;
  }
LAB_0801e6a6:
  return CONCAT44(local_28,iVar2);
LAB_0801e6b0:
  iVar2 = 1;
LAB_0801e6ac:
  *(char *)(param_1 + 0x15) = (char)iVar2;
  goto LAB_0801e6a6;
}



/* FUN_0801e6b4 at 0801e6b4 */

void FUN_0801e6b4(void)

{
  return;
}



/* FUN_0801e6c2 at 0801e6c2 */

int FUN_0801e6c2(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  if (*(int *)(param_5 + 0x14) - 2U <= param_2 - 2U) {
    return 0;
  }
  return (uint)*(ushort *)(param_5 + 10) * (param_2 - 2U) + *(int *)(param_5 + 0x28);
}



/* FUN_0801e6c8 at 0801e6c8 */

undefined8 FUN_0801e6c8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *unaff_r4;
  
  iVar1 = FUN_0801e794();
  if (iVar1 == 0) {
    if ((int)((uint)*(byte *)(unaff_r4 + 5) << 0x19) < 0) {
      if ((int)((uint)*(byte *)(unaff_r4 + 5) << 0x18) < 0) {
        iVar1 = FUN_0801e748();
        if (iVar1 != 0) {
          return CONCAT44(param_3,1);
        }
        FUN_0801e780();
      }
      iVar1 = FUN_0801d7aa(param_3,unaff_r4[9]);
      if (iVar1 == 0) {
        iVar1 = unaff_r4[10];
        *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x20;
        FUN_0801dcd4(*unaff_r4,iVar1,unaff_r4[2]);
        FUN_0801d614(iVar1 + 0x1c,unaff_r4[3]);
        FUN_0801d614(iVar1 + 0x16,0);
        FUN_0801d60c(iVar1 + 0x12,0);
        iVar1 = FUN_0801e740(1,param_3);
        *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) & 0xbf;
      }
    }
  }
  return CONCAT44(param_3,iVar1);
}



/* FUN_0801e740 at 0801e740 */

undefined8
FUN_0801e740(undefined1 param_1,int param_2,undefined4 param_3,undefined4 param_4,char *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  *(undefined1 *)(param_2 + 3) = param_1;
  uVar5 = FUN_0801d764();
  uVar3 = (uint)((ulonglong)uVar5 >> 0x20);
  iVar4 = (int)uVar5;
  if (iVar4 == 0) {
    cVar1 = *param_5;
    if (cVar1 == '\x03') {
      uVar3 = (uint)(byte)param_5[4];
    }
    if (cVar1 == '\x03' && uVar3 == 1) {
      FUN_0801e524(cVar1,uVar3,0x200);
      FUN_0801d60c(param_5 + 0x22e,0xaa55);
      FUN_0801d614(param_5 + 0x30,DAT_0801e31c);
      FUN_0801d614(param_5 + 0x214,DAT_0801e320);
      FUN_0801d614(param_5 + 0x218,*(undefined4 *)(param_5 + 0x10));
      FUN_0801d614(param_5 + 0x21c,*(undefined4 *)(param_5 + 0xc));
      *(int *)(param_5 + 0x2c) = *(int *)(param_5 + 0x1c) + 1;
      FUN_0801e74e(param_5[1]);
      param_5[4] = '\0';
    }
    iVar2 = FUN_0801fa14(param_5[1],0,0);
    if (iVar2 != 0) {
      iVar4 = 1;
    }
  }
  return CONCAT44(param_4,iVar4);
}



/* FUN_0801e748 at 0801e748 */

void FUN_0801e748(void)

{
  int unaff_r4;
  int in_stack_00000000;
  
  FUN_0801f9f8(*(undefined1 *)(in_stack_00000000 + 1),unaff_r4 + 0x30,
               *(undefined4 *)(unaff_r4 + 0x20),1);
  return;
}



/* FUN_0801e74e at 0801e74e */

void FUN_0801e74e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_r4;
  
  FUN_0801f9f8(param_1,unaff_r4 + 0x30,param_3,1);
  return;
}



/* FUN_0801e758 at 0801e758 */

void FUN_0801e758(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = param_3;
  uStack_c = param_4;
  iVar1 = FUN_0801e6c8();
  if (((iVar1 == 0) && (iVar1 = FUN_0801e290(param_1,&uStack_10), iVar1 == 0)) &&
     (iVar1 = FUN_0801d712(param_1[4]), iVar1 == 0)) {
    *param_1 = 0;
  }
  return;
}



/* FUN_0801e780 at 0801e780 */

void FUN_0801e780(void)

{
  int unaff_r4;
  
  *(byte *)(unaff_r4 + 0x14) = *(byte *)(unaff_r4 + 0x14) & 0x7f;
  return;
}



/* FUN_0801e78a at 0801e78a */

void FUN_0801e78a(undefined4 param_1)

{
  int unaff_r4;
  
  FUN_0801f9ec(param_1,unaff_r4 + 0x30);
  return;
}



/* FUN_0801e78c at 0801e78c */

void FUN_0801e78c(undefined4 param_1)

{
  int unaff_r4;
  
  FUN_0801f9ec(param_1,unaff_r4 + 0x30);
  return;
}



/* FUN_0801e794 at 0801e794 */

void FUN_0801e794(void)

{
  FUN_0801e290();
  return;
}



/* FUN_0801e79c at 0801e79c */

void FUN_0801e79c(void)

{
  FUN_0801da04(&stack0x00000004);
  return;
}



/* FUN_0801e7a6 at 0801e7a6 */

void FUN_0801e7a6(void)

{
  FUN_0801fa30(1);
  return;
}



/* FUN_0801e7ac at 0801e7ac */

int * FUN_0801e7ac(void)

{
  int *piVar1;
  
  if (*DAT_0801e7cc != 0) {
    return (int *)0x0;
  }
  piVar1 = (int *)(DAT_0801e7d0 & 0xfffffff8);
  *DAT_0801e7cc = (uint)piVar1;
  *piVar1 = (DAT_0801e7d4 & 0xfffffff8) - (int)piVar1;
  return piVar1;
}



/* FUN_0801e7d8 at 0801e7d8 */

int FUN_0801e7d8(int param_1,int param_2)

{
  return (param_2 + -2 << *(sbyte *)(param_1 + 0x10)) + *(int *)(param_1 + 0x14);
}



/* FUN_0801e7e4 at 0801e7e4 */

void FUN_0801e7e4(void)

{
  FUN_08018662(*DAT_0801e7ec);
  return;
}



/* FUN_0801e80a at 0801e80a */

uint FUN_0801e80a(int param_1,uint param_2)

{
  return *(byte *)(param_1 + 4) - 1 & param_2 >> 9 & 0xff;
}



/* FUN_0801e818 at 0801e818 */

uint FUN_0801e818(int param_1,uint param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0x20) == '\x10') {
    bVar1 = 0xfff7 < param_2;
  }
  else {
    bVar1 = DAT_0801e834 <= param_2;
  }
  return ~-(uint)!bVar1 >> 0x1f;
}



/* FUN_0801e838 at 0801e838 */

ulonglong FUN_0801e838(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_18;
  
  puVar1 = DAT_0801e8f0;
  *DAT_0801e8f0 = 0;
  *(undefined2 *)(puVar1 + 2) = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined2 *)(puVar1 + 0x12) = 0;
  uVar2 = DAT_0801e8f4;
  local_18 = CONCAT31((int3)((uint)param_3 >> 8),1);
  uVar3 = FUN_0801fa3c(DAT_0801e8f4);
  if ((uVar3 & 0xff) == 0) {
    FUN_0801fe14(uVar2,puVar1);
  }
  return CONCAT44(local_18,uVar3) & 0xffffffff000000ff;
}



/* FUN_0801e874 at 0801e874 */

void FUN_0801e874(void)

{
  undefined4 unaff_r7;
  
  FUN_0801fad2(DAT_0801e8f4);
  FUN_0801e838(unaff_r7);
  return;
}



/* FUN_0801e882 at 0801e882 */

undefined8 FUN_0801e882(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 uVar2;
  
  iVar1 = FUN_0801e8a8();
  uVar2 = 0;
  if ((iVar1 != 0) && (iVar1 = FUN_0801e8a8(), iVar1 != 0)) {
    uVar2 = 1;
  }
  return CONCAT44(in_r3,uVar2);
}



/* FUN_0801e8a8 at 0801e8a8 */

undefined4 FUN_0801e8a8(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *unaff_r4;
  int unaff_r5;
  int *piVar5;
  uint unaff_r7;
  uint unaff_r8;
  int *unaff_r9;
  char cVar6;
  
  iVar1 = FUN_0801c724();
  piVar5 = unaff_r9 + 0xd;
  if (unaff_r4 == (undefined4 *)0x0) {
    uVar2 = unaff_r9[0xe] | 0x8000000;
LAB_0801fc5a:
    unaff_r9[0xe] = uVar2;
    return 1;
  }
  if ((char)*piVar5 != '\x01') {
    uVar2 = unaff_r9[0xe] | 0x20000000;
    goto LAB_0801fc5a;
  }
  unaff_r9[0xe] = 0;
  cVar6 = unaff_r9[0x17] == unaff_r8 + unaff_r5;
  if ((uint)unaff_r9[0x17] < unaff_r8 + unaff_r5) {
    uVar2 = unaff_r9[0xe] | 0x2000000;
    goto LAB_0801fc5a;
  }
  FUN_0801fde0();
  if (cVar6 == '\0') {
    unaff_r5 = unaff_r5 << 9;
  }
  iVar3 = FUN_080216c2();
  if (iVar3 == 0) {
    FUN_0801fdf6();
    if (unaff_r8 < 2) {
      unaff_r9[0xc] = 1;
      iVar3 = FUN_080216d6(*unaff_r9,unaff_r5);
    }
    else {
      unaff_r9[0xc] = 2;
      iVar3 = FUN_080216ea(*unaff_r9,unaff_r5);
    }
    if (iVar3 == 0) {
      while (iVar3 = *unaff_r9, (*(uint *)(iVar3 + 0x34) & 0x32a) == 0) {
        if (*(int *)(iVar3 + 0x34) << 0x10 < 0) {
          uVar2 = 0;
          do {
            uVar4 = thunk_FUN_080216bc(*unaff_r9);
            unaff_r4[uVar2] = uVar4;
            uVar2 = uVar2 + 1;
          } while (uVar2 < 8);
          unaff_r4 = unaff_r4 + 8;
        }
        if ((unaff_r7 == 0) || (iVar3 = FUN_0801c724(), unaff_r7 <= (uint)(iVar3 - iVar1))) {
          *(undefined4 *)(*unaff_r9 + 0x38) = 0x5ff;
          unaff_r9[0xe] = unaff_r9[0xe] | 0x80000000;
          *(char *)piVar5 = '\x01';
          return 3;
        }
      }
      if ((((-1 < *(int *)(iVar3 + 0x34) << 0x17) || (unaff_r8 < 2)) || (unaff_r9[0x11] == 3)) ||
         (iVar3 = FUN_0802173e(), iVar3 == 0)) {
        iVar3 = *unaff_r9;
        if (*(int *)(iVar3 + 0x34) << 0x1c < 0) {
          *(undefined4 *)(iVar3 + 0x38) = 0x5ff;
          uVar2 = unaff_r9[0xe] | 8;
LAB_0801fc24:
          unaff_r9[0xe] = uVar2;
          *(char *)piVar5 = '\x01';
          return 1;
        }
        if (*(int *)(iVar3 + 0x34) << 0x1e < 0) {
          *(undefined4 *)(iVar3 + 0x38) = 0x5ff;
          uVar2 = unaff_r9[0xe] | 2;
          goto LAB_0801fc24;
        }
        if (*(int *)(iVar3 + 0x34) << 0x1a < 0) {
          *(undefined4 *)(iVar3 + 0x38) = 0x5ff;
          uVar2 = unaff_r9[0xe] | 0x20;
          goto LAB_0801fc24;
        }
        do {
          if (-1 < *(int *)(*unaff_r9 + 0x34) << 10) {
            *(undefined4 *)(*unaff_r9 + 0x38) = 0x5ff;
            *(char *)piVar5 = '\x01';
            return 0;
          }
          uVar4 = thunk_FUN_080216bc();
          *unaff_r4 = uVar4;
        } while ((unaff_r7 != 0) &&
                (iVar3 = FUN_0801c724(), unaff_r4 = unaff_r4 + 1, (uint)(iVar3 - iVar1) < unaff_r7))
        ;
        *(undefined4 *)(*unaff_r9 + 0x38) = 0x5ff;
        unaff_r9[0xe] = unaff_r9[0xe] | 0x80000000;
        goto LAB_0801fc4e;
      }
    }
  }
  FUN_0801fdd4();
LAB_0801fc4e:
  *(char *)piVar5 = '\x01';
  return 1;
}



/* FUN_0801e8b6 at 0801e8b6 */

undefined8 FUN_0801e8b6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0801fc72(DAT_0801e8f4,param_1,param_2,param_3,param_4,param_4);
  return CONCAT44(param_4,(uint)(iVar1 != 0));
}



/* FUN_0801e8d0 at 0801e8d0 */

longlong FUN_0801e8d0(void)

{
  int iVar1;
  uint unaff_r7;
  
  iVar1 = FUN_080200be(DAT_0801e8f4);
  if (iVar1 == 4) {
    return (ulonglong)unaff_r7 << 0x20;
  }
  return CONCAT44(unaff_r7,1);
}



/* FUN_0801e8e4 at 0801e8e4 */

undefined4 FUN_0801e8e4(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0801e8f4;
  *param_1 = *(undefined4 *)(DAT_0801e8f4 + 0x44);
  param_1[1] = *(undefined4 *)(iVar1 + 0x48);
  param_1[2] = *(undefined4 *)(iVar1 + 0x4c);
  param_1[3] = *(undefined4 *)(iVar1 + 0x50);
  param_1[4] = *(undefined4 *)(iVar1 + 0x54);
  param_1[5] = *(undefined4 *)(iVar1 + 0x58);
  param_1[6] = *(undefined4 *)(iVar1 + 0x5c);
  param_1[7] = *(undefined4 *)(iVar1 + 0x60);
  return 0;
}



/* FUN_0801e8f8 at 0801e8f8 */

char * FUN_0801e8f8(char *param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  do {
    if (*param_1 == param_2) {
      pcVar2 = param_1;
    }
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return pcVar2;
}



/* FUN_0801e910 at 0801e910 */

void FUN_0801e910(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}



/* FUN_0801e918 at 0801e918 */

void FUN_0801e918(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_0801e960;
  iVar2 = DAT_0801e960[1];
  if (*param_1 == '\0') {
    iVar2 = iVar2 << 0x10;
  }
  *(int *)(*DAT_0801e960 + 0x18) = iVar2;
  iVar2 = piVar1[3];
  if (param_1[1] == '\0') {
    iVar2 = iVar2 << 0x10;
  }
  *(int *)(piVar1[2] + 0x18) = iVar2;
  iVar2 = piVar1[0xf];
  if (param_1[2] == '\0') {
    iVar2 = iVar2 << 0x10;
  }
  *(int *)(piVar1[0xe] + 0x18) = iVar2;
  FUN_08014cce(0x18,*param_1);
  FUN_08014cce(0x19,param_1[1]);
  FUN_08014cce(0x1f,param_1[2],param_3,param_4);
  return;
}



/* FUN_0801e964 at 0801e964 */

undefined4 FUN_0801e964(void)

{
  undefined4 unaff_r7;
  
  FUN_0801e910(&stack0xfffffff8,0xff,0xff,0xff);
  FUN_0801e918();
  return unaff_r7;
}



/* FUN_0801e978 at 0801e978 */

void FUN_0801e978(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_4 = param_1;
  param_4[1] = param_2;
  param_4[2] = param_3;
  return;
}



/* FUN_0801e988 at 0801e988 */

undefined8 FUN_0801e988(float *param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  float *pfVar2;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  pfVar2 = &local_14;
  local_10 = DAT_0801ea00;
  local_18 = DAT_0801ea04;
  local_14 = param_2;
  if (param_1 == (float *)0x1) {
    pfVar2 = (float *)((int)param_2 + 8);
  }
  else if (param_1 == (float *)0x2) {
    local_14 = *(float *)(DAT_0801ea08 + 8) + *(float *)((int)param_2 + 8);
    if (-1 < (int)((uint)(local_14 < DAT_0801e9fc) << 0x1f)) {
      local_14 = DAT_0801e9fc;
    }
  }
  else {
    iVar1 = (uint)(*(float *)(DAT_0801ea08 + 8) < *(float *)((int)param_2 + 8)) << 0x1f;
    pfVar2 = param_1;
    if (iVar1 < 0) {
      pfVar2 = (float *)((int)param_2 + 8);
    }
    if (-1 < iVar1) {
      pfVar2 = (float *)(DAT_0801ea08 + 8);
    }
  }
  uStack_c = param_4;
  FUN_0800a75c(pfVar2,&local_18);
  FUN_0800a76c(param_2,(int)param_2 + 4,&local_10);
  return CONCAT44(local_14,local_18);
}



/* FUN_0801ea0c at 0801ea0c */

undefined8 FUN_0801ea0c(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar4 = *param_1 / 0x3c;
  uVar3 = uVar4 / 0x3c;
  uVar7 = uVar3 / 0x18 & 0xffff;
  uVar6 = uVar7 / 0x16d;
  uVar7 = uVar7 % 0x16d;
  uVar3 = uVar3 % 0x18;
  uVar4 = uVar4 % 0x3c;
  uVar5 = *param_1 % 0x3c;
  uVar2 = DAT_0801ea94;
  uVar9 = uVar3;
  uVar10 = uVar4;
  uVar11 = uVar5;
  if (((uVar6 == 0) &&
      (bVar1 = uVar7 == 0, uVar2 = DAT_0801ea98, uVar6 = uVar7, uVar7 = uVar3, uVar9 = uVar4,
      uVar10 = uVar5, uVar11 = param_4, bVar1)) &&
     (uVar2 = DAT_0801ea9c, uVar6 = uVar3, uVar7 = uVar4, uVar9 = uVar5, uVar10 = param_3,
     uVar3 == 0)) {
    if (uVar4 == 0) {
      uVar8 = FUN_080164f0(param_2,DAT_0801eaa4,uVar5);
      return uVar8;
    }
    uVar8 = FUN_080164f0(param_2,DAT_0801eaa0);
    return uVar8;
  }
  FUN_080164f0(param_2,uVar2,uVar6,uVar7,uVar9,uVar10,uVar11);
  return CONCAT44(uVar10,uVar9);
}



/* FUN_0801eaa8 at 0801eaa8 */

void FUN_0801eaa8(int param_1)

{
  if (0x95 < param_1) {
    param_1 = 0x96;
  }
  *DAT_0801eab4 = (short)param_1;
  return;
}



/* FUN_0801eab8 at 0801eab8 */

undefined8 FUN_0801eab8(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 unaff_r7;
  
  if (*DAT_0801eae4 != 0) {
    iVar2 = FUN_0800b038();
    if (iVar2 < 0) {
      uVar3 = 0;
LAB_0801eae0:
      return CONCAT44(unaff_r7,uVar3);
    }
    iVar2 = FUN_0800b038();
    if (iVar2 < 0x100) {
      bVar1 = FUN_0800b038();
      uVar3 = (uint)bVar1;
      if (uVar3 == 0) goto LAB_0801eae0;
    }
  }
  return CONCAT44(unaff_r7,1);
}



/* FUN_0801eae8 at 0801eae8 */

ulonglong FUN_0801eae8(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r7;
  
  iVar1 = FUN_0800b038();
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_0800b038();
    if (iVar1 < 0x100) {
      uVar2 = FUN_0800b038();
    }
    else {
      uVar2 = 0xff;
    }
  }
  return CONCAT44(unaff_r7,uVar2) & 0xffffffff000000ff;
}



/* FUN_0801eb0c at 0801eb0c */

char FUN_0801eb0c(void)

{
  uint uVar1;
  char cVar2;
  float fVar3;
  char *pcVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  
  pcVar4 = DAT_0801ee50;
  *DAT_0801ee50 = '\x01';
  fVar3 = DAT_0801ecfc;
  while (*pcVar4 != '\0') {
    if (*DAT_0801ee54 < 6) break;
    fVar5 = (float)VectorSignedToFloat((int)*DAT_0801ee54,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = *DAT_0801ee58 - fVar5;
    if (fVar6 == 0.0 || fVar6 < 0.0 != NAN(fVar6)) {
      fVar6 = fVar5 - *DAT_0801ee58;
    }
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar6 < fVar3) << 0x1f;
    in_fpscr = uVar1 | (uint)(NAN(fVar6) || NAN(fVar3)) << 0x1c;
    if ((byte)(uVar1 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) break;
    FUN_0800b806(0);
  }
  cVar2 = *pcVar4;
  *pcVar4 = '\0';
  return cVar2;
}



/* FUN_0801eb6e at 0801eb6e */

void FUN_0801eb6e(float *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  puVar3 = DAT_0801ee60;
  puVar2 = DAT_0801ee5c;
  uVar4 = DAT_0801ee5c[1];
  uVar5 = DAT_0801ee5c[2];
  uVar6 = DAT_0801ee5c[3];
  *DAT_0801ee60 = *DAT_0801ee5c;
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar6;
  bVar1 = *DAT_0801ee64;
  local_20 = puVar3[1];
  local_18 = 0;
  local_24 = *puVar3;
  puVar3[3] = *param_1 / *(float *)(DAT_0801ee68 + (uint)bVar1 * 4) + (float)puVar3[3];
  local_1c = puVar3[2];
  FUN_08010812(&local_24,&local_20,&local_1c);
  FUN_08010f84(&local_24,&local_20,&local_1c,puVar3 + 3,param_2,(uint)bVar1,&local_18);
  FUN_08010028();
  uVar4 = puVar3[1];
  uVar5 = puVar3[2];
  uVar6 = puVar3[3];
  *puVar2 = *puVar3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  return;
}



/* FUN_0801ebe4 at 0801ebe4 */

undefined8
FUN_0801ebe4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,char param_6)

{
  undefined1 *puVar1;
  char *pcVar2;
  int iVar3;
  char in_NG;
  char in_ZR;
  char in_OV;
  undefined4 local_18;
  
  local_18 = param_4;
  iVar3 = FUN_0801eb0c((int)param_6);
  pcVar2 = DAT_0801ee74;
  puVar1 = DAT_0801ee70;
  if (iVar3 != 0) {
    if (param_5 != 0) {
      FUN_0800bb0c(DAT_0801ee6c);
      FUN_0800bb0c(s_Insert_filament_and_press_button_0801eeb7 + 1);
      *puVar1 = 3;
      *pcVar2 = '\x01';
      while( true ) {
        in_OV = '\0';
        if (*pcVar2 == '\0') break;
        FUN_0800b806(1);
      }
      in_ZR = '\0';
      in_NG = '\0';
      *puVar1 = 1;
    }
    FUN_0801ed04(*param_1);
    if (in_ZR == '\0') {
      local_18 = DAT_0801ee78;
      FUN_0801eb6e(param_1,&local_18);
    }
    FUN_0801ed00();
    if (!(bool)in_ZR && in_NG == in_OV) {
      FUN_0801ec84(DAT_0801ee7c);
    }
    iVar3 = 1;
  }
  return CONCAT44(local_18,iVar3);
}



/* FUN_0801ec4a at 0801ec4a */

undefined8 FUN_0801ec4a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = param_3;
  local_c = param_4;
  iVar1 = FUN_0801eb0c(param_3);
  if (iVar1 != 0) {
    local_c = DAT_0801ee80;
    local_10 = DAT_0801ee84;
    FUN_0801eb6e(&local_c,&local_10);
    FUN_0800e6c8(5000);
    local_10 = DAT_0801ee88;
    FUN_0801eb6e(&local_10,DAT_0801ee8c);
    FUN_0801ec84(DAT_0801ee90);
    iVar1 = 1;
  }
  return CONCAT44(local_10,iVar1);
}



/* FUN_0801ec84 at 0801ec84 */

void FUN_0801ec84(undefined4 param_1)

{
  undefined4 uStack00000000;
  
  uStack00000000 = param_1;
  FUN_0801eb6e();
  return;
}



/* FUN_0801ec8c at 0801ec8c */

undefined8
FUN_0801ec8c(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  
  puVar2 = DAT_0801ee98;
  pcVar1 = DAT_0801ee94;
  if (*DAT_0801ee94 == '\0') {
    cVar6 = '\x01';
    if (DAT_0801ee98[3] != '\0') {
      DAT_0801ee98[3] = 0;
      *puVar2 = 1;
      cVar6 = '\x02';
    }
    *pcVar1 = cVar6;
    FUN_08016466(DAT_0801ee9c);
    FUN_08010028();
    uVar3 = DAT_0801ee5c[1];
    uVar4 = DAT_0801ee5c[2];
    uVar5 = DAT_0801ee5c[3];
    cVar6 = pcVar1 + 4 == (char *)0x0;
    *(undefined4 *)(pcVar1 + 4) = *DAT_0801ee5c;
    *(undefined4 *)(pcVar1 + 8) = uVar3;
    *(undefined4 *)(pcVar1 + 0xc) = uVar4;
    *(undefined4 *)(pcVar1 + 0x10) = uVar5;
    FUN_0801ed00();
    if (cVar6 == '\0') {
      FUN_0801ec84(DAT_0801ee84);
    }
    cVar6 = '\0';
    FUN_0801e988(2,param_2);
    FUN_0801ed04(*param_3);
    if (cVar6 == '\0') {
      FUN_0801ec4a(param_3,param_4,0);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return CONCAT44(param_3,uVar3);
}



/* FUN_0801ed00 at 0801ed00 */

undefined4 FUN_0801ed00(void)

{
  undefined4 *unaff_r4;
  
  return *unaff_r4;
}



/* FUN_0801ed04 at 0801ed04 */

void FUN_0801ed04(void)

{
  return;
}



/* FUN_0801ed10 at 0801ed10 */

undefined4 FUN_0801ed10(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 in_r3;
  byte bVar8;
  
  pbVar6 = DAT_0801eea8;
  puVar5 = DAT_0801eea4;
  uVar4 = DAT_0801eea0;
  pcVar3 = DAT_0801ee74;
  puVar2 = DAT_0801ee70;
  uVar1 = DAT_0801ee6c;
  FUN_0800bb0c(DAT_0801ee6c);
  FUN_0800bb0c(s_Insert_filament_and_press_button_0801eeb7 + 1);
  FUN_0802024c(0,uVar4);
  *puVar2 = 3;
  bVar8 = 0;
  *pcVar3 = '\x01';
  while (*pcVar3 != '\0') {
    if (bVar8 == 0) {
      iVar7 = 1;
      bVar8 = 0;
      do {
        bVar8 = bVar8 | *pbVar6;
        if (bVar8 != 0) {
          bVar8 = 1;
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (bVar8 != 0) {
      FUN_0800bb0c(uVar1);
      FUN_0800bb0c(s_Send_M108_to_heat_nozzle_0801eee4);
      while (*pcVar3 != '\0') {
        FUN_0800b806(1);
      }
      *puVar5 = 0;
      *pbVar6 = 0;
      bVar8 = 0;
      FUN_0801eb0c();
      FUN_0800bb0c(uVar1);
      FUN_0800bb0c(s_Insert_filament_and_send_M108_0801ef00);
      FUN_0802024c(0,uVar4);
      *pcVar3 = '\x01';
    }
    FUN_0800b806(1);
  }
  *puVar2 = 1;
  return in_r3;
}



/* FUN_0801edb4 at 0801edb4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0801edb4(undefined4 param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  byte *pbVar3;
  char cVar4;
  undefined4 uVar5;
  uint local_20;
  int local_1c;
  undefined4 uStack_18;
  
  pbVar3 = DAT_0801eea8;
  pcVar2 = DAT_0801ee94;
  local_20 = param_2;
  local_1c = param_3;
  if (*DAT_0801ee94 != '\0') {
    local_20 = 0;
    *DAT_0801eea4 = 0;
    local_1c = 1;
    do {
      local_20 = local_20 | *pbVar3;
      if (local_20 != 0) {
        local_20 = 1;
      }
      local_1c = local_1c + -1;
      *pbVar3 = 0;
    } while (local_1c != 0);
    cVar4 = '\0';
    uStack_18 = param_4;
    FUN_0801ebe4(param_1);
    FUN_0801ed04(*(undefined4 *)(pcVar2 + 0x10));
    if (cVar4 != '\0') {
      local_20 = DAT_0801ee84;
      FUN_0801eb6e(pcVar2 + 0x10,&local_20);
    }
    local_20 = DAT_0801eeac;
    FUN_0800a76c(pcVar2 + 4,pcVar2 + 8,&local_20);
    local_20 = DAT_0801eeb0;
    FUN_0800a75c(pcVar2 + 0xc,&local_20);
    uVar5 = *(undefined4 *)(pcVar2 + 0x10);
    *(undefined4 *)(DAT_0801ee5c + 0xc) = uVar5;
    iVar1 = DAT_0801ee60;
    *(undefined4 *)(DAT_0801ee60 + 0xc) = uVar5;
    FUN_0801113c(3,iVar1 + 0xc);
    cVar4 = *pcVar2;
    *pcVar2 = cVar4 + -1;
    if ((char)(cVar4 + -1) != '\0') {
      FUN_08012990(_DAT_0801eeb4);
      *pcVar2 = *pcVar2 + -1;
    }
  }
  return CONCAT44(local_1c,local_20);
}



/* FUN_0801ef20 at 0801ef20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801ef20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  puVar3 = _DAT_0801ef80;
  uVar2 = DAT_0801ef78;
  uVar1 = DAT_0801ef74;
  if (param_1 != 0) {
    FUN_0800bb0c(DAT_0801ef78);
    FUN_0800de78(uVar1,0x54);
    FUN_0800bf60(uVar1,param_1,10);
    FUN_0800de78(uVar1,0x20);
    FUN_0800bb0c(DAT_0801ef7c,param_4);
    return;
  }
  *_DAT_0801ef80 = 0;
  FUN_0800bb0c(uVar2);
  FUN_0800bb4c(s_Active_Extruder__0801ef83 + 1,*puVar3);
  FUN_0800de78(uVar1,10,param_4);
  return;
}



/* FUN_0801ef98 at 0801ef98 */

void FUN_0801ef98(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = param_3;
  FUN_0801efa4();
  *param_3 = puVar1;
  return;
}



/* FUN_0801efa4 at 0801efa4 */

undefined8 FUN_0801efa4(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (param_2 << 1) >> 0x15;
  if (uVar3 == 0) {
    if (param_1 != 0 || (param_2 & 0x7fffffff) != 0) {
      uVar3 = param_2 & ~(param_2 & 0x80000000);
      iVar1 = LZCOUNT(uVar3);
      if (uVar3 == 0) {
        iVar1 = iVar1 + LZCOUNT(param_1);
      }
      uVar2 = iVar1 - 0xb;
      if (0x1f < uVar2) {
        uVar3 = param_1 << (iVar1 - 0x2bU & 0xff);
      }
      else {
        uVar3 = uVar3 << (uVar2 & 0xff);
      }
      uVar3 = uVar3 | param_2 & 0x80000000;
      if (0x1f >= uVar2) {
        uVar3 = uVar3 | param_1 >> (0x20 - uVar2 & 0xff);
      }
      return CONCAT44(uVar3 + 0x3fd00000,param_1 << (uVar2 & 0xff));
    }
  }
  else if (param_2 << 1 < 0xffe00000) {
    return CONCAT44(param_2 + (uVar3 - 0x3fe) * -0x100000,param_1);
  }
  return CONCAT44(param_2,param_1);
}



/* FUN_0801f008 at 0801f008 */

longlong FUN_0801f008(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  if ((int)param_3 < 0) {
    uVar7 = -param_3;
    uVar6 = param_2 >> 0x14 & 0x7ff;
    if (uVar6 != 0) {
      if (uVar6 == 0x7ff) goto LAB_0801f07e;
      if (uVar7 < uVar6) {
        return CONCAT44(param_2 + param_3 * 0x100000,param_1);
      }
      uVar7 = (uVar7 - uVar6) + 1;
      param_2 = param_2 & ~(uVar6 << 0x14) | 0x100000;
    }
    if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) goto LAB_0801f07e;
    uVar6 = param_2 & 0x80000000;
    if ((int)uVar7 < 0x36) {
      param_2 = param_2 ^ uVar6;
      uVar8 = uVar7 - 0x20;
      if ((int)uVar7 < 0x20) {
        uVar2 = uVar7 & 0xff;
        uVar5 = param_1 >> (uVar7 & 0xff) | param_2 << (0x20 - uVar7 & 0xff);
        uVar3 = uVar7 & 0xff;
        uVar8 = param_2 >> (uVar7 & 0xff);
        uVar1 = 0x20 - uVar7 & 0xff;
        bVar9 = uVar1 == 0 &&
                (uVar3 == 0 &&
                 (uVar2 == 0 && 0x1f < uVar7 || uVar2 != 0 && (param_1 >> uVar2 - 1 & 1) != 0) ||
                uVar3 != 0 && (param_2 >> uVar3 - 1 & 1) != 0) ||
                uVar1 != 0 && (param_1 << uVar1 - 1 & 0x80000000) != 0;
        param_1 = param_1 << uVar1;
      }
      else {
        uVar7 = param_1 >> (uVar8 & 0xff);
        if ((param_1 & 0x7fffffff) != 0) {
          uVar7 = uVar7 | 1;
        }
        uVar5 = param_2 >> (uVar8 & 0xff);
        uVar8 = 0x20 - uVar8 & 0xff;
        bVar9 = uVar8 == 0 && (param_1 & 0x80000000) != 0 ||
                uVar8 != 0 && (param_2 << uVar8 - 1 & 0x80000000) != 0;
        param_1 = uVar7 | param_2 << uVar8;
        uVar8 = 0;
      }
      bVar9 = 0x80000000 < param_1 || param_1 + 0x80000000 < (uint)bVar9;
      iVar4 = uVar5 + bVar9;
      uVar6 = uVar8 + uVar6 + CARRY4(uVar5,(uint)bVar9);
      if (param_1 == 0) {
        return CONCAT44(uVar6,iVar4);
      }
    }
    else {
      iVar4 = 0;
    }
    goto code_r0x0801f034;
  }
  uVar7 = param_2 >> 0x14 & 0x7ff;
  if (uVar7 != 0) {
    if (uVar7 == 0x7ff) goto LAB_0801f07e;
    uVar7 = uVar7 + param_3;
LAB_0801f01c:
    if (uVar7 < 0x7ff) {
      return CONCAT44(param_2 + param_3 * 0x100000,param_1);
    }
    uVar6 = param_2 & 0x80000000 | 0x7ff00000;
    iVar4 = 0;
code_r0x0801f034:
    return CONCAT44(uVar6,iVar4);
  }
  if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) goto LAB_0801f07e;
  uVar7 = param_2 & 0x80000000;
  param_2 = param_2 ^ uVar7;
  if (param_2 == 0) {
    uVar6 = LZCOUNT(param_1) + 0x15;
    if (uVar6 < 0x20) goto LAB_0801f04c;
    if (0x1f < param_3) {
      param_3 = param_3 - 0x20;
      uVar6 = LZCOUNT(param_1) - 0xb;
      if (param_3 <= uVar6) {
        return (ulonglong)(param_1 << (param_3 & 0xff) | uVar7) << 0x20;
      }
      param_3 = param_3 - uVar6;
      param_2 = param_1 << (uVar6 & 0xff) | uVar7;
      param_1 = 0;
      uVar7 = param_3 + 1;
      goto LAB_0801f01c;
    }
  }
  else {
    uVar6 = LZCOUNT(param_2) - 0xb;
LAB_0801f04c:
    if (uVar6 < param_3) {
      param_3 = param_3 - uVar6;
      param_2 = (param_2 << (uVar6 & 0xff) | uVar7) + (param_1 >> (0x20 - uVar6 & 0xff));
      param_1 = param_1 << (uVar6 & 0xff);
      uVar7 = param_3 + 1;
      goto LAB_0801f01c;
    }
  }
  param_2 = param_2 << (param_3 & 0xff) | uVar7 | param_1 >> (0x20 - param_3 & 0xff);
  param_1 = param_1 << (param_3 & 0xff);
LAB_0801f07e:
  return CONCAT44(param_2,param_1);
}



/* FUN_0801f142 at 0801f142 */

uint FUN_0801f142(int *param_1,int *param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  bool bVar8;
  
  uVar3 = 0;
  pbVar5 = (byte *)*param_1;
  for (pbVar4 = pbVar5; (uVar7 = (uint)*pbVar4, uVar7 - 9 < 5 || (uVar7 == 0x20));
      pbVar4 = pbVar4 + 1) {
  }
  if (uVar7 == 0x2d) {
    uVar3 = 8;
  }
  if (uVar7 == 0x2d || uVar7 == 0x2b) {
    pbVar4 = pbVar4 + 1;
  }
  bVar2 = *pbVar4;
  if ((bVar2 | 0x20) == 0x6e) {
    bVar2 = pbVar4[1] | 0x20;
    bVar8 = bVar2 == 0x61;
    if (bVar8) {
      bVar2 = pbVar4[2] | 0x20;
    }
    if (bVar8 && bVar2 == 0x6e) {
      pbVar5 = pbVar4 + 3;
      uVar3 = 4;
      pbVar4 = pbVar5;
      if (*pbVar5 == 0x28) {
        do {
          do {
            pbVar6 = pbVar4;
            pbVar4 = pbVar6 + 1;
            uVar7 = (uint)*pbVar4;
          } while (uVar7 - 0x61 < 0x1a);
          bVar8 = uVar7 - 0x41 < 0x1a;
          if (!bVar8) {
            uVar7 = uVar7 - 0x30;
          }
        } while ((bVar8 || uVar7 < 10) || (*pbVar4 == 0x5f));
        if (*pbVar4 == 0x29) {
          pbVar5 = pbVar6 + 2;
        }
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    if ((bVar2 | 0x20) != 0x69) {
      if (bVar2 == 0x30) {
        param_2 = (int *)(pbVar4[1] | 0x20);
      }
      if (bVar2 == 0x30 && param_2 == (int *)0x78) {
        pbVar5 = pbVar4 + 2;
        if (*pbVar5 == 0x2e) {
          pbVar5 = pbVar4 + 3;
        }
        uVar1 = (uint)*pbVar5;
        uVar7 = uVar1 - 0x61;
        if (5 < uVar7) {
          uVar7 = uVar1 - 0x41;
        }
        if ((uVar7 < 6) || (uVar1 - 0x30 < 10)) {
          pbVar4 = pbVar4 + 2;
          uVar3 = uVar3 | 2;
          goto LAB_0801f25a;
        }
      }
      uVar3 = uVar3 | 1;
      goto LAB_0801f25a;
    }
    bVar2 = pbVar4[1] | 0x20;
    bVar8 = bVar2 == 0x6e;
    if (bVar8) {
      bVar2 = pbVar4[2] | 0x20;
    }
    if (bVar8 && bVar2 == 0x66) {
      pbVar5 = pbVar4 + 3;
      bVar2 = *pbVar5 | 0x20;
      bVar8 = bVar2 == 0x69;
      if (bVar8) {
        bVar2 = pbVar4[4] | 0x20;
      }
      uVar3 = uVar3 | 3;
      if (bVar8 && bVar2 == 0x6e) {
        bVar2 = pbVar4[5] | 0x20;
        bVar8 = bVar2 == 0x69;
        if (bVar8) {
          bVar2 = pbVar4[6] | 0x20;
        }
        if ((bVar8 && bVar2 == 0x74) && ((pbVar4[7] | 0x20) == 0x79)) {
          pbVar5 = pbVar4 + 8;
        }
      }
    }
    else {
      uVar3 = 0;
    }
  }
  pbVar4 = pbVar5;
  if (param_2 != (int *)0x0) {
    *param_2 = (int)pbVar5;
  }
LAB_0801f25a:
  *param_1 = (int)pbVar4;
  return uVar3;
}



/* FUN_0801f264 at 0801f264 */

uint FUN_0801f264(byte *param_1,byte *param_2,undefined4 *param_3,int *param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  char local_59 [49];
  byte *local_28;
  
  local_28 = param_1;
  bVar1 = false;
  param_5 = param_5 * 9;
  if (0x2d < param_5) {
    param_5 = 0x2d;
  }
  bVar2 = false;
  *param_4 = 0;
  uVar6 = 0;
  param_4[1] = 0;
  for (; *param_2 == 0x30; param_2 = param_2 + 1) {
    bVar2 = true;
  }
  iVar4 = 0;
  for (; *param_2 - 0x30 < 10; param_2 = param_2 + 1) {
    if (iVar4 < param_5) {
      local_59[iVar4 + 1] = *param_2 - 0x30;
      iVar4 = iVar4 + 1;
    }
    else {
      *param_4 = *param_4 + 1;
      if (*param_2 != 0x30) {
        bVar1 = true;
      }
    }
    bVar2 = true;
  }
  if (*param_2 == 0x2e) {
    param_2 = param_2 + 1;
  }
  if (iVar4 == 0) {
    for (; *param_2 == 0x30; param_2 = param_2 + 1) {
      *param_4 = *param_4 + -1;
      bVar2 = true;
    }
  }
  while( true ) {
    bVar7 = *param_2;
    if (9 < bVar7 - 0x30) break;
    if (iVar4 < param_5) {
      local_59[iVar4 + 1] = bVar7 - 0x30;
      iVar4 = iVar4 + 1;
      *param_4 = *param_4 + -1;
    }
    else if (bVar7 != 0x30) {
      bVar1 = true;
    }
    param_2 = param_2 + 1;
    bVar2 = true;
  }
  if (bVar1) {
    local_59[param_5] = local_59[param_5] + '\x01';
  }
  for (; 0 < iVar4; iVar4 = iVar4 + -1) {
    if (local_59[iVar4] != '\0') goto LAB_0801f31c;
    *param_4 = *param_4 + 1;
  }
  if (iVar4 == 0) {
    local_59[1] = 0;
    iVar4 = 1;
  }
LAB_0801f31c:
  pbVar3 = param_2;
  if (bVar2) {
    iVar5 = (iVar4 / 9) * 9 + (9 - iVar4);
    uVar6 = (uint)(iVar5 != (iVar5 / 9) * 9);
    for (iVar8 = 0; iVar8 < iVar4; iVar8 = iVar8 + 1) {
      if (iVar5 == (iVar5 / 9) * 9) {
        uVar6 = uVar6 + 1;
        param_4[uVar6] = (uint)(byte)local_59[iVar8 + 1];
      }
      else {
        param_4[uVar6] = (uint)(byte)local_59[iVar8 + 1] + param_4[uVar6] * 10;
      }
      iVar5 = iVar5 + 1;
    }
    if ((*param_2 | 0x20) == 0x65) {
      pbVar3 = param_2 + 1;
      if (*pbVar3 == 0x2b || *pbVar3 == 0x2d) {
        bVar7 = *pbVar3;
        pbVar3 = param_2 + 2;
      }
      else {
        bVar7 = 0x2b;
      }
      bVar1 = false;
      iVar4 = 0;
      for (; *pbVar3 - 0x30 < 10; pbVar3 = pbVar3 + 1) {
        if (iVar4 < DAT_0801f428) {
          iVar4 = (uint)*pbVar3 + iVar4 * 10 + -0x30;
        }
        bVar1 = true;
      }
      if (bVar7 == 0x2d) {
        iVar4 = -iVar4;
      }
      *param_4 = *param_4 + iVar4;
      if (!bVar1) {
        pbVar3 = param_2;
      }
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    if (!bVar2) {
      pbVar3 = local_28;
    }
    *param_3 = pbVar3;
  }
  return uVar6;
}



/* FUN_0801f42c at 0801f42c */

uint FUN_0801f42c(byte *param_1,byte *param_2,undefined4 *param_3,int *param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  char acStack_59 [37];
  undefined1 *local_34;
  char *local_30;
  byte *local_2c;
  undefined4 *local_28;
  int *piStack_24;
  
  uVar5 = 0;
  *param_4 = 0;
  param_5 = param_5 * 7;
  if (0x23 < param_5) {
    param_5 = 0x23;
  }
  param_4[1] = 0;
  bVar2 = false;
  for (; *param_2 == 0x30; param_2 = param_2 + 1) {
    bVar2 = true;
  }
  iVar8 = 0;
  local_30 = s_0123456789abcdefABCDEF_0801f610;
  local_34 = &LAB_0801f628;
  local_2c = param_1;
  local_28 = param_3;
  piStack_24 = param_4;
  while (iVar3 = FUN_0801c730(s_0123456789abcdefABCDEF_0801f610,*param_2,0x16), iVar3 != 0) {
    if (param_5 < iVar8) {
      *param_4 = *param_4 + 1;
    }
    else {
      acStack_59[iVar8 + 1] = local_34[iVar3 - (int)local_30];
      iVar8 = iVar8 + 1;
    }
    param_2 = param_2 + 1;
    bVar2 = true;
  }
  if (*param_2 == 0x2e) {
    param_2 = param_2 + 1;
  }
  if (iVar8 == 0) {
    for (; *param_2 == 0x30; param_2 = param_2 + 1) {
      *param_4 = *param_4 + -1;
      bVar2 = true;
    }
  }
  while (iVar3 = FUN_0801c730(s_0123456789abcdefABCDEF_0801f610,*param_2,0x16), iVar3 != 0) {
    if (iVar8 <= param_5) {
      acStack_59[iVar8 + 1] = *(char *)(iVar3 + 0x18);
      iVar8 = iVar8 + 1;
      *param_4 = *param_4 + -1;
    }
    param_2 = param_2 + 1;
    bVar2 = true;
  }
  if (param_5 < iVar8) {
    if (7 < (byte)acStack_59[param_5 + 1]) {
      acStack_59[param_5] = acStack_59[param_5] + '\x01';
    }
    *param_4 = *param_4 + 1;
    iVar8 = param_5;
  }
  for (; 0 < iVar8; iVar8 = iVar8 + -1) {
    if (acStack_59[iVar8] != '\0') goto LAB_0801f500;
    *param_4 = *param_4 + 1;
  }
  if (iVar8 == 0) {
    acStack_59[1] = 0;
    iVar8 = 1;
  }
LAB_0801f500:
  *param_4 = *param_4 << 2;
  pbVar4 = param_2;
  if (bVar2) {
    iVar7 = (7 - iVar8) + (iVar8 / 7) * 7;
    uVar5 = (uint)(iVar7 != (iVar7 / 7) * 7);
    for (iVar3 = 0; iVar3 < iVar8; iVar3 = iVar3 + 1) {
      uVar6 = (uint)(byte)acStack_59[iVar3 + 1];
      if (iVar7 % 7 == 0) {
        uVar5 = uVar5 + 1;
      }
      else {
        uVar6 = uVar6 + param_4[uVar5] * 0x10;
      }
      param_4[uVar5] = uVar6;
      iVar7 = iVar7 + 1;
    }
    if ((*param_2 | 0x20) == 0x70) {
      pbVar4 = param_2 + 1;
      if (*pbVar4 == 0x2b || *pbVar4 == 0x2d) {
        bVar9 = *pbVar4;
        pbVar4 = param_2 + 2;
      }
      else {
        bVar9 = 0x2b;
      }
      bVar1 = false;
      iVar8 = 0;
      for (; *pbVar4 - 0x30 < 10; pbVar4 = pbVar4 + 1) {
        if (iVar8 < DAT_0801f60c) {
          iVar8 = (uint)*pbVar4 + iVar8 * 10 + -0x30;
        }
        bVar1 = true;
      }
      if (bVar9 == 0x2d) {
        iVar8 = -iVar8;
      }
      *param_4 = iVar8 + *param_4;
      if (!bVar1) {
        pbVar4 = param_2;
      }
    }
  }
  if (local_28 != (undefined4 *)0x0) {
    if (!bVar2) {
      pbVar4 = local_2c;
    }
    *local_28 = pbVar4;
  }
  return uVar5;
}



/* FUN_0801f640 at 0801f640 */

void FUN_0801f640(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*param_1 != 0x50000000) {
    return;
  }
  uStack_1c = 0x1c00;
  uStack_18 = 2;
  uStack_14 = 0;
  uStack_10 = 3;
  uStack_c = 10;
  FUN_08014fe4(DAT_0801f7b4,&uStack_1c);
  puVar1 = DAT_0801f7b8;
  *DAT_0801f7b8 = *DAT_0801f7b8 | 0x80;
  puVar1[4] = puVar1[4] | 0x4000;
  FUN_080202a4(0x43,6,0,param_4,puVar1[4] & 0x4000);
  FUN_080202de(0x43);
  return;
}



/* FUN_0801f64a at 0801f64a */

void FUN_0801f64a(void)

{
  uint *puVar1;
  undefined4 in_r3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_1c = 0x1c00;
  local_18 = 2;
  local_14 = 0;
  local_10 = 3;
  local_c = 10;
  FUN_08014fe4(DAT_0801f7b4,&local_1c);
  puVar1 = DAT_0801f7b8;
  *DAT_0801f7b8 = *DAT_0801f7b8 | 0x80;
  puVar1[4] = puVar1[4] | 0x4000;
  FUN_080202a4(0x43,6,0,in_r3,puVar1[4] & 0x4000);
  FUN_080202de(0x43);
  return;
}



/* FUN_0801f69e at 0801f69e */

void FUN_0801f69e(int param_1)

{
  FUN_080203b8(*(undefined4 *)(param_1 + 0x3ec),param_1 + 0x3bc);
  return;
}



/* FUN_0801f6aa at 0801f6aa */

void FUN_0801f6aa(int param_1,int param_2)

{
  FUN_0802040e(*(undefined4 *)(param_1 + 0x3ec),param_2,
               *(undefined4 *)(param_1 + param_2 * 0x1c + 0x204));
  return;
}



/* FUN_0801f6be at 0801f6be */

void FUN_0801f6be(int param_1,int param_2)

{
  FUN_08020470(*(undefined4 *)(param_1 + 0x3ec),param_2,
               *(undefined4 *)(param_1 + param_2 * 0x1c + 0x44));
  return;
}



/* FUN_0801f6d0 at 0801f6d0 */

longlong FUN_0801f6d0(int param_1)

{
  code *pcVar1;
  uint unaff_r7;
  
  if ((*(char *)(*(int *)(param_1 + 0x3ec) + 0x1fc) == '\x03') &&
     (pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x3ec) + 0x214) + 0x1c), pcVar1 != (code *)0x0
     )) {
    (*pcVar1)();
  }
  return (ulonglong)unaff_r7 << 0x20;
}



/* FUN_0801f6d8 at 0801f6d8 */

void FUN_0801f6d8(int param_1)

{
  *(bool *)(*(int *)(param_1 + 0x3ec) + 0x10) = *(int *)(param_1 + 0xc) != 0;
  FUN_08020504(*(undefined4 *)(param_1 + 0x3ec));
  return;
}



/* FUN_0801f6f8 at 0801f6f8 */

void FUN_0801f6f8(int *param_1)

{
  FUN_08020548(param_1[0xfb]);
  *(uint *)(*param_1 + 0xe00) = *(uint *)(*param_1 + 0xe00) | 1;
  if (param_1[8] != 0) {
    *DAT_0801f7bc = *DAT_0801f7bc | 6;
  }
  return;
}



/* FUN_0801f722 at 0801f722 */

undefined4 FUN_0801f722(int param_1)

{
  *(undefined1 *)(*(int *)(param_1 + 0x3ec) + 0x1fc) =
       *(undefined1 *)(*(int *)(param_1 + 0x3ec) + 0x1fd);
  return 0;
}



/* FUN_0801f72a at 0801f72a */

undefined4 FUN_0801f72a(void)

{
  return 0;
}



/* FUN_0801f732 at 0801f732 */

undefined4 FUN_0801f732(void)

{
  return 0;
}



/* FUN_0801f73a at 0801f73a */

undefined4 FUN_0801f73a(void)

{
  return 0;
}



/* FUN_0801f742 at 0801f742 */

void FUN_0801f742(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3ec);
  *(undefined1 *)(iVar1 + 0x1fc) = 1;
  FUN_08020374(iVar1,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 0x214));
  *DAT_080205a8 = 0;
  return;
}



/* FUN_0801f74c at 0801f74c */

undefined4 FUN_0801f74c(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_0801f7c0;
  if (*param_1 == '\0') {
    DAT_0801f7c0[0xfb] = param_1;
    *(undefined4 **)(param_1 + 0x220) = puVar1;
    *puVar1 = 0x50000000;
    puVar1[1] = 4;
    puVar1[3] = 2;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 2;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    iVar2 = FUN_080205ac(puVar1);
    if (iVar2 != 0) {
      FUN_080211ac(s_E__MM32_F401_MARLIN_V2_HAL_src_u_0801f8c4,0x14c);
    }
    FUN_080211f0(puVar1,0x80);
    FUN_080211ae(puVar1,0,0x40);
    FUN_080211ae(puVar1,1,0x80);
  }
  return 0;
}



/* FUN_0801f7c4 at 0801f7c4 */

undefined1 FUN_0801f7c4(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = FUN_0802065a(*(undefined4 *)(param_1 + 0x220));
  uVar2 = 0;
  if ((iVar1 != 0) && (uVar2 = iVar1 == 2, !(bool)uVar2)) {
    uVar2 = 2;
  }
  return uVar2;
}



/* FUN_0801f7de at 0801f7de */

undefined8 FUN_0801f7de(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_08020b6a(*(undefined4 *)(param_1 + 0x220),param_2,param_4,param_3);
  uVar2 = 0;
  if ((iVar1 != 0) && (uVar2 = (uint)(iVar1 == 2), iVar1 != 2)) {
    uVar2 = 2;
  }
  return CONCAT44(param_4,uVar2);
}



/* FUN_0801f7fe at 0801f7fe */

undefined1 FUN_0801f7fe(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = FUN_08020bbe(*(undefined4 *)(param_1 + 0x220));
  uVar2 = 0;
  if ((iVar1 != 0) && (uVar2 = iVar1 == 2, !(bool)uVar2)) {
    uVar2 = 2;
  }
  return uVar2;
}



/* FUN_0801f818 at 0801f818 */

undefined1 FUN_0801f818(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = FUN_08020c68(*(undefined4 *)(param_1 + 0x220));
  uVar2 = 0;
  if ((iVar1 != 0) && (uVar2 = iVar1 == 2, !(bool)uVar2)) {
    uVar2 = 2;
  }
  return uVar2;
}



/* FUN_0801f832 at 0801f832 */

undefined1 FUN_0801f832(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = FUN_08020cc6(*(undefined4 *)(param_1 + 0x220));
  uVar2 = 0;
  if ((iVar1 != 0) && (uVar2 = iVar1 == 2, !(bool)uVar2)) {
    uVar2 = 2;
  }
  return uVar2;
}



/* FUN_0801f84c at 0801f84c */

undefined1 FUN_0801f84c(int param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x220) + (param_2 & 0x7f) * 0x1c;
  if ((int)(param_2 << 0x18) < 0) {
    uVar1 = *(undefined1 *)(iVar2 + 0x3a);
  }
  else {
    uVar1 = *(undefined1 *)(iVar2 + 0x1fa);
  }
  return uVar1;
}



/* FUN_0801f86c at 0801f86c */

undefined1 FUN_0801f86c(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = FUN_08020b50(*(undefined4 *)(param_1 + 0x220));
  uVar2 = 0;
  if ((iVar1 != 0) && (uVar2 = iVar1 == 2, !(bool)uVar2)) {
    uVar2 = 2;
  }
  return uVar2;
}



/* FUN_0801f886 at 0801f886 */

undefined1 FUN_0801f886(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = FUN_08020c18(*(undefined4 *)(param_1 + 0x220));
  uVar2 = 0;
  if ((iVar1 != 0) && (uVar2 = iVar1 == 2, !(bool)uVar2)) {
    uVar2 = 2;
  }
  return uVar2;
}



/* FUN_0801f8a0 at 0801f8a0 */

undefined1 FUN_0801f8a0(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = FUN_08020bea(*(undefined4 *)(param_1 + 0x220));
  uVar2 = 0;
  if ((iVar1 != 0) && (uVar2 = iVar1 == 2, !(bool)uVar2)) {
    uVar2 = 2;
  }
  return uVar2;
}



/* thunk_FUN_080178ba at 0801f8f0 */

longlong thunk_FUN_080178ba(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  bool bVar14;
  
  puVar1 = DAT_08017db0;
  if (param_1 == 0) {
    return (ulonglong)param_2 << 0x20;
  }
  puVar10 = (uint *)(param_1 + -8);
  puVar6 = (uint *)DAT_08017db0[4];
  if ((puVar10 < puVar6) || (uVar2 = *(uint *)(param_1 + -4), (uVar2 & 3) == 1)) {
LAB_08017d8a:
    FUN_0801e7a6();
    goto code_r0x08017d92;
  }
  uVar12 = uVar2 & 0xfffffff8;
  puVar11 = (uint *)((int)puVar10 + uVar12);
  if ((int)(uVar2 << 0x1f) < 0) goto LAB_08017966;
  uVar9 = *puVar10;
  if ((uVar2 & 3) == 0) goto code_r0x08017d92;
  puVar10 = (uint *)((int)puVar10 - uVar9);
  uVar12 = uVar12 + uVar9;
  if (puVar10 < puVar6) goto LAB_08017d8a;
  puVar3 = (uint *)DAT_08017db0[5];
  if (puVar10 == puVar3) {
    if ((puVar11[1] & 3) != 3) goto LAB_08017966;
    DAT_08017db0[2] = uVar12;
    puVar11[1] = puVar11[1] & 0xfffffffe;
    puVar10[1] = uVar12 | 1;
LAB_08017ada:
    *(uint *)((int)puVar10 + uVar12) = uVar12;
    goto code_r0x08017d92;
  }
  uVar9 = uVar9 >> 3;
  if (uVar9 < 0x20) {
    puVar3 = (uint *)puVar10[3];
    puVar6 = (uint *)puVar10[2];
    if (puVar10 == puVar3) {
      FUN_0801e7a6();
    }
    if (puVar10 == puVar6) {
      FUN_0801e7a6();
    }
    if ((puVar10[1] & 0xfffffff8) != uVar9 * 8) {
      FUN_0801e7a6();
    }
    if ((puVar6 != puVar1 + uVar9 * 2 + 10) &&
       ((puVar6 < (uint *)puVar1[4] || ((uint *)puVar6[3] != puVar10)))) goto LAB_080179ce;
    if (puVar3 == puVar6) {
      *puVar1 = *puVar1 & ~(1 << (uVar9 & 0xff));
    }
    else {
      if ((puVar3 != puVar1 + uVar9 * 2 + 10) &&
         ((puVar3 < (uint *)puVar1[4] || ((uint *)puVar3[2] != puVar10)))) goto LAB_080179ce;
      puVar6[3] = (uint)puVar3;
      puVar3[2] = (uint)puVar6;
    }
  }
  else {
    puVar4 = (uint *)puVar10[3];
    uVar2 = puVar10[6];
    if (puVar4 == puVar10) {
      puVar4 = (uint *)puVar10[5];
      puVar7 = puVar10 + 5;
      if (puVar4 == (uint *)0x0) {
        puVar7 = puVar10 + 4;
        puVar4 = (uint *)*puVar7;
        if (puVar4 == (uint *)0x0) goto LAB_08017a2e;
      }
      while( true ) {
        puVar13 = puVar4 + 5;
        uVar9 = *puVar13;
        if (uVar9 == 0) {
          puVar13 = puVar4 + 4;
          puVar3 = (uint *)*puVar13;
        }
        if (uVar9 == 0 && puVar3 == (uint *)0x0) break;
        puVar4 = (uint *)*puVar13;
        puVar7 = puVar13;
      }
      if (puVar7 < puVar6) goto LAB_08017a2a;
      *puVar7 = uVar9;
    }
    else {
      puVar3 = (uint *)puVar10[2];
      if (puVar6 <= puVar3) {
        puVar6 = (uint *)puVar3[3];
        bVar14 = puVar6 == puVar10;
        if (bVar14) {
          puVar6 = (uint *)puVar4[2];
        }
        if (bVar14 && puVar6 == puVar10) {
          puVar3[3] = (uint)puVar4;
          puVar4[2] = (uint)puVar3;
          goto LAB_08017a2e;
        }
      }
LAB_08017a2a:
      FUN_0801e7a6();
    }
LAB_08017a2e:
    if (uVar2 != 0) {
      if (puVar10 == (uint *)puVar1[puVar10[7] + 0x4c]) {
        puVar1[puVar10[7] + 0x4c] = (uint)puVar4;
        if (puVar4 == (uint *)0x0) {
          puVar1[1] = puVar1[1] & ~(1 << (puVar10[7] & 0xff));
          goto LAB_08017966;
        }
      }
      else if (uVar2 < puVar1[4]) {
        FUN_0801e7a6();
      }
      else {
        bVar14 = *(uint **)(uVar2 + 0x10) != puVar10;
        if (bVar14) {
          *(uint **)(uVar2 + 0x14) = puVar4;
        }
        if (!bVar14) {
          *(uint **)(uVar2 + 0x10) = puVar4;
        }
      }
      if (puVar4 != (uint *)0x0) {
        puVar6 = (uint *)puVar1[4];
        if (puVar4 < puVar6) {
LAB_080179ce:
          FUN_0801e7a6();
        }
        else {
          puVar4[6] = uVar2;
          puVar3 = (uint *)puVar10[4];
          if (puVar3 != (uint *)0x0) {
            if (puVar6 <= puVar3) {
              puVar4[4] = (uint)puVar3;
            }
            if (puVar6 <= puVar3) {
              puVar3[6] = (uint)puVar4;
            }
            else {
              FUN_0801e7a6();
            }
          }
          uVar2 = puVar10[5];
          if (uVar2 != 0) {
            if (uVar2 < puVar1[4]) goto LAB_080179ce;
            puVar4[5] = uVar2;
            *(uint **)(uVar2 + 0x18) = puVar4;
          }
        }
      }
    }
  }
LAB_08017966:
  if ((puVar11 <= puVar10) || (uVar2 = puVar11[1], -1 < (int)(uVar2 << 0x1f))) goto LAB_08017d8a;
  if ((int)(uVar2 << 0x1e) < 0) {
    puVar11[1] = uVar2 & 0xfffffffe;
    puVar10[1] = uVar12 | 1;
    *(uint *)((int)puVar10 + uVar12) = uVar12;
  }
  else {
    if (puVar11 == (uint *)puVar1[6]) {
      puVar1[6] = (uint)puVar10;
      uVar12 = uVar12 + puVar1[3];
      puVar1[3] = uVar12;
      puVar10[1] = uVar12 | 1;
      if (puVar10 == (uint *)puVar1[5]) {
        puVar1[5] = 0;
        puVar1[2] = 0;
      }
      if (puVar1[7] < uVar12) {
        FUN_08017000(puVar1,0);
      }
      goto code_r0x08017d92;
    }
    puVar6 = (uint *)puVar1[5];
    if (puVar11 == puVar6) {
      puVar1[5] = (uint)puVar10;
      uVar12 = uVar12 + puVar1[2];
      puVar1[2] = uVar12;
      puVar10[1] = uVar12 | 1;
      goto LAB_08017ada;
    }
    uVar12 = uVar12 + (uVar2 & 0xfffffff8);
    uVar2 = uVar2 >> 3;
    if (uVar2 < 0x20) {
      puVar3 = (uint *)puVar11[3];
      puVar6 = (uint *)puVar11[2];
      if (puVar11 == puVar3) {
        FUN_0801e7a6();
      }
      if (puVar11 == puVar6) {
        FUN_0801e7a6();
      }
      if ((puVar11[1] & 0xfffffff8) != uVar2 * 8) {
        FUN_0801e7a6();
      }
      if ((puVar6 != puVar1 + uVar2 * 2 + 10) &&
         ((puVar6 < (uint *)puVar1[4] || ((uint *)puVar6[3] != puVar11)))) goto LAB_08017c32;
      if (puVar3 == puVar6) {
        *puVar1 = *puVar1 & ~(1 << (uVar2 & 0xff));
      }
      else {
        if ((puVar3 != puVar1 + uVar2 * 2 + 10) &&
           ((puVar3 < (uint *)puVar1[4] || ((uint *)puVar3[2] != puVar11)))) goto LAB_08017c32;
        puVar6[3] = (uint)puVar3;
        puVar3[2] = (uint)puVar6;
      }
    }
    else {
      puVar3 = (uint *)puVar11[3];
      uVar2 = puVar11[6];
      if (puVar3 == puVar11) {
        puVar3 = (uint *)puVar11[5];
        puVar4 = puVar11 + 5;
        if (puVar3 == (uint *)0x0) {
          puVar4 = puVar11 + 4;
          puVar3 = (uint *)*puVar4;
          if (puVar3 == (uint *)0x0) goto LAB_08017bc2;
        }
        while( true ) {
          puVar7 = puVar3 + 5;
          uVar9 = *puVar7;
          if (uVar9 == 0) {
            puVar7 = puVar3 + 4;
            puVar6 = (uint *)*puVar7;
          }
          if (uVar9 == 0 && puVar6 == (uint *)0x0) break;
          puVar3 = (uint *)*puVar7;
          puVar4 = puVar7;
        }
        if (puVar4 < (uint *)puVar1[4]) goto LAB_08017bbe;
        *puVar4 = (uint)puVar6;
      }
      else {
        uVar9 = puVar11[2];
        if (puVar1[4] <= uVar9) {
          puVar6 = *(uint **)(uVar9 + 0xc);
          bVar14 = puVar6 == puVar11;
          if (bVar14) {
            puVar6 = (uint *)puVar3[2];
          }
          if (bVar14 && puVar6 == puVar11) {
            *(uint **)(uVar9 + 0xc) = puVar3;
            puVar3[2] = uVar9;
            goto LAB_08017bc2;
          }
        }
LAB_08017bbe:
        FUN_0801e7a6();
      }
LAB_08017bc2:
      if (uVar2 != 0) {
        if (puVar11 == (uint *)puVar1[puVar11[7] + 0x4c]) {
          puVar1[puVar11[7] + 0x4c] = (uint)puVar3;
          if (puVar3 == (uint *)0x0) {
            puVar1[1] = puVar1[1] & ~(1 << (puVar11[7] & 0xff));
            goto LAB_08017c36;
          }
        }
        else if (uVar2 < puVar1[4]) {
          FUN_0801e7a6();
        }
        else {
          bVar14 = *(uint **)(uVar2 + 0x10) != puVar11;
          if (bVar14) {
            *(uint **)(uVar2 + 0x14) = puVar3;
          }
          if (!bVar14) {
            *(uint **)(uVar2 + 0x10) = puVar3;
          }
        }
        if (puVar3 != (uint *)0x0) {
          puVar6 = (uint *)puVar1[4];
          if (puVar3 < puVar6) {
LAB_08017c32:
            FUN_0801e7a6();
          }
          else {
            puVar3[6] = uVar2;
            puVar4 = (uint *)puVar11[4];
            if (puVar4 != (uint *)0x0) {
              if (puVar6 <= puVar4) {
                puVar3[4] = (uint)puVar4;
              }
              if (puVar6 <= puVar4) {
                puVar4[6] = (uint)puVar3;
              }
              else {
                FUN_0801e7a6();
              }
            }
            uVar2 = puVar11[5];
            if (uVar2 != 0) {
              if (uVar2 < puVar1[4]) goto LAB_08017c32;
              puVar3[5] = uVar2;
              *(uint **)(uVar2 + 0x18) = puVar3;
            }
          }
        }
      }
    }
LAB_08017c36:
    puVar10[1] = uVar12 | 1;
    *(uint *)((int)puVar10 + uVar12) = uVar12;
    if (puVar10 == (uint *)puVar1[5]) {
      puVar1[2] = uVar12;
      goto code_r0x08017d92;
    }
  }
  uVar2 = uVar12 >> 3;
  if (uVar2 < 0x20) {
    puVar6 = puVar1 + uVar2 * 2 + 10;
    if (uVar12 < 0x10) {
      FUN_0801e7a6();
    }
    if ((int)((*puVar1 >> (uVar2 & 0xff)) << 0x1f) < 0) {
      puVar11 = (uint *)puVar6[2];
      if (puVar11 < (uint *)puVar1[4]) {
        FUN_0801e7a6();
        puVar11 = puVar6;
      }
    }
    else {
      *puVar1 = 1 << (uVar2 & 0xff) | *puVar1;
      puVar11 = puVar6;
    }
    puVar6[2] = (uint)puVar10;
    puVar11[3] = (uint)puVar10;
    puVar10[2] = (uint)puVar11;
    puVar10[3] = (uint)puVar6;
    goto code_r0x08017d92;
  }
  uVar2 = uVar12 >> 8;
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else if (uVar2 < 0x10000) {
    uVar9 = uVar2 - 0x100 >> 0x10 & 8;
    iVar5 = uVar2 << uVar9;
    uVar2 = iVar5 - 0x1000U >> 0x10 & 4;
    iVar5 = iVar5 << uVar2;
    uVar8 = iVar5 - 0x4000U >> 0x10 & 2;
    iVar5 = (((0xe - uVar9) - uVar2) - uVar8) + ((uint)(iVar5 << uVar8) >> 0xf);
    uVar2 = (uVar12 >> (iVar5 + 7U & 0xff) & 1) + iVar5 * 2;
  }
  else {
    uVar2 = 0x1f;
  }
  puVar6 = puVar1 + uVar2 + 0x4c;
  puVar10[5] = 0;
  puVar10[4] = 0;
  puVar10[7] = uVar2;
  if ((int)((puVar1[1] >> (uVar2 & 0xff)) << 0x1f) < 0) {
    uVar9 = uVar12;
    uVar8 = *puVar6;
    if (uVar2 != 0x1f) {
      uVar9 = uVar12 << (0x19 - (uVar2 >> 1) & 0xff);
    }
    do {
      uVar2 = uVar8;
      if ((*(uint *)(uVar2 + 4) & 0xfffffff8) == uVar12) {
        uVar12 = *(uint *)(uVar2 + 8);
        if (uVar2 < puVar1[4] || uVar12 < puVar1[4]) goto LAB_08017d6a;
        *(uint **)(uVar12 + 0xc) = puVar10;
        *(uint **)(uVar2 + 8) = puVar10;
        puVar10[2] = uVar12;
        puVar10[3] = uVar2;
        puVar10[6] = 0;
        goto LAB_08017d6e;
      }
      puVar6 = (uint *)(uVar2 + 0x10 + ((int)uVar9 >> 0x1f) * -4);
      uVar9 = uVar9 << 1;
      uVar8 = *puVar6;
    } while (*puVar6 != 0);
    if ((uint *)puVar1[4] <= puVar6) {
      *puVar6 = (uint)puVar10;
      puVar10[6] = uVar2;
      goto LAB_08017d64;
    }
LAB_08017d6a:
    FUN_0801e7a6();
  }
  else {
    puVar1[1] = 1 << (uVar2 & 0xff) | puVar1[1];
    *puVar6 = (uint)puVar10;
    puVar10[6] = (uint)puVar6;
LAB_08017d64:
    puVar10[3] = (uint)puVar10;
    puVar10[2] = (uint)puVar10;
  }
LAB_08017d6e:
  uVar2 = puVar1[8];
  puVar1[8] = uVar2 - 1;
  if (uVar2 - 1 == 0) {
    for (uVar2 = puVar1[0x72]; uVar2 != 0; uVar2 = *(uint *)(uVar2 + 8)) {
    }
    puVar1[8] = 0xffffffff;
  }
code_r0x08017d92:
  return CONCAT44(param_4,param_3);
}



/* FUN_0801f8f4 at 0801f8f4 */

longlong FUN_0801f8f4(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint unaff_r7;
  
  *(undefined4 *)(param_1 + 500) = 2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  FUN_0801f886(param_1,0,param_2);
  return (ulonglong)unaff_r7 << 0x20;
}



/* FUN_0801f904 at 0801f904 */

longlong FUN_0801f904(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint unaff_r7;
  
  FUN_0801f886(param_1,0,param_2,param_3);
  return (ulonglong)unaff_r7 << 0x20;
}



/* FUN_0801f914 at 0801f914 */

longlong FUN_0801f914(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint unaff_r7;
  
  *(undefined4 *)(param_1 + 500) = 3;
  *(undefined4 *)(param_1 + 0x108) = param_3;
  *(undefined4 *)(param_1 + 0x10c) = param_3;
  FUN_0801f8a0(param_1,0,param_2);
  return (ulonglong)unaff_r7 << 0x20;
}



/* FUN_0801f928 at 0801f928 */

longlong FUN_0801f928(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint unaff_r7;
  
  FUN_0801f8a0(param_1,0,param_2,param_3);
  return (ulonglong)unaff_r7 << 0x20;
}



/* FUN_0801f938 at 0801f938 */

longlong FUN_0801f938(int param_1)

{
  uint unaff_r7;
  
  *(undefined4 *)(param_1 + 500) = 4;
  FUN_0801f886(param_1,0,0,0);
  return (ulonglong)unaff_r7 << 0x20;
}



/* FUN_0801f946 at 0801f946 */

longlong FUN_0801f946(int param_1)

{
  uint unaff_r7;
  
  *(undefined4 *)(param_1 + 500) = 5;
  FUN_0801f8a0(param_1,0,0,0);
  return (ulonglong)unaff_r7 << 0x20;
}



/* FUN_0801f954 at 0801f954 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0801f954(char *param_1)

{
  undefined4 unaff_r7;
  
  if (param_1 == (char *)0x0) {
    param_1 = s_constraint_handler__bad_message_0801f973 + 1;
  }
  if ((code *)*_DAT_0801f970 == (code *)0x0) {
    FUN_0801e7a6(param_1);
  }
  else {
    (*(code *)*_DAT_0801f970)(param_1,0,0x22);
  }
  return CONCAT44(unaff_r7,0x22);
}



/* FUN_0801f994 at 0801f994 */

uint FUN_0801f994(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (!CARRY4(param_2,param_2)) {
    uVar2 = param_2 * 2 >> 0x15;
    iVar3 = uVar2 - 0x3ff;
    uVar1 = param_1 >> 0x15 | param_2 << 0xb | 0x80000000;
    if (iVar3 < 0 == SCARRY4(uVar2 - 0x400,1)) {
      uVar2 = 0x1f - iVar3;
      if ((int)uVar2 < 0) {
        uVar1 = (int)uVar1 >> 0x1f;
      }
      else {
        uVar1 = uVar1 >> (uVar2 & 0xff);
      }
      return uVar1;
    }
  }
  return 0;
}



/* FUN_0801f9bc at 0801f9bc */

void FUN_0801f9bc(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0801f9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(DAT_0801fa2c + param_1 * 4 + 4) + 4))
            (*(undefined1 *)(DAT_0801fa2c + param_1 + 8));
  return;
}



/* FUN_0801f9ce at 0801f9ce */

undefined4 FUN_0801f9ce(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_0801fa2c;
  if (*(char *)(DAT_0801fa2c + param_1) == '\0') {
    *(undefined1 *)(DAT_0801fa2c + param_1) = 1;
                    /* WARNING: Could not recover jumptable at 0x0801f9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)**(undefined4 **)(iVar1 + param_1 * 4 + 4))
                      (*(undefined1 *)(iVar1 + param_1 + 8));
    return uVar2;
  }
  return 0;
}



/* FUN_0801f9ec at 0801f9ec */

void FUN_0801f9ec(void)

{
  int unaff_r5;
  
  FUN_0801fa04();
  (**(code **)(unaff_r5 + 8))();
  return;
}



/* FUN_0801f9f8 at 0801f9f8 */

void FUN_0801f9f8(void)

{
  int unaff_r5;
  
  FUN_0801fa04();
  (**(code **)(unaff_r5 + 0xc))();
  return;
}



/* FUN_0801fa04 at 0801fa04 */

undefined1 FUN_0801fa04(int param_1)

{
  return *(undefined1 *)(DAT_0801fa2c + param_1 + 8);
}



/* FUN_0801fa14 at 0801fa14 */

void FUN_0801fa14(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0801fa2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(DAT_0801fa2c + param_1 * 4 + 4) + 0x10))
            (*(undefined1 *)(DAT_0801fa2c + param_1 + 8));
  return;
}



/* FUN_0801fa30 at 0801fa30 */

void FUN_0801fa30(void)

{
  do {
    software_bkpt(0xab);
  } while( true );
}



/* FUN_0801fa3c at 0801fa3c */

longlong FUN_0801fa3c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char *pcVar1;
  
  if (param_1 == 0) {
    return CONCAT44(param_4,1);
  }
  pcVar1 = (char *)(param_1 + 0x34);
  if (*pcVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x1c) = 0;
    FUN_08021348(param_1);
  }
  *pcVar1 = '\x03';
  FUN_0801fa72(param_1);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *pcVar1 = '\x01';
  return (ulonglong)param_4 << 0x20;
}



/* FUN_0801fa72 at 0801fa72 */

uint FUN_0801fa72(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x76;
  FUN_0800f64c(&uStack_3c,&local_24,0x18);
  puVar1 = DAT_0801fe10;
  FUN_08021618(*param_1,uStack_3c,uStack_38,uStack_34);
  *puVar1 = 0;
  FUN_0802164e(*param_1);
  *puVar1 = 1;
  uVar2 = FUN_080201b8(param_1);
  if ((uVar2 != 0) || (uVar2 = FUN_080200e4(param_1), uVar2 != 0)) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    param_1[0xe] = uVar2 | param_1[0xe];
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_0801fad2 at 0801fad2 */

longlong FUN_0801fad2(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  if (param_1 == (undefined4 *)0x0) {
    return CONCAT44(param_4,1);
  }
  *(undefined1 *)(param_1 + 0xd) = 3;
  FUN_08021652(*param_1);
  FUN_0802140e(param_1);
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return (ulonglong)param_4 << 0x20;
}



/* FUN_0801fc72 at 0801fc72 */

undefined4 FUN_0801fc72(int *param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar1 = FUN_0801c724();
  piVar4 = param_1 + 0xd;
  if (param_2 == 0) {
    uVar2 = param_1[0xe] | 0x8000000;
  }
  else if ((char)*piVar4 == '\x01') {
    param_1[0xe] = 0;
    cVar5 = param_1[0x17] == param_4 + param_3;
    if (param_4 + param_3 <= (uint)param_1[0x17]) {
      FUN_0801fde0();
      if (cVar5 == '\0') {
        param_3 = param_3 << 9;
      }
      iVar3 = FUN_080216c2();
      if (iVar3 == 0) {
        if (param_4 < 2) {
          param_1[0xc] = 0x10;
          iVar3 = FUN_080216fe(*param_1,param_3);
        }
        else {
          param_1[0xc] = 0x20;
          iVar3 = FUN_08021712(*param_1,param_3);
        }
        if (iVar3 == 0) {
          local_38 = param_4 << 9;
          local_3c = 5000;
          local_30 = 0;
          local_2c = 0;
          local_34 = 0x90;
          local_28 = 1;
          FUN_08021698(*param_1,&local_3c);
          while (iVar3 = *param_1, (*(uint *)(iVar3 + 0x34) & 0x31a) == 0) {
            if (*(int *)(iVar3 + 0x34) << 0x11 < 0) {
              uVar2 = 0;
              do {
                FUN_08021644(*param_1,param_2 + uVar2 * 4);
                uVar2 = uVar2 + 1;
              } while (uVar2 < 8);
              param_2 = param_2 + 0x20;
            }
            if ((param_5 == 0) || (iVar3 = FUN_0801c724(), param_5 <= (uint)(iVar3 - iVar1))) {
              *(undefined4 *)(*param_1 + 0x38) = 0x5ff;
              param_1[0xe] = param_1[0xe];
              *(char *)piVar4 = '\x01';
              return 3;
            }
          }
          if ((((-1 < *(int *)(iVar3 + 0x34) << 0x17) || (param_4 < 2)) || (param_1[0x11] == 3)) ||
             (iVar1 = FUN_0802173e(), iVar1 == 0)) {
            iVar1 = *param_1;
            if (*(int *)(iVar1 + 0x34) << 0x1c < 0) {
              *(undefined4 *)(iVar1 + 0x38) = 0x5ff;
              uVar2 = param_1[0xe] | 8;
            }
            else if (*(int *)(iVar1 + 0x34) << 0x1e < 0) {
              *(undefined4 *)(iVar1 + 0x38) = 0x5ff;
              uVar2 = param_1[0xe] | 2;
            }
            else {
              *(undefined4 *)(iVar1 + 0x38) = 0x5ff;
              if (-1 < *(int *)(iVar1 + 0x34) << 0x1b) {
                *(char *)piVar4 = '\x01';
                return 0;
              }
              uVar2 = param_1[0xe] | 0x10;
            }
            param_1[0xe] = uVar2;
            *(char *)piVar4 = '\x01';
            return 1;
          }
        }
      }
      FUN_0801fdd4();
      *(char *)piVar4 = '\x01';
      return 1;
    }
    uVar2 = param_1[0xe] | 0x2000000;
  }
  else {
    uVar2 = param_1[0xe] | 0x20000000;
  }
  param_1[0xe] = uVar2;
  return 1;
}



/* FUN_0801fdd4 at 0801fdd4 */

void FUN_0801fdd4(uint param_1)

{
  int *unaff_r4;
  int unaff_r6;
  undefined4 unaff_r7;
  
  *(undefined4 *)(*unaff_r4 + 0x38) = unaff_r7;
  *(uint *)(unaff_r6 + 4) = param_1 | *(uint *)(unaff_r6 + 4);
  return;
}



/* FUN_0801fde0 at 0801fde0 */

undefined8 FUN_0801fde0(void)

{
  int *unaff_r4;
  undefined1 *unaff_r6;
  
  *unaff_r6 = 3;
  *(undefined4 *)(*unaff_r4 + 0x2c) = 0;
  return CONCAT44(0x200,*unaff_r4);
}



/* FUN_0801fdf6 at 0801fdf6 */

void FUN_0801fdf6(void)

{
  undefined4 *unaff_r4;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  
  uStack00000008 = 0x90;
  uStack0000000c = 2;
  uStack00000010 = 0;
  uStack00000014 = 1;
  FUN_08021698(*unaff_r4);
  return;
}



/* FUN_0801fe14 at 0801fe14 */

undefined4 FUN_0801fe14(int param_1,undefined1 *param_2)

{
  int iVar1;
  
  *param_2 = (char)((uint)*(undefined4 *)(param_1 + 0x74) >> 0x18);
  *(short *)(param_2 + 2) = (short)(((uint)(*(int *)(param_1 + 0x74) << 8) >> 0x18) << 8);
  *(ushort *)(param_2 + 2) =
       *(ushort *)(param_2 + 2) | (ushort)(byte)((uint)*(undefined4 *)(param_1 + 0x74) >> 8);
  *(uint *)(param_2 + 4) = (uint)*(byte *)(param_1 + 0x74) << 0x18;
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | (*(uint *)(param_1 + 0x78) >> 0x18) << 0x10;
  *(uint *)(param_2 + 4) =
       *(uint *)(param_2 + 4) | ((uint)(*(int *)(param_1 + 0x78) << 8) >> 0x18) << 8;
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | (uint)(*(int *)(param_1 + 0x78) << 0x10) >> 0x18
  ;
  param_2[8] = (char)*(undefined4 *)(param_1 + 0x78);
  param_2[9] = (char)((uint)*(undefined4 *)(param_1 + 0x7c) >> 0x18);
  *(uint *)(param_2 + 0xc) = (*(uint *)(param_1 + 0x7c) & 0xff0000) << 8;
  *(uint *)(param_2 + 0xc) =
       *(uint *)(param_2 + 0xc) | ((uint)(*(int *)(param_1 + 0x7c) << 0x10) >> 0x18) << 0x10;
  *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | (uint)*(byte *)(param_1 + 0x7c) << 8;
  *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | *(uint *)(param_1 + 0x80) >> 0x18;
  iVar1 = *(int *)(param_1 + 0x80);
  param_2[0x10] = param_2[0x10] | (byte)((uint)iVar1 >> 0x10) >> 4;
  *(ushort *)(param_2 + 0x12) = (ushort)(((uint)(iVar1 << 8) >> 0x18) << 8) & 0xf00;
  *(ushort *)(param_2 + 0x12) =
       *(ushort *)(param_2 + 0x12) | (ushort)(byte)((uint)*(undefined4 *)(param_1 + 0x80) >> 8);
  param_2[0x14] = *(byte *)(param_1 + 0x80) >> 1;
  param_2[0x15] = 1;
  return 0;
}



/* FUN_0801fece at 0801fece */

longlong FUN_0801fece(int *param_1,byte *param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = param_1[0x19];
  bVar1 = (byte)(uVar2 >> 0x18);
  *param_2 = bVar1 >> 6;
  param_2[1] = (byte)(((uVar2 >> 0x18) << 0x1a) >> 0x1c);
  param_2[2] = bVar1 & 3;
  param_2[3] = (byte)((uint)param_1[0x19] >> 0x10);
  param_2[4] = (byte)((uint)param_1[0x19] >> 8);
  param_2[5] = (byte)param_1[0x19];
  *(short *)(param_2 + 6) = (short)(((uint)param_1[0x1a] >> 0x18) << 4);
  iVar3 = param_1[0x1a];
  *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | (ushort)((uint)iVar3 >> 8) >> 0xc;
  param_2[8] = (byte)((uint)iVar3 >> 0x10) & 0xf;
  uVar2 = (uint)(param_1[0x1a] << 0x10) >> 0x18;
  param_2[9] = (byte)((uint)param_1[0x1a] >> 8) >> 7;
  param_2[10] = (byte)((uVar2 << 0x19) >> 0x1f);
  param_2[0xb] = (byte)((uVar2 << 0x1a) >> 0x1f);
  param_2[0xc] = (byte)((uVar2 << 0x1b) >> 0x1f);
  param_2[0xd] = 0;
  if (param_1[0x11] == 0) {
    *(uint *)(param_2 + 0x10) = (uVar2 & 3) << 10;
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | (uint)*(byte *)(param_1 + 0x1a) << 2;
    uVar2 = param_1[0x1b];
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | uVar2 >> 0x1e;
    param_2[0x14] = (byte)(((uVar2 >> 0x18) << 0x1a) >> 0x1d);
    param_2[0x15] = (byte)(uVar2 >> 0x18) & 7;
    uVar2 = (uint)(param_1[0x1b] << 8) >> 0x18;
    param_2[0x16] = (byte)((uint)param_1[0x1b] >> 0x10) >> 5;
    param_2[0x17] = (byte)((uVar2 << 0x1b) >> 0x1d);
    param_2[0x18] = (byte)(uVar2 << 1) & 6;
    iVar4 = param_1[0x1b];
    param_2[0x18] = param_2[0x18] | (byte)((uint)iVar4 >> 8) >> 7;
    iVar3 = *(int *)(param_2 + 0x10);
    param_1[0x15] = iVar3 + 1;
    iVar3 = (1 << (param_2[0x18] + 2 & 0xff)) * (iVar3 + 1);
    param_1[0x15] = iVar3;
    bVar1 = param_2[8];
    param_1[0x16] = 1 << bVar1;
    param_1[0x17] = ((uint)(1 << bVar1) >> 9) * iVar3;
  }
  else {
    if (param_1[0x11] != 1) {
      *(undefined4 *)(*param_1 + 0x38) = 0x5ff;
      param_1[0xe] = param_1[0xe] | 0x10000000;
      *(undefined1 *)(param_1 + 0xd) = 1;
      return CONCAT44(param_4,1);
    }
    *(uint *)(param_2 + 0x10) = (param_1[0x1a] & 0x3fU) << 0x10;
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | ((uint)param_1[0x1b] >> 0x18) << 8;
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | (uint)(param_1[0x1b] << 8) >> 0x18;
    iVar4 = param_1[0x1b];
    iVar3 = *(int *)(param_2 + 0x10);
    param_1[0x16] = 0x200;
    iVar3 = (iVar3 + 1) * 0x400;
    param_1[0x15] = iVar3;
    param_1[0x17] = iVar3;
  }
  uVar2 = (uint)(iVar4 << 0x10) >> 0x18;
  param_1[0x18] = 0x200;
  param_2[0x19] = (byte)((uVar2 << 0x19) >> 0x1f);
  param_2[0x1a] = (byte)(uVar2 << 1) & 0x7e;
  bVar1 = *(byte *)(param_1 + 0x1b);
  param_2[0x1a] = param_2[0x1a] | bVar1 >> 7;
  param_2[0x1b] = bVar1 & 0x7f;
  uVar2 = (uint)param_1[0x1c] >> 0x18;
  param_2[0x1c] = (byte)((uint)param_1[0x1c] >> 0x1f);
  param_2[0x1d] = (byte)((uVar2 << 0x19) >> 0x1e);
  param_2[0x1e] = (byte)((uVar2 << 0x1b) >> 0x1d);
  param_2[0x1f] = (byte)(uVar2 << 2) & 0xc;
  iVar3 = param_1[0x1c];
  bVar1 = (byte)((uint)iVar3 >> 0x10);
  param_2[0x1f] = param_2[0x1f] | bVar1 >> 6;
  param_2[0x20] = (byte)((((uint)(iVar3 << 8) >> 0x18) << 0x1a) >> 0x1f);
  param_2[0x21] = 0;
  param_2[0x22] = bVar1 & 1;
  uVar2 = (uint)(param_1[0x1c] << 0x10) >> 0x18;
  bVar1 = (byte)((uint)param_1[0x1c] >> 8);
  param_2[0x23] = bVar1 >> 7;
  param_2[0x24] = (byte)((uVar2 << 0x19) >> 0x1f);
  param_2[0x25] = (byte)((uVar2 << 0x1a) >> 0x1f);
  param_2[0x26] = (byte)((uVar2 << 0x1b) >> 0x1f);
  param_2[0x27] = (byte)((uVar2 << 0x1c) >> 0x1e);
  param_2[0x28] = bVar1 & 3;
  param_2[0x29] = *(byte *)(param_1 + 0x1c) >> 1;
  param_2[0x2a] = 1;
  return (ulonglong)param_4 << 0x20;
}



/* FUN_080200be at 080200be */

ulonglong FUN_080200be(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = FUN_08021936(*param_1,param_1[0x14] << 0x10);
  if (uVar1 == 0) {
    uVar2 = FUN_080201b0();
    uVar2 = uVar2 >> 9;
  }
  else {
    param_1[0xe] = uVar1 | param_1[0xe];
  }
  return CONCAT44(param_4,uVar2) & 0xffffffff0000000f;
}



/* FUN_080200e4 at 080200e4 */

int FUN_080200e4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 extraout_r1;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ushort local_3c [2];
  undefined1 auStack_38 [44];
  undefined4 uStack_c;
  
  local_3c[0] = 1;
  uStack_c = param_4;
  iVar1 = FUN_0802165a(*param_1);
  if (iVar1 == 0) {
    iVar1 = 0x4000000;
  }
  else {
    if (param_1[0x11] != 3) {
      iVar1 = FUN_08021866(*param_1);
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar2 = FUN_080201b0();
      param_1[0x1d] = uVar2;
      uVar2 = FUN_080201a8();
      param_1[0x1e] = uVar2;
      uVar2 = FUN_080201aa(uVar2,8);
      param_1[0x1f] = uVar2;
      uVar2 = FUN_080201aa(uVar2,0xc);
      param_1[0x20] = uVar2;
      if (param_1[0x11] != 3) {
        iVar1 = FUN_080218a8(*param_1,local_3c);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_1[0x11] != 3) {
          param_1[0x14] = (uint)local_3c[0];
          iVar1 = FUN_08021888(*param_1,(uint)local_3c[0] << 0x10);
          if (iVar1 != 0) {
            return iVar1;
          }
          uVar2 = FUN_080201b0();
          param_1[0x19] = uVar2;
          uVar2 = FUN_080201a8();
          param_1[0x1a] = uVar2;
          uVar2 = FUN_080201aa(uVar2,8);
          param_1[0x1b] = uVar2;
          uVar2 = FUN_080201aa(uVar2,0xc);
          param_1[0x1c] = uVar2;
        }
      }
    }
    uVar3 = FUN_080201a8();
    param_1[0x13] = uVar3 >> 0x14;
    FUN_0801fece(param_1,auStack_38);
    iVar1 = FUN_0802176a(*param_1,extraout_r1,param_1[0x14] << 0x10,0);
    if (iVar1 == 0) {
      FUN_0800f64c(&uStack_54,param_1 + 1,0x18);
      FUN_08021618(*param_1,uStack_54,uStack_50,uStack_4c);
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* FUN_080201a8 at 080201a8 */

void FUN_080201a8(void)

{
  undefined4 *unaff_r4;
  
  FUN_08021684(*unaff_r4,4);
  return;
}



/* FUN_080201aa at 080201aa */

void FUN_080201aa(void)

{
  undefined4 *unaff_r4;
  
  FUN_08021684(*unaff_r4);
  return;
}



/* FUN_080201b0 at 080201b0 */

void FUN_080201b0(void)

{
  undefined4 *unaff_r4;
  
  FUN_08021684(*unaff_r4,0);
  return;
}



/* FUN_080201b8 at 080201b8 */

undefined8 FUN_080201b8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int local_10;
  
  local_10 = 0;
  iVar1 = FUN_08021796(*param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_080217d4(*param_1);
    if (iVar1 == 0) {
      param_1[0x12] = 1;
      do {
        iVar1 = local_10 + 1;
        bVar4 = local_10 == 0xffff;
        local_10 = iVar1;
        if (bVar4) goto LAB_08020240;
        iVar1 = FUN_08021834(*param_1,0);
        if ((iVar1 != 0) || (iVar1 = FUN_08021848(*param_1,0x40000000), iVar1 != 0))
        goto LAB_0802023e;
        uVar3 = FUN_080201b0();
      } while (-1 < (int)uVar3);
      uVar3 = uVar3 & 0x40000000;
      if (uVar3 != 0) {
        uVar3 = 1;
      }
    }
    else {
      param_1[0x12] = 0;
      do {
        iVar1 = local_10 + 1;
        bVar4 = local_10 == 0xffff;
        local_10 = iVar1;
        if (bVar4) {
LAB_08020240:
          return CONCAT44(local_10,0x1000000);
        }
        iVar2 = FUN_08021834(*param_1,0);
        if ((iVar2 != 0) || (iVar2 = FUN_08021848(*param_1,0), iVar2 != 0)) {
          return CONCAT44(iVar1,0x10000000);
        }
        iVar1 = FUN_080201b0();
      } while (-1 < iVar1);
      uVar3 = 0;
    }
    param_1[0x11] = uVar3;
    iVar1 = 0;
  }
LAB_0802023e:
  return CONCAT44(local_10,iVar1);
}



/* FUN_0802024c at 0802024c */

void FUN_0802024c(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_08020264;
  *DAT_08020268 = param_2 + *DAT_08020260;
  *puVar1 = 0;
  return;
}



/* FUN_0802026c at 0802026c */

void FUN_0802026c(uint param_1,int param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)(param_2 << 4);
  if ((int)param_1 < 0) {
    *(undefined1 *)((param_1 & 0xf) + DAT_08020334 + -4) = uVar1;
  }
  else {
    *(undefined1 *)(DAT_08020338 + param_1) = uVar1;
  }
  return;
}



/* FUN_0802028a at 0802028a */

void FUN_0802028a(uint param_1)

{
  *DAT_0802033c = (param_1 & 7) << 8 | *DAT_0802033c & 0xf8ff | DAT_08020340;
  return;
}



/* FUN_080202a4 at 080202a4 */

void FUN_080202a4(undefined4 param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(*DAT_0802033c << 0x15) >> 0x1d;
  uVar2 = 7 - uVar1;
  if (4 < uVar2) {
    uVar2 = 4;
  }
  if (uVar1 + 4 < 7) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 - 3;
  }
  FUN_0802026c(param_1,(param_2 & (1 << (uVar2 & 0xff)) - 1U) << (uVar1 & 0xff) |
                       param_3 & (1 << (uVar1 & 0xff)) - 1U,param_4);
  return;
}



/* FUN_080202de at 080202de */

void FUN_080202de(uint param_1)

{
  *(int *)(DAT_08020344 + (param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}



/* FUN_080202f2 at 080202f2 */

undefined4 FUN_080202f2(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_08020348;
  if (0xffffff < param_1 - 1U) {
    return 1;
  }
  DAT_08020348[1] = param_1 - 1U;
  FUN_0802026c(0xffffffff,0xf);
  puVar1[2] = 0;
  *puVar1 = 7;
  return 0;
}



/* FUN_0802031a at 0802031a */

void FUN_0802031a(int param_1)

{
  if (param_1 == 4) {
    *DAT_08020348 = *DAT_08020348 | 4;
    return;
  }
  *DAT_08020348 = *DAT_08020348 & 0xfffffffb;
  return;
}



/* FUN_0802034c at 0802034c */

longlong FUN_0802034c(undefined1 *param_1,int param_2,undefined1 param_3,uint param_4)

{
  if (param_1 == (undefined1 *)0x0) {
    return CONCAT44(param_4,2);
  }
  if (*(int *)(param_1 + 0x214) != 0) {
    *(undefined4 *)(param_1 + 0x214) = 0;
  }
  if (param_2 != 0) {
    *(int *)(param_1 + 0x210) = param_2;
  }
  param_1[0x1fc] = 1;
  *param_1 = param_3;
  FUN_0801f74c();
  return (ulonglong)param_4 << 0x20;
}



/* FUN_08020374 at 08020374 */

void FUN_08020374(undefined4 param_1,undefined1 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x08020378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 4))(param_1,param_2);
  return;
}



/* FUN_0802037a at 0802037a */

undefined4 FUN_0802037a(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(int *)(param_1 + 0x214) = param_2;
    return 0;
  }
  return 2;
}



/* FUN_08020394 at 08020394 */

undefined4 FUN_08020394(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 2;
  if ((*(undefined4 **)(param_1 + 0x214) != (undefined4 *)0x0) &&
     (iVar1 = (*(code *)**(undefined4 **)(param_1 + 0x214))(), iVar1 == 0)) {
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_080203aa at 080203aa */

longlong FUN_080203aa(int param_1)

{
  uint unaff_r7;
  
  (**(code **)(*(int *)(param_1 + 0x214) + 4))();
  return (ulonglong)unaff_r7 << 0x20;
}



/* FUN_080203b8 at 080203b8 */

longlong FUN_080203b8(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x208;
  FUN_08021e46(iVar2);
  *(undefined4 *)(param_1 + 500) = 1;
  *(uint *)(param_1 + 0x1f8) = (uint)*(ushort *)(param_1 + 0x20e);
  bVar1 = *(byte *)(param_1 + 0x208);
  if ((bVar1 & 0x1f) == 0) {
    FUN_08021b14(param_1,iVar2);
  }
  else if ((bVar1 & 0x1f) == 2) {
    FUN_08021c78(param_1,iVar2);
  }
  else if ((bVar1 & 0x1f) < 2) {
    FUN_08021c44(param_1,iVar2);
  }
  else {
    FUN_0801f818(param_1,bVar1 & 0x80);
  }
  return (ulonglong)param_4 << 0x20;
}



/* FUN_0802040e at 0802040e */

longlong FUN_0802040e(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 500) == 3) {
      uVar2 = *(uint *)(param_1 + 0x110);
      uVar3 = *(uint *)(param_1 + 0x10c);
      if (uVar2 < uVar3) {
        uVar3 = uVar3 - uVar2;
        *(uint *)(param_1 + 0x10c) = uVar3;
        if (uVar3 < uVar2) {
          uVar2 = uVar3;
        }
        FUN_0801f928(param_1,param_3,uVar2 & 0xffff);
      }
      else {
        pcVar1 = *(code **)(*(int *)(param_1 + 0x214) + 0x10);
        if ((pcVar1 != (code *)0x0) && (*(char *)(param_1 + 0x1fc) == '\x03')) {
          (*pcVar1)(param_1);
        }
        FUN_0801f938(param_1);
      }
    }
  }
  else {
    pcVar1 = *(code **)(*(int *)(param_1 + 0x214) + 0x18);
    if ((pcVar1 != (code *)0x0) && (*(char *)(param_1 + 0x1fc) == '\x03')) {
      (*pcVar1)(param_1);
    }
  }
  return (ulonglong)param_4 << 0x20;
}



/* FUN_08020470 at 08020470 */

longlong FUN_08020470(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    pcVar2 = *(code **)(*(int *)(param_1 + 0x214) + 0x14);
    if ((pcVar2 != (code *)0x0) && (*(char *)(param_1 + 0x1fc) == '\x03')) {
      (*pcVar2)(param_1);
    }
    goto LAB_08020500;
  }
  if (*(int *)(param_1 + 500) == 2) {
    uVar1 = *(uint *)(param_1 + 0x20);
    if (uVar1 < *(uint *)(param_1 + 0x1c)) {
      uVar1 = *(uint *)(param_1 + 0x1c) - uVar1;
      *(uint *)(param_1 + 0x1c) = uVar1;
      FUN_0801f904(param_1,param_3,uVar1 & 0xffff);
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x18);
      if (((uVar3 != uVar1 * (uVar3 / uVar1)) || (uVar3 < uVar1)) ||
         (*(uint *)(param_1 + 0x1f8) <= uVar3)) {
        pcVar2 = *(code **)(*(int *)(param_1 + 0x214) + 0xc);
        if ((pcVar2 != (code *)0x0) && (*(char *)(param_1 + 0x1fc) == '\x03')) {
          (*pcVar2)(param_1);
        }
        FUN_0801f946(param_1);
        goto LAB_080204e4;
      }
      FUN_0801f904(param_1,0,0);
      *(undefined4 *)(param_1 + 0x1f8) = 0;
    }
    FUN_0801f8a0(param_1,0,0,0);
  }
LAB_080204e4:
  if (*(char *)(param_1 + 0x200) == '\x01') {
    *(undefined1 *)(param_1 + 0x200) = 0;
  }
LAB_08020500:
  return (ulonglong)param_4 << 0x20;
}



/* FUN_08020504 at 08020504 */

void FUN_08020504(int param_1)

{
  FUN_0801f7de(param_1,0,0,0x40);
  *(undefined4 *)(param_1 + 0x110) = 0x40;
  FUN_0801f7de(param_1,0x80,0,0x40);
  *(undefined4 *)(param_1 + 0x20) = 0x40;
  *(undefined1 *)(param_1 + 0x1fc) = 1;
  if (*(int *)(param_1 + 0x218) != 0) {
    (**(code **)(*(int *)(param_1 + 0x214) + 4))(param_1,*(uint *)(param_1 + 4) & 0xff);
  }
  *DAT_080205a8 = 0;
  return;
}



/* FUN_08020548 at 08020548 */

void FUN_08020548(int param_1)

{
  *(undefined1 *)(param_1 + 0x1fd) = *(undefined1 *)(param_1 + 0x1fc);
  *(undefined1 *)(param_1 + 0x1fc) = 4;
  *DAT_080205a8 = 0;
  return;
}



/* FUN_080205ac at 080205ac */

undefined4 FUN_080205ac(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (param_1 == (int *)0x0) {
    uVar2 = 1;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x3b9) = 3;
    FUN_0801f640(param_1);
    FUN_08021f42(*param_1);
    FUN_08020650();
    FUN_08021ecc(*param_1,uStack_44,uStack_40,uStack_3c);
    FUN_08021f4e(*param_1,0);
    uVar3 = 0;
    do {
      *(char *)(param_1 + uVar3 * 7 + 0xe) = (char)uVar3;
      *(short *)((int)param_1 + uVar3 * 0x1c + 0x3e) = (short)uVar3;
      *(undefined1 *)((int)param_1 + uVar3 * 0x1c + 0x39) = 1;
      uVar4 = uVar3 + 1;
      *(undefined1 *)((int)param_1 + uVar3 * 0x1c + 0x3b) = 0;
      param_1[uVar3 * 7 + 0x10] = 0;
      param_1[uVar3 * 7 + 0x11] = 0;
      param_1[uVar3 * 7 + 0x13] = 0;
      uVar3 = uVar4;
    } while (uVar4 < 0xf);
    uVar3 = 0;
    do {
      *(undefined1 *)((int)param_1 + uVar3 * 0x1c + 0x1f9) = 0;
      *(char *)(param_1 + uVar3 * 7 + 0x7e) = (char)uVar3;
      *(short *)((int)param_1 + uVar3 * 0x1c + 0x3e) = (short)uVar3;
      *(undefined1 *)((int)param_1 + uVar3 * 0x1c + 0x1fb) = 0;
      param_1[uVar3 * 7 + 0x80] = 0;
      param_1[uVar3 * 7 + 0x81] = 0;
      param_1[uVar3 * 7 + 0x83] = 0;
      iVar1 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      *(undefined4 *)(*param_1 + iVar1 + 0x104) = 0;
    } while (uVar3 < 0xf);
    FUN_08020650();
    FUN_08021f74(*param_1,uStack_44,uStack_40,uStack_3c);
    *(undefined1 *)((int)param_1 + 0x3b9) = 1;
    FUN_080226d0(*param_1);
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_08020650 at 08020650 */

void FUN_08020650(void)

{
  FUN_0800f64c();
  return;
}



/* FUN_0802065a at 0802065a */

undefined4 FUN_0802065a(void)

{
  undefined4 *unaff_r4;
  char in_ZR;
  
  FUN_08020b46();
  if (in_ZR != '\0') {
    return 2;
  }
  FUN_08020b32();
  FUN_08021f3a(*unaff_r4);
  *(undefined1 *)(unaff_r4 + 0xee) = 0;
  return 0;
}



/* FUN_08020672 at 08020672 */

int * FUN_08020672(int *param_1,int *param_2)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int *local_30;
  
  piVar2 = (int *)*param_1;
  iVar3 = FUN_08022746();
  uVar6 = 0;
  local_30 = param_2;
  if ((iVar3 == 0) && (iVar3 = FUN_08020b2c(), iVar3 != 0)) {
    iVar3 = FUN_08020b2c();
    if (iVar3 << 0x1e < 0) {
      *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 2;
    }
    iVar3 = FUN_08020b2c();
    local_30 = param_2;
    if (iVar3 << 0xc < 0) {
      uVar4 = FUN_080226f2(*param_1);
      for (; local_30 = piVar2, uVar4 != 0; uVar4 = uVar4 >> 1) {
        if ((int)(uVar4 << 0x1f) < 0) {
          iVar3 = FUN_0802270e(*param_1,uVar6 & 0xff);
          if (iVar3 << 0x1f < 0) {
            piVar2[uVar6 * 8 + 0x2c2] = 1;
            if (param_1[4] == 1) {
              param_1[uVar6 * 7 + 0x84] =
                   param_1[uVar6 * 7 + 0x80] - (piVar2[uVar6 * 8 + 0x2c4] & 0x7ffffU);
              param_1[uVar6 * 7 + 0x81] = param_1[uVar6 * 7 + 0x81] + param_1[uVar6 * 7 + 0x80];
            }
            FUN_0801f6aa(param_1,uVar6 & 0xff);
            if ((param_1[4] == 1 && uVar6 == 0) && (param_1[0x83] == 0)) {
              FUN_0802277c(*param_1,1,param_1 + 0xef);
            }
          }
          if (iVar3 << 0x1c < 0) {
            FUN_0801f69e(param_1);
            piVar2[uVar6 * 8 + 0x2c2] = 8;
          }
          iVar3 = iVar3 << 0x1b;
          bVar8 = iVar3 < 0;
          if (bVar8) {
            iVar3 = 0x10;
          }
          if (bVar8) {
            piVar2[uVar6 * 8 + 0x2c2] = iVar3;
          }
        }
        uVar6 = uVar6 + 1;
      }
    }
    iVar3 = FUN_08020b2c();
    if (iVar3 << 0xd < 0) {
      uVar4 = FUN_08022700(*param_1);
      uVar6 = 0;
      local_30 = param_1 + 0xef;
      for (; uVar4 != 0; uVar4 = uVar4 >> 1) {
        if ((int)(uVar4 << 0x1f) < 0) {
          iVar3 = FUN_08022724(*param_1,uVar6 & 0xff);
          if (iVar3 << 0x1f < 0) {
            piVar2[0x20d] = piVar2[0x20d] & ~(1 << (uVar6 & 0xff));
            piVar2[uVar6 * 8 + 0x242] = 1;
            if (param_1[4] == 1) {
              param_1[uVar6 * 7 + 0x11] = param_1[uVar6 * 7 + 0x11] + param_1[uVar6 * 7 + 0x10];
            }
            FUN_0801f6be(param_1,uVar6 & 0xff);
            if ((param_1[4] == 1 && uVar6 == 0) && (param_1[0x13] == 0)) {
              FUN_0802277c(*param_1,1,local_30);
            }
          }
          iVar5 = iVar3 << 0x1c;
          bVar8 = iVar5 < 0;
          if (bVar8) {
            iVar5 = 8;
          }
          if (bVar8) {
            piVar2[uVar6 * 8 + 0x242] = iVar5;
          }
          iVar5 = iVar3 << 0x1b;
          bVar8 = iVar5 < 0;
          if (bVar8) {
            iVar5 = 0x10;
          }
          if (bVar8) {
            piVar2[uVar6 * 8 + 0x242] = iVar5;
          }
          iVar5 = iVar3 << 0x19;
          bVar8 = iVar5 < 0;
          if (bVar8) {
            iVar5 = 0x40;
          }
          if (bVar8) {
            piVar2[uVar6 * 8 + 0x242] = iVar5;
          }
          iVar5 = iVar3 << 0x1e;
          bVar8 = iVar5 < 0;
          if (bVar8) {
            iVar5 = 2;
          }
          if (bVar8) {
            piVar2[uVar6 * 8 + 0x242] = iVar5;
          }
          if (iVar3 << 0x18 < 0) {
            FUN_08020d1c(param_1,uVar6);
          }
        }
        uVar6 = uVar6 + 1;
      }
    }
    iVar3 = FUN_08020b2c();
    if (iVar3 < 0) {
      piVar2[0x201] = piVar2[0x201] & 0xfffffffe;
      FUN_0801f722(param_1);
      *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0x80000000;
    }
    iVar3 = FUN_08020b2c();
    if (iVar3 << 0x14 < 0) {
      if (piVar2[0x202] << 0x1f < 0) {
        FUN_0801f6f8(param_1);
      }
      *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0x800;
    }
    iVar3 = FUN_08020b2c();
    if (iVar3 << 0x13 < 0) {
      piVar2[0x201] = piVar2[0x201] & 0xfffffffe;
      FUN_08022084(*param_1,0x10);
      for (uVar4 = 0; uVar4 < (uint)param_1[1]; uVar4 = uVar4 + 1) {
        piVar2[uVar4 * 8 + 0x242] = 0xff;
        piVar2[uVar4 * 8 + 0x2c2] = 0xff;
      }
      piVar2[0x206] = 0xffffffff;
      piVar2[0x207] = piVar2[0x207] | 0x10001;
      if (param_1[0xc] == 0) {
        piVar2[0x205] = piVar2[0x205] | 0xb;
        piVar2[0x204] = piVar2[0x204] | 0xb;
      }
      else {
        piVar2[0x221] = piVar2[0x221] | 0xb;
        piVar2[0x211] = piVar2[0x211] | 0xb;
      }
      piVar2[0x200] = piVar2[0x200] & 0xfffff80f;
      FUN_0802277c(*param_1,param_1[4] & 0xff,param_1 + 0xef);
      *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0x1000;
    }
    iVar3 = FUN_08020b2c();
    if (iVar3 << 0x12 < 0) {
      FUN_0802274e(*param_1);
      *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffc3ff;
      iVar3 = FUN_080220c6(*param_1);
      if (iVar3 == 0) {
        param_1[3] = 0;
        param_1[5] = 0x200;
        *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 0x2400;
      }
      else {
        param_1[3] = 3;
        param_1[5] = 0x40;
        iVar3 = FUN_08022906();
        iVar5 = *param_1;
        if ((uint)(DAT_08020ae4 + iVar3) < DAT_08020ae8) {
          uVar4 = *(uint *)(iVar5 + 0xc) | 0x3c00;
        }
        else if ((uint)(DAT_08020aec + iVar3) < DAT_08020af0) {
          uVar4 = *(uint *)(iVar5 + 0xc) | 0x3800;
        }
        else if ((uint)(DAT_08020af4 + iVar3) < DAT_08020af8) {
          uVar4 = *(uint *)(iVar5 + 0xc) | 0x3400;
        }
        else if ((uint)(DAT_08020afc + iVar3) < DAT_08020b00) {
          uVar4 = *(uint *)(iVar5 + 0xc) | 0x3000;
        }
        else if ((uint)(DAT_08020b04 + iVar3) < DAT_08020b08) {
          uVar4 = *(uint *)(iVar5 + 0xc) | 0x2c00;
        }
        else if ((uint)(DAT_08020b0c + iVar3) < DAT_08020b10) {
          uVar4 = *(uint *)(iVar5 + 0xc) | 0x2800;
        }
        else if ((uint)(DAT_08020b14 + iVar3) < DAT_08020b18) {
          uVar4 = *(uint *)(iVar5 + 0xc) | 0x2400;
        }
        else if ((uint)(DAT_08020b1c + iVar3) < DAT_08020b20) {
          uVar4 = *(uint *)(iVar5 + 0xc) | 0x2000;
        }
        else if ((uint)(DAT_08020b24 + iVar3) < DAT_08020b28) {
          uVar4 = *(uint *)(iVar5 + 0xc) | 0x1c00;
        }
        else {
          uVar4 = *(uint *)(iVar5 + 0xc) | 0x1800;
        }
        *(uint *)(iVar5 + 0xc) = uVar4;
      }
      FUN_0801f6d8(param_1);
      *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0x2000;
    }
    iVar3 = FUN_08020b2c();
    if (iVar3 << 0x1b < 0) {
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) & 0xffffffef;
      uVar7 = piVar2[8];
      uVar1 = (ushort)uVar7 & 0xf;
      uVar4 = (uVar7 << 0xb) >> 0x1c;
      if (uVar4 == 2) {
        if ((uVar7 & 0x7ff0) != 0) {
          FUN_080225d8(piVar2,param_1[(short)uVar1 * 7 + 0x81],(uVar7 << 0x11) >> 0x15);
          uVar4 = (uVar7 << 0x11) >> 0x15;
          param_1[(short)uVar1 * 7 + 0x81] = param_1[(short)uVar1 * 7 + 0x81] + uVar4;
          param_1[(short)uVar1 * 7 + 0x84] = uVar4 + param_1[(short)uVar1 * 7 + 0x84];
        }
      }
      else if (uVar4 == 6) {
        FUN_080225d8(piVar2,param_1 + 0xef,8);
        param_1[(short)uVar1 * 7 + 0x84] =
             ((uVar7 << 0x11) >> 0x15) + param_1[(short)uVar1 * 7 + 0x84];
      }
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x10;
    }
    iVar3 = FUN_08020b2c();
    if (iVar3 << 0x1c < 0) {
      FUN_0801f6d0(param_1);
      *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 8;
    }
    iVar3 = FUN_08020b2c();
    if (iVar3 << 0xb < 0) {
      FUN_0801f732(param_1,uVar6 & 0xff);
      *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0x100000;
    }
    iVar3 = FUN_08020b2c();
    if (iVar3 << 10 < 0) {
      FUN_0801f72a(param_1,uVar6 & 0xff);
      *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0x200000;
    }
    iVar3 = FUN_08020b2c();
    if (iVar3 << 1 < 0) {
      FUN_0801f73a(param_1);
      *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0x40000000;
    }
    iVar3 = FUN_08020b2c();
    if (iVar3 << 0x1d < 0) {
      uVar6 = *(uint *)(*param_1 + 4);
      if ((int)(uVar6 << 0x1d) < 0) {
        FUN_0801f742(param_1);
      }
      *(uint *)(*param_1 + 4) = uVar6 | *(uint *)(*param_1 + 4);
    }
  }
  return local_30;
}



/* FUN_08020b2c at 08020b2c */

uint FUN_08020b2c(void)

{
  int *unaff_r6;
  
  return *(uint *)(*unaff_r6 + 0x14) & *(uint *)(*unaff_r6 + 0x18);
}



/* FUN_08020b32 at 08020b32 */

void FUN_08020b32(void)

{
  undefined4 *unaff_r4;
  
  *(undefined1 *)(unaff_r4 + 0xee) = 1;
  FUN_080226c2(*unaff_r4);
  return;
}



/* FUN_08020b46 at 08020b46 */

int FUN_08020b46(int param_1)

{
  return (int)*(char *)(param_1 + 0x3b8);
}



/* FUN_08020b50 at 08020b50 */

undefined4 FUN_08020b50(void)

{
  undefined4 *unaff_r4;
  char in_ZR;
  
  FUN_08020b46();
  if (in_ZR != '\0') {
    return 2;
  }
  *(undefined1 *)(unaff_r4 + 0xee) = 1;
  FUN_080226a6(*unaff_r4);
  *(undefined1 *)(unaff_r4 + 0xee) = 0;
  return 0;
}



/* FUN_08020b6a at 08020b6a */

longlong FUN_08020b6a(undefined4 *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  
  if ((int)(param_2 << 0x18) < 0) {
    iVar1 = (param_2 & 0x7f) * 7 + 0xe;
  }
  else {
    iVar1 = (param_2 & 0x7f) * 7 + 0x7e;
  }
  pbVar3 = (byte *)(param_1 + iVar1);
  *pbVar3 = (byte)param_2 & 0x7f;
  pbVar3[1] = (byte)(param_2 >> 7);
  *(undefined4 *)(pbVar3 + 8) = param_3;
  pbVar3[3] = (byte)param_4;
  bVar2 = pbVar3[1];
  if (bVar2 != 0) {
    *(ushort *)(pbVar3 + 6) = (ushort)*pbVar3;
  }
  if (param_4 == 2) {
    bVar2 = 0;
  }
  if (param_4 == 2) {
    pbVar3[4] = bVar2;
  }
  if (*(char *)(param_1 + 0xee) != '\x01') {
    *(undefined1 *)(param_1 + 0xee) = 1;
    FUN_080220fe(*param_1,pbVar3);
    *(undefined1 *)(param_1 + 0xee) = 0;
    return (ulonglong)param_4 << 0x20;
  }
  return CONCAT44(param_4,2);
}



/* FUN_08020bbe at 08020bbe */

undefined4 FUN_08020bbe(int param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = param_1 + (param_2 & 0x7f) * 0x1c;
  cVar2 = param_2 << 0x18 == 0;
  if ((int)(param_2 << 0x18) < 0) {
    iVar1 = iVar1 + 0x38;
  }
  else {
    iVar1 = iVar1 + 0x1f8;
  }
  FUN_08020cfe(iVar1);
  if (cVar2 == '\0') {
    FUN_08020d10();
    FUN_08022174();
    *(undefined1 *)(param_1 + 0x3b8) = 0;
    return 0;
  }
  return 2;
}



/* FUN_08020bea at 08020bea */

longlong FUN_08020bea(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 unaff_r4;
  undefined8 uVar4;
  
  uVar2 = param_4;
  FUN_08020c5a();
  puVar3 = (undefined1 *)(uVar2 + 0x1f8);
  uVar4 = FUN_08020c4c();
  puVar1 = (undefined4 *)uVar4;
  puVar3[1] = unaff_r4;
  *puVar3 = (char)((ulonglong)uVar4 >> 0x20);
  if (puVar1[4] == 1) {
    *(undefined4 *)(puVar3 + 0x10) = param_3;
  }
  if ((int)((ulonglong)uVar4 >> 0x20) == 0) {
    FUN_08022490();
  }
  else {
    FUN_08022276(*puVar1,puVar3,puVar1[4] & 0xff);
  }
  return (ulonglong)param_4 << 0x20;
}



/* FUN_08020c18 at 08020c18 */

longlong FUN_08020c18(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  
  uVar2 = param_4;
  FUN_08020c5a();
  puVar3 = (undefined1 *)(uVar2 + 0x38);
  uVar4 = FUN_08020c4c();
  puVar1 = (undefined4 *)uVar4;
  *puVar3 = (char)((ulonglong)uVar4 >> 0x20);
  puVar3[1] = 1;
  if (puVar1[4] == 1) {
    *(undefined4 *)(puVar3 + 0x10) = param_3;
  }
  if ((int)((ulonglong)uVar4 >> 0x20) == 0) {
    FUN_08022490();
  }
  else {
    FUN_08022276(*puVar1,puVar3,puVar1[4] & 0xff);
  }
  return (ulonglong)param_4 << 0x20;
}



/* FUN_08020c4c at 08020c4c */

void FUN_08020c4c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 unaff_r4;
  
  *(undefined4 *)(param_4 + 0x14) = unaff_r4;
  *(undefined4 *)(param_4 + 0xc) = param_3;
  *(undefined4 *)(param_4 + 0x18) = 0;
  return;
}



/* FUN_08020c5a at 08020c5a */

void FUN_08020c5a(void)

{
  return;
}



/* FUN_08020c68 at 08020c68 */

longlong FUN_08020c68(undefined4 *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((int)(param_2 << 0x18) < 0) {
    iVar1 = (param_2 & 0x7f) * 7 + 0xe;
  }
  else {
    iVar1 = param_2 * 7 + 0x7e;
  }
  puVar2 = param_1 + iVar1;
  *(undefined1 *)((int)puVar2 + 2) = 1;
  *(char *)puVar2 = (char)(param_2 & 0x7f);
  *(char *)((int)puVar2 + 1) = (char)(param_2 >> 7);
  if (*(char *)(param_1 + 0xee) == '\x01') {
    return CONCAT44(param_4,2);
  }
  *(undefined1 *)(param_1 + 0xee) = 1;
  FUN_080225f6(*param_1,puVar2);
  if ((param_2 & 0x7f) == 0) {
    FUN_0802277c(*param_1,param_1[4] & 0xff,param_1 + 0xef);
  }
  *(undefined1 *)(param_1 + 0xee) = 0;
  return (ulonglong)param_4 << 0x20;
}



/* FUN_08020cc6 at 08020cc6 */

undefined4 FUN_08020cc6(int param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  
  if ((int)(param_2 << 0x18) < 0) {
    iVar1 = (param_2 & 0x7f) * 0x1c + param_1 + 0x38;
  }
  else {
    iVar1 = param_2 * 0x1c + param_1 + 0x1f8;
  }
  cVar2 = '\x01';
  *(undefined1 *)(iVar1 + 2) = 0;
  FUN_08020cfe();
  if (cVar2 != '\0') {
    return 2;
  }
  FUN_08020d10();
  FUN_08022644();
  *(undefined1 *)(param_1 + 0x3b8) = 0;
  return 0;
}



/* FUN_08020cfe at 08020cfe */

void FUN_08020cfe(byte *param_1,uint param_2)

{
  *param_1 = (byte)param_2 & 0x7f;
  param_1[1] = (byte)(param_2 >> 7);
  return;
}



/* FUN_08020d10 at 08020d10 */

undefined8 FUN_08020d10(undefined4 param_1)

{
  undefined4 *unaff_r4;
  
  *(undefined1 *)(unaff_r4 + 0xee) = 1;
  return CONCAT44(param_1,*unaff_r4);
}



/* FUN_08020d1c at 08020d1c */

longlong FUN_08020d1c(int *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint extraout_r1;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  uVar2 = param_1[param_2 * 7 + 0x13];
  iVar4 = *param_1;
  uVar3 = uVar2 - param_1[param_2 * 7 + 0x14];
  if ((uint)param_1[param_2 * 7 + 0x10] < uVar2 - param_1[param_2 * 7 + 0x14]) {
    uVar3 = param_1[param_2 * 7 + 0x10];
  }
  while( true ) {
    uVar1 = *(uint *)(iVar4 + param_2 * 0x20 + 0x918) & 0xffff;
    bVar5 = uVar1 <= uVar3 + 3 >> 2;
    if (!bVar5) {
      uVar1 = param_1[param_2 * 7 + 0x13];
      uVar2 = param_1[param_2 * 7 + 0x14];
    }
    if ((bVar5 || uVar1 <= uVar2) || (uVar1 == 0)) break;
    uVar3 = uVar1 - uVar2;
    if ((uint)param_1[param_2 * 7 + 0x10] < uVar1 - uVar2) {
      uVar3 = param_1[param_2 * 7 + 0x10];
    }
    param_3 = param_1[4] & 0xff;
    FUN_080225b2(iVar4,param_1[param_2 * 7 + 0x11],param_2 & 0xff,uVar3 & 0xffff,param_3,param_4);
    param_1[param_2 * 7 + 0x11] = param_1[param_2 * 7 + 0x11] + uVar3;
    param_1[param_2 * 7 + 0x14] = uVar3 + param_1[param_2 * 7 + 0x14];
    uVar2 = extraout_r1;
  }
  if (uVar3 == 0) {
    *(uint *)(iVar4 + 0x834) = *(uint *)(iVar4 + 0x834) & ~(1 << (param_2 & 0xff));
  }
  return (ulonglong)param_3 << 0x20;
}



/* FUN_08020dac at 08020dac */

void FUN_08020dac(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  FUN_080229a0();
  FUN_08020f98();
  puVar1 = DAT_08021160;
  *DAT_08021160 = *DAT_08021160 | 0x80;
  FUN_08020f8e(*puVar1 & 0x80,0);
  param_3 = param_3 | 1;
  *puVar1 = param_3;
  FUN_08020f8e(*puVar1 & 1);
  param_3 = param_3 | 2;
  *puVar1 = param_3;
  FUN_08020f8e(*puVar1 & 2);
  *puVar1 = param_3 | 4;
  *puVar1 = *puVar1 | 8;
  local_24 = 0x32;
  local_1c = 0;
  local_18 = 0;
  local_20 = 2;
  local_14 = 2;
  FUN_08014fe4(DAT_08021164,&local_24);
  *puVar1 = *puVar1 | 0x400000;
  puVar2 = DAT_08021168;
  FUN_080202a4(0x3b,4,0);
  FUN_080202de(0x3b);
  FUN_08021042();
  puVar2[0x18] = DAT_0802116c;
  puVar2[0x19] = DAT_08021170;
  puVar2[0x1a] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0x4000;
  puVar2[0x1d] = 0;
  puVar2[0x1e] = 0;
  puVar2[0x1f] = 0;
  puVar2[0x20] = 0;
  iVar3 = FUN_080229d4(puVar2 + 0x18);
  if (iVar3 != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  piVar4 = puVar2 + 0x2d;
  puVar2[0x3d] = DAT_08021174;
  puVar2[0x3e] = 0;
  puVar2[0x3f] = 0;
  puVar2[0x40] = 0;
  puVar2[0x41] = 0;
  puVar2[0x42] = 0;
  puVar2[0x43] = 0x78;
  *piVar4 = DAT_08021178;
  puVar2[0x2e] = 0x7d000;
  puVar2[0x2f] = 0;
  puVar2[0x30] = 0;
  puVar2[0x31] = 0;
  puVar2[0x32] = 0xc;
  puVar2[0x33] = 0;
  puVar2[0x34] = 0;
  iVar3 = FUN_08022ab4(piVar4);
  if (iVar3 != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(uint *)(*piVar4 + 0xc) = *(uint *)(*piVar4 + 0xc) | 0x10;
  *puVar2 = DAT_0802117c;
  puVar2[1] = 0x8000000;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0x400;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0x100;
  puVar2[8] = 0;
  puVar2[9] = 0;
  iVar3 = FUN_08022dfc(puVar2);
  if (iVar3 != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  FUN_0802326a(piVar4);
  puVar5 = puVar2 + 0x5e;
  puVar2[0x7c] = DAT_08021180;
  iVar3 = FUN_0802334c(puVar2 + 0x7c);
  if (iVar3 != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *puVar5 = DAT_08021184;
  puVar2[0x5f] = 0xf;
  puVar2[0x60] = 0;
  puVar2[0x61] = 999;
  puVar2[0x62] = 0;
  iVar3 = FUN_08023374(puVar5);
  if (iVar3 != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  puVar2[0x6d] = DAT_08021188;
  puVar2[0x6e] = 1;
  puVar2[0x6f] = 0;
  puVar2[0x70] = 63999;
  puVar2[0x71] = 0;
  iVar3 = FUN_08023374(puVar2 + 0x6d);
  if (iVar3 != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  FUN_080210ce();
  FUN_0802338e(puVar5);
  FUN_0802338e(puVar2 + 0x6d);
  FUN_0802338e(DAT_0802118c);
  enableIRQinterrupts();
  FUN_080239e6(DAT_08021194,DAT_08021190,4);
  FUN_08023dec();
  FUN_08023e04();
  return;
}



/* FUN_08020f8e at 08020f8e */

undefined4 FUN_08020f8e(undefined4 param_1)

{
  return param_1;
}



/* FUN_08020f98 at 08020f98 */

void FUN_08020f98(void)

{
  int iVar1;
  uint uVar2;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  *DAT_08021198 = *DAT_08021198 | 0x10000000;
  *DAT_0802119c = *DAT_0802119c & 0xffff3fff | 0x8000;
  local_38 = 1;
  local_1c = 0x400000;
  local_20 = 2;
  local_14 = 0xc0;
  local_18 = 6;
  local_10 = 6;
  local_34 = 0x10000;
  local_c = 8;
  iVar1 = FUN_08023e3c(&local_38);
  if (iVar1 != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  local_4c = 0xf;
  local_48 = 2;
  local_44 = 0;
  local_40 = 0x1000;
  local_3c = 0;
  iVar1 = FUN_080227fc(&local_4c,2);
  if (iVar1 != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar2 = FUN_08022906();
  FUN_080202f2(uVar2 / 1000);
  FUN_0802031a(4);
  FUN_080202a4(0xffffffff,10,0);
  return;
}



/* FUN_08021042 at 08021042 */

undefined8 FUN_08021042(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  puVar1 = DAT_08021194;
  *DAT_08021194 = DAT_080211a0;
  puVar1[1] = 0x30000;
  puVar1[2] = 0;
  puVar1[4] = 1;
  puVar1[6] = 1;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = DAT_080211a4;
  puVar1[3] = 0;
  puVar1[7] = 4;
  puVar1[0xc] = 1;
  puVar1[5] = 0;
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  uStack_c = param_4;
  iVar2 = FUN_08023974(puVar1);
  if (iVar2 != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  local_18 = 0x10;
  local_14 = 1;
  local_10 = 7;
  iVar2 = FUN_08023b36(puVar1,&local_18);
  if (iVar2 != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar2 = FUN_080210c2(1,2);
  if (iVar2 != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  local_18 = 3;
  local_14 = 3;
  iVar2 = FUN_08023b36(puVar1,&local_18);
  if (iVar2 != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar2 = FUN_080210c2(0x11,4);
  if (iVar2 != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return CONCAT44(local_14,local_18);
}



/* FUN_080210c2 at 080210c2 */

void FUN_080210c2(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack00000000;
  undefined4 uStack00000004;
  
  uStack00000000 = param_1;
  uStack00000004 = param_2;
  FUN_08023b36();
  return;
}



/* FUN_080210ce at 080210ce */

void FUN_080210ce(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_r3;
  int local_40 [6];
  undefined4 local_28;
  undefined4 local_1c [4];
  undefined4 uStack_c;
  
  puVar1 = DAT_0802118c;
  *DAT_0802118c = DAT_080211a8;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0x80;
  puVar1[4] = 0;
  uStack_c = in_r3;
  iVar2 = FUN_08023374(puVar1);
  if (iVar2 != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  local_1c[0] = 0x1000;
  iVar2 = FUN_08023656(puVar1,local_1c);
  if (iVar2 != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  local_40[0] = FUN_080233bc(puVar1);
  if (local_40[0] != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  local_40[1] = 0;
  iVar2 = FUN_0802412c(puVar1,local_40);
  if (iVar2 != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  local_40[2] = 0x60;
  local_40[3] = 0;
  local_40[4] = 0;
  local_28 = 0;
  iVar2 = FUN_0802356c(puVar1,local_40 + 2,0);
  if (iVar2 != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar2 = FUN_0802356c(puVar1,local_40 + 2,4);
  if (iVar2 != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  FUN_080214ca(puVar1);
  FUN_080233d6(puVar1,0);
  FUN_080233d6(puVar1,4);
  return;
}



/* FUN_080211ac at 080211ac */

void FUN_080211ac(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* FUN_080211ae at 080211ae */

longlong FUN_080211ae(int *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  bVar2 = 0;
  if (param_2 == 0) {
    *(uint *)(iVar1 + 0x28) = *(uint *)(iVar1 + 0x24) | param_3 << 0x10;
  }
  else {
    uVar3 = *(uint *)(iVar1 + 0x24) + (*(uint *)(iVar1 + 0x28) >> 0x10);
    for (; (int)(uint)bVar2 < param_2 + -1; bVar2 = bVar2 + 1) {
      uVar3 = uVar3 + (*(uint *)(iVar1 + (uint)bVar2 * 4 + 0x104) >> 0x10);
    }
    *(uint *)(iVar1 + param_2 * 4 + 0x100) = uVar3 | param_3 << 0x10;
  }
  return (ulonglong)param_4 << 0x20;
}



/* FUN_080211f0 at 080211f0 */

undefined4 FUN_080211f0(int *param_1,undefined4 param_2)

{
  *(undefined4 *)(*param_1 + 0x24) = param_2;
  return 0;
}



/* FUN_080211f8 at 080211f8 */

void FUN_080211f8(void)

{
  undefined4 unaff_r7;
  
  FUN_0802028a(3);
  FUN_080202a4(0xfffffff4,0,0);
  FUN_080202a4(0xfffffff5,0,0);
  FUN_080202a4(0xfffffff6,0,0);
  FUN_080202a4(0xfffffffb,0,0);
  FUN_080202a4(0xfffffffc,0,0);
  FUN_080202a4(0xfffffffe,0xf,0);
  FUN_080202a4(0xffffffff,10,0,unaff_r7);
  return;
}



/* FUN_08021258 at 08021258 */

void FUN_08021258(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_24 [4];
  undefined4 local_20;
  undefined4 uStack_10;
  
  iVar2 = DAT_08021598;
  puVar1 = DAT_08021594;
  if (*param_1 == DAT_08021590) {
    *DAT_08021594 = *DAT_08021594 | 0x100;
    uVar4 = 3;
    uStack_10 = param_4;
    FUN_080213ee(*puVar1 & 0x100,10,3,param_4,0);
    local_20 = uVar4;
    FUN_08014fe4(DAT_0802159c,auStack_24);
    *(undefined4 *)(iVar2 + 4) = 0;
    FUN_08021402();
    *(undefined4 *)(iVar2 + 0x14) = 0x800;
    *(undefined4 *)(iVar2 + 0x18) = 0x2000;
    *(undefined4 *)(iVar2 + 0x1c) = 0x100;
    *(undefined4 *)(iVar2 + 0x20) = 0x30000;
    uVar4 = DAT_080215a0;
    *(undefined4 *)(iVar2 + 0x24) = 4;
    iVar3 = FUN_080212d2(4,uVar4);
    if (iVar3 != 0) {
      FUN_080213e8(iVar3,0x83);
    }
    param_1[0xe] = iVar2;
    *(int **)(iVar2 + 0x38) = param_1;
  }
  return;
}



/* FUN_080212d2 at 080212d2 */

void FUN_080212d2(undefined4 param_1,undefined4 param_2)

{
  undefined4 *unaff_r5;
  
  *unaff_r5 = param_2;
  FUN_08022dfc();
  return;
}



/* FUN_080212d4 at 080212d4 */

void FUN_080212d4(void)

{
  FUN_08022dfc();
  return;
}



/* FUN_080212da at 080212da */

uint FUN_080212da(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = DAT_080215a8;
  uVar2 = *param_1;
  if (uVar2 == DAT_080215a4) {
    *DAT_080215a8 = *DAT_080215a8 | 0x1000;
    uVar2 = *puVar1 & 0x1000;
  }
  return uVar2;
}



/* FUN_08021304 at 08021304 */

uint FUN_08021304(uint *param_1)

{
  uint *puVar1;
  
  if (*param_1 != DAT_080215ac) {
    return *param_1;
  }
  FUN_08021586();
  puVar1 = DAT_080215b0;
  *DAT_080215b0 = *DAT_080215b0 | 0x200000;
  return *puVar1 & 0x200000;
}



/* FUN_0802130e at 0802130e */

uint FUN_0802130e(void)

{
  uint *puVar1;
  
  FUN_08021586();
  puVar1 = DAT_080215b0;
  *DAT_080215b0 = *DAT_080215b0 | 0x200000;
  return *puVar1 & 0x200000;
}



/* FUN_08021348 at 08021348 */

void FUN_08021348(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  puVar2 = DAT_080215bc;
  puVar1 = DAT_08021594;
  if (*param_1 == DAT_080215b8) {
    *DAT_08021594 = *DAT_08021594 | 0x800;
    uVar4 = 2;
    uStack_10 = param_4;
    FUN_080213ee(*puVar1 & 0x800,0x1100,2,param_4,0);
    local_18 = 3;
    local_14 = 0xc;
    local_20 = uVar4;
    FUN_08014fe4(DAT_080215c0,&local_24);
    local_20 = 2;
    local_1c = 0;
    local_18 = 3;
    local_14 = 0xc;
    local_24 = 4;
    FUN_08014fe4(DAT_080215c4,&local_24);
    *puVar2 = DAT_080215c8;
    FUN_080213fa();
    puVar2[5] = 0x1000;
    puVar2[6] = 0x4000;
    puVar2[7] = 0x20;
    FUN_0802157a(0);
    puVar2[0xb] = 0x800000;
    puVar2[0xc] = 0x200000;
    iVar3 = FUN_080212d4();
    if (iVar3 != 0) {
      FUN_080213e8(iVar3,0x144);
    }
    param_1[0xf] = (int)puVar2;
    puVar2[0xe] = param_1;
    param_1[0x10] = (int)puVar2;
  }
  return;
}



/* FUN_080213e8 at 080213e8 */

void FUN_080213e8(void)

{
  FUN_080211ac(s__E__MM32_F401_MARLIN_V2_HAL_src__080215e3 + 1);
  return;
}



/* FUN_080213ee at 080213ee */

void FUN_080213ee(void)

{
  return;
}



/* FUN_080213fa at 080213fa */

void FUN_080213fa(void)

{
  int unaff_r5;
  
  *(undefined4 *)(unaff_r5 + 4) = 0x8000000;
  *(undefined4 *)(unaff_r5 + 8) = 0;
  *(undefined4 *)(unaff_r5 + 0xc) = 0;
  *(undefined4 *)(unaff_r5 + 0x10) = 0x400;
  return;
}



/* FUN_08021402 at 08021402 */

void FUN_08021402(undefined4 param_1)

{
  int unaff_r5;
  
  *(undefined4 *)(unaff_r5 + 8) = param_1;
  *(undefined4 *)(unaff_r5 + 0xc) = param_1;
  *(undefined4 *)(unaff_r5 + 0x10) = 0x400;
  return;
}



/* FUN_0802140e at 0802140e */

void FUN_0802140e(int *param_1)

{
  if (*param_1 == DAT_080215b8) {
    *DAT_08021594 = *DAT_08021594 & 0xfffff7ff;
    FUN_08015178(DAT_080215c0,0x1f00);
    FUN_08015178(DAT_080215c4,4);
    FUN_08022ee2(param_1[0xf]);
    FUN_08022ee2(param_1[0x10]);
    return;
  }
  return;
}



/* FUN_0802144a at 0802144a */

uint FUN_0802144a(int *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint unaff_r7;
  
  puVar1 = DAT_080215b0;
  iVar2 = *param_1;
  if (iVar2 == DAT_080215cc) {
    *DAT_080215b0 = *DAT_080215b0 | 2;
    return *puVar1 & 2;
  }
  if (iVar2 == DAT_080215d0) {
    DAT_080215b0[1] = DAT_080215b0[1] | 0x20000;
    uVar3 = puVar1[1] & 0x20000;
    FUN_080202a4(0x19,2,0);
    uVar4 = 0x19;
  }
  else {
    if (iVar2 != DAT_080215d4) {
      return unaff_r7;
    }
    DAT_080215b0[1] = DAT_080215b0[1] | 0x40000;
    uVar3 = puVar1[1] & 0x40000;
    FUN_080202a4(0x1a,3,0);
    uVar4 = 0x1a;
  }
  uVar3 = FUN_080202de(uVar4,uVar3);
  return uVar3;
}



/* FUN_080214ca at 080214ca */

void FUN_080214ca(int *param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (*param_1 != DAT_080215cc) {
    return;
  }
  uStack_18 = 0xc0;
  uStack_14 = 2;
  uStack_10 = 0;
  uStack_c = 2;
  uStack_8 = 2;
  FUN_08014fe4(DAT_0802159c,&uStack_18);
  return;
}



/* FUN_080214d4 at 080214d4 */

void FUN_080214d4(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_18 = 0xc0;
  local_14 = 2;
  local_10 = 0;
  local_c = 2;
  local_8 = 2;
  FUN_08014fe4(DAT_0802159c,&local_18);
  return;
}



/* FUN_080214f4 at 080214f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080214f4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_080215dc;
  if (*param_1 == DAT_080215d8) {
    *DAT_08021594 = *DAT_08021594 | 0x10;
    FUN_08021586();
    FUN_080213fa();
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0x100;
    FUN_0802157a(0x20000);
    uVar2 = _DAT_080215e0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    iVar3 = FUN_080212d2(0,uVar2);
    if (iVar3 != 0) {
      FUN_080213e8(iVar3,0x21b);
    }
    param_1[0xd] = iVar1;
    *(int **)(iVar1 + 0x38) = param_1;
    FUN_080202a4(0x25,7,0);
    FUN_080202de(0x25);
  }
  return;
}



/* FUN_0802157a at 0802157a */

void FUN_0802157a(undefined4 param_1)

{
  int unaff_r5;
  
  *(undefined4 *)(unaff_r5 + 0x20) = param_1;
  *(undefined4 *)(unaff_r5 + 0x24) = 4;
  *(undefined4 *)(unaff_r5 + 0x28) = 3;
  return;
}



/* FUN_08021586 at 08021586 */

void FUN_08021586(void)

{
  FUN_08014fe4(DAT_080215b4,&stack0x00000004);
  return;
}



/* FUN_08021618 at 08021618 */

undefined4
FUN_08021618(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            uint param_7)

{
  *(uint *)(param_1 + 4) =
       *(uint *)(param_1 + 4) & DAT_08021af0 | param_2 | param_3 | param_4 | param_5 | param_6 |
       param_7;
  return 0;
}



/* thunk_FUN_080216bc at 08021642 */

undefined4 thunk_FUN_080216bc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}



/* FUN_08021644 at 08021644 */

undefined4 FUN_08021644(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x80) = *param_2;
  return 0;
}



/* FUN_0802164e at 0802164e */

undefined4 FUN_0802164e(undefined4 *param_1)

{
  *param_1 = 3;
  return 0;
}



/* FUN_08021652 at 08021652 */

undefined4 FUN_08021652(undefined4 *param_1)

{
  *param_1 = 0;
  return 0;
}



/* FUN_0802165a at 0802165a */

uint FUN_0802165a(uint *param_1)

{
  return *param_1 & 3;
}



/* FUN_08021662 at 08021662 */

undefined4 FUN_08021662(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(uint *)(param_1 + 0xc) =
       param_2[4] | param_2[1] | param_2[2] | param_2[3] | *(uint *)(param_1 + 0xc) & 0xfffff000;
  return 0;
}



/* FUN_08021684 at 08021684 */

undefined4 FUN_08021684(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 + param_1 + 0x14);
}



/* FUN_08021698 at 08021698 */

undefined4 FUN_08021698(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x24) = *param_2;
  *(undefined4 *)(param_1 + 0x28) = param_2[1];
  *(uint *)(param_1 + 0x2c) =
       *(uint *)(param_1 + 0x2c) & 0xffffff08 | param_2[2] | param_2[3] | param_2[4] | param_2[5];
  return 0;
}



/* FUN_080216bc at 080216bc */

undefined4 FUN_080216bc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}



/* FUN_080216c2 at 080216c2 */

void FUN_080216c2(undefined4 param_1)

{
  FUN_08021726(0x10);
  FUN_08021962(param_1,0x10,10000);
  return;
}



/* FUN_080216d6 at 080216d6 */

void FUN_080216d6(undefined4 param_1)

{
  FUN_08021726(0x11);
  FUN_08021962(param_1,0x11,10000);
  return;
}



/* FUN_080216ea at 080216ea */

void FUN_080216ea(undefined4 param_1)

{
  FUN_08021726(0x12);
  FUN_08021962(param_1,0x12,10000);
  return;
}



/* FUN_080216fe at 080216fe */

void FUN_080216fe(undefined4 param_1)

{
  FUN_08021726(0x18);
  FUN_08021962(param_1,0x18,10000);
  return;
}



/* FUN_08021712 at 08021712 */

void FUN_08021712(undefined4 param_1)

{
  FUN_08021726(0x19);
  FUN_08021962(param_1,0x19,10000);
  return;
}



/* FUN_08021726 at 08021726 */

void FUN_08021726(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack00000000;
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  
  uStack00000008 = 0x40;
  uStack0000000c = 0;
  uStack00000010 = 0x400;
  uStack00000000 = param_2;
  uStack00000004 = param_1;
  FUN_08021662();
  return;
}



/* FUN_0802173e at 0802173e */

void FUN_0802173e(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0802185e();
  FUN_08021754(uVar1,0xc);
  FUN_08021962();
  return;
}



/* FUN_08021754 at 08021754 */

void FUN_08021754(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  
  uStack00000008 = 0x40;
  uStack0000000c = 0;
  uStack00000010 = 0x400;
  uStack00000004 = param_2;
  FUN_08021662();
  return;
}



/* FUN_08021764 at 08021764 */

void FUN_08021764(void)

{
  FUN_08021662();
  return;
}



/* FUN_0802176a at 0802176a */

void FUN_0802176a(undefined4 param_1)

{
  FUN_08021786();
  FUN_08021764();
  FUN_08021962(param_1,7,10000);
  return;
}



/* FUN_08021786 at 08021786 */

void FUN_08021786(void)

{
  return;
}



/* FUN_08021788 at 08021788 */

void FUN_08021788(void)

{
  return;
}



/* FUN_08021796 at 08021796 */

undefined4 FUN_08021796(void)

{
  int extraout_r1;
  int iVar1;
  int unaff_r4;
  
  FUN_0802185e();
  FUN_08021662();
  FUN_0802181c();
  iVar1 = extraout_r1;
  do {
    if (iVar1 == 0) {
      return 0x80000000;
    }
    iVar1 = iVar1 + -1;
  } while (-1 < *(int *)(unaff_r4 + 0x34) << 0x18);
  *(undefined4 *)(unaff_r4 + 0x38) = 0x5ff;
  return 0;
}



/* FUN_080217d4 at 080217d4 */

undefined4 FUN_080217d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int extraout_r1;
  int iVar2;
  bool bVar3;
  
  FUN_08021754(0x1aa,8,param_3,param_4,0x1aa);
  FUN_0802181c();
  iVar2 = extraout_r1;
  do {
    if (iVar2 == 0) {
      return 0x80000000;
    }
    iVar2 = iVar2 + -1;
  } while ((*(uint *)(param_1 + 0x34) & 0x45) == 0);
  if (*(int *)(param_1 + 0x34) << 0x1d < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0x40;
    uVar1 = 4;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x34) << 0x19;
    bVar3 = iVar2 < 0;
    if (bVar3) {
      iVar2 = 0x40;
    }
    if (bVar3) {
      *(int *)(param_1 + 0x38) = iVar2;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_0802181c at 0802181c */

void FUN_0802181c(void)

{
  return;
}



/* FUN_08021834 at 08021834 */

void FUN_08021834(undefined4 param_1)

{
  FUN_08021726(0x37);
  FUN_08021962(param_1,0x37,10000);
  return;
}



/* FUN_08021848 at 08021848 */

void FUN_08021848(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08021878(0x40,0x29,param_3,param_4,param_2 | DAT_08021afc);
  FUN_08021764();
  FUN_08021ab8(param_1);
  return;
}



/* FUN_0802185e at 0802185e */

void FUN_0802185e(void)

{
  return;
}



/* FUN_08021866 at 08021866 */

void FUN_08021866(void)

{
  FUN_0802185e();
  FUN_08021878(0xc0,2);
  FUN_08021764();
  FUN_08021a7a();
  return;
}



/* FUN_08021878 at 08021878 */

void FUN_08021878(void)

{
  return;
}



/* FUN_08021888 at 08021888 */

void FUN_08021888(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08021788(9,0xc0,param_3,param_4,param_2,9);
  FUN_08021764();
  FUN_08021a7a(param_1);
  return;
}



/* FUN_080218a8 at 080218a8 */

undefined4 FUN_080218a8(int param_1,undefined2 *param_2)

{
  uint uVar1;
  int extraout_r1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_20 [5];
  
  local_20[0] = 0;
  FUN_08021878(0x40,3);
  FUN_08021662(param_1,local_20);
  FUN_0802181c();
  iVar2 = extraout_r1;
  do {
    if (iVar2 == 0) {
      return 0x80000000;
    }
    iVar2 = iVar2 + -1;
  } while ((*(uint *)(param_1 + 0x34) & 0x45) == 0);
  if (*(int *)(param_1 + 0x34) << 0x1d < 0) {
    uVar3 = 4;
  }
  else {
    if (-1 < *(int *)(param_1 + 0x34) << 0x1f) {
      if ((*(uint *)(param_1 + 0x10) & 0xff) != 3) {
        return 1;
      }
      *(undefined4 *)(param_1 + 0x38) = 0x5ff;
      uVar1 = FUN_08021684(param_1,0);
      if ((uVar1 & 0xe000) == 0) {
        *param_2 = (short)(uVar1 >> 0x10);
        return 0;
      }
      if ((int)(uVar1 << 0x11) < 0) {
        return 0x2000;
      }
      if (-1 < (int)(uVar1 << 0x10)) {
        return 0x10000;
      }
      return 0x1000;
    }
    uVar3 = 1;
  }
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  return uVar3;
}



/* FUN_08021936 at 08021936 */

void FUN_08021936(undefined4 param_1)

{
  FUN_08021726(0xd);
  FUN_08021962(param_1,0xd,10000);
  return;
}



/* FUN_08021962 at 08021962 */

longlong FUN_08021962(int param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = (*DAT_08021af8 / 8000) * param_3;
  do {
    if (iVar3 == 0) {
      return CONCAT44(param_4,0x80000000);
    }
    iVar3 = iVar3 + -1;
  } while ((*(uint *)(param_1 + 0x34) & 0x45) == 0);
  if (*(int *)(param_1 + 0x34) << 0x1d < 0) {
    uVar2 = 4;
  }
  else {
    if (-1 < *(int *)(param_1 + 0x34) << 0x1f) {
      if ((*(uint *)(param_1 + 0x10) & 0xff) != param_2) {
        return CONCAT44(param_4,1);
      }
      *(undefined4 *)(param_1 + 0x38) = 0x5ff;
      uVar1 = FUN_08021684(param_1,0);
      if ((uVar1 & DAT_08021b00) == 0) {
        return (ulonglong)param_4 << 0x20;
      }
      if ((int)(uVar1 & DAT_08021b00) < 0) {
        return CONCAT44(param_4,0x2000000);
      }
      if ((int)(uVar1 << 1) < 0) {
        return CONCAT44(param_4,0x40);
      }
      if ((int)(uVar1 << 2) < 0) {
        return CONCAT44(param_4,0x80);
      }
      if ((int)(uVar1 << 3) < 0) {
        return CONCAT44(param_4,0x100);
      }
      if ((int)(uVar1 << 4) < 0) {
        return CONCAT44(param_4,0x200);
      }
      if ((int)(uVar1 << 5) < 0) {
        return CONCAT44(param_4,0x400);
      }
      if ((int)(uVar1 << 7) < 0) {
        return CONCAT44(param_4,0x800);
      }
      if ((int)(uVar1 << 8) < 0) {
        return CONCAT44(param_4,0x1000);
      }
      if ((int)(uVar1 << 9) < 0) {
        return CONCAT44(param_4,0x2000);
      }
      if ((int)(uVar1 << 10) < 0) {
        return CONCAT44(param_4,0x4000);
      }
      if ((int)(uVar1 << 0xb) < 0) {
        return CONCAT44(param_4,0x8000);
      }
      if ((int)(uVar1 << 0xd) < 0) {
        return CONCAT44(param_4,0x20000);
      }
      if ((int)(uVar1 << 0xe) < 0) {
        return CONCAT44(param_4,0x40000);
      }
      if ((int)(uVar1 << 0xf) < 0) {
        return CONCAT44(param_4,0x80000);
      }
      if ((int)(uVar1 << 0x10) < 0) {
        return CONCAT44(param_4,0x100000);
      }
      if ((int)(uVar1 << 0x11) < 0) {
        return CONCAT44(param_4,0x200000);
      }
      if ((int)(uVar1 << 0x12) < 0) {
        return CONCAT44(param_4,0x400000);
      }
      if ((int)(uVar1 << 0x1c) < 0) {
        return CONCAT44(param_4,0x800000);
      }
      return CONCAT44(param_4,0x10000);
    }
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  return CONCAT44(param_4,uVar2);
}



/* FUN_08021a7a at 08021a7a */

undefined4 FUN_08021a7a(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*DAT_08021af8 / 8000) * 10000;
  do {
    if (iVar1 == 0) {
      return 0x80000000;
    }
    iVar1 = iVar1 + -1;
  } while ((*(uint *)(param_1 + 0x34) & 0x45) == 0);
  if (*(int *)(param_1 + 0x34) << 0x1d < 0) {
    uVar2 = 4;
  }
  else {
    if (-1 < *(int *)(param_1 + 0x34) << 0x1f) {
      *(undefined4 *)(param_1 + 0x38) = 0x5ff;
      return 0;
    }
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  return uVar2;
}



/* FUN_08021ab8 at 08021ab8 */

undefined4 FUN_08021ab8(int param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_08021af8 / 8000) * 10000;
  do {
    if (iVar1 == 0) {
      return 0x80000000;
    }
    iVar1 = iVar1 + -1;
  } while ((*(uint *)(param_1 + 0x34) & 0x45) == 0);
  if (*(int *)(param_1 + 0x34) << 0x1d < 0) {
    *(undefined4 *)(param_1 + 0x38) = 4;
    return 4;
  }
  *(undefined4 *)(param_1 + 0x38) = 0x5ff;
  return 0;
}



/* FUN_08021b14 at 08021b14 */

longlong FUN_08021b14(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte bVar8;
  bool bVar9;
  
  pbVar1 = DAT_08021c40;
  uVar3 = (ushort)*(byte *)(param_2 + 1);
  pbVar7 = (byte *)(param_1 + 0x1fc);
  switch(uVar3) {
  case 0:
    if (*pbVar7 - 2 < 2) {
      uVar6 = 1;
      if (*(int *)(param_1 + 0x204) != 0) {
        uVar6 = 3;
      }
      *(undefined4 *)(param_1 + 0xc) = uVar6;
      uVar6 = 2;
      iVar4 = param_1 + 0xc;
      goto LAB_08021c08;
    }
    break;
  case 1:
    if (*pbVar7 - 2 < 2) {
      if (*(short *)(param_2 + 2) != 1) goto LAB_08021c3a;
      uVar6 = 0;
      goto LAB_08021c2a;
    }
    break;
  case 3:
    if (*(short *)(param_2 + 2) != 1) goto LAB_08021c3a;
    uVar6 = 1;
LAB_08021c2a:
    *(undefined4 *)(param_1 + 0x204) = uVar6;
    (**(code **)(*(int *)(param_1 + 0x214) + 8))(param_1,param_2);
LAB_08021c36:
    FUN_08021c72();
    goto LAB_08021c3a;
  case 5:
    bVar9 = *(short *)(param_2 + 4) == 0;
    if (bVar9) {
      uVar3 = *(ushort *)(param_2 + 6);
    }
    if (bVar9 && uVar3 == 0) {
      bVar2 = *(byte *)(param_2 + 2);
      bVar8 = bVar2 & 0x7f;
      if (*pbVar7 != 3) {
        *(byte *)(param_1 + 0x1fe) = bVar8;
        FUN_0801f86c(param_1,bVar8);
        FUN_08021c72();
        if ((bVar2 & 0x7f) == 0) {
          bVar2 = 1;
        }
        else {
          bVar2 = 2;
        }
        *pbVar7 = bVar2;
        goto LAB_08021c3a;
      }
    }
    break;
  case 6:
    FUN_08021d40(param_1);
    goto LAB_08021c3a;
  case 8:
    if (*(short *)(param_2 + 6) == 1) {
      if (*pbVar7 == 2) {
        *(undefined4 *)(param_1 + 8) = 0;
        uVar6 = 1;
        iVar4 = param_1 + 8;
      }
      else {
        if (*pbVar7 != 3) break;
        uVar6 = 1;
        iVar4 = param_1 + 4;
      }
LAB_08021c08:
      FUN_0801f8f4(param_1,iVar4,uVar6);
      goto LAB_08021c3a;
    }
    break;
  case 9:
    *DAT_08021c40 = (byte)*(undefined2 *)(param_2 + 2);
    uVar5 = (uint)*pbVar1;
    if (uVar5 < 2) {
      if (*pbVar7 == 2) {
        if (uVar5 != 0) {
          *(uint *)(param_1 + 4) = uVar5;
          *pbVar7 = 3;
          iVar4 = FUN_08020394(param_1);
joined_r0x08021bca:
          if (iVar4 == 2) break;
        }
      }
      else {
        if (*pbVar7 != 3) break;
        if (uVar5 == 0) {
          *pbVar7 = 2;
          *(undefined4 *)(param_1 + 4) = 0;
          FUN_080203aa(param_1);
        }
        else if (uVar5 != *(uint *)(param_1 + 4)) {
          FUN_080203aa(param_1,*(uint *)(param_1 + 4) & 0xff);
          *(uint *)(param_1 + 4) = (uint)*pbVar1;
          iVar4 = FUN_08020394(param_1);
          goto joined_r0x08021bca;
        }
      }
      goto LAB_08021c36;
    }
  }
  FUN_08021e40();
LAB_08021c3a:
  return (ulonglong)param_4 << 0x20;
}



/* FUN_08021c44 at 08021c44 */

longlong FUN_08021c44(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  if ((*(char *)(param_1 + 0x1fc) == '\x03') && (*(byte *)(param_2 + 4) < 2)) {
    FUN_08021d36(3,*(byte *)(param_2 + 4),*(undefined4 *)(param_1 + 0x214));
    if (*(short *)(param_2 + 6) == 0) {
      FUN_08021c72();
    }
  }
  else {
    FUN_08021e40();
  }
  return (ulonglong)param_4 << 0x20;
}



/* FUN_08021c72 at 08021c72 */

void FUN_08021c72(void)

{
  FUN_0801f938();
  return;
}



/* FUN_08021c78 at 08021c78 */

undefined4 FUN_08021c78(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  bool bVar7;
  
  bVar1 = param_2[4];
  uVar4 = (uint)bVar1;
  pcVar6 = (char *)(param_1 + 0x1fc);
  if ((*param_2 & 0x60) == 0x20) {
    FUN_08021d34();
    return 0;
  }
  bVar2 = param_2[1];
  if (bVar2 == 0) {
    if (*pcVar6 != '\x02') {
      if (*pcVar6 == '\x03') {
        iVar3 = param_1 + (uVar4 & 0x7f) * 0x10;
        if ((int)(uVar4 << 0x18) < 0) {
          piVar5 = (int *)(iVar3 + 0x14);
        }
        else {
          piVar5 = (int *)(iVar3 + 0x104);
        }
        iVar3 = FUN_0801f84c(param_1);
        if (iVar3 != 0) {
          iVar3 = 1;
        }
        *piVar5 = iVar3;
        FUN_0801f8f4(param_1,piVar5,2);
        return 0;
      }
LAB_08021d2c:
      FUN_08021e40();
      return 0;
    }
    bVar7 = (bVar1 & 0x7f) == 0;
LAB_08021cfa:
    if (!bVar7) {
      FUN_0801f818(param_1);
    }
  }
  else {
    if (bVar2 == 1) {
      if (*pcVar6 == '\x02') goto LAB_08021cce;
      if (*pcVar6 != '\x03') goto LAB_08021d2c;
      if (*(short *)(param_2 + 2) != 0) {
        return 0;
      }
      if ((bVar1 & 0x7f) != 0) {
        FUN_0801f832(param_1);
        goto LAB_08021ce2;
      }
    }
    else {
      if (bVar2 != 3) {
        return 0;
      }
      if (*pcVar6 == '\x02') {
LAB_08021cce:
        if (uVar4 == 0) {
          return 0;
        }
        bVar7 = uVar4 == 0x80;
        goto LAB_08021cfa;
      }
      if (*pcVar6 != '\x03') goto LAB_08021d2c;
      if ((*(short *)(param_2 + 2) == 0) && (uVar4 != 0 && uVar4 != 0x80)) {
        FUN_0801f818(param_1);
      }
LAB_08021ce2:
      FUN_08021d34();
    }
    FUN_08021c72();
  }
  return 0;
}



/* FUN_08021d34 at 08021d34 */

void FUN_08021d34(void)

{
  int unaff_r6;
  
                    /* WARNING: Could not recover jumptable at 0x08021d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(unaff_r6 + 0x18) + 8))();
  return;
}



/* FUN_08021d36 at 08021d36 */

void FUN_08021d36(undefined4 param_1,undefined4 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x08021d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 8))();
  return;
}



/* FUN_08021d40 at 08021d40 */

uint FUN_08021d40(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 *puVar5;
  bool bVar6;
  uint local_10;
  
  uVar3 = *(ushort *)(param_2 + 2) >> 8;
  puVar5 = (undefined4 *)(param_1 + 0x210);
  local_10 = param_4;
  if (uVar3 == 1) {
    uVar1 = FUN_08021e38();
    iVar2 = (*(code *)*puVar5)(uVar1,&local_10);
  }
  else if (uVar3 == 2) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      iVar2 = (**(code **)(*(int *)(param_1 + 0x214) + 0x28))();
    }
    else {
      iVar2 = (**(code **)(*(int *)(param_1 + 0x214) + 0x2c))(&local_10);
    }
    *(undefined1 *)(iVar2 + 1) = 2;
  }
  else if (uVar3 == 3) {
    switch((char)*(ushort *)(param_2 + 2)) {
    case '\0':
      uVar1 = FUN_08021e38();
      iVar2 = (*(code *)puVar5[1])(uVar1,&local_10);
      break;
    case '\x01':
      uVar1 = FUN_08021e38();
      iVar2 = (*(code *)puVar5[2])(uVar1,&local_10);
      break;
    case '\x02':
      uVar1 = FUN_08021e38();
      iVar2 = (*(code *)puVar5[3])(uVar1,&local_10);
      break;
    case '\x03':
      uVar1 = FUN_08021e38();
      iVar2 = (*(code *)puVar5[4])(uVar1,&local_10);
      break;
    case '\x04':
      uVar1 = FUN_08021e38();
      iVar2 = (*(code *)puVar5[5])(uVar1,&local_10);
      break;
    case '\x05':
      uVar1 = FUN_08021e38();
      iVar2 = (*(code *)puVar5[6])(uVar1,&local_10);
      break;
    default:
      goto switchD_08021dbc_caseD_6;
    }
  }
  else if (uVar3 == 6) {
    if (*(char *)(param_1 + 0x10) != '\0') goto switchD_08021dbc_caseD_6;
    iVar2 = (**(code **)(*(int *)(param_1 + 0x214) + 0x34))(&local_10);
  }
  else {
    if ((uVar3 != 7) || (*(char *)(param_1 + 0x10) != '\0')) {
switchD_08021dbc_caseD_6:
      FUN_08021e40();
      return local_10;
    }
    iVar2 = (**(code **)(*(int *)(param_1 + 0x214) + 0x30))(&local_10);
    *(undefined1 *)(iVar2 + 1) = 7;
  }
  uVar4 = local_10 & 0xffff;
  bVar6 = uVar4 != 0;
  if (bVar6) {
    uVar4 = (uint)*(ushort *)(param_2 + 6);
  }
  if (bVar6 && uVar4 != 0) {
    uVar3 = (ushort)local_10;
    if ((uint)*(ushort *)(param_2 + 6) < (local_10 & 0xffff)) {
      uVar3 = *(ushort *)(param_2 + 6);
    }
    local_10 = CONCAT22(local_10._2_2_,uVar3);
    FUN_0801f8f4(param_1,iVar2,uVar3);
  }
  return local_10;
}



/* FUN_08021e38 at 08021e38 */

int FUN_08021e38(void)

{
  int unaff_r4;
  
  return (int)*(char *)(unaff_r4 + 0x10);
}



/* FUN_08021e40 at 08021e40 */

void FUN_08021e40(void)

{
  FUN_08021e6e();
  return;
}



/* FUN_08021e46 at 08021e46 */

void FUN_08021e46(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(ushort *)(param_1 + 2) = (ushort)(byte)param_2[2] + (ushort)(byte)param_2[3] * 0x100;
  *(ushort *)(param_1 + 4) = (ushort)(byte)param_2[4] + (ushort)(byte)param_2[5] * 0x100;
  *(ushort *)(param_1 + 6) = (ushort)(byte)param_2[6] + (ushort)(byte)param_2[7] * 0x100;
  return;
}



/* FUN_08021e6e at 08021e6e */

void FUN_08021e6e(undefined4 param_1)

{
  FUN_0801f818(param_1,0x80);
  FUN_0801f818(param_1,0);
  return;
}



/* FUN_08021e84 at 08021e84 */

void FUN_08021e84(char *param_1,undefined1 *param_2,short *param_3)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  iVar3 = 0;
  pcVar1 = param_1;
  while (*pcVar1 != '\0') {
    iVar3 = iVar3 + 1;
    pcVar1 = pcVar1 + 1;
  }
  *param_3 = (ushort)((uint)(iVar3 << 0x18) >> 0x17) + 2;
  *param_2 = (char)*param_3;
  bVar2 = 2;
  param_2[1] = 3;
  for (; *param_1 != '\0'; param_1 = param_1 + 1) {
    param_2[bVar2] = *param_1;
    param_2[(byte)(bVar2 + 1)] = 0;
    bVar2 = bVar2 + 2;
  }
  return;
}



/* FUN_08021e8c at 08021e8c */

void FUN_08021e8c(char *param_1,undefined4 param_2,short *param_3,undefined1 *param_4)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = 0;
  pcVar1 = param_1;
  while (*pcVar1 != '\0') {
    iVar3 = iVar3 + 1;
    pcVar1 = pcVar1 + 1;
  }
  *param_3 = (ushort)((uint)(iVar3 << 0x18) >> 0x17) + 2;
  *param_4 = (char)*param_3;
  bVar2 = 2;
  param_4[1] = 3;
  for (; *param_1 != '\0'; param_1 = param_1 + 1) {
    param_4[bVar2] = *param_1;
    param_4[(byte)(bVar2 + 1)] = 0;
    bVar2 = bVar2 + 2;
  }
  return;
}



/* FUN_08021ecc at 08021ecc */

longlong FUN_08021ecc(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
                     undefined4 param_6,int param_7)

{
  uint uVar1;
  int in_stack_00000024;
  
  uVar1 = DAT_080227d8;
  if (param_7 == 1) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffeffff;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & uVar1;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffcfffff;
    if (in_stack_00000024 == 1) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x100000;
    }
    FUN_080227ac(param_1);
  }
  else {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x40;
    FUN_080227ac(param_1);
    *(undefined4 *)(param_1 + 0x38) = 0x10000;
  }
  if (param_5 == 1) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 6;
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x20;
  }
  return (ulonglong)param_4 << 0x20;
}



/* FUN_08021f3a at 08021f3a */

undefined4 FUN_08021f3a(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
  return 0;
}



/* FUN_08021f42 at 08021f42 */

undefined4 FUN_08021f42(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
  return 0;
}



/* FUN_08021f4e at 08021f4e */

longlong FUN_08021f4e(int param_1,int param_2)

{
  uint uVar1;
  uint unaff_r7;
  
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0x9fffffff;
  if (param_2 == 1) {
    uVar1 = *(uint *)(param_1 + 0xc) | 0x20000000;
  }
  else {
    if (param_2 != 0) goto LAB_080226e0;
    uVar1 = *(uint *)(param_1 + 0xc) | 0x40000000;
  }
  *(uint *)(param_1 + 0xc) = uVar1;
LAB_080226e0:
  FUN_08024178(0x32);
  return (ulonglong)unaff_r7 << 0x20;
}



/* FUN_08021f74 at 08021f74 */

longlong FUN_08021f74(int param_1,uint param_2,uint param_3,int param_4,int param_5,
                     undefined4 param_6,int param_7,int param_8)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int in_stack_0000001c;
  
  uVar5 = 0;
  if (in_stack_0000001c == 0) {
    uVar1 = *(uint *)(param_1 + 0x38) | 0x200000;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x38) | 0x80000;
  }
  *(uint *)(param_1 + 0x38) = uVar1;
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0xe00) = 0;
  *(undefined4 *)(param_1 + 0x800) = *(undefined4 *)(param_1 + 0x800);
  if (param_7 == 1) {
    if (param_4 != 0) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 3;
  }
  FUN_080220bc(param_1,uVar2);
  FUN_08022084(param_1,0x10);
  FUN_080220a2(param_1);
  *(undefined4 *)(param_1 + 0x810) = 0;
  *(undefined4 *)(param_1 + 0x814) = 0;
  *(undefined4 *)(param_1 + 0x818) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x81c) = 0;
  for (; uVar5 < param_2; uVar5 = uVar5 + 1) {
    iVar3 = param_1 + uVar5 * 0x20;
    piVar4 = (int *)(iVar3 + 0x900);
    if (*piVar4 < 0) {
      *piVar4 = 0x48000000;
    }
    else {
      *piVar4 = 0;
    }
    *(undefined4 *)(iVar3 + 0x910) = 0;
    *(undefined4 *)(iVar3 + 0x908) = 0xff;
  }
  for (uVar5 = 0; uVar5 < param_2; uVar5 = uVar5 + 1) {
    iVar3 = param_1 + uVar5 * 0x20;
    piVar4 = (int *)(iVar3 + 0xb00);
    if (*piVar4 < 0) {
      *piVar4 = 0x48000000;
    }
    else {
      *piVar4 = 0;
    }
    *(undefined4 *)(iVar3 + 0xb10) = 0;
    *(undefined4 *)(iVar3 + 0xb08) = 0xff;
  }
  *(uint *)(param_1 + 0x810) = *(uint *)(param_1 + 0x810) & 0xfffffeff;
  if (param_5 == 1) {
    *(undefined4 *)(param_1 + 0x830) = DAT_080227e4;
    *(uint *)(param_1 + 0x830) = *(uint *)(param_1 + 0x830) | 0x10003;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xbfffffff;
  if (param_5 == 0) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10;
  }
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | DAT_080227e8;
  if (param_8 != 0) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 8;
  }
  if (in_stack_0000001c == 1) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x40000004;
  }
  return (ulonglong)param_3 << 0x20;
}



/* FUN_08022084 at 08022084 */

undefined4 FUN_08022084(int param_1,int param_2)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x10) = param_2 << 6 | 0x20;
  iVar1 = DAT_080227ec;
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 == 0) {
      return 3;
    }
  } while (*(int *)(param_1 + 0x10) << 0x1a < 0);
  return 0;
}



/* FUN_080220a2 at 080220a2 */

undefined4 FUN_080220a2(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0x10;
  iVar1 = DAT_080227ec;
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 == 0) {
      return 3;
    }
  } while (*(int *)(param_1 + 0x10) << 0x1b < 0);
  return 0;
}



/* FUN_080220bc at 080220bc */

undefined4 FUN_080220bc(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x800) = param_2 | *(uint *)(param_1 + 0x800);
  return 0;
}



/* FUN_080220c6 at 080220c6 */

undefined4 FUN_080220c6(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = 0;
  if ((*(uint *)(param_1 + 0x808) & 6) != 0) {
    uVar2 = *(uint *)(param_1 + 0x808) & 6;
    bVar3 = uVar2 != 2;
    if (bVar3) {
      uVar2 = *(uint *)(param_1 + 0x808) & 6;
    }
    if (bVar3 && uVar2 != 6) {
      if ((*(uint *)(param_1 + 0x808) & 6) == 4) {
        uVar1 = 2;
      }
    }
    else {
      uVar1 = 3;
    }
  }
  return uVar1;
}



/* FUN_080220fe at 080220fe */

longlong FUN_080220fe(int param_1,byte *param_2,undefined4 param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = DAT_080227f0;
  if (param_2[1] == 1) {
    *(uint *)(param_1 + 0x81c) = 1 << *param_2 & 0xffffU | *(uint *)(param_1 + 0x81c);
    uVar3 = (uint)*param_2;
    puVar1 = (uint *)(param_1 + uVar3 * 0x20 + 0x900);
    uVar4 = *puVar1;
    if ((int)(uVar4 << 0x10) < 0) goto LAB_08022162;
    uVar5 = *puVar1;
    puVar1 = (uint *)FUN_08022166();
    uVar5 = uVar2 | uVar4 | uVar3 << 0x16 | uVar5;
  }
  else {
    *(uint *)(param_1 + 0x81c) = *(uint *)(param_1 + 0x81c) | (1 << *param_2) << 0x10;
    puVar1 = (uint *)(param_1 + (uint)*param_2 * 0x20 + 0xb00);
    uVar3 = *puVar1;
    if ((int)(uVar3 << 0x10) < 0) goto LAB_08022162;
    uVar5 = *puVar1;
    puVar1 = (uint *)FUN_08022166();
    uVar5 = uVar2 | uVar3 | uVar5;
  }
  *puVar1 = uVar5;
LAB_08022162:
  return (ulonglong)param_4 << 0x20;
}



/* FUN_08022166 at 08022166 */

void FUN_08022166(void)

{
  return;
}



/* FUN_08022174 at 08022174 */

undefined8 FUN_08022174(int param_1,byte *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int extraout_r1;
  undefined4 unaff_r7;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  
  iVar2 = param_1 + (uint)*param_2 * 0x20;
  cVar3 = param_2[1] == 1;
  FUN_08022236();
  if (cVar3 == '\0') {
    uVar4 = FUN_080221dc();
    iVar2 = (int)uVar4;
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) goto LAB_080221d8;
    } while (*(int *)((int)((ulonglong)uVar4 >> 0x20) + 8) << 0x1b < 0);
    FUN_08022210();
  }
  else {
    FUN_08022248();
    *(undefined4 *)(extraout_r1 + iVar2 * 0x20 + 0x900) = unaff_r7;
    uVar4 = FUN_0802225e();
    iVar2 = (int)uVar4;
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) goto LAB_080221d8;
    } while (*(int *)((int)((ulonglong)uVar4 >> 0x20) + 8) << 1 < 0);
    FUN_08022084(param_1,0x10);
    FUN_08022226();
  }
  uVar1 = 0;
LAB_080221d4:
  return CONCAT44(param_3,uVar1);
LAB_080221d8:
  uVar1 = 3;
  goto LAB_080221d4;
}



/* FUN_080221dc at 080221dc */

void FUN_080221dc(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte *unaff_r6;
  undefined4 unaff_r7;
  int in_r12;
  
  *(uint *)(in_r12 + 0xb00) = *(uint *)(in_r12 + 0xb00) & 0xffff7fff;
  *(undefined4 *)(param_2 + (uint)*unaff_r6 * 0x20 + 0xb00) = unaff_r7;
  *(undefined4 *)(param_2 + (uint)*unaff_r6 * 0x20 + 0xb00) = param_4;
  return;
}



/* FUN_08022210 at 08022210 */

void FUN_08022210(void)

{
  int unaff_r4;
  int unaff_r5;
  sbyte *unaff_r6;
  
  *(uint *)(unaff_r4 + 4) = *(uint *)(unaff_r4 + 4) | 0x400;
  *(uint *)(unaff_r4 + 0x1c) = *(uint *)(unaff_r4 + 0x1c) & ~((unaff_r5 << *unaff_r6) << 0x10);
  return;
}



/* FUN_08022226 at 08022226 */

void FUN_08022226(void)

{
  int unaff_r4;
  int unaff_r5;
  sbyte *unaff_r6;
  
  *(uint *)(unaff_r4 + 0x1c) = *(uint *)(unaff_r4 + 0x1c) & ~(unaff_r5 << *unaff_r6 & 0xffffU);
  return;
}



/* FUN_08022236 at 08022236 */

undefined4 FUN_08022236(void)

{
  return DAT_080227ec;
}



/* FUN_08022248 at 08022248 */

void FUN_08022248(void)

{
  int in_r12;
  
  *(uint *)(in_r12 + 0x900) = *(uint *)(in_r12 + 0x900) & 0xffff7fff;
  return;
}



/* FUN_0802225e at 0802225e */

void FUN_0802225e(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte *unaff_r6;
  
  *(undefined4 *)(param_2 + (uint)*unaff_r6 * 0x20 + 0x900) = param_4;
  return;
}



/* FUN_08022276 at 08022276 */

longlong FUN_08022276(int param_1,byte *param_2,uint param_3,undefined4 param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  
  uVar6 = DAT_080227f8;
  uVar3 = DAT_080227f4;
  iVar7 = param_1 + (uint)*param_2 * 0x20;
  if (param_2[1] != 1) {
    *(uint *)(iVar7 + 0xb10) = *(uint *)(iVar7 + 0xb10) & 0xfff80000;
    iVar7 = param_1 + (uint)*param_2 * 0x20;
    *(uint *)(iVar7 + 0xb10) = uVar6 & *(uint *)(iVar7 + 0xb10);
    uVar6 = *(uint *)(param_2 + 8);
    iVar7 = param_1 + (uint)*param_2 * 0x20;
    if (*(int *)(param_2 + 0x14) == 0) {
      *(uint *)(iVar7 + 0xb10) = uVar6 & 0x7ffff | *(uint *)(iVar7 + 0xb10);
      iVar7 = param_1 + (uint)*param_2 * 0x20;
      *(uint *)(iVar7 + 0xb10) = *(uint *)(iVar7 + 0xb10) | 0x80000;
    }
    else {
      uVar6 = ((uVar6 + *(int *)(param_2 + 0x14)) - 1) / uVar6 & 0xffff;
      *(uint *)(iVar7 + 0xb10) = uVar3 & uVar6 << 0x13 | *(uint *)(iVar7 + 0xb10);
      iVar7 = param_1 + (uint)*param_2 * 0x20;
      *(uint *)(iVar7 + 0xb10) = *(int *)(param_2 + 8) * uVar6 & 0x7ffff | *(uint *)(iVar7 + 0xb10);
    }
    if (param_3 == 1) {
      *(undefined4 *)(param_1 + (uint)*param_2 * 0x20 + 0xb14) = *(undefined4 *)(param_2 + 0xc);
    }
    if (param_2[3] == 1) {
      puVar5 = (uint *)(param_1 + (uint)*param_2 * 0x20 + 0xb00);
      if (*(int *)(param_1 + 0x808) << 0x17 < 0) {
        *puVar5 = *puVar5 | 0x10000000;
      }
      else {
        *puVar5 = *puVar5 | 0x20000000;
      }
    }
    puVar5 = (uint *)(param_1 + (uint)*param_2 * 0x20 + 0xb00);
    *puVar5 = *puVar5 | 0x84000000;
    goto LAB_0802247a;
  }
  uVar2 = param_3;
  uVar10 = param_3;
  if (*(int *)(param_2 + 0x14) == 0) {
    uVar6 = *(uint *)(iVar7 + 0x910);
    uVar3 = DAT_080227f8 & uVar6;
    *(uint *)(iVar7 + 0x910) = uVar3;
    FUN_08022482();
    uVar9 = FUN_08022480();
    uVar6 = uVar6 & 0xfff80000 | 0x80000;
LAB_0802233a:
    *(uint *)(uVar3 + 0x10) = uVar6;
  }
  else {
    *(uint *)(iVar7 + 0x910) = *(uint *)(iVar7 + 0x910) & 0xfff80000;
    iVar7 = param_1 + (uint)*param_2 * 0x20;
    *(uint *)(iVar7 + 0x910) = uVar6 & *(uint *)(iVar7 + 0x910);
    uVar6 = *(uint *)(param_2 + 8);
    iVar7 = param_1 + (uint)*param_2 * 0x20;
    iVar4 = iVar7 + 0x900;
    uVar8 = *(uint *)(iVar7 + 0x910);
    iVar7 = *(int *)(param_2 + 0x14);
    uVar9 = FUN_08022480();
    pbVar1 = (byte *)((ulonglong)uVar9 >> 0x20);
    *(uint *)(iVar4 + 0x10) =
         *(uint *)(pbVar1 + 0x14) & 0x7ffff | uVar3 & ((iVar7 + uVar6) - 1) / uVar6 << 0x13 | uVar8;
    if (pbVar1[3] == 1) {
      iVar7 = param_1 + (uint)*pbVar1 * 0x20;
      uVar3 = iVar7 + 0x900;
      uVar6 = *(uint *)(iVar7 + 0x910);
      uVar9 = FUN_08022480();
      uVar6 = uVar6 & 0x9fffffff | 0x20000000;
      goto LAB_0802233a;
    }
  }
  pbVar1 = (byte *)((ulonglong)uVar9 >> 0x20);
  if (param_3 == 1) {
    *(undefined4 *)(param_1 + (uint)*pbVar1 * 0x20 + 0x914) = *(undefined4 *)(pbVar1 + 0x10);
LAB_08022366:
    if (pbVar1[3] == 1) goto LAB_0802236c;
  }
  else {
    if (pbVar1[3] != 1) {
      if (*(int *)(pbVar1 + 0x14) != 0) {
        *(uint *)(param_1 + 0x834) = *(uint *)(param_1 + 0x834) | 1 << *pbVar1;
      }
      goto LAB_08022366;
    }
LAB_0802236c:
    puVar5 = (uint *)(param_1 + (uint)*pbVar1 * 0x20 + 0x900);
    if (*(int *)(param_1 + 0x808) << 0x17 < 0) {
      *puVar5 = *puVar5 | 0x10000000;
    }
    else {
      *puVar5 = *puVar5 | 0x20000000;
    }
  }
  puVar5 = (uint *)(param_1 + (uint)*pbVar1 * 0x20 + 0x900);
  *puVar5 = *puVar5 | 0x84000000;
  param_3 = uVar10;
  if (pbVar1[3] == 1) {
    FUN_080225b2((int)uVar9,*(undefined4 *)(pbVar1 + 0xc),*pbVar1,*(uint *)(pbVar1 + 0x14) & 0xffff,
                 uVar2,param_4);
    param_3 = uVar2;
  }
LAB_0802247a:
  return (ulonglong)param_3 << 0x20;
}



/* FUN_08022480 at 08022480 */

void FUN_08022480(void)

{
  int in_r3;
  undefined4 unaff_r7;
  
  *(undefined4 *)(in_r3 + 0x10) = unaff_r7;
  return;
}



/* FUN_08022482 at 08022482 */

void FUN_08022482(void)

{
  return;
}



/* FUN_08022490 at 08022490 */

longlong FUN_08022490(int param_1,byte *param_2,int param_3,uint param_4)

{
  int extraout_r1;
  byte *pbVar1;
  int extraout_r1_00;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar5 = DAT_080227f8;
  param_1 = param_1 + (uint)*param_2 * 0x20;
  uVar2 = (uint)param_2[1];
  if (uVar2 == 1) {
    uVar2 = *(uint *)(param_2 + 0x14);
    if (uVar2 == 0) {
      uVar5 = DAT_080227f8 & *(uint *)(param_1 + 0x910);
      *(uint *)(param_1 + 0x910) = uVar5;
      uVar6 = FUN_08022592();
      uVar5 = uVar5 & 0xfff80000;
    }
    else {
      FUN_08022574();
      *(uint *)(uVar2 + 0x910) = uVar5 & *(uint *)(uVar2 + 0x910);
      uVar5 = *(uint *)(extraout_r1 + 0x14);
      uVar2 = *(uint *)(extraout_r1 + 8);
      if (uVar5 < *(uint *)(extraout_r1 + 8)) {
        uVar2 = uVar5;
      }
      *(uint *)(extraout_r1 + 0x14) = uVar2;
      uVar6 = FUN_08022592();
      uVar5 = uVar5 | *(uint *)((int)((ulonglong)uVar6 >> 0x20) + 0x14) & 0x7ffff;
    }
    pbVar1 = (byte *)((ulonglong)uVar6 >> 0x20);
    iVar4 = (int)uVar6;
    *(uint *)(uVar2 + 0x10) = uVar5;
    puVar3 = (uint *)(iVar4 + (uint)*pbVar1 * 0x20 + 0x900);
    *puVar3 = *puVar3 | 0x84000000;
    if (param_3 == 1) {
      *(undefined4 *)(iVar4 + (uint)*pbVar1 * 0x20 + 0x914) = *(undefined4 *)(pbVar1 + 0x10);
    }
    else if (*(int *)(pbVar1 + 0x14) != 0) {
      *(uint *)(iVar4 + 0x834) = *(uint *)(iVar4 + 0x834) | 1 << *pbVar1;
    }
  }
  else {
    FUN_08022574();
    uVar5 = uVar5 & *(uint *)(uVar2 + 0xb10);
    *(uint *)(uVar2 + 0xb10) = uVar5;
    iVar4 = *(int *)(extraout_r1_00 + 0x14);
    if (iVar4 != 0) {
      uVar5 = *(uint *)(extraout_r1_00 + 8);
      *(uint *)(extraout_r1_00 + 0x14) = uVar5;
    }
    FUN_08022584();
    *(uint *)(iVar4 + 0x10) = uVar5 | 0x80000;
    uVar6 = FUN_08022584();
    pbVar1 = (byte *)((ulonglong)uVar6 >> 0x20);
    *(uint *)(iVar4 + 0x10) = uVar5 | 0x80000 | *(uint *)(pbVar1 + 8) & 0x7ffff;
    if (param_3 == 1) {
      *(undefined4 *)((int)uVar6 + (uint)*pbVar1 * 0x20 + 0xb14) = *(undefined4 *)(pbVar1 + 0xc);
    }
    puVar3 = (uint *)FUN_08022638();
    *puVar3 = *puVar3 | 0x84000000;
  }
  return (ulonglong)param_4 << 0x20;
}



/* FUN_08022574 at 08022574 */

void FUN_08022574(void)

{
  int unaff_r5;
  
  *(uint *)(unaff_r5 + 0x10) = *(uint *)(unaff_r5 + 0x10) & 0xfff80000;
  return;
}



/* FUN_08022584 at 08022584 */

void FUN_08022584(void)

{
  return;
}



/* FUN_08022592 at 08022592 */

void FUN_08022592(int param_1,byte *param_2)

{
  param_1 = param_1 + (uint)*param_2 * 0x20;
  *(uint *)(param_1 + 0x910) = *(uint *)(param_1 + 0x910) | 0x80000;
  return;
}



/* FUN_080225b2 at 080225b2 */

undefined4 FUN_080225b2(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_5 == 0) {
    for (; uVar1 < param_4 + 3U >> 2; uVar1 = uVar1 + 1) {
      *(undefined4 *)(param_1 + param_3 * 0x1000 + 0x1000) = *param_2;
      param_2 = param_2 + 1;
    }
  }
  return 0;
}



/* FUN_080225d8 at 080225d8 */

undefined4 * FUN_080225d8(int param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_3 + 3U >> 2; uVar1 = uVar1 + 1) {
    *param_2 = *(undefined4 *)(param_1 + 0x1000);
    param_2 = param_2 + 1;
  }
  return param_2;
}



/* FUN_080225f6 at 080225f6 */

longlong FUN_080225f6(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint *puVar1;
  char in_ZR;
  
  FUN_0802269a();
  if (in_ZR == '\0') {
    puVar1 = (uint *)(param_3 + 0xb00);
    if (-1 < (int)*puVar1) {
      *puVar1 = *puVar1 & 0xbfffffff;
    }
    puVar1 = (uint *)FUN_08022638();
  }
  else {
    puVar1 = (uint *)(param_3 + 0x900);
    if (-1 < (int)*puVar1) {
      *puVar1 = *puVar1 & 0xbfffffff;
    }
    puVar1 = (uint *)FUN_0802268e();
  }
  *puVar1 = *puVar1 | 0x200000;
  return (ulonglong)param_4 << 0x20;
}



/* FUN_08022638 at 08022638 */

int FUN_08022638(int param_1,byte *param_2)

{
  return param_1 + (uint)*param_2 * 0x20 + 0xb00;
}



/* FUN_08022644 at 08022644 */

longlong FUN_08022644(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint *puVar1;
  int extraout_r1;
  char in_ZR;
  
  FUN_0802269a();
  if (in_ZR == '\0') {
    *(uint *)(param_3 + 0xb00) = *(uint *)(param_3 + 0xb00) & 0xffdfffff;
    if (*(char *)(extraout_r1 + 3) != '\x03' && *(char *)(extraout_r1 + 3) != '\x02')
    goto LAB_0802268a;
    puVar1 = (uint *)FUN_08022638();
  }
  else {
    *(uint *)(param_3 + 0x900) = *(uint *)(param_3 + 0x900) & 0xffdfffff;
    if (*(char *)(extraout_r1 + 3) != '\x03' && *(char *)(extraout_r1 + 3) != '\x02')
    goto LAB_0802268a;
    puVar1 = (uint *)FUN_0802268e();
  }
  *puVar1 = *puVar1 | 0x10000000;
LAB_0802268a:
  return (ulonglong)param_4 << 0x20;
}



/* FUN_0802268e at 0802268e */

int FUN_0802268e(int param_1,byte *param_2)

{
  return param_1 + (uint)*param_2 * 0x20 + 0x900;
}



/* FUN_0802269a at 0802269a */

void FUN_0802269a(void)

{
  return;
}



/* FUN_080226a6 at 080226a6 */

undefined4 FUN_080226a6(int param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + 0x800);
  *puVar1 = *puVar1 & 0xfffff80f;
  *puVar1 = (param_2 & 0x7f) << 4 | *puVar1;
  return 0;
}



/* FUN_080226c2 at 080226c2 */

longlong FUN_080226c2(int param_1)

{
  uint unaff_r7;
  
  *(uint *)(param_1 + 0x804) = *(uint *)(param_1 + 0x804) & 0xfffffffd;
  FUN_08024178(3);
  return (ulonglong)unaff_r7 << 0x20;
}



/* FUN_080226d0 at 080226d0 */

longlong FUN_080226d0(int param_1)

{
  uint unaff_r7;
  
  *(uint *)(param_1 + 0x804) = *(uint *)(param_1 + 0x804) | 2;
  FUN_08024178(3);
  return (ulonglong)unaff_r7 << 0x20;
}



/* FUN_080226f2 at 080226f2 */

uint FUN_080226f2(int param_1)

{
  return (*(uint *)(param_1 + 0x818) & *(uint *)(param_1 + 0x81c)) >> 0x10;
}



/* FUN_08022700 at 08022700 */

uint FUN_08022700(int param_1)

{
  return *(uint *)(param_1 + 0x818) & *(uint *)(param_1 + 0x81c) & 0xffff;
}



/* FUN_0802270e at 0802270e */

uint FUN_0802270e(int param_1,int param_2)

{
  return *(uint *)(param_1 + param_2 * 0x20 + 0xb08) & *(uint *)(param_1 + 0x814);
}



/* FUN_08022724 at 08022724 */

uint FUN_08022724(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x810) | (*(uint *)(param_1 + 0x834) >> (param_2 & 0xff) & 1) << 7) &
         *(uint *)(param_1 + param_2 * 0x20 + 0x908);
}



/* FUN_08022746 at 08022746 */

uint FUN_08022746(int param_1)

{
  return *(uint *)(param_1 + 0x14) & 1;
}



/* FUN_0802274e at 0802274e */

undefined4 FUN_0802274e(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + 0x900);
  *puVar1 = *puVar1 & 0xfffff800;
  if ((*(uint *)(param_1 + 0x808) & 6) == 4) {
    *puVar1 = *puVar1 | 3;
  }
  *(uint *)(param_1 + 0x804) = *(uint *)(param_1 + 0x804) | 0x100;
  return 0;
}



/* FUN_0802277c at 0802277c */

undefined4 FUN_0802277c(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xb10) = 0;
  *(uint *)(param_1 + 0xb10) = *(uint *)(param_1 + 0xb10) | 0x80000;
  *(uint *)(param_1 + 0xb10) = *(uint *)(param_1 + 0xb10) | 0x18;
  *(uint *)(param_1 + 0xb10) = *(uint *)(param_1 + 0xb10) | 0x60000000;
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0xb14) = param_3;
    *(undefined4 *)(param_1 + 0xb00) = 0x80008000;
  }
  return 0;
}



/* FUN_080227ac at 080227ac */

undefined4 FUN_080227ac(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_080227ec;
  iVar1 = DAT_080227ec;
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 == 0) {
      return 3;
    }
  } while (-1 < *(int *)(param_1 + 0x10));
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return 3;
    }
  } while (*(int *)(param_1 + 0x10) << 0x1f < 0);
  return 0;
}



/* FUN_080227fc at 080227fc */

undefined8 FUN_080227fc(byte *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char cVar7;
  
  puVar1 = DAT_08022930;
  if ((param_1 != (byte *)0x0) &&
     ((cVar7 = (*DAT_08022930 & 0xf) == param_2, param_2 <= (*DAT_08022930 & 0xf) ||
      (FUN_080228fa(), cVar7 != '\0')))) {
    piVar2 = DAT_08022934;
    if (*(int *)param_1 << 0x1e < 0) {
      if (*(int *)param_1 << 0x1d < 0) {
        DAT_08022934[2] = DAT_08022934[2] | 0x1c00;
      }
      if ((int)((uint)*param_1 << 0x1c) < 0) {
        piVar2[2] = piVar2[2] | 0xe000;
      }
      piVar2[2] = piVar2[2] & 0xffffff0fU | *(uint *)(param_1 + 8);
    }
    if ((int)((uint)*param_1 << 0x1f) < 0) {
      uVar3 = *(uint *)(param_1 + 4);
      if (uVar3 == 1) {
        iVar6 = *piVar2 << 0xe;
      }
      else if (uVar3 == 2 || uVar3 == 3) {
        iVar6 = *piVar2 << 6;
      }
      else {
        iVar6 = *piVar2 << 0x1e;
      }
      if (iVar6 < 0) {
        piVar2[2] = uVar3 | piVar2[2] & 0xfffffffcU;
        iVar6 = FUN_0801c724();
        do {
          if ((piVar2[2] & 0xcU) == *(int *)(param_1 + 4) * 4) goto LAB_080228e6;
          iVar4 = FUN_0801c724();
        } while ((uint)(iVar4 - iVar6) < 0x1389);
        uVar5 = 3;
        goto LAB_080228e2;
      }
    }
    else {
LAB_080228e6:
      cVar7 = param_2 == (*puVar1 & 0xf);
      if (((*puVar1 & 0xf) <= param_2) || (FUN_080228fa(), cVar7 != '\0')) {
        if ((int)((uint)*param_1 << 0x1d) < 0) {
          piVar2[2] = piVar2[2] & 0xffffe3ffU | *(uint *)(param_1 + 0xc);
        }
        if ((int)((uint)*param_1 << 0x1c) < 0) {
          piVar2[2] = piVar2[2] & 0xffff1fffU | *(int *)(param_1 + 0x10) << 3;
        }
        uVar3 = FUN_08022948();
        *DAT_0802293c = uVar3 >> (uint)*(byte *)(DAT_08022938 + ((uint)(piVar2[2] << 0x18) >> 0x1c))
        ;
        FUN_080241a0(0xf);
        uVar5 = 0;
        goto LAB_080228e2;
      }
    }
  }
  uVar5 = 1;
LAB_080228e2:
  return CONCAT44(param_4,uVar5);
}



/* FUN_080228fa at 080228fa */

void FUN_080228fa(void)

{
  undefined1 *unaff_r6;
  undefined1 unaff_r7;
  
  *unaff_r6 = unaff_r7;
  return;
}



/* FUN_08022906 at 08022906 */

undefined4 FUN_08022906(void)

{
  return *DAT_0802293c;
}



/* FUN_0802290c at 0802290c */

uint FUN_0802290c(void)

{
  return *DAT_0802293c >> *(sbyte *)(DAT_08022944 + ((uint)(*DAT_08022940 << 0x13) >> 0x1d));
}



/* FUN_0802291c at 0802291c */

uint FUN_0802291c(void)

{
  return *DAT_0802293c >> *(sbyte *)(DAT_08022944 + ((uint)(*DAT_08022940 << 0x10) >> 0x1d));
}



/* FUN_08022948 at 08022948 */

undefined8 FUN_08022948(void)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 in_r3;
  
  puVar2 = DAT_08022994;
  if ((DAT_08022994[1] & 0xc) == 4) {
    return CONCAT44(in_r3,DAT_08022998);
  }
  if ((DAT_08022994[1] & 0xc) != 8) {
    return CONCAT44(in_r3,DAT_0802299c);
  }
  uVar3 = DAT_08022998;
  if (-1 < (int)(*DAT_08022994 << 9)) {
    uVar3 = DAT_0802299c;
  }
  lVar1 = (ulonglong)uVar3 * (ulonglong)((*DAT_08022994 << 0x11) >> 0x17);
  uVar3 = FUN_080155bc((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),*DAT_08022994 & 0x3f,0);
  return CONCAT44(in_r3,uVar3 / ((((*puVar2 << 0xe) >> 0x1e) + 1) * 2));
}



/* FUN_080229a0 at 080229a0 */

longlong FUN_080229a0(void)

{
  uint *puVar1;
  uint unaff_r7;
  
  puVar1 = DAT_080229d0;
  *DAT_080229d0 = *DAT_080229d0 | 0x200;
  *puVar1 = *puVar1 | 0x400;
  *puVar1 = *puVar1 | 0x100;
  FUN_0802028a(3);
  FUN_080241a0(0xf);
  FUN_080211f8();
  return (ulonglong)unaff_r7 << 0x20;
}



/* FUN_080229d4 at 080229d4 */

longlong FUN_080229d4(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != (int *)0x0) {
    if (*(char *)((int)param_1 + 0x3d) == '\0') {
      *(undefined1 *)(param_1 + 0xf) = 0;
      FUN_08021304(param_1);
    }
    FUN_08022a9c();
    uVar2 = FUN_0802290c();
    uVar1 = DAT_08022ab0;
    uVar3 = uVar2 / DAT_08022aac;
    *(uint *)(*param_1 + 4) = uVar3;
    if (uVar1 <= (uint)param_1[1]) {
      uVar3 = (uVar3 * 300) / 1000;
    }
    *(uint *)(*param_1 + 0x20) = uVar3 + 1;
    uVar3 = param_1[1];
    if (uVar3 < uVar1) {
      uVar2 = uVar2 / (uVar3 << 1);
      if ((uVar2 & 0xfff) < 4) {
        uVar2 = 4;
      }
    }
    else {
      if (param_1[2] == 0) {
        uVar2 = uVar2 / (uVar3 * 3);
      }
      else {
        uVar2 = uVar2 / (uVar3 * 0x19) | 0x4000;
      }
      if ((uVar2 & 0xfff) == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = uVar2 | 0x8000;
      }
    }
    *(uint *)(*param_1 + 0x1c) = uVar2;
    *(int *)*param_1 = param_1[7] | param_1[8];
    *(int *)(*param_1 + 8) = param_1[4] | param_1[3];
    *(int *)(*param_1 + 0xc) = param_1[5] | param_1[6];
    *(uint *)*param_1 = *(uint *)*param_1 | 1;
    param_1[0x10] = 0;
    *(undefined1 *)((int)param_1 + 0x3d) = 0x20;
    param_1[0xc] = 0;
    *(undefined1 *)((int)param_1 + 0x3e) = 0;
    return (ulonglong)param_4 << 0x20;
  }
  return CONCAT44(param_4,1);
}



/* FUN_08022a9c at 08022a9c */

void FUN_08022a9c(void)

{
  undefined4 *unaff_r4;
  int unaff_r5;
  
  *(undefined1 *)(unaff_r5 + 1) = 0x24;
  *(uint *)*unaff_r4 = *(uint *)*unaff_r4 & 0xfffffffe;
  return;
}



/* FUN_08022ab4 at 08022ab4 */

undefined8 FUN_08022ab4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    return CONCAT44(param_4,1);
  }
  iVar1 = FUN_08022b06();
  if (iVar1 == 0) {
    FUN_08022b0e();
  }
  FUN_08022af2();
  uVar3 = FUN_08022b18();
  *(int *)((int)uVar3 + 0x14) = (int)((ulonglong)uVar3 >> 0x20);
  uVar2 = FUN_08022ada();
  return CONCAT44(param_4,uVar2);
}



/* FUN_08022ada at 08022ada */

undefined4 FUN_08022ada(void)

{
  int *unaff_r4;
  int unaff_r5;
  
  *(uint *)(*unaff_r4 + 0xc) = *(uint *)(*unaff_r4 + 0xc) | 0x2000;
  *(undefined4 *)(unaff_r5 + 4) = 0;
  *(undefined1 *)(unaff_r5 + 1) = 0x20;
  *(undefined1 *)(unaff_r5 + 2) = 0x20;
  return 0;
}



/* FUN_08022af2 at 08022af2 */

void FUN_08022af2(void)

{
  int *unaff_r4;
  int unaff_r5;
  
  *(undefined1 *)(unaff_r5 + 1) = 0x24;
  *(uint *)(*unaff_r4 + 0xc) = *(uint *)(*unaff_r4 + 0xc) & 0xffffdfff;
  FUN_08022c78();
  return;
}



/* FUN_08022b06 at 08022b06 */

undefined1 FUN_08022b06(void)

{
  int unaff_r4;
  
  return *(undefined1 *)(unaff_r4 + 0x39);
}



/* FUN_08022b0e at 08022b0e */

void FUN_08022b0e(void)

{
  undefined1 *unaff_r5;
  
  *unaff_r5 = 0;
  FUN_080214f4();
  return;
}



/* FUN_08022b18 at 08022b18 */

void FUN_08022b18(void)

{
  int *unaff_r4;
  
  *(uint *)(*unaff_r4 + 0x10) = *(uint *)(*unaff_r4 + 0x10) & 0xffffb7ff;
  return;
}



/* FUN_08022b2c at 08022b2c */

longlong FUN_08022b2c(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = param_1 + 0xe;
  if (*(char *)((int)param_1 + 0x3a) == ' ') {
    if ((param_2 == 0) || (param_3 == 0)) {
      return CONCAT44(param_4,1);
    }
    if ((char)*piVar3 != '\x01') {
      *(char *)piVar3 = '\x01';
      param_1[10] = param_2;
      *(short *)(param_1 + 0xb) = (short)param_3;
      param_1[0xf] = 0;
      *(undefined1 *)((int)param_1 + 0x3a) = 0x22;
      *(undefined **)(param_1[0xd] + 0x3c) = &DAT_08022bc1;
      *(undefined **)(param_1[0xd] + 0x40) = &DAT_08022bf9;
      *(undefined **)(param_1[0xd] + 0x4c) = &DAT_08022c01;
      *(undefined4 *)(param_1[0xd] + 0x50) = 0;
      FUN_08022f36(param_1[0xd],*param_1 + 4,param_2);
      iVar1 = *param_1;
      uVar2 = *(uint *)(iVar1 + 4);
      *(char *)piVar3 = '\0';
      *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 0x100;
      *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) | 1;
      *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) | 0x40;
      return (ulonglong)uVar2 << 0x20;
    }
  }
  return CONCAT44(param_4,2);
}



/* FUN_08022c78 at 08022c78 */

void FUN_08022c78(uint *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar2 = *param_1;
  *(uint *)(uVar2 + 0x10) = *(uint *)(uVar2 + 0x10) & 0xffffcfff | param_1[3];
  *(uint *)(uVar2 + 0xc) =
       *(uint *)(uVar2 + 0xc) & DAT_08022db4 | param_1[2] | param_1[4] | param_1[5] | param_1[7];
  *(uint *)(uVar2 + 0x14) = *(uint *)(uVar2 + 0x14) & 0xfffffcff | param_1[6];
  uVar4 = param_1[7];
  if (uVar4 == 0x8000) {
    uVar3 = DAT_08022dbc;
    if (uVar2 == DAT_08022dbc || uVar2 == DAT_08022db8) {
      FUN_0802291c();
      FUN_0802291c();
      FUN_0802291c();
      FUN_0802291c();
      uVar1 = FUN_0802291c();
    }
    else {
      FUN_0802290c();
      FUN_0802290c();
      FUN_0802290c();
      FUN_0802290c();
      uVar1 = FUN_0802290c();
    }
    uVar5 = FUN_08022dc0(uVar1,param_1[1] << 1);
    uVar2 = ((uVar4 * 8 + 0x32) / 100 & 0xf8) << 1;
    FUN_08022ddc((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),uVar3 / 100);
  }
  else {
    uVar3 = DAT_08022dbc;
    if (uVar2 == DAT_08022dbc || uVar2 == DAT_08022db8) {
      FUN_0802291c();
      FUN_0802291c();
      FUN_0802291c();
      FUN_0802291c();
      uVar1 = FUN_0802291c();
    }
    else {
      FUN_0802290c();
      FUN_0802290c();
      FUN_0802290c();
      FUN_0802290c();
      uVar1 = FUN_0802290c();
    }
    uVar5 = FUN_08022dc0(uVar1,param_1[1] << 2);
    uVar2 = (uVar4 * 0x10 + 0x32) / 100 & 0xf0;
    FUN_08022ddc((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),uVar3 / 100);
  }
  *(uint *)(*param_1 + 8) = uVar2;
  return;
}



/* FUN_08022dc0 at 08022dc0 */

void FUN_08022dc0(void)

{
  return;
}



/* FUN_08022ddc at 08022ddc */

undefined4 FUN_08022ddc(int param_1,uint param_2)

{
  int unaff_r6;
  
  return (int)(((ulonglong)(uint)(param_1 * unaff_r6) / (ulonglong)param_2) / 100);
}



/* FUN_08022dfc at 08022dfc */

longlong FUN_08022dfc(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = FUN_0801c724();
  if (param_1 == (int *)0x0) {
    return CONCAT44(param_3,1);
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0x35) = 2;
  FUN_080231ca();
  do {
    puVar4 = (uint *)*param_1;
    if (-1 < (int)(*puVar4 << 0x1f)) {
      uVar5 = *puVar4 & DAT_080231b8 | param_1[1] | param_1[2] | param_1[3] | param_1[4] |
              param_1[5] | param_1[6] | param_1[7] | param_1[8];
      if (param_1[9] == 4) {
        uVar5 = uVar5 | param_1[0xb] | param_1[0xc];
      }
      *puVar4 = uVar5;
      uVar5 = param_1[9] | *(uint *)(*param_1 + 0x14) & 0xfffffff8;
      if (param_1[9] != 4) goto switchD_08022e40_caseD_4;
      uVar6 = param_1[10];
      iVar1 = param_1[0xb];
      uVar5 = uVar5 | uVar6;
      if (iVar1 == 0) goto switchD_08022e40_caseD_4;
      if (param_1[6] == 0) {
        if (uVar6 == 0 || uVar6 == 2) goto switchD_08022e40_caseD_1;
        if (uVar6 != 1) goto switchD_08022e40_caseD_4;
switchD_08022e40_caseD_3:
        if (iVar1 != 0x1800000) goto switchD_08022e40_caseD_4;
      }
      else if (param_1[6] == 0x2000) {
        switch(uVar6) {
        case 0:
        case 2:
          break;
        case 1:
switchD_08022e40_caseD_1:
          if (-1 < iVar1 << 7) {
switchD_08022e40_caseD_4:
            *(uint *)(*param_1 + 0x14) = uVar5;
            iVar1 = FUN_08023200(param_1);
            *(int *)(iVar1 + 8) = 0x3f << (param_1[0x17] & 0xffU);
            param_1[0x15] = 0;
            *(undefined1 *)((int)param_1 + 0x35) = 1;
            return (ulonglong)param_3 << 0x20;
          }
          break;
        case 3:
          goto switchD_08022e40_caseD_3;
        default:
          goto switchD_08022e40_caseD_4;
        }
      }
      else if (2 < uVar6) {
        if (uVar6 != 3) goto switchD_08022e40_caseD_4;
        goto switchD_08022e40_caseD_1;
      }
      param_1[0x15] = 0x40;
      uVar3 = 1;
      goto LAB_08022e62;
    }
    iVar2 = FUN_0801c724();
  } while ((uint)(iVar2 - iVar1) < 6);
  param_1[0x15] = 0x20;
  uVar3 = 3;
LAB_08022e62:
  *(char *)((int)param_1 + 0x35) = (char)uVar3;
  return CONCAT44(param_3,uVar3);
}



/* FUN_08022ee2 at 08022ee2 */

undefined4 FUN_08022ee2(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 1;
  }
  if (*(char *)((int)param_1 + 0x35) == '\x02') {
    return 2;
  }
  *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
  *(undefined4 *)*param_1 = 0;
  *(undefined4 *)(*param_1 + 4) = 0;
  *(undefined4 *)(*param_1 + 8) = 0;
  *(undefined4 *)(*param_1 + 0xc) = 0;
  *(undefined4 *)(*param_1 + 0x10) = 0;
  *(undefined4 *)(*param_1 + 0x14) = 0x21;
  iVar1 = FUN_08023200();
  *(int *)(iVar1 + 8) = 0x3f << (param_1[0x17] & 0xffU);
  param_1[0x15] = 0;
  *(undefined1 *)((int)param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return 0;
}



/* FUN_08022f36 at 08022f36 */

undefined8 FUN_08022f36(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = 0;
  piVar2 = param_1 + 0xd;
  iVar3 = param_1[0x16];
  if ((char)*piVar2 == '\x01') {
    return CONCAT44(param_4,2);
  }
  *(char *)piVar2 = '\x01';
  if (*(char *)((int)param_1 + 0x35) == '\x01') {
    *(undefined1 *)((int)param_1 + 0x35) = 2;
    param_1[0x15] = 0;
    FUN_080231e0(param_1);
    *(int *)(iVar3 + 8) = 0x3f << (param_1[0x17] & 0xffU);
    *(uint *)*param_1 = *(uint *)*param_1 | 0x16;
    *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) | 0x80;
    if (param_1[0x10] != 0) {
      *(uint *)*param_1 = *(uint *)*param_1 | 8;
    }
    *(uint *)*param_1 = *(uint *)*param_1 | 1;
  }
  else {
    *(char *)piVar2 = '\0';
    uVar1 = 2;
  }
  return CONCAT44(param_4,uVar1);
}



/* FUN_08022fa0 at 08022fa0 */

longlong FUN_08022fa0(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = param_1 + 0xd;
  iVar4 = param_1[0x16];
  iVar1 = FUN_0801c724();
  if (*(char *)((int)param_1 + 0x35) != '\x02') {
    param_1[0x15] = 0x80;
    *(undefined1 *)piVar3 = 0;
    return CONCAT44(param_4,1);
  }
  *(uint *)*param_1 = *(uint *)*param_1 & 0xffffffe9;
  iVar2 = *param_1;
  *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) & 0xffffff7f;
  if (param_1[0x10] == 0) {
    iVar2 = param_1[0x12];
  }
  if (param_1[0x10] != 0 || iVar2 != 0) {
    *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffff7;
  }
  *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
  do {
    if (-1 < *(int *)*param_1 << 0x1f) {
      *(int *)(iVar4 + 8) = 0x3f << (param_1[0x17] & 0xffU);
      *(undefined1 *)piVar3 = 0;
      *(undefined1 *)((int)param_1 + 0x35) = 1;
      return (ulonglong)param_4 << 0x20;
    }
    iVar2 = FUN_0801c724();
  } while ((uint)(iVar2 - iVar1) < 6);
  param_1[0x15] = 0x20;
  *(undefined1 *)piVar3 = 0;
  *(undefined1 *)((int)param_1 + 0x35) = 3;
  return CONCAT44(param_4,3);
}



/* FUN_0802302c at 0802302c */

undefined8 FUN_0802302c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  int extraout_r1;
  code *UNRECOVERED_JUMPTABLE_00;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  char cVar6;
  undefined8 uVar7;
  uint local_20;
  
  local_20 = 0;
  puVar5 = (uint *)param_1[0x16];
  uVar3 = *DAT_080231bc;
  uVar4 = *puVar5;
  cVar6 = '\0';
  FUN_080231c2(param_1[0x17]);
  if ((cVar6 == '\0') && (puVar1 = (uint *)*param_1, (int)(*puVar1 << 0x1d) < 0)) {
    *puVar1 = *puVar1 & 0xfffffffb;
    puVar5[2] = extraout_r1 << (param_1[0x17] & 0xffU);
    param_1[0x15] = param_1[0x15] | 1;
  }
  if (((int)((uVar4 >> (param_1[0x17] & 0xffU)) << 0x1f) < 0) &&
     (*(int *)(*param_1 + 0x14) << 0x18 < 0)) {
    puVar5[2] = 1 << (param_1[0x17] & 0xffU);
    param_1[0x15] = param_1[0x15] | 2;
  }
  cVar6 = '\0';
  uVar4 = FUN_080231c0();
  if ((cVar6 == '\0') && (*(int *)*param_1 << 0x1e < 0)) {
    puVar5[2] = uVar4;
    param_1[0x15] = param_1[0x15] | 4;
  }
  cVar6 = '\0';
  uVar4 = FUN_080231c0();
  if ((cVar6 == '\0') && (*(int *)*param_1 << 0x1c < 0)) {
    puVar5[2] = uVar4;
    puVar1 = (uint *)*param_1;
    if ((int)(*puVar1 << 0xd) < 0) {
      if ((int)(*puVar1 << 0xc) < 0) {
        if ((code *)param_1[0x12] != (code *)0x0) {
          (*(code *)param_1[0x12])(param_1);
        }
        goto LAB_080230ee;
      }
    }
    else if (-1 < (int)(*puVar1 << 0x17)) {
      *puVar1 = *puVar1 & 0xfffffff7;
    }
    if ((code *)param_1[0x10] != (code *)0x0) {
      (*(code *)param_1[0x10])(param_1);
    }
  }
LAB_080230ee:
  cVar6 = '\0';
  uVar4 = FUN_080231c2(param_1[0x17]);
  if ((cVar6 == '\0') && (*(int *)*param_1 << 0x1b < 0)) {
    puVar5[2] = uVar4;
    puVar1 = (uint *)*param_1;
    if (*(char *)((int)param_1 + 0x35) == '\x05') {
      *puVar1 = *puVar1 & 0xffffffe9;
      iVar2 = *param_1;
      *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) & 0xffffff7f;
      if (param_1[0x10] == 0) {
        iVar2 = param_1[0x12];
      }
      if (param_1[0x10] != 0 || iVar2 != 0) {
        *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffff7;
      }
      puVar5[2] = 0x3f << (param_1[0x17] & 0xffU);
      FUN_080231d6();
      UNRECOVERED_JUMPTABLE_00 = (code *)param_1[0x14];
      if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0802314c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*UNRECOVERED_JUMPTABLE_00)(param_1,UNRECOVERED_JUMPTABLE_00,0,param_4);
        return uVar7;
      }
      goto LAB_080231b2;
    }
    if ((int)(*puVar1 << 0xd) < 0) {
      if (-1 < (int)(*puVar1 << 0xc)) {
        if ((code *)param_1[0x11] != (code *)0x0) {
          (*(code *)param_1[0x11])(param_1);
        }
        goto LAB_0802317e;
      }
    }
    else if (-1 < (int)(*puVar1 << 0x17)) {
      *puVar1 = *puVar1 & 0xffffffef;
      FUN_080231d6();
    }
    if ((code *)param_1[0xf] != (code *)0x0) {
      (*(code *)param_1[0xf])(param_1);
    }
  }
LAB_0802317e:
  if (param_1[0x15] != 0) {
    if (param_1[0x15] << 0x1f < 0) {
      *(undefined1 *)((int)param_1 + 0x35) = 5;
      FUN_080231ca();
      do {
        local_20 = local_20 + 1;
        if (uVar3 / 0x2580 < local_20) break;
      } while (*(int *)*param_1 << 0x1f < 0);
      FUN_080231d6();
    }
    UNRECOVERED_JUMPTABLE_00 = (code *)param_1[0x13];
    if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x080231b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*UNRECOVERED_JUMPTABLE_00)(param_1,UNRECOVERED_JUMPTABLE_00,local_20,param_4);
      return uVar7;
    }
  }
LAB_080231b2:
  return CONCAT44(param_4,local_20);
}



/* FUN_080231c0 at 080231c0 */

int FUN_080231c0(undefined4 param_1,int param_2)

{
  int unaff_r6;
  
  return param_2 << (*(uint *)(unaff_r6 + 0x28) & 0xff);
}



/* FUN_080231c2 at 080231c2 */

int FUN_080231c2(uint param_1,int param_2)

{
  return param_2 << (param_1 & 0xff);
}



/* FUN_080231ca at 080231ca */

void FUN_080231ca(void)

{
  undefined4 *unaff_r4;
  
  *(uint *)*unaff_r4 = *(uint *)*unaff_r4 & 0xfffffffe;
  return;
}



/* FUN_080231d6 at 080231d6 */

void FUN_080231d6(void)

{
  undefined1 *unaff_r6;
  
  *unaff_r6 = 0;
  unaff_r6[1] = 1;
  return;
}



/* FUN_080231e0 at 080231e0 */

uint FUN_080231e0(int *param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  
  puVar1 = (uint *)*param_1;
  *puVar1 = *puVar1 & 0xfffbffff;
  puVar1[1] = param_4;
  if (param_1[2] == 0x40) {
    puVar1[2] = param_3;
    puVar1[3] = param_2;
    return param_4;
  }
  puVar1[2] = param_2;
  puVar1[3] = param_3;
  return param_4;
}



/* FUN_08023200 at 08023200 */

uint FUN_08023200(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = ((*param_1 & 0xff) - 0x10) / 0x18;
  param_1[0x17] = (uint)(byte)(&LAB_08023228)[uVar2];
  uVar1 = *param_1 & 0xfffffc00;
  if (3 < uVar2) {
    uVar1 = uVar1 + 4;
  }
  param_1[0x16] = uVar1;
  return uVar1;
}



/* vector_03_hardfault at 08023232 */

void vector_03_hardfault(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* vector_04_memmanage at 08023234 */

void vector_04_memmanage(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* vector_05_busfault at 08023236 */

void vector_05_busfault(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* vector_06_usagefault at 08023238 */

void vector_06_usagefault(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* FUN_0802324a at 0802324a */

int FUN_0802324a(void)

{
  short sVar1;
  longlong lVar2;
  char *pcVar3;
  uint *puVar4;
  uint *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined2 uVar12;
  ushort uVar13;
  uint uVar14;
  byte *extraout_r1;
  byte *pbVar15;
  byte *pbVar16;
  int *piVar17;
  char cVar18;
  short sVar19;
  int iVar20;
  int in_r3;
  char *pcVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  bool bVar25;
  char cVar26;
  undefined8 uVar27;
  int iStack_28;
  
  FUN_08023424(DAT_08023318);
  pcVar21 = DAT_080101e4;
  pbVar15 = DAT_080101e0;
  puVar5 = DAT_080101dc;
  pcVar3 = DAT_080101d8;
  puVar4 = DAT_080101d0;
  *DAT_080101dc = *DAT_080101dc & 0xfffffffe;
  uVar23 = 6000;
  *puVar4 = *puVar4 & 0xfffffffe;
  pbVar6 = DAT_080101f0;
  uVar8 = *(uint *)(pcVar3 + 0x4c);
  if (uVar8 == 0) {
    sVar1 = *(short *)(pcVar3 + 8);
    pcVar9 = *(char **)(pcVar3 + 0x20);
    sVar19 = 0x54;
    if (sVar1 != 0) {
      if (sVar1 < 0) {
        bVar25 = pcVar9 != (char *)0x0;
        if (bVar25) {
          pcVar9 = (char *)(uint)*DAT_080101f4;
          pcVar21 = (char *)(uint)*DAT_080101f0;
        }
        pbVar15 = DAT_080101f4;
        iVar10 = DAT_080101ec;
        if (bVar25 && pcVar9 != pcVar21) {
          sVar19 = 0x54;
          FUN_0800fdf6();
          pbVar15 = extraout_r1;
        }
        if ((*pbVar15 == *pbVar6) ||
           (-1 < (int)((uint)*(byte *)(iVar10 + (int)sVar19 * (int)(short)(ushort)*pbVar6) << 0x1b))
           ) {
          pcVar3[8] = '\0';
          pcVar3[9] = '\0';
        }
        else if (*pbVar15 != *pbVar6) {
          FUN_0800fdf6();
        }
      }
      else {
        if (*DAT_080101f4 != *DAT_080101f0) {
          *DAT_080101f0 = *DAT_080101f0 + 1 & 7;
        }
        *(short *)(pcVar3 + 8) = sVar1 + -1;
        if ((short)(sVar1 + -1) == 0) {
          FUN_080134be(s_M84_X_Y_Z_E_0801022c);
        }
      }
      pcVar3[0x20] = '\0';
      pcVar3[0x21] = '\0';
      pcVar3[0x22] = '\0';
      pcVar3[0x23] = '\0';
      puVar4[8] = 400;
      cVar26 = *DAT_080101e8;
      goto joined_r0x0800f9fe;
    }
    uVar8 = 0;
    if (pcVar9 == (char *)0x0) {
      uVar8 = (uint)*DAT_080101f0;
      if (*DAT_080101f4 == uVar8) {
LAB_0800fa52:
        pbVar16 = (byte *)0x0;
      }
      else {
        pbVar16 = (byte *)((uint)*DAT_080101f0 * 0x54 + DAT_080101ec);
        uVar8 = (uint)*pbVar16;
        uVar14 = uVar8;
        if (1 < (*DAT_080101f4 - *DAT_080101f0 & 7)) {
          if ((int)(uVar8 << 0x1f) < 0) goto LAB_0800fa52;
          uVar14 = (uint)*(byte *)(DAT_080101ec + (short)(*DAT_080101f0 + 1 & 7) * 0x54);
        }
        if ((int)(uVar14 << 0x1f) < 0) goto LAB_0800fa52;
        *pbVar16 = *pbVar16 | 8;
      }
      *(byte **)(pcVar3 + 0x20) = pbVar16;
      pbVar7 = DAT_080101f8;
      if (pbVar16 == (byte *)0x0) {
        puVar4[8] = 4000;
        cVar26 = *DAT_080101e8;
        goto joined_r0x0800f9fe;
      }
      uVar14 = (uint)(byte)pcVar3[4];
      bVar25 = pbVar16[0x24] == uVar14;
      if (bVar25) {
        uVar14 = (uint)pbVar16[1];
        uVar8 = (uint)(char)*DAT_080101f8;
      }
      if (!bVar25 || uVar14 != uVar8) {
        pcVar3[4] = pbVar16[0x24];
        *pbVar7 = pbVar16[1];
        FUN_0800f81a();
      }
      pcVar3[0x3c] = '\0';
      pcVar3[0x3d] = '\0';
      pcVar3[0x3e] = '\0';
      pcVar3[0x3f] = '\0';
      iVar10 = *(int *)(pcVar3 + 0x20);
      uVar8 = *(uint *)(iVar10 + 0x3c);
      pcVar3[5] = '\x01';
      uVar8 = DAT_080101fc / (uVar8 & 0xffff);
      uVar12 = (undefined2)uVar8;
      if ((uVar8 & 0xffff) < 0x19) {
        uVar12 = 0x19;
      }
      *(undefined2 *)(pcVar3 + 10) = uVar12;
      pcVar3[6] = '\x01';
      *(short *)(pcVar3 + 0xc) = (short)*(undefined4 *)(iVar10 + 0x40);
      uVar13 = (ushort)(DAT_080101fc / *(ushort *)(pcVar3 + 0xc));
      if ((DAT_080101fc / *(ushort *)(pcVar3 + 0xc) & 0xffff) < 0x19) {
        uVar13 = 0x19;
      }
      uVar8 = (uint)uVar13;
      *(uint *)(pcVar3 + 0x38) = uVar8;
      if (uVar8 == 0xffff) {
        uVar8 = 0xffff;
      }
      puVar4[8] = uVar8;
      iVar10 = -(*(uint *)(iVar10 + 0x14) >> 1);
      *(int *)(pcVar3 + 0x30) = iVar10;
      *(int *)(pcVar3 + 0x2c) = iVar10;
      *(int *)(pcVar3 + 0x28) = iVar10;
      *(int *)(pcVar3 + 0x24) = iVar10;
      pcVar3[0x34] = '\0';
      pcVar3[0x35] = '\0';
      pcVar3[0x36] = '\0';
      pcVar3[0x37] = '\0';
    }
    if (*pcVar21 == '\0') {
      uVar8 = (uint)*pbVar15;
    }
    if (*pcVar21 != '\0' || uVar8 != 0) {
      FUN_08015416();
    }
    iVar10 = DAT_080101d4;
    iStack_28 = 0;
    piVar17 = (int *)(DAT_080101d4 + 0x88);
    cVar26 = pcVar3[5];
    while (cVar18 = cVar26 + -1, cVar26 != '\0') {
      uVar8 = puVar4[6];
      iVar20 = *(int *)(pcVar3 + 0x20);
      iVar11 = *(int *)(iVar20 + 4) + *(int *)(pcVar3 + 0x24);
      *(int *)(pcVar3 + 0x24) = iVar11;
      if (0 < iVar11) {
        *(undefined4 *)(*(int *)(iVar10 + 0xf8) + 0x18) = *(undefined4 *)(iVar10 + 0xfc);
      }
      iVar11 = *(int *)(iVar20 + 8) + *(int *)(pcVar3 + 0x28);
      *(int *)(pcVar3 + 0x28) = iVar11;
      if (0 < iVar11) {
        *(undefined4 *)(*(int *)(iVar10 + 0xe0) + 0x18) = *(undefined4 *)(iVar10 + 0xe4);
      }
      iVar11 = DAT_080101d4;
      iVar24 = *(int *)(pcVar3 + 0x2c) + *(int *)(iVar20 + 0xc);
      *(int *)(pcVar3 + 0x2c) = iVar24;
      if (0 < iVar24) {
        *(undefined4 *)(*piVar17 + 0x18) = *(undefined4 *)(iVar10 + 0x8c);
      }
      iVar22 = *(int *)(iVar20 + 0x10) + *(int *)(pcVar3 + 0x30);
      *(int *)(pcVar3 + 0x30) = iVar22;
      if (0 < iVar22) {
        *(undefined4 *)(*(int *)(iVar11 + 0x28) + 0x18) = *(undefined4 *)(iVar11 + 0x2c);
        *DAT_08010200 = *DAT_08010200 + 1;
      }
      do {
      } while ((puVar4[6] - (uVar8 & 0xffff)) * 0x15 < 0x40);
      uVar8 = puVar4[6];
      if (0 < *(int *)(pcVar3 + 0x24)) {
        *(int *)(pcVar3 + 0x24) = *(int *)(pcVar3 + 0x24) - *(int *)(iVar20 + 0x14);
        *(int *)(pcVar3 + 0x10) = *(int *)(pcVar3 + 0x10) + (int)*pcVar3;
        *(int *)(*(int *)(iVar10 + 0xf8) + 0x18) = *(int *)(iVar10 + 0xfc) << 0x10;
      }
      if (0 < *(int *)(pcVar3 + 0x28)) {
        *(int *)(pcVar3 + 0x28) = *(int *)(pcVar3 + 0x28) - *(int *)(iVar20 + 0x14);
        *(int *)(pcVar3 + 0x14) = *(int *)(pcVar3 + 0x14) + (int)pcVar3[1];
        *(int *)(*(int *)(iVar10 + 0xe0) + 0x18) = *(int *)(iVar10 + 0xe4) << 0x10;
      }
      if (0 < iVar24) {
        *(int *)(pcVar3 + 0x2c) = iVar24 - *(int *)(iVar20 + 0x14);
        *(int *)(pcVar3 + 0x18) = (int)pcVar3[2] + *(int *)(pcVar3 + 0x18);
        *(int *)(*piVar17 + 0x18) = *(int *)(iVar10 + 0x8c) << 0x10;
      }
      if (0 < *(int *)(pcVar3 + 0x30)) {
        *(int *)(pcVar3 + 0x30) = *(int *)(pcVar3 + 0x30) - *(int *)(iVar20 + 0x14);
        *(int *)(pcVar3 + 0x1c) = (int)pcVar3[3] + *(int *)(pcVar3 + 0x1c);
        *(int *)(*(int *)(iVar11 + 0x28) + 0x18) = *(int *)(iVar11 + 0x2c) << 0x10;
      }
      iVar11 = *(int *)(pcVar3 + 0x34);
      *(uint *)(pcVar3 + 0x34) = iVar11 + 1U;
      if (*(uint *)(iVar20 + 0x14) <= iVar11 + 1U) {
        iStack_28 = 1;
        break;
      }
      cVar26 = cVar18;
      if (cVar18 != '\0') {
        do {
        } while ((puVar4[6] - (uVar8 & 0xffff)) * 0x15 < 0x40);
      }
    }
    iVar10 = *(int *)(pcVar3 + 0x20);
    if (*(uint *)(iVar10 + 0x18) < *(uint *)(pcVar3 + 0x34)) {
      if (*(uint *)(iVar10 + 0x1c) < *(uint *)(pcVar3 + 0x34)) {
        iVar11 = *(int *)(pcVar3 + 0x3c);
        lVar2 = (longlong)*(int *)(iVar10 + 0x20) * (longlong)iVar11 + 0x800000;
        uVar8 = (uint)lVar2 >> 0x18 | (int)((ulonglong)lVar2 >> 0x20) * 0x100 & 0xffffU;
        if (uVar8 < *(ushort *)(pcVar3 + 0xc)) {
          uVar8 = *(ushort *)(pcVar3 + 0xc) - uVar8 & 0xffff;
          if (uVar8 < *(uint *)(iVar10 + 0x44)) {
            uVar8 = *(uint *)(iVar10 + 0x44);
          }
        }
        else {
          uVar8 = *(uint *)(iVar10 + 0x44);
        }
        pcVar3[5] = '\x01';
        uVar8 = DAT_080101fc / (uVar8 & 0xffff);
        uVar13 = (ushort)uVar8;
        if ((uVar8 & 0xffff) < 0x19) {
          uVar13 = 0x19;
        }
        uVar14 = (uint)uVar13;
        cVar26 = 6000 < uVar14;
        uVar8 = uVar14;
        if (6000 < uVar14) {
          uVar27 = FUN_0800fde6();
          uVar14 = (uint)uVar27;
          if (cVar26 == '\0') {
            uVar23 = (int)((ulonglong)uVar27 >> 0x20) + 6000;
          }
          *(uint *)(pcVar3 + 0x4c) = uVar14 - (uVar23 & 0xffff);
          uVar8 = uVar23;
        }
        if ((uVar8 & 0xffff) == 0xffff) {
          uVar8 = 0xffff;
        }
        else {
          uVar8 = uVar8 & 0xffff;
        }
        puVar4[8] = uVar8;
        *(uint *)(pcVar3 + 0x3c) = uVar14 + iVar11;
      }
      else {
        uVar23 = (uint)*(ushort *)(pcVar3 + 10);
        uVar8 = uVar23;
        if (6000 < uVar23) {
          if (uVar23 % 6000 < 2000) {
            uVar8 = uVar23 % 6000 + 6000;
          }
          else {
            uVar8 = 6000;
          }
          *(uint *)(pcVar3 + 0x4c) = uVar23 - uVar8;
        }
        if (uVar8 == 0xffff) {
          uVar8 = 0xffff;
        }
        puVar4[8] = uVar8;
        pcVar3[5] = pcVar3[6];
      }
    }
    else {
      iVar11 = *(int *)(pcVar3 + 0x38);
      lVar2 = (longlong)*(int *)(iVar10 + 0x20) * (longlong)iVar11 + 0x800000;
      uVar8 = *(int *)(iVar10 + 0x40) +
              ((uint)lVar2 >> 0x18 | (int)((ulonglong)lVar2 >> 0x20) * 0x100);
      if (*(uint *)(iVar10 + 0x3c) < (uVar8 & 0xffff)) {
        uVar8 = *(uint *)(iVar10 + 0x3c);
      }
      *(short *)(pcVar3 + 0xc) = (short)uVar8;
      pcVar3[5] = '\x01';
      uVar13 = (ushort)(DAT_080101fc / *(ushort *)(pcVar3 + 0xc));
      if ((DAT_080101fc / *(ushort *)(pcVar3 + 0xc) & 0xffff) < 0x19) {
        uVar13 = 0x19;
      }
      uVar14 = (uint)uVar13;
      cVar26 = 6000 < uVar14;
      uVar8 = uVar14;
      if (6000 < uVar14) {
        uVar27 = FUN_0800fde6();
        uVar14 = (uint)uVar27;
        if (cVar26 == '\0') {
          uVar23 = (int)((ulonglong)uVar27 >> 0x20) + 6000;
        }
        *(uint *)(pcVar3 + 0x4c) = uVar14 - (uVar23 & 0xffff);
        uVar8 = uVar23;
      }
      if ((uVar8 & 0xffff) == 0xffff) {
        uVar8 = 0xffff;
      }
      else {
        uVar8 = uVar8 & 0xffff;
      }
      puVar4[8] = uVar8;
      *(uint *)(pcVar3 + 0x38) = uVar14 + iVar11;
    }
    uVar23 = puVar4[6] + 0x20 & 0xffff;
    uVar8 = puVar4[8] & 0xffff;
    if ((puVar4[8] & 0xffff) < uVar23) {
      uVar8 = uVar23;
    }
    if (uVar8 == 0xffff) {
      uVar8 = 0xffff;
    }
    puVar4[8] = uVar8;
    pbVar15 = DAT_080101f4;
    if ((iStack_28 != 0) &&
       (pcVar3[0x20] = '\0', pcVar3[0x21] = '\0', pcVar3[0x22] = '\0', pcVar3[0x23] = '\0',
       *pbVar15 != *pbVar6)) {
      *pbVar6 = *pbVar6 + 1 & 7;
    }
    if (*DAT_080101e8 != '\0') {
      *puVar5 = *puVar5 & 0xfffffffe;
      goto LAB_0800fdda;
    }
  }
  else {
    if (*pcVar21 == '\0') {
      uVar8 = (uint)*pbVar15;
    }
    if (*pcVar21 != '\0' || uVar8 != 0) {
      FUN_08015416();
    }
    uVar8 = *(uint *)(pcVar3 + 0x4c);
    if (uVar8 < 0x1771) {
      uVar23 = uVar8;
    }
    uVar14 = uVar23 & 0xffff;
    *(uint *)(pcVar3 + 0x4c) = uVar8 - uVar14;
    bVar25 = (uVar23 & 0xffff) == 0xffff;
    uVar8 = uVar14;
    if (bVar25) {
      uVar8 = 0xffff;
    }
    puVar4[8] = uVar8;
    if (bVar25) {
      uVar14 = 0xffff;
    }
    puVar4[8] = uVar14;
    cVar26 = *DAT_080101e8;
joined_r0x0800f9fe:
    iStack_28 = in_r3;
    if (cVar26 != '\0') {
      *puVar5 = *puVar5 & 0xfffffffe;
      goto LAB_0800fdda;
    }
  }
  *puVar5 = *puVar5 | 1;
LAB_0800fdda:
  *puVar4 = *puVar4 | 1;
  return iStack_28;
}



/* FUN_0802325a at 0802325a */

undefined8 FUN_0802325a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  FUN_08023424(DAT_0802331c);
  puVar2 = DAT_08014a34;
  pcVar1 = DAT_080149e8;
  if (DAT_080149e8[8] != '\0') goto LAB_080148e4;
  DAT_080149e8[8] = '\x01';
  *puVar2 = *puVar2 & 0xfffffffe;
  bVar6 = pcVar1[0xb];
  iVar7 = DAT_08014a20[1];
  iVar10 = *DAT_08014a20;
  iVar8 = DAT_08014a20[0x5b];
  iVar11 = DAT_08014a20[0x5c];
  iVar12 = DAT_08014a20[0x5d];
  iVar9 = DAT_08014a20[0x5a];
  iVar13 = iVar12 << 0x10;
  if (bVar6 < 0x7f) {
    if ((byte)pcVar1[0xc] <= bVar6) {
      *(int *)(iVar11 + 0x18) = iVar13;
    }
    if ((byte)pcVar1[0xd] <= bVar6) {
      *(int *)(iVar9 + 0x18) = iVar8;
    }
    if ((byte)pcVar1[5] <= bVar6) goto LAB_08014846;
  }
  else {
    cVar4 = pcVar1[2];
    pcVar1[0xc] = cVar4;
    bVar6 = bVar6 + 0x81;
    if (cVar4 != '\0') {
      *(int *)(iVar11 + 0x18) = iVar12;
    }
    if (cVar4 == '\0') {
      *(int *)(iVar11 + 0x18) = iVar13;
    }
    pcVar1[0xd] = pcVar1[3];
    if (pcVar1[3] != '\0') {
      iVar8 = iVar8 << 0x10;
    }
    *(int *)(iVar9 + 0x18) = iVar8;
    pcVar1[5] = (byte)pcVar1[4] >> 1;
    if ((byte)pcVar1[4] >> 1 == 0) {
LAB_08014846:
      iVar7 = iVar7 << 0x10;
    }
    *(int *)(iVar10 + 0x18) = iVar7;
  }
  bVar3 = pcVar1[0xe] ^ 1;
  if (bVar3 != 0) {
    bVar3 = 1;
  }
  pcVar1[0xe] = bVar3;
  pcVar1[0xb] = bVar6 + 1;
  switch(pcVar1[10]) {
  case '\0':
    uVar5 = 1;
    goto LAB_08014896;
  case '\x01':
    *(short *)(pcVar1 + 0x28) = *DAT_08014a38 + *(short *)(pcVar1 + 0x28);
    break;
  case '\x02':
    uVar5 = 3;
LAB_08014896:
    FUN_08014cf4(uVar5);
    break;
  case '\x03':
    *(short *)(pcVar1 + 0x18) = *DAT_08014a38 + *(short *)(pcVar1 + 0x18);
    break;
  case '\x04':
    if (pcVar1[0xf] == '\0') {
      pcVar1[0xf] = '\x06';
    }
    cVar4 = pcVar1[0xf];
    pcVar1[0xf] = cVar4 + -1;
    if ((char)(cVar4 + -1) == '\0') break;
    pcVar1[10] = '\x03';
    goto LAB_080148ca;
  }
  if ((pcVar1[10] == '\0') &&
     (cVar4 = pcVar1[9], pcVar1[9] = cVar4 + '\x01', '\x0f' < (char)(cVar4 + '\x01'))) {
    pcVar1[9] = '\0';
    if (*pcVar1 == '\0') {
      FUN_080147ac();
    }
    pcVar1[0x28] = '\0';
    pcVar1[0x29] = '\0';
    pcVar1[0x2a] = '\0';
    pcVar1[0x2b] = '\0';
    pcVar1[0x18] = '\0';
    pcVar1[0x19] = '\0';
  }
LAB_080148ca:
  cVar4 = pcVar1[10] + '\x01';
  if ('\x04' < cVar4) {
    cVar4 = '\0';
  }
  pcVar1[10] = cVar4;
  pcVar1[8] = '\0';
  *puVar2 = *puVar2 | 1;
LAB_080148e4:
  return CONCAT44(param_4,param_3);
}



/* FUN_0802326a at 0802326a */

void FUN_0802326a(undefined4 param_1)

{
  FUN_08022b2c(param_1,DAT_08023320,0x40);
  return;
}



/* FUN_08023272 at 08023272 */

undefined8 FUN_08023272(void)

{
  byte bVar1;
  int iVar2;
  short sVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint in_r3;
  uint local_10;
  
  iVar2 = DAT_08023328;
  puVar4 = DAT_08023324;
  uVar5 = *(uint *)*DAT_08023324;
  local_10 = in_r3;
  if ((int)(uVar5 << 0x1b) < 0) {
    bVar1 = *(byte *)(DAT_0802332c - (uint)*(ushort *)(DAT_08023328 + 0x48));
    if (bVar1 < 0x80) {
      FUN_0800de3e();
    }
    else {
      uVar5 = *(int *)(DAT_08023328 + 0x40) + 1U & 0x3f;
      if (uVar5 != *(uint *)(DAT_08023328 + 0x44)) {
        *(byte *)(DAT_08023328 + *(int *)(DAT_08023328 + 0x40)) = bVar1 + 0x80;
        *(uint *)(iVar2 + 0x40) = uVar5;
      }
    }
    if (*(ushort *)(iVar2 + 0x48) < 2) {
      sVar3 = 0x40;
    }
    else {
      sVar3 = *(ushort *)(iVar2 + 0x48) - 1;
    }
    *(short *)(iVar2 + 0x48) = sVar3;
    uVar5 = (uint)*(ushort *)(iVar2 + 0x48);
    local_10 = in_r3;
    if (uVar5 == (*DAT_08023330 & 0xffff)) {
      puVar4 = (undefined4 *)*puVar4;
      *puVar4 = 0xffffffef;
      uVar5 = puVar4[1];
      local_10 = uVar5;
    }
  }
  return CONCAT44(uVar5,local_10);
}



/* FUN_0802334c at 0802334c */

undefined4 FUN_0802334c(int param_1)

{
  if (param_1 == 0) {
    return 1;
  }
  if (*(char *)(param_1 + 5) == '\0') {
    *(undefined1 *)(param_1 + 4) = 0;
    FUN_080212da(param_1);
  }
  *(undefined1 *)(param_1 + 5) = 2;
  *(undefined1 *)(param_1 + 5) = 1;
  return 0;
}



/* FUN_08023374 at 08023374 */

longlong FUN_08023374(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int unaff_r5;
  
  if (param_1 == (undefined4 *)0x0) {
    return CONCAT44(param_4,1);
  }
  iVar1 = FUN_0802340a();
  if (iVar1 == 0) {
    FUN_08023402();
    FUN_0802144a();
  }
  *(undefined1 *)(unaff_r5 + 1) = 2;
  FUN_0802372e(*param_1,param_1 + 1);
  *(undefined1 *)(unaff_r5 + 1) = 1;
  return (ulonglong)param_4 << 0x20;
}



/* FUN_0802338e at 0802338e */

undefined4 FUN_0802338e(undefined4 *param_1)

{
  *(undefined1 *)((int)param_1 + 0x39) = 2;
  *(uint *)*param_1 = *(uint *)*param_1 | 1;
  *(undefined1 *)((int)param_1 + 0x39) = 1;
  return 0;
}



/* FUN_080233bc at 080233bc */

longlong FUN_080233bc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int unaff_r5;
  
  if (param_1 == (undefined4 *)0x0) {
    return CONCAT44(param_4,1);
  }
  iVar1 = FUN_0802340a();
  if (iVar1 == 0) {
    FUN_08023402();
  }
  *(undefined1 *)(unaff_r5 + 1) = 2;
  FUN_0802372e(*param_1,param_1 + 1);
  *(undefined1 *)(unaff_r5 + 1) = 1;
  return (ulonglong)param_4 << 0x20;
}



/* FUN_080233d6 at 080233d6 */

undefined4 FUN_080233d6(void)

{
  uint *puVar1;
  int *unaff_r4;
  
  FUN_08023414();
  FUN_080237f2();
  puVar1 = (uint *)*unaff_r4;
  if (puVar1 == DAT_0802341c) {
    *DAT_08023420 = *DAT_08023420 | 0x8000;
  }
  *puVar1 = *puVar1 | 1;
  return 0;
}



/* FUN_08023402 at 08023402 */

void FUN_08023402(void)

{
  undefined1 *unaff_r5;
  
  *unaff_r5 = 0;
  return;
}



/* FUN_0802340a at 0802340a */

int FUN_0802340a(void)

{
  int unaff_r4;
  
  return (int)*(char *)(unaff_r4 + 0x39);
}



/* FUN_08023414 at 08023414 */

undefined4 FUN_08023414(undefined4 *param_1)

{
  return *param_1;
}



/* FUN_08023424 at 08023424 */

int * FUN_08023424(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  if ((*(int *)(iVar1 + 0x10) << 0x1e < 0) && (*(int *)(iVar1 + 0xc) << 0x1e < 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xfffffffd;
    *(undefined1 *)(param_1 + 6) = 1;
    if ((*(uint *)(iVar1 + 0x18) & 3) == 0) {
      FUN_08023566(param_1);
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  iVar1 = *param_1;
  if ((*(int *)(iVar1 + 0x10) << 0x1d < 0) && (*(int *)(iVar1 + 0xc) << 0x1d < 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xfffffffb;
    *(undefined1 *)(param_1 + 6) = 2;
    if ((*(uint *)(iVar1 + 0x18) & 0x300) == 0) {
      FUN_08023566(param_1);
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  iVar1 = *param_1;
  if ((*(int *)(iVar1 + 0x10) << 0x1c < 0) && (*(int *)(iVar1 + 0xc) << 0x1c < 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xfffffff7;
    *(undefined1 *)(param_1 + 6) = 4;
    if ((*(uint *)(iVar1 + 0x1c) & 3) == 0) {
      FUN_08023566(param_1);
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  iVar1 = *param_1;
  if ((*(int *)(iVar1 + 0x10) << 0x1b < 0) && (*(int *)(iVar1 + 0xc) << 0x1b < 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xffffffef;
    *(undefined1 *)(param_1 + 6) = 8;
    if ((*(uint *)(iVar1 + 0x1c) & 0x300) == 0) {
      FUN_08023566(param_1);
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  iVar1 = *param_1;
  if ((*(int *)(iVar1 + 0x10) << 0x1f < 0) && (*(int *)(iVar1 + 0xc) << 0x1f < 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xfffffffe;
  }
  iVar1 = *param_1;
  if ((*(int *)(iVar1 + 0x10) << 0x18 < 0) && (*(int *)(iVar1 + 0xc) << 0x18 < 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xffffff7f;
  }
  iVar1 = *param_1;
  if ((*(int *)(iVar1 + 0x10) << 0x19 < 0) && (*(int *)(iVar1 + 0xc) << 0x19 < 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xffffffbf;
  }
  piVar2 = (int *)*param_1;
  if ((piVar2[4] << 0x1a < 0) && (piVar2[3] << 0x1a < 0)) {
    piVar2[4] = -0x21;
    return param_1;
  }
  return piVar2;
}



/* FUN_08023566 at 08023566 */

void FUN_08023566(void)

{
  return;
}



/* FUN_0802356c at 0802356c */

undefined4 FUN_0802356c(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 *unaff_r4;
  int unaff_r5;
  int *unaff_r6;
  char in_ZR;
  undefined8 uVar1;
  
  FUN_0802363c();
  if (in_ZR == '\0') {
    FUN_0802364c();
    if (param_3 == 0) {
      FUN_08023806(*unaff_r6);
      uVar1 = FUN_08023634(*unaff_r6,*(uint *)(*unaff_r6 + 0x18) | 8);
      *(uint *)((int)uVar1 + 0x18) = (uint)((ulonglong)uVar1 >> 0x20) & 0xfffffffb;
      *(uint *)(*unaff_r6 + 0x18) = *(uint *)(*unaff_r6 + 0x18) | *(uint *)(unaff_r5 + 0x10);
    }
    else if (param_3 == 4) {
      FUN_080237a0(*unaff_r6);
      uVar1 = FUN_08023634(*unaff_r6,*(uint *)(*unaff_r6 + 0x18) | 0x800);
      uVar1 = FUN_08023634((int)uVar1,(uint)((ulonglong)uVar1 >> 0x20) & 0xfffffbff);
      *(uint *)((int)uVar1 + 0x18) =
           (uint)((ulonglong)uVar1 >> 0x20) | *(int *)(unaff_r5 + 0x10) << 8;
    }
    else if (param_3 == 8) {
      FUN_0802384a(*unaff_r6);
      uVar1 = FUN_0802362c(*unaff_r6,*(uint *)(*unaff_r6 + 0x1c) | 8);
      *(uint *)((int)uVar1 + 0x1c) = (uint)((ulonglong)uVar1 >> 0x20) & 0xfffffffb;
      *(uint *)(*unaff_r6 + 0x1c) = *(uint *)(*unaff_r6 + 0x1c) | *(uint *)(unaff_r5 + 0x10);
    }
    else if (param_3 == 0xc) {
      FUN_080238a0(*unaff_r6);
      uVar1 = FUN_0802362c(*unaff_r6,*(uint *)(*unaff_r6 + 0x1c) | 0x800);
      uVar1 = FUN_0802362c((int)uVar1,(uint)((ulonglong)uVar1 >> 0x20) & 0xfffffbff);
      *(uint *)((int)uVar1 + 0x1c) =
           (uint)((ulonglong)uVar1 >> 0x20) | *(int *)(unaff_r5 + 0x10) << 8;
    }
    unaff_r4[1] = 1;
    *unaff_r4 = 0;
    return 0;
  }
  return 2;
}



/* FUN_0802362c at 0802362c */

void FUN_0802362c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}



/* FUN_08023634 at 08023634 */

void FUN_08023634(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



/* FUN_0802363c at 0802363c */

int FUN_0802363c(int param_1)

{
  return (int)*(char *)(param_1 + 0x38);
}



/* FUN_0802364c at 0802364c */

void FUN_0802364c(void)

{
  undefined1 *unaff_r4;
  
  *unaff_r4 = 1;
  unaff_r4[1] = 2;
  return;
}



/* FUN_08023656 at 08023656 */

longlong FUN_08023656(void)

{
  int iVar1;
  int *extraout_r1;
  uint uVar2;
  undefined4 uVar3;
  uint in_r3;
  undefined1 *unaff_r4;
  int *unaff_r5;
  char in_ZR;
  
  FUN_08023716();
  if (in_ZR != '\0') {
    return CONCAT44(in_r3,2);
  }
  *unaff_r4 = 1;
  unaff_r4[1] = 2;
  *(uint *)(*unaff_r5 + 8) = *(uint *)(*unaff_r5 + 8) & DAT_080238e4;
  iVar1 = *extraout_r1;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else if (iVar1 == 0x10) {
    uVar3 = 0x10;
  }
  else if (iVar1 == 0x20) {
    uVar3 = 0x20;
  }
  else if (iVar1 == 0x30) {
    uVar3 = 0x30;
  }
  else if (iVar1 == 0x40) {
    FUN_0802370e();
    uVar3 = 0x40;
  }
  else if (iVar1 == 0x50) {
    FUN_0802370e();
    uVar3 = 0x50;
  }
  else {
    if (iVar1 != 0x60) {
      if (iVar1 == 0x70) {
        FUN_08023704();
        iVar1 = *unaff_r5;
        uVar2 = *(uint *)(iVar1 + 8) | 0x77;
      }
      else if (iVar1 == 0x1000) {
        iVar1 = *unaff_r5;
        uVar2 = *(uint *)(iVar1 + 8) & 0xfffffff8;
      }
      else {
        if (iVar1 != 0x2000) goto LAB_08023700;
        FUN_08023704();
        iVar1 = *unaff_r5;
        uVar2 = *(uint *)(iVar1 + 8) | 0x4000;
      }
      *(uint *)(iVar1 + 8) = uVar2;
      goto LAB_08023700;
    }
    FUN_0802392a(*unaff_r5,extraout_r1[1],extraout_r1[3]);
    uVar3 = 0x60;
  }
  FUN_0802394e(*unaff_r5,uVar3);
LAB_08023700:
  unaff_r4[1] = 1;
  *unaff_r4 = 0;
  return (ulonglong)in_r3 << 0x20;
}



/* FUN_08023704 at 08023704 */

void FUN_08023704(undefined4 param_1,int param_2)

{
  undefined4 *unaff_r5;
  
  FUN_0802395e(*unaff_r5,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4),
               *(undefined4 *)(param_2 + 0xc));
  return;
}



/* FUN_0802370e at 0802370e */

void FUN_0802370e(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *unaff_r5;
  
  iVar3 = *(int *)(param_2 + 0xc);
  uVar2 = *(uint *)(param_2 + 4);
  iVar1 = *unaff_r5;
  uVar4 = *(uint *)(iVar1 + 0x20);
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) & 0xfffffffe;
  *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) & 0xffffff0f | iVar3 << 4;
  *(uint *)(iVar1 + 0x20) = uVar2 | uVar4 & 0xfffffff5;
  return;
}



/* FUN_08023716 at 08023716 */

int FUN_08023716(int param_1)

{
  return (int)*(char *)(param_1 + 0x38);
}



/* FUN_0802372e at 0802372e */

void FUN_0802372e(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = DAT_080238e8;
  uVar3 = *param_1;
  if ((param_1 == DAT_080238e8 || param_1 == (uint *)0x40000000) ||
     ((param_1 == DAT_080238f4 || param_1 == DAT_080238f0) || param_1 == DAT_080238ec)) {
    param_3 = (uint *)param_2[1];
    uVar3 = uVar3 & 0xffffff8f | (uint)param_3;
    if ((param_1 != DAT_080238e8 && param_1 != (uint *)0x40000000) &&
       (param_1 != DAT_080238f4 && param_1 != DAT_080238f0)) goto LAB_08023768;
  }
  else {
LAB_08023768:
    if (param_1 != DAT_080238ec) {
      param_3 = DAT_080238f8;
    }
    if (param_1 != DAT_080238ec && param_1 != param_3) {
      puVar1 = DAT_080238fc;
      if (param_1 != DAT_080238fc) {
        puVar1 = DAT_08023900;
      }
      if (param_1 != DAT_080238fc && param_1 != puVar1) goto LAB_08023786;
    }
  }
  uVar3 = uVar3 & 0xfffffcff | param_2[3];
LAB_08023786:
  *param_1 = uVar3;
  param_1[0xb] = param_2[2];
  param_1[10] = *param_2;
  if (param_1 == puVar2) {
    *DAT_08023904 = param_2[4];
  }
  param_1[5] = 1;
  return;
}



/* FUN_080237a0 at 080237a0 */

void FUN_080237a0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = DAT_080238e8;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffef;
  uVar3 = *(uint *)(param_1 + 4);
  iVar2 = *param_2;
  uVar4 = *(uint *)(param_1 + 0x20) & 0xffffffdf | param_2[2] << 4;
  if (param_1 == iVar1) {
    uVar4 = (uVar4 & 0xffffff7f | param_2[3] << 4) & 0xffffffbf;
    uVar3 = uVar3 & 0xfffff3ff | (param_2[5] | param_2[6]) << 2;
  }
  *(uint *)(param_1 + 4) = uVar3;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffff8cff | iVar2 << 8;
  *(int *)(param_1 + 0x38) = param_2[1];
  *(uint *)(param_1 + 0x20) = uVar4;
  return;
}



/* FUN_080237f2 at 080237f2 */

void FUN_080237f2(int param_1,uint param_2,int param_3)

{
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & ~(1 << (param_2 & 0xff));
  *(uint *)(param_1 + 0x20) = param_3 << (param_2 & 0xff) | *(uint *)(param_1 + 0x20);
  return;
}



/* FUN_08023806 at 08023806 */

void FUN_08023806(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar3 = *(uint *)(param_1 + 0x20) & 0xfffffffe;
  *(uint *)(param_1 + 0x20) = uVar3;
  uVar6 = *(uint *)(param_1 + 0x20);
  uVar4 = *(uint *)(param_1 + 4);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  uVar7 = FUN_08023894();
  iVar2 = (int)((ulonglong)uVar7 >> 0x20);
  iVar1 = (int)uVar7;
  uVar3 = uVar6 & 0xfffffffd | uVar3;
  if (iVar1 == DAT_080238e8) {
    uVar3 = (uVar3 & 0xfffffff7 | *(uint *)(iVar2 + 0xc)) & 0xfffffffb;
    uVar4 = uVar4 & 0xfffffcff | *(uint *)(iVar2 + 0x14) | *(uint *)(iVar2 + 0x18);
  }
  *(uint *)(iVar1 + 4) = uVar4;
  *(undefined4 *)(iVar1 + 0x18) = uVar5;
  *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar2 + 4);
  *(uint *)(iVar1 + 0x20) = uVar3;
  return;
}



/* FUN_0802384a at 0802384a */

void FUN_0802384a(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  iVar1 = DAT_080238e8;
  uVar4 = *(uint *)(param_1 + 0x20) & 0xfffffeff;
  *(uint *)(param_1 + 0x20) = uVar4;
  uVar7 = *(uint *)(param_1 + 0x20);
  uVar5 = *(uint *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  uVar8 = FUN_08023894();
  iVar3 = (int)((ulonglong)uVar8 >> 0x20);
  iVar2 = (int)uVar8;
  uVar4 = uVar7 & 0xfffffdff | uVar4 << 8;
  if (iVar2 == iVar1) {
    uVar4 = (uVar4 & 0xfffff7ff | *(int *)(iVar3 + 0xc) << 8) & 0xfffffbff;
    uVar5 = uVar5 & 0xffffcfff | (*(uint *)(iVar3 + 0x14) | *(uint *)(iVar3 + 0x18)) << 4;
  }
  *(uint *)(iVar2 + 4) = uVar5;
  *(undefined4 *)(iVar2 + 0x1c) = uVar6;
  *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(iVar3 + 4);
  *(uint *)(iVar2 + 0x20) = uVar4;
  return;
}



/* FUN_08023894 at 08023894 */

void FUN_08023894(void)

{
  return;
}



/* FUN_080238a0 at 080238a0 */

void FUN_080238a0(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_080238e8;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffefff;
  uVar2 = *(uint *)(param_1 + 4);
  iVar3 = *param_2;
  iVar4 = param_2[2];
  if (param_1 == iVar1) {
    uVar2 = uVar2 & 0xffffbfff | param_2[5] << 6;
  }
  *(uint *)(param_1 + 4) = uVar2;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffff8cff | iVar3 << 8;
  *(int *)(param_1 + 0x40) = param_2[1];
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffdfff | iVar4 << 0xc;
  return;
}



/* FUN_0802392a at 0802392a */

void FUN_0802392a(int param_1,int param_2,int param_3)

{
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffef;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffff0fff | param_3 << 0xc;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffff5f | param_2 << 4;
  return;
}



/* FUN_0802394e at 0802394e */

void FUN_0802394e(int param_1,uint param_2)

{
  *(uint *)(param_1 + 8) = param_2 | *(uint *)(param_1 + 8) & 0xffffff8f | 7;
  return;
}



/* FUN_0802395e at 0802395e */

void FUN_0802395e(int param_1,uint param_2,uint param_3,int param_4)

{
  *(uint *)(param_1 + 8) = param_2 | *(uint *)(param_1 + 8) & 0xffff00ff | param_3 | param_4 << 8;
  return;
}



/* FUN_08023974 at 08023974 */

bool FUN_08023974(int param_1)

{
  bool bVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined1 *)(param_1 + 0x3c) = 0;
      FUN_08021258(param_1);
    }
    bVar1 = *(int *)(param_1 + 0x40) << 0x1b < 0;
    if (!bVar1) {
      *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xffffeeff | 2;
      FUN_08023c64(param_1);
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfffffffd | 1;
    }
    *(undefined1 *)(param_1 + 0x3c) = 0;
    return bVar1;
  }
  return true;
}



/* FUN_080239c4 at 080239c4 */

void FUN_080239c4(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x40000000;
  return;
}



/* FUN_080239ce at 080239ce */

void FUN_080239ce(void)

{
  return;
}



/* FUN_080239da at 080239da */

void FUN_080239da(uint *param_1)

{
  char in_ZR;
  
  if (in_ZR != '\0') {
    *param_1 = *param_1 | 0x40000000;
  }
  return;
}



/* FUN_080239e6 at 080239e6 */

longlong FUN_080239e6(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  undefined8 uVar5;
  uint uVar6;
  
  piVar3 = param_1 + 0xf;
  uVar6 = 0;
  if ((char)*piVar3 != '\x01') {
    *(char *)piVar3 = '\x01';
    uVar1 = DAT_08023d68;
    iVar2 = *param_1;
    if (-1 < *(int *)(iVar2 + 8) << 0x1f) {
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) | 1;
      for (uVar6 = (*DAT_08023d6c / uVar1) * 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      }
    }
    if (*(int *)(*param_1 + 8) << 0x1f < 0) {
      param_1[0x10] = param_1[0x10] & DAT_08023d64 | 0x100;
      if (*(int *)(*param_1 + 4) << 0x15 < 0) {
        param_1[0x10] = param_1[0x10] & 0xffffdfffU | 0x1000;
      }
      if (param_1[0x10] << 0x13 < 0) {
        param_1[0x11] = param_1[0x11] & 0xfffffff9;
      }
      else {
        param_1[0x11] = 0;
      }
      cVar4 = '\x01';
      *(char *)piVar3 = '\0';
      *(undefined **)(param_1[0xe] + 0x3c) = &DAT_08023d75;
      *(undefined **)(param_1[0xe] + 0x40) = &DAT_08023dd1;
      *(undefined **)(param_1[0xe] + 0x4c) = &DAT_08023dd9;
      *(undefined4 *)*param_1 = 0xffffffdd;
      *(uint *)(*param_1 + 4) = *(uint *)(*param_1 + 4) | 0x4000000;
      *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) | 0x100;
      FUN_08022f36(param_1[0xe],*param_1 + 0x4c,param_2,param_3,uVar6,param_4);
      uVar5 = FUN_080239ce(*param_1);
      if (cVar4 == '\0') {
        if ((int)uVar5 == DAT_08023d58) {
          uVar5 = CONCAT44(*DAT_08023d5c,DAT_08023d5c);
        }
        FUN_080239da((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      }
      else if ((*(uint *)((int)uVar5 + 8) & 0x30000000) == 0) {
        FUN_080239c4();
      }
    }
    return (ulonglong)uVar6 << 0x20;
  }
  return 2;
}



/* FUN_08023ae2 at 08023ae2 */

undefined8 FUN_08023ae2(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = 0;
  piVar3 = param_1 + 0xf;
  if ((char)*piVar3 == '\x01') {
    return CONCAT44(param_4,2);
  }
  *(char *)piVar3 = '\x01';
  *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) & 0xfffffffe;
  iVar2 = *param_1;
  if (-1 < *(int *)(iVar2 + 8) << 0x1f) {
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffffeff;
    uVar1 = FUN_08022fa0(param_1[0xe]);
    *(uint *)(*param_1 + 4) = *(uint *)(*param_1 + 4) & 0xfbffffff;
    param_1[0x10] = param_1[0x10] & 0xffffeeffU | 1;
  }
  *(char *)piVar3 = '\0';
  return CONCAT44(param_4,uVar1);
}



/* FUN_08023b36 at 08023b36 */

longlong FUN_08023b36(int *param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint local_14;
  
  local_14 = 0;
  if ((char)param_1[0xf] == '\x01') {
    return 2;
  }
  *(undefined1 *)(param_1 + 0xf) = 1;
  iVar2 = *param_1;
  if (*param_2 < 10) {
    *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) & ~(7 << (*param_2 * 3 & 0xff));
    *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | param_2[2] << (*param_2 * 3 & 0xff);
  }
  else {
    uVar5 = FUN_08023c5c();
    param_2 = (uint *)((ulonglong)uVar5 >> 0x20);
    iVar2 = (int)uVar5;
    *(undefined4 *)(iVar2 + 0xc) = 7;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | param_2[2] << ((*param_2 - 10) * 3 & 0xff);
  }
  if (param_2[1] < 7) {
    iVar2 = FUN_08023c58();
    *(undefined4 *)(iVar2 + 0x34) = 0x1f;
    uVar4 = *(undefined4 *)(iVar2 + 0x34);
    uVar5 = FUN_08023c4e();
    *(undefined4 *)((int)uVar5 + 0x34) = uVar4;
  }
  else if (param_2[1] < 0xd) {
    iVar2 = FUN_08023c58();
    *(undefined4 *)(iVar2 + 0x30) = 0x1f;
    uVar4 = *(undefined4 *)(iVar2 + 0x30);
    uVar5 = FUN_08023c4e();
    *(undefined4 *)((int)uVar5 + 0x30) = uVar4;
  }
  else {
    iVar2 = FUN_08023c58();
    *(undefined4 *)(iVar2 + 0x2c) = 0x1f;
    uVar4 = *(undefined4 *)(iVar2 + 0x2c);
    uVar5 = FUN_08023c4e();
    *(undefined4 *)((int)uVar5 + 0x2c) = uVar4;
  }
  puVar1 = DAT_08023d60;
  piVar3 = (int *)((ulonglong)uVar5 >> 0x20);
  if ((int)uVar5 == DAT_08023d58) {
    if (*piVar3 == 0x12) {
      *DAT_08023d60 = *DAT_08023d60 | 0x400000;
    }
    if ((*piVar3 == 0x10 || *piVar3 == 0x11) && (*puVar1 = *puVar1 | 0x800000, *piVar3 == 0x10)) {
      for (local_14 = (*DAT_08023d6c / DAT_08023d68) * 10; local_14 != 0; local_14 = local_14 - 1) {
      }
    }
  }
  *(undefined1 *)(param_1 + 0xf) = 0;
  return (ulonglong)local_14 << 0x20;
}



/* FUN_08023c4e at 08023c4e */

void FUN_08023c4e(void)

{
  return;
}



/* FUN_08023c58 at 08023c58 */

void FUN_08023c58(void)

{
  return;
}



/* FUN_08023c5c at 08023c5c */

void FUN_08023c5c(void)

{
  return;
}



/* FUN_08023c64 at 08023c64 */

void FUN_08023c64(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = DAT_08023d60;
  *DAT_08023d60 = *DAT_08023d60 & 0xfffcffff;
  *puVar1 = *puVar1 | param_1[1];
  iVar3 = *param_1;
  *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xfffffeff;
  *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | param_1[4] << 8;
  *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xfcffffff;
  *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | param_1[2];
  *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xfffff7ff;
  *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | param_1[3];
  if (param_1[10] == DAT_08023d70) {
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xf0ffffff;
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xcfffffff;
  }
  else {
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xf0ffffff;
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | param_1[10];
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xcfffffff;
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | param_1[0xb];
  }
  *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xfffffffd;
  *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | param_1[6] << 1;
  if (param_1[8] == 0) {
    uVar2 = *(uint *)(iVar3 + 4) & 0xfffff7ff;
  }
  else {
    *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 0x800;
    *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xffff1fff;
    uVar2 = *(uint *)(iVar3 + 4) | (param_1[9] + -1) * 0x2000;
  }
  *(uint *)(iVar3 + 4) = uVar2;
  *(uint *)(iVar3 + 0x2c) = *(uint *)(iVar3 + 0x2c) & 0xff0fffff;
  *(uint *)(iVar3 + 0x2c) = *(uint *)(iVar3 + 0x2c) | (param_1[7] + -1) * 0x100000;
  *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xfffffdff;
  *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | param_1[0xc] << 9;
  *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xfffffbff;
  *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | param_1[5] << 10;
  return;
}



/* FUN_08023dec at 08023dec */

void FUN_08023dec(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  puVar1 = DAT_08023dfc;
  uVar2 = FUN_080246d4(DAT_08023e00,DAT_08023dfc + 4);
  *puVar1 = uVar2;
  return;
}



/* FUN_08023e04 at 08023e04 */

longlong FUN_08023e04(void)

{
  undefined4 uVar1;
  uint unaff_r7;
  
  uVar1 = DAT_08023e2c;
  FUN_0802034c(DAT_08023e2c,DAT_08023e30,0);
  FUN_0802037a(uVar1,DAT_08023e34);
  FUN_0801c6a4(uVar1,DAT_08023e38);
  FUN_0801f7c4(uVar1);
  return (ulonglong)unaff_r7 << 0x20;
}



/* FUN_08023e3c at 08023e3c */

undefined8 FUN_08023e3c(byte *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int unaff_r5;
  bool bVar8;
  uint local_20;
  
  puVar1 = DAT_0802411c;
  local_20 = param_4;
  if (param_1 == (byte *)0x0) {
LAB_08023e74:
    uVar4 = 1;
    goto LAB_08024118;
  }
  bVar8 = (int)((uint)*param_1 << 0x1f) < 0;
  if (bVar8) {
    if (((DAT_0802411c[2] & 0xc) != 4) &&
       (((DAT_0802411c[2] & 0xc) != 8 || (-1 < (int)(DAT_0802411c[1] << 9))))) {
      if (*(int *)(param_1 + 4) == 0x10000) {
LAB_08023e8e:
        *puVar1 = *puVar1 | 0x10000;
      }
      else {
        if (*(int *)(param_1 + 4) == 0x50000) {
          *DAT_0802411c = *DAT_0802411c | 0x40000;
          goto LAB_08023e8e;
        }
        *DAT_0802411c = *DAT_0802411c & 0xfffeffff;
        *puVar1 = *puVar1 & 0xfffbffff;
      }
      if (*(int *)(param_1 + 4) == 0) {
        unaff_r5 = FUN_0801c724();
        goto LAB_08023ecc;
      }
      iVar6 = FUN_0801c724();
      do {
        if ((int)(*puVar1 << 0xe) < 0) goto LAB_08023fe0;
        iVar7 = FUN_0801c724();
      } while ((uint)(iVar7 - iVar6) < 0x65);
      goto LAB_08023ec2;
    }
    bVar8 = (int)(*DAT_0802411c << 0xe) < 0;
    if (!bVar8) goto LAB_08023ed0;
    if (*(int *)(param_1 + 4) == 0) goto LAB_08023e74;
  }
  else {
LAB_08023ed0:
    while (bVar8) {
      iVar6 = FUN_0801c724();
      if (100 < (uint)(iVar6 - unaff_r5)) goto LAB_08023ec2;
LAB_08023ecc:
      bVar8 = (int)(*puVar1 << 0xe) < 0;
    }
  }
LAB_08023fe0:
  puVar2 = DAT_08024120;
  bVar8 = (int)((uint)*param_1 << 0x1e) < 0;
  while (bVar8) {
    if (((puVar1[2] & 0xc) == 0) || (((puVar1[2] & 0xc) == 8 && (-1 < (int)(puVar1[1] << 9))))) {
      if (((int)(*puVar1 << 0x1e) < 0) && (*(int *)(param_1 + 0xc) != 1)) goto LAB_08023e74;
      *puVar1 = *puVar1 & 0xffffff07 | *(int *)(param_1 + 0x10) << 3;
      break;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      *puVar2 = 1;
      iVar6 = FUN_0801c724();
      goto LAB_08023efc;
    }
    *puVar2 = 0;
    iVar6 = FUN_0801c724();
    while (bVar8 = (int)(*puVar1 << 0x1e) < 0, bVar8) {
      iVar7 = FUN_0801c724();
      if (2 < (uint)(iVar7 - iVar6)) goto LAB_08023ec2;
    }
  }
LAB_08024020:
  bVar8 = (int)((uint)*param_1 << 0x1c) < 0;
  while (bVar8) {
    if (*(int *)(param_1 + 0x14) != 0) {
      *DAT_08024124 = 1;
      iVar6 = FUN_0801c724();
      goto LAB_0802403a;
    }
    *DAT_08024124 = 0;
    iVar6 = FUN_0801c724();
    while (bVar8 = (int)(puVar1[0x1d] << 0x1e) < 0, bVar8) {
      iVar7 = FUN_0801c724();
      if (2 < (uint)(iVar7 - iVar6)) goto LAB_08023ec2;
    }
  }
LAB_08024042:
  if (-1 < (int)((uint)*param_1 << 0x1d)) goto LAB_080240be;
  bVar8 = -1 < (int)(puVar1[0x10] << 3);
  if (bVar8) {
    puVar1[0x10] = puVar1[0x10] | 0x10000000;
    local_20 = puVar1[0x10] & 0x10000000;
  }
  puVar3 = DAT_08024128;
  if (-1 < (int)(*DAT_08024128 << 0x17)) {
    *DAT_08024128 = *DAT_08024128 | 0x100;
    iVar6 = FUN_0801c724();
    do {
      if ((int)(*puVar3 << 0x17) < 0) goto LAB_080240aa;
      iVar7 = FUN_0801c724();
    } while ((uint)(iVar7 - iVar6) < 3);
    goto LAB_08023ec2;
  }
LAB_080240aa:
  if (*(int *)(param_1 + 8) == 1) {
LAB_08023f50:
    uVar5 = puVar1[0x1c] | 1;
  }
  else {
    if (*(int *)(param_1 + 8) == 5) {
      puVar1[0x1c] = puVar1[0x1c] | 4;
      goto LAB_08023f50;
    }
    puVar1[0x1c] = puVar1[0x1c] & 0xfffffffe;
    uVar5 = puVar1[0x1c] & 0xfffffffb;
  }
  puVar1[0x1c] = uVar5;
  if (*(int *)(param_1 + 8) == 0) {
    iVar6 = FUN_0801c724();
    do {
      if (-1 < (int)(puVar1[0x1c] << 0x1e)) goto LAB_080240b4;
      iVar7 = FUN_0801c724();
    } while ((uint)(iVar7 - iVar6) < 0x1389);
  }
  else {
    iVar6 = FUN_0801c724();
    do {
      if ((int)(puVar1[0x1c] << 0x1e) < 0) goto LAB_080240b4;
      iVar7 = FUN_0801c724();
    } while ((uint)(iVar7 - iVar6) < 0x1389);
  }
  goto LAB_08023ec2;
  while (iVar7 = FUN_0801c724(), (uint)(iVar7 - iVar6) < 3) {
LAB_08023efc:
    if ((int)(*puVar1 << 0x1e) < 0) {
      *puVar1 = *puVar1 & 0xffffff07 | *(int *)(param_1 + 0x10) << 3;
      goto LAB_08024020;
    }
  }
  goto LAB_08023ec2;
  while (iVar7 = FUN_0801c724(), (uint)(iVar7 - iVar6) < 3) {
LAB_0802403a:
    if ((int)(puVar1[0x1d] << 0x1e) < 0) goto LAB_08024042;
  }
  goto LAB_08023ec2;
LAB_080240b4:
  if (bVar8) {
    puVar1[0x10] = puVar1[0x10] & 0xefffffff;
  }
LAB_080240be:
  if (*(int *)(param_1 + 0x18) == 0) {
LAB_08024116:
    uVar4 = 0;
    goto LAB_08024118;
  }
  if ((puVar1[2] & 0xc) == 8) goto LAB_08023e74;
  if (*(int *)(param_1 + 0x18) == 2) {
    puVar2[0x18] = 0;
    iVar6 = FUN_0801c724();
    do {
      if (-1 < (int)(*puVar1 << 6)) {
        puVar1[1] = *(uint *)(param_1 + 0x1c) | *(uint *)(param_1 + 0x20) |
                    *(int *)(param_1 + 0x24) << 6 | ((*(uint *)(param_1 + 0x28) >> 1) - 1) * 0x10000
                    | *(int *)(param_1 + 0x2c) << 0x18;
        puVar2[0x18] = 1;
        iVar6 = FUN_0801c724();
        goto LAB_0802410e;
      }
      iVar7 = FUN_0801c724();
    } while ((uint)(iVar7 - iVar6) < 3);
  }
  else {
    puVar2[0x18] = 0;
    iVar6 = FUN_0801c724();
    do {
      if (-1 < (int)(*puVar1 << 6)) goto LAB_08024116;
      iVar7 = FUN_0801c724();
    } while ((uint)(iVar7 - iVar6) < 3);
  }
  goto LAB_08023ec2;
  while (iVar7 = FUN_0801c724(), (uint)(iVar7 - iVar6) < 3) {
LAB_0802410e:
    if ((int)(*puVar1 << 6) < 0) goto LAB_08024116;
  }
LAB_08023ec2:
  uVar4 = 3;
LAB_08024118:
  return CONCAT44(local_20,uVar4);
}



/* FUN_0802412c at 0802412c */

undefined4 FUN_0802412c(int *param_1,uint *param_2)

{
  int *piVar1;
  
  piVar1 = param_1 + 0xe;
  if ((char)*piVar1 == '\x01') {
    return 2;
  }
  *(char *)piVar1 = '\x01';
  *(undefined1 *)((int)param_1 + 0x39) = 2;
  *(uint *)(*param_1 + 4) = *(uint *)(*param_1 + 4) & 0xffffff8f;
  *(uint *)(*param_1 + 4) = *(uint *)(*param_1 + 4) | *param_2;
  *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) & 0xffffff7f;
  *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) | param_2[1];
  *(undefined1 *)((int)param_1 + 0x39) = 1;
  *(char *)piVar1 = '\0';
  return 0;
}



/* FUN_08024178 at 08024178 */

undefined4 FUN_08024178(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0801c724();
  if (param_1 != 0xffffffff) {
    param_1 = param_1 + (int)*DAT_0802419c;
  }
  do {
    iVar2 = FUN_0801c724();
  } while ((uint)(iVar2 - iVar1) < param_1);
  return param_4;
}



/* FUN_080241a0 at 080241a0 */

longlong FUN_080241a0(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_080241dc;
  iVar2 = FUN_080202f2(*DAT_080241e0 / (1000U / (uint)(int)*DAT_080241dc));
  if ((iVar2 == 0) && (param_1 < 0x10)) {
    FUN_080202a4(0xffffffff,param_1,0);
    *(uint *)(pcVar1 + 8) = param_1;
    return (ulonglong)param_4 << 0x20;
  }
  return CONCAT44(param_4,1);
}



/* FUN_080241e4 at 080241e4 */

void FUN_080241e4(void)

{
  *(int *)(DAT_080241f4 + 4) = *(int *)(DAT_080241f4 + 4) + (int)*DAT_080241f4;
  return;
}



/* FUN_08024434 at 08024434 */

void FUN_08024434(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  FUN_0800b840();
  pcVar4 = DAT_08024634;
  iVar3 = DAT_08024630;
  pcVar2 = DAT_0802462c;
  pcVar1 = DAT_08024628;
  do {
    FUN_0800b982();
    if (*pcVar4 == '\x01') {
      FUN_08011866();
    }
    if (*(char *)(iVar3 + 0x20) != '\0') {
      if (*pcVar2 == *pcVar1) {
        *(undefined1 *)(iVar3 + 0x20) = 0;
        FUN_08013440(&DAT_080245c4,0);
        FUN_08013440(s_G1_Z10_08024694,0);
      }
    }
  } while( true );
}



/* FUN_08024488 at 08024488 */

void FUN_08024488(void)

{
  byte *pbVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar2 = DAT_0802463c;
  pbVar1 = DAT_08024638;
  *DAT_08024638 = 0;
  local_18 = 6;
  local_14 = 0xfff;
  local_1c = puVar2;
  FUN_080246dc(&local_1c);
  *puVar2 = 0xcccc;
  puVar3 = DAT_08024640;
  if ((int)(*DAT_08024640 << 6) < 0) {
    *pbVar1 = 1;
  }
  if ((int)(*puVar3 << 5) < 0) {
    *pbVar1 = *pbVar1 | 2;
  }
  if ((int)(*puVar3 << 4) < 0) {
    *pbVar1 = *pbVar1 | 4;
  }
  if ((int)(*puVar3 << 3) < 0) {
    *pbVar1 = *pbVar1 | 8;
  }
  if ((int)(*puVar3 << 2) < 0) {
    *pbVar1 = *pbVar1 | 0x10;
  }
  if ((int)(*puVar3 << 1) < 0) {
    *pbVar1 = *pbVar1 | 0x20;
  }
  if ((int)*puVar3 < 0) {
    *pbVar1 = *pbVar1 | 0x40;
  }
  puVar2 = DAT_08024644;
  iVar5 = DAT_080245d0;
  *puVar3 = *puVar3 | 0x1000000;
  *puVar2 = DAT_080245c8;
  FUN_08020dac();
  FUN_08024658();
  local_2c = 1;
  local_28 = 0;
  local_24 = 2;
  iVar4 = *(int *)(iVar5 + 0x24);
  iVar6 = *(int *)(iVar5 + 0x20);
  local_30 = iVar4;
  FUN_08014fe4(iVar6,&local_30);
  *(int *)(iVar6 + 0x18) = iVar4 << 0x10;
  *(int *)(iVar6 + 0x18) = iVar4;
  FUN_08024658();
  local_2c = 1;
  local_24 = 2;
  local_28 = 0;
  iVar4 = *(int *)(iVar5 + 0x9c);
  iVar5 = *(int *)(iVar5 + 0x98);
  local_30 = iVar4;
  FUN_08014fe4(iVar5,&local_30);
  *(int *)(iVar5 + 0x18) = iVar4 << 0x10;
  *(int *)(iVar5 + 0x18) = iVar4;
  FUN_08024658();
  local_2c = DAT_08024648;
  local_28 = 1;
  local_24 = 2;
  local_30 = 1;
  FUN_08014fe4(DAT_0802464c,&local_30);
  FUN_080202a4(6,0xd,2);
  FUN_080202de(6);
  local_2c = DAT_08024650;
  local_30 = 0x8000;
  FUN_08014fe4(DAT_08024654,&local_30);
  FUN_080202a4(0x28,0xd,1);
  FUN_080202de(0x28);
  FUN_08024434();
  return;
}



/* FUN_08024658 at 08024658 */

void FUN_08024658(void)

{
  FUN_08012510();
  return;
}



/* FUN_080246d4 at 080246d4 */

bool FUN_080246d4(undefined4 param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = DAT_080246d8;
  bVar1 = *(char *)(DAT_080246d8 + 9) != '\0';
  if (!bVar1) {
    *(undefined1 *)(DAT_080246d8 + (uint)*(byte *)(DAT_080246d8 + 9)) = 0;
    *(undefined4 *)(iVar3 + (uint)*(byte *)(iVar3 + 9) * 4 + 4) = param_1;
    *(undefined1 *)((uint)*(byte *)(iVar3 + 9) + iVar3 + 8) = 0;
    cVar2 = *(char *)(iVar3 + 9);
    *(char *)(iVar3 + 9) = cVar2 + '\x01';
    *param_2 = cVar2 + '0';
    param_2[1] = ':';
    param_2[2] = '/';
    param_2[3] = '\0';
  }
  return bVar1;
}



/* FUN_080246dc at 080246dc */

longlong FUN_080246dc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    return CONCAT44(param_4,1);
  }
  puVar1 = (undefined4 *)*param_1;
  *puVar1 = 0xcccc;
  *puVar1 = 0x5555;
  puVar1[1] = param_1[1];
  puVar1[2] = param_1[2];
  iVar2 = FUN_0801c724();
  do {
    if (((undefined4 *)*param_1)[3] == 0) {
      *(undefined4 *)*param_1 = 0xaaaa;
      return (ulonglong)param_4 << 0x20;
    }
    iVar3 = FUN_0801c724();
  } while ((uint)(iVar3 - iVar2) < 0x31);
  return CONCAT44(param_4,3);
}



/* FUN_08024730 at 08024730 */

void FUN_08024730(void)

{
  FUN_0802475c();
  FUN_08021e84(s_STM32_Virtual_ComPort_08024788);
  return;
}



/* FUN_0802473c at 0802473c */

void FUN_0802473c(void)

{
  FUN_0802475c();
  FUN_08021e84(s_STMicroelectronics_080247a0);
  return;
}



/* FUN_08024750 at 08024750 */

void FUN_08024750(void)

{
  FUN_0802475c();
  FUN_08021e84(s_00000000001A_080247b4);
  return;
}



/* FUN_0802475c at 0802475c */

void FUN_0802475c(void)

{
  return;
}



/* FUN_08024770 at 08024770 */

void FUN_08024770(void)

{
  FUN_0802475c();
  FUN_08021e84(s_CDC_Config_080247c4);
  return;
}



/* FUN_0802477c at 0802477c */

void FUN_0802477c(void)

{
  FUN_0802475c();
  FUN_08021e84(s_CDC_Interface_080247d0);
  return;
}



/* FUN_080247e0 at 080247e0 */

byte FUN_080247e0(void)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = DAT_08024898;
  *DAT_08024898 = 1;
  iVar2 = FUN_0801e8d0();
  if (iVar2 == 0) {
    *pbVar1 = *pbVar1 & 0xfe;
  }
  return *pbVar1;
}



/* FUN_080247fa at 080247fa */

undefined8 FUN_080247fa(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  
  pbVar1 = DAT_08024898;
  *DAT_08024898 = 1;
  iVar3 = FUN_0801e838();
  if (iVar3 == 0) {
    bVar2 = FUN_080247e0(param_1);
    *pbVar1 = bVar2;
  }
  return CONCAT44(param_4,(uint)*pbVar1);
}



/* FUN_0802484c at 0802484c */

undefined4 FUN_0802484c(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  undefined1 auStack_28 [24];
  uint local_10;
  uint local_c;
  
  if ((int)((uint)*DAT_08024898 << 0x1f) < 0) {
    return 3;
  }
  switch(param_2) {
  case 0:
    goto switchD_08024862_caseD_0;
  case 1:
    FUN_0801e8e4(auStack_28);
    break;
  case 2:
    FUN_0801e8e4(auStack_28);
    *(short *)param_3 = (short)local_c;
    return 0;
  case 3:
    FUN_0801e8e4(auStack_28);
    local_10 = local_c >> 9;
    break;
  default:
    return 4;
  }
  *param_3 = local_10;
switchD_08024862_caseD_0:
  return 0;
}



/* FUN_08024994 at 08024994 */

void FUN_08024994(void)

{
  uint *puVar1;
  
  *DAT_080249d0 = *DAT_080249d0 | 0xf00000;
  puVar1 = DAT_080249d4;
  *DAT_080249d4 = *DAT_080249d4 | 1;
  puVar1[2] = 0;
  *puVar1 = *puVar1 & DAT_080249d8;
  puVar1[1] = DAT_080249dc;
  *puVar1 = *puVar1 & 0xfffbffff;
  puVar1[3] = 0;
  *DAT_080249e0 = 0x8000000;
  return;
}



/* thunk_FUN_08024a2a at 080249f4 */

void thunk_FUN_08024a2a(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int unaff_r9;
  
  while( true ) {
    puVar1 = param_1 + 1;
    uVar3 = *param_1;
    if (uVar3 == 0) break;
    param_1 = param_1 + 2;
    puVar4 = (undefined4 *)*puVar1;
    if ((int)puVar4 << 0x1f < 0) {
      puVar4 = (undefined4 *)(unaff_r9 + -1 + (int)puVar4);
    }
    do {
      puVar5 = puVar4;
      uVar2 = uVar3;
      puVar4 = puVar5 + 1;
      *puVar5 = 0;
      uVar3 = uVar2 - 4;
    } while (3 < uVar2 - 4);
    if ((int)(uVar2 << 0x1e) < 0) {
      *(undefined2 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar5 + 6);
    }
    if ((int)(uVar2 * -0x80000000) < 0) {
      *(undefined1 *)puVar4 = 0;
    }
  }
  return;
}



/* FUN_08024a2a at 08024a2a */

void FUN_08024a2a(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int unaff_r9;
  
  while( true ) {
    puVar1 = param_1 + 1;
    uVar3 = *param_1;
    if (uVar3 == 0) break;
    param_1 = param_1 + 2;
    puVar4 = (undefined4 *)*puVar1;
    if ((int)puVar4 << 0x1f < 0) {
      puVar4 = (undefined4 *)(unaff_r9 + -1 + (int)puVar4);
    }
    do {
      puVar5 = puVar4;
      uVar2 = uVar3;
      puVar4 = puVar5 + 1;
      *puVar5 = 0;
      uVar3 = uVar2 - 4;
    } while (3 < uVar2 - 4);
    if ((int)(uVar2 << 0x1e) < 0) {
      *(undefined2 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar5 + 6);
    }
    if ((int)(uVar2 * -0x80000000) < 0) {
      *(undefined1 *)puVar4 = 0;
    }
  }
  return;
}



/* FUN_08024af8 at 08024af8 */

void FUN_08024af8(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)((int)&DAT_08024b1c + DAT_08024b1c);
  for (piVar1 = (int *)((int)&DAT_08024b18 + DAT_08024b18); piVar1 != piVar2;
      piVar1 = (int *)(*(code *)((int)piVar1 + *piVar1))(piVar1 + 1)) {
  }
  return;
}



/* FUN_08024b68 at 08024b68 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08024b68(void)

{
  _DAT_e000ed88 = _DAT_e000ed88 | 0xf00000;
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  return 0x2000000;
}



/* FUN_08024c10 at 08024c10 */

undefined4 FUN_08024c10(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != param_2) {
    do {
      (*(code *)((int)param_1 + *param_1))();
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return param_4;
}



/* FUN_08024c28 at 08024c28 */

void FUN_08024c28(void)

{
  undefined4 uVar1;
  
  FUN_08024af8();
  FUN_08024488(0);
  uVar1 = thunk_FUN_08024c4c();
  do {
    FUN_0801fa30(uVar1);
  } while( true );
}



/* thunk_FUN_08024c4c at 08024c46 */

void thunk_FUN_08024c4c(undefined4 param_1)

{
  do {
    FUN_0801fa30(param_1);
  } while( true );
}



/* FUN_08024c4c at 08024c4c */

void FUN_08024c4c(undefined4 param_1)

{
  do {
    FUN_0801fa30(param_1);
  } while( true );
}



/* vector_01_reset at 08024d78 */

void vector_01_reset(void)

{
  (*(code *)PTR_FUN_08024994_1_08024d80)();
                    /* WARNING: Could not recover jumptable at 0x08024d7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_08024dac_1_08024d84)();
  return;
}



/* vector_11_svc at 08024de8 */

void vector_11_svc(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



