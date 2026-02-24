section "b01_m2_000"{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4 = Date_Date_Trable1();
    int var5;
    int var6;
    int var7;
    int var8;
    if (Parameter_GetCh1Param(2, 130) <= 2){
        var6 = 40;
        var7 = 60;
        }
    else if (Parameter_GetCh1Param(2, 130) == 3){
        var6 = 50;
        var7 = 50;
        }
    else if (Parameter_GetCh1Param(2, 130) >= 4){
        var6 = 60;
        var7 = 40;
        }
    System_GlobalWork(0, 0, 0);
    System_GlobalWork(1, 0, 0);
    System_GlobalWork(2, 0, 0);
    System_GlobalWork(3, 0, 0);
    System_GlobalWork(4, 0, 0);
    System_GlobalWork(5, 0, 0);
    System_GlobalWork(6, 0, 0);
    System_GlobalWork(7, 0, 0);
    Date_NightDate(0, 0);
    Parameter_InPl1Param(337, 0);
    var1 = Date_Get_Date_Place2();
    Date_SetDateInfoData(var1);
    if (Date_GetDateOption(5) != 1){
        if (var1 == 6){
            if (Date_ChkDateOpen(15) == 1){
                Run_Kigae(4);
                }
            else {
                Run_Kigae(0);
                }
            }
        else if (var1 == 12){
            Run_Kigae(4);
            }
        else if (var1 == 5){
            Run_Kigae(1);
            }
        else {
            Run_Kigae(0);
            }
        }
    var1 = Date_Get_Date_Place2();
    if (var4 == 1){
        System_GlobalWork(2, 0, 2);
        System_Call_GS2("B00", "PL", 0);
        }
    if (Date_Date_Data(7) == 4){
        var5 = 0;
        }
    else if (Date_Date_Data(7) != 4){
        var1 = Date_Get_Date_Place2();
        if (var1 == 6){
            if (Date_ChkDateOpen(15) == 1){
                var8 = 1;
                }
            }
        if (var1 == 12){
            var8 = 1;
            }
        if ((Date_Date_Nanpa() == 1) && (Parameter_GetCh1Param(2, 130) >= 4) && (var8 == 0)){
            var5 = 1;
            }
        }
    if (System_GlobalWork(7, 1) == 0){
        if (var4 == 0){
            Background_Bg_GS2("待ち合わせ場所背景", #1, #1, 0, 0, Date_Date_Data(2));
            Screen_WipeIn(2);
            }
        if (System_GlobalWork(4, 1) == 0){
            var0 = System_Randam(0, 100);
            }
        else if (System_GlobalWork(4, 1) == 1){
            var0 = 95;
            }
        else if (System_GlobalWork(4, 1) == 2){
            var0 = 5;
            }
        if (var0 <= var6){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I arrived a little later than the\nagreed time...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Shiba＊＊｝ is...\nAh, he's here!)");
            Message_Who(0);
            Message_MsgDisp("主人公", "Sorry, were you waiting?");
            if (Parameter_GetCh1Param(2, 130) <= 2){
                Character_Chara_GS2(2, "M2_D?F", 0, 1, 1);
                Character_ChFace(1, 2, 1);
                Character_ChFace(1, 3, 0);
                Music_PlayBGM(0, "MN_C_02_000_D01", 127, 40);
                Voice_PlayVoice("B0102000_B00000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Yeah.");
                Message_Who(0);
                Message_MsgDisp("主人公", "S-Sorry...");
                }
            else if (Parameter_GetCh1Param(2, 130) == 3){
                Character_Chara_GS2(2, "M2_D?F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 0);
                Music_PlayBGM(0, "MN_C_02_000_D01", 127, 40);
                Voice_PlayVoice("B0102000_B00100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Yes.");
                Message_Who(0);
                Message_MsgDisp("主人公", "S-Sorry...");
                }
            else {
                Character_Chara_GS2(2, "M2_D?F", 0, 1, 1);
                Music_PlayBGM(0, "MN_C_02_000_D01", 127, 40);
                Voice_PlayVoice("B0102000_B00200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You don't have to worry about it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I'm sorry for being late.");
                }
            }
        else if (var0 >= var6){
            Message_Who(0);
            Message_MsgDisp("主人公", "(It seems like ｛Shiba＊＊｝\nhasn't come yet...)");
            if (var1 == 6){
                if (Date_ChkDateOpen(15) == 1){
                    var8 = 1;
                    }
                }
            if (var1 == 12){
                var8 = 1;
                }
            if (var5 == 1){
                System_Call_GS2("B11", "M2", 0);
                var2 = 1;
                }
            else {
                if (Parameter_GetCh1Param(2, 130) <= 2){
                    Character_Chara_GS2(2, "M2_D?F", 0);
                    Music_PlayBGM(0, "MN_C_02_000_D01", 127, 40);
                    Voice_PlayVoice("B0102000_B00300", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "I kept you waiting.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ah, no. I just got here, as well.");
                    Character_Chara_GS2(2, "M2_D?F", 0, 1, 1);
                    Character_ChFace(0, 0, 3);
                    Voice_PlayVoice("B0102000_B00400", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... That's good then.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "O-Okay.");
                    }
                else if (Parameter_GetCh1Param(2, 130) == 3){
                    Character_Chara_GS2(2, "M2_D?F", 0);
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 0);
                    Music_PlayBGM(0, "MN_C_02_000_D01", 127, 40);
                    Voice_PlayVoice("B0102000_B00500", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... Were you waiting?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "No. I just got here as well.");
                    Character_Chara_GS2(2, "M2_D?F", 0, 1, 1);
                    Character_ChFace(1, 0, 3);
                    Voice_PlayVoice("B0102000_B00600", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "I see.");
                    }
                else {
                    Character_Chara_GS2(2, "M2_D?F", 0);
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 0);
                    Music_PlayBGM(0, "MN_C_02_000_D01", 127, 40);
                    Voice_PlayVoice("B0102000_B00700", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "My bad.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.\nNo, I only just got here a little\nearlier than you.");
                    Character_Chara_GS2(2, "M2_D?F", 0, 1, 1);
                    Character_ChFace(1, 2, 2);
                    Character_ChFace(1, 3, 3);
                    Voice_PlayVoice("B0102000_B00800", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... I see. Good for that.");
                    }
                }
            }
        var1 = Date_Get_Date_Place2();
        if (var1 == 6){
            if (Date_ChkDateOpen(15) == 1){
                var8 = 1;
                }
            }
        if (var1 == 12){
            var8 = 1;
            }
        if (Date_Date_Data(7) == 4){
            var8 = 0;
            }
        if ((var2 == 0) && (var8 == 0)){
            System_Call_GS2("B02", "M2", 0);
            }
        else {
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            }
        var1 = Date_Get_Date_Place2();
        Music_StopBGM(0, 40);
        switch (var1){
            case 0:
            System_Call_GS2("B03", "M2", 10);
            break ;
            case 1:
            System_Call_GS2("B03", "M2", 20);
            break ;
            case 2:
            System_Call_GS2("B03", "M2", 30);
            break ;
            case 3:
            System_Call_GS2("B03", "M2", 40);
            Screen_WipeOut(2);
            Character_Chara_GS2(2, "NON");
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            Screen_WipeIn(2);
            break ;
            case 4:
            System_Call_GS2("B03", "M2", 50);
            break ;
            case 5:
            System_Call_GS2("B03", "M2", 51);
            break ;
            case 6:
            System_Call_GS2("B03", "M2", 200);
            break ;
            case 7:
            System_Call_GS2("B03", "M2", 60);
            break ;
            case 8:
            System_Call_GS2("B03", "M2", 70);
            break ;
            case 9:
            System_Call_GS2("B03", "M2", 80);
            break ;
            case 10:
            System_Call_GS2("B03", "M2", 90);
            break ;
            case 11:
            System_Call_GS2("B03", "M2", 100);
            break ;
            case 12:
            System_Call_GS2("B03", "M2", 110);
            break ;
            case 13:
            System_Call_GS2("B03", "M2", 120);
            break ;
            case 14:
            System_Call_GS2("B03", "M2", 130);
            break ;
            case 15:
            System_Call_GS2("B03", "M2", 140);
            break ;
            case 16:
            System_Call_GS2("B03", "M2", 150);
            break ;
            case 17:
            System_Call_GS2("B03", "M2", 160);
            break ;
            case 18:
            System_Call_GS2("B03", "M2", 170);
            break ;
            case 19:
            System_Call_GS2("B03", "M2", 180);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(2, "NON");
            Environment_PauseME(0);
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Environment_ResumeME(0);
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            Screen_WipeIn(2);
            break ;
            case 20:
            System_Call_GS2("B03", "M2", 190);
            break ;
            case 21:
            System_Call_GS2("B03", "M2", 210);
            break ;
            case 22:
            System_Call_GS2("B03", "M2", 220);
            break ;
            case 23:
            System_Call_GS2("B03", "M2", 230);
            break ;
            case 24:
            System_Call_GS2("B03", "M2", 250);
            break ;
            case 25:
            break ;
            }
        var1 = Date_Get_Date_Place2();
        switch (var1){
            case 0:
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_WF100_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 1:
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_WF200_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 2:
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_WF300_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 3:
            Message_CloseMsg();
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            break ;
            case 4:
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_WF500_CO_1", #1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 5:
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_WF500_LI_2", #1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 6:
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            if (Date_ChkDateOpen(15) == 1){
                Background_Bg_GS2("BG_WF530_SU_1", #1, #1, 0);
                Screen_WipeIn(2);
                }
            else if (Date_ChkDateOpen(16) == 1){
                Background_Bg_GS2("BG_WF540_WI_1", #1, #1, 0);
                Screen_WipeIn(2);
                }
            break ;
            case 7:
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP200_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 8:
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP000_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 9:
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP300_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 10:
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP400_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 11:
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP500_WI_1", #1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 12:
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP600_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 13:
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP700_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 14:
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_NE100_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 15:
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_NE200_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 16:
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            if (Date_ChkDateOpen(47) == 1){
                Background_Bg_GS2("BG_NE303_CO_1", #1, #1, 0);
                }
            else if (Date_ChkDateOpen(46) == 1){
                Background_Bg_GS2("BG_NE302_CO_1", #1, #1, 0);
                }
            else if (Date_ChkDateOpen(44) == 1){
                Background_Bg_GS2("BG_NE301_CO_1", #1, #1, 0);
                }
            else {
                Background_Bg_GS2("BG_NE300_CO_1", #1, #1, 0);
                }
            Screen_WipeIn(2);
            break ;
            case 17:
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            if (Date_ChkDateOpen(47) == 1){
                Background_Bg_GS2("BG_NE303_CO_1", #1, #1, 0);
                }
            else if (Date_ChkDateOpen(46) == 1){
                Background_Bg_GS2("BG_NE302_CO_1", #1, #1, 0);
                }
            else if (Date_ChkDateOpen(44) == 1){
                Background_Bg_GS2("BG_NE301_CO_1", #1, #1, 0);
                }
            else {
                Background_Bg_GS2("BG_NE300_CO_1", #1, #1, 0);
                }
            Screen_WipeIn(2);
            break ;
            case 18:
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            if (Date_ChkDateOpen(47) == 1){
                Background_Bg_GS2("BG_NE303_CO_1", #1, #1, 0);
                }
            else if (Date_ChkDateOpen(46) == 1){
                Background_Bg_GS2("BG_NE302_CO_1", #1, #1, 0);
                }
            else if (Date_ChkDateOpen(44) == 1){
                Background_Bg_GS2("BG_NE301_CO_1", #1, #1, 0);
                }
            else {
                Background_Bg_GS2("BG_NE300_CO_1", #1, #1, 0);
                }
            Screen_WipeIn(2);
            break ;
            case 19:
            Message_CloseMsg();
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            break ;
            case 20:
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_TR100_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 21:
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_TR300_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 22:
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_TR400_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 23:
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            if (System_GlobalWork(3, 1) == 0){
                Background_Bg_GS2("BG_TR500_?_1", 1, #1, 0);
                Screen_WipeIn(2);
                }
            else {
                Background_Bg_GS2("BG_TR500_?_2", 1, #1, 0);
                Screen_WipeIn(2);
                }
            break ;
            case 24:
            Character_Chara_GS2(2, "M2_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_BH120_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 25:
            break ;
            }
        System_Call_GS2("B06", "M2", 0);
        System_Call_GS2("B70", "M2", 0);
        Parameter_AddCh1Param(2, 64, 1);
        }
    System_GlobalWork(0, 0, 0);
    System_GlobalWork(1, 0, 0);
    System_GlobalWork(2, 0, 0);
    System_GlobalWork(3, 0, 0);
    System_GlobalWork(4, 0, 0);
    System_GlobalWork(5, 0, 0);
    System_GlobalWork(6, 0, 0);
    System_GlobalWork(7, 0, 0);
    }
