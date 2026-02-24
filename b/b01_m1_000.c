section "b01_m1_000"{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;
    if (Parameter_GetCh1Param(1, 130) <= 2){
        var2 = 20;
        var3 = 80;
        }
    else if (Parameter_GetCh1Param(1, 130) == 3){
        var2 = 50;
        var3 = 50;
        }
    else if (Parameter_GetCh1Param(1, 130) >= 4){
        var2 = 80;
        var3 = 20;
        }
    int var6;
    int var7;
    int var8 = Date_Date_Trable1();
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
    if (var8 == 1){
        System_GlobalWork(2, 0, 1);
        System_Call_GS2("B00", "PL", 0);
        }
    else {
        if (Parameter_ChkSpEvent("B05", "M1", 0) == 1){
            System_Call_GS2("B05", "M1", 0);
            var7 = 1;
            }
        }
    if (Date_Date_Data(7) == 4){
        var4 = 0;
        }
    else if (Date_Date_Data(7) != 4){
        var1 = Date_Get_Date_Place2();
        if (var1 == 6){
            if (Date_ChkDateOpen(15) == 1){
                var5 = 1;
                }
            }
        if (var1 == 12){
            var5 = 1;
            }
        if ((Date_Date_Nanpa() == 1) && (Parameter_GetCh1Param(1, 130) >= 4) && (var5 == 0)){
            var4 = 1;
            }
        }
    if (System_GlobalWork(7, 1) == 0){
        if ((var8 == 0) && (var7 == 0)){
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
        if ((var0 <= var2) && (var7 == 0)){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, ｛Saeki＊＊｝ is\nalready here...!)");
            Message_Who(0);
            Message_MsgDisp("主人公", "Sorry, did you wait?");
            Character_Chara_GS2(1, "M1_D?F", 0);
            Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
            if (Parameter_GetCh1Param(1, 130) <= 2){
                Voice_PlayVoice("B0101000_A00000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Yeah, I did.");
                Message_Who(0);
                Message_MsgDisp("主人公", "S-Sorry...");
                Character_Chara_GS2(1, "M1_D?F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(1, 3, (#1), 2);
                Character_ChFace(1, 3, 1);
                Voice_PlayVoice("B0101000_A00100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "......");
                }
            else if (Parameter_GetCh1Param(1, 130) == 3){
                Voice_PlayVoice("B0101000_A00200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Actually, I'm going home now.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Sorry.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                SoundEffect_PlayStream(3, "SS_T_00_147_M00");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ouch!");
                Screen_WipeIn(2);
                Character_Chara_GS2(1, "M1_D?F", 0, 1, 1);
                Character_ChFace(1, 2, 1);
                Character_BlinkStart(1, 2, (#1), 2);
                Character_ChFace(1, 3, 2);
                Voice_PlayVoice("B0101000_A00300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Come on, let's go.");
                }
            else {
                Voice_PlayVoice("B0101000_A00400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Well.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Sorry, okay?");
                Voice_PlayVoice("B0101000_A00500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm...");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0101000_A00600", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I'll forgive you if you say it a\nlittle more cutely.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Geez!");
                Character_Chara_GS2(1, "M1_D?F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0101000_A00700", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Haha! Let's go.");
                }
            }
        else if ((var0 >= var2) && (var7 == 0)){
            if (var1 == 6){
                if (Date_ChkDateOpen(15) == 1){
                    var5 = 1;
                    }
                }
            if (var1 == 12){
                var5 = 1;
                }
            if (var4 == 1){
                System_Call_GS2("B11", "M1", 0);
                var6 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "(It seems like ｛Saeki＊＊｝\nhasn't come, yet...)");
                if (Parameter_GetCh1Param(1, 130) <= 2){
                    Character_Chara_GS2(1, "M1_D?F", 0);
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 0);
                    Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
                    Voice_PlayVoice("B0101000_A00800", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Ah, you're already here.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "You're late, ｛Saeki＊＊｝.");
                    Character_Chara_GS2(1, "M1_D?F", 0, 1, 1);
                    Character_ChFace(1, 2, 2);
                    Character_BlinkStart(1, 2, (#1), 2);
                    Character_ChFace(1, 3, 0);
                    Voice_PlayVoice("B0101000_A00900", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Whatever. Let's go.");
                    }
                else if (Parameter_GetCh1Param(1, 130) == 3){
                    Character_Chara_GS2(1, "M1_D?F", 0);
                    Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
                    Voice_PlayVoice("B0101000_A01000", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Sorry I'm late. Were you waiting?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "No. I just got here, as well.");
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("B0101000_A01100", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "So it would have been okay if I came\na little later...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", ".........");
                    Character_Chara_GS2(1, "M1_D?F", 0, 1, 1);
                    Character_ChFace(1, 2, 4);
                    Character_BlinkStart(1, 2, (#1), 2);
                    Character_ChFace(1, 3, 0);
                    Voice_PlayVoice("B0101000_A01200", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "I'm joking. Let's go.");
                    }
                else {
                    Character_Chara_GS2(1, "M1_D?F", 0);
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 4, 1);
                    Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
                    Voice_PlayVoice("B0101000_A01300", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Sorry I'm late! I kept you waiting.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.\nIt's fine. I just got here, as well.");
                    Character_ChFace(0, 2, 0);
                    Voice_PlayVoice("B0101000_A01400", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "I see. Were you okay?\nI mean with flirts and stuff.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I'm okay.");
                    Character_Chara_GS2(1, "M1_D?F", 0, 1, 1);
                    Character_ChFace(1, 0, 10);
                    Character_BlinkStart(1, 2, (#1), 2);
                    Character_ChFace(1, 4, 1);
                    Voice_PlayVoice("B0101000_A01500", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Alright. Now then, let's go.");
                    }
                }
            }
        if (var1 == 6){
            if (Date_ChkDateOpen(15) == 1){
                var5 = 1;
                }
            }
        if (var1 == 12){
            var5 = 1;
            }
        if (Date_Date_Data(7) == 4){
            var5 = 0;
            }
        if ((var6 == 0) && (var7 == 0) && (var5 == 0)){
            System_Call_GS2("B02", "M1", 0);
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
            System_Call_GS2("B03", "M1", 10);
            break ;
            case 1:
            System_Call_GS2("B03", "M1", 20);
            break ;
            case 2:
            System_Call_GS2("B03", "M1", 30);
            break ;
            case 3:
            System_Call_GS2("B03", "M1", 40);
            Screen_WipeOut(2);
            Character_Chara_GS2(1, "NON");
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
            Screen_WipeIn(2);
            break ;
            case 4:
            System_Call_GS2("B03", "M1", 50);
            break ;
            case 5:
            System_Call_GS2("B03", "M1", 51);
            break ;
            case 6:
            System_Call_GS2("B03", "M1", 200);
            break ;
            case 7:
            System_Call_GS2("B03", "M1", 60);
            break ;
            case 8:
            System_Call_GS2("B03", "M1", 70);
            break ;
            case 9:
            System_Call_GS2("B03", "M1", 80);
            break ;
            case 10:
            System_Call_GS2("B03", "M1", 90);
            break ;
            case 11:
            System_Call_GS2("B03", "M1", 100);
            break ;
            case 12:
            System_Call_GS2("B03", "M1", 110);
            break ;
            case 13:
            System_Call_GS2("B03", "M1", 120);
            break ;
            case 14:
            System_Call_GS2("B03", "M1", 130);
            break ;
            case 15:
            System_Call_GS2("B03", "M1", 140);
            break ;
            case 16:
            System_Call_GS2("B03", "M1", 150);
            break ;
            case 17:
            System_Call_GS2("B03", "M1", 160);
            break ;
            case 18:
            System_Call_GS2("B03", "M1", 170);
            break ;
            case 19:
            System_Call_GS2("B03", "M1", 180);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(1, "NON");
            Environment_PauseME(0);
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Environment_ResumeME(0);
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
            Screen_WipeIn(2);
            break ;
            case 20:
            System_Call_GS2("B03", "M1", 190);
            break ;
            case 21:
            System_Call_GS2("B03", "M1", 210);
            break ;
            case 22:
            System_Call_GS2("B03", "M1", 220);
            break ;
            case 23:
            System_Call_GS2("B03", "M1", 230);
            break ;
            case 24:
            System_Call_GS2("B03", "M1", 250);
            break ;
            case 25:
            break ;
            }
        var1 = Date_Get_Date_Place2();
        switch (var1){
            case 0:
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_WF100_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 1:
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_WF200_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 2:
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_WF300_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 3:
            Message_CloseMsg();
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
            break ;
            case 4:
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_WF500_CO_1", #1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 5:
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_WF500_LI_2", #1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 6:
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
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
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP200_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 8:
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP000_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 9:
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP300_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 10:
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP400_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 11:
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP500_WI_1", #1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 12:
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP600_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 13:
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP700_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 14:
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_NE100_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 15:
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_NE200_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 16:
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
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
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
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
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
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
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
            break ;
            case 20:
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_TR100_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 21:
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_TR300_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 22:
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_TR400_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 23:
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
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
            Character_Chara_GS2(1, "M1_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_BH110_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 25:
            break ;
            }
        System_Call_GS2("B06", "M1", 0);
        System_Call_GS2("B70", "M1", 0);
        Parameter_AddCh1Param(1, 64, 1);
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
