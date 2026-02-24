section "b01_m5_000"{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4 = Date_Date_Trable1();
    int var5;
    int var6;
    int var7;
    int var8;
    if (Parameter_GetCh1Param(5, 130) <= 2){
        var6 = 80;
        var7 = 20;
        }
    else if (Parameter_GetCh1Param(5, 130) == 3){
        var6 = 80;
        var7 = 20;
        }
    else if (Parameter_GetCh1Param(5, 130) >= 4){
        var6 = 80;
        var7 = 20;
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
        System_GlobalWork(2, 0, 5);
        System_Call_GS2("B00", "PL", 0);
        }
    else {
        if (Parameter_ChkSpEvent("D99", "M5", 0) == 1){
            System_Call_GS2("D99", "M5", 0);
            var3 = 1;
            }
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
        if ((Date_Date_Nanpa() == 1) && (Parameter_GetCh1Param(5, 130) >= 4) && (var8 == 0)){
            var5 = 1;
            }
        }
    if (System_GlobalWork(7, 1) == 0){
        if ((var4 == 0) && (var3 == 0)){
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
        if ((var0 <= var6) && (var3 == 0)){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I came a little later than the\nagreed time...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Chris＊＊｝ is...\nAh, he's here!)");
            Message_Who(0);
            Message_MsgDisp("主人公", "Sorry, were you waiting?");
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Character_Chara_GS2(5, "M5_D?F", 0, 1, 1);
                Character_ChFace(1, 2, 1);
                Character_BlinkStart(5, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
                Voice_PlayVoice("B0105000_E00000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I wasn't waiting that long, but it's\nbad to not meet at the arranged\ntime.\nIt's the basic of basics in\nbusiness.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Sorry...");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                Character_Chara_GS2(5, "M5_D?F", 0);
                Character_ChFace(0, 0, 3);
                Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
                Voice_PlayVoice("B0105000_E00100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Which one should I choose?\nTakoyaki perhaps～, Imagawayaki,\ncrepes, juice, and then...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0105000_E00200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It's a penalty.\nAh, taiyaki might also be nice.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uhh......");
                Character_Chara_GS2(5, "M5_D?F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(5, 3, (#1), 2);
                Voice_PlayVoice("B0105000_E00300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I'm joking.\nBut do you understand that being\nlate is a bad thing?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yes...");
                }
            else {
                Character_Chara_GS2(5, "M5_D?F", 0);
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 2);
                Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
                Voice_PlayVoice("B0105000_E00400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You don't have to be so hurried.\nYou'll fall over.");
                Message_Who(0);
                Message_MsgDisp("主人公", "O-Okay.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0105000_E00500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "But I think it's a privilege to see\nthe cute you running just for my\nsake...");
                Character_Chara_GS2(5, "M5_D?F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(5, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0105000_E00600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Contact me when you're late.\nIf you do that, I can stop worrying\nabout whether or not something\nhappened.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay... Sorry.");
                }
            }
        else if ((var0 >= var6) && (var3 == 0)){
            if (var1 == 6){
                if (Date_ChkDateOpen(15) == 1){
                    var8 = 1;
                    }
                }
            if (var1 == 12){
                var8 = 1;
                }
            if (var5 == 1){
                System_Call_GS2("B11", "M5", 0);
                var2 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "(It seems like ｛Chris＊＊｝\nhasn't come, yet...)");
                if (Parameter_GetCh1Param(5, 130) <= 2){
                    Character_Chara_GS2(5, "M5_D?F", 0, 1, 1);
                    Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
                    Voice_PlayVoice("", 5, "B0105000_E00700");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "｛主人公｝. You're early.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I just got here.");
                    }
                else if (Parameter_GetCh1Param(5, 130) == 3){
                    Character_Chara_GS2(5, "M5_D?F", 0);
                    Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
                    Voice_PlayVoice("B0105000_E00800", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Sorry for being late.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "It's okay. I didn't wait that long.");
                    Character_Chara_GS2(5, "M5_D?F", 0, 1, 1);
                    Character_ChFace(1, 2, 0);
                    Character_ChFace(1, 3, 3);
                    Voice_PlayVoice("B0105000_E00900", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "... You are a really nice girl...");
                    }
                else {
                    Character_Chara_GS2(5, "M5_D?F", 0);
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 1);
                    Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
                    Voice_PlayVoice("B0105000_E01200", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Sorry.\nYou got tired of waiting, right?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "We're still earlier than the time we\nagreed to meet, so it's fine.");
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("B0105000_E01300", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Honestly, I don't hate seeing your\nsad face when you're waiting just\nfor me, and then seeing you smile\nright after it.");
                    Character_Chara_GS2(5, "M5_D?F", 0, 1, 1);
                    Character_ChFace(1, 2, 2);
                    Character_BlinkStart(5, 3, (#1), 2);
                    Character_ChFace(1, 3, 0);
                    Voice_PlayVoice("B0105000_E01400", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "But it's improper, after all.\nI'll do some self reflection...");
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
        if ((var2 == 0) && (var3 == 0) && (var8 == 0)){
            System_Call_GS2("B02", "M5", 0);
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
            System_Call_GS2("B03", "M5", 10);
            break ;
            case 1:
            System_Call_GS2("B03", "M5", 20);
            break ;
            case 2:
            System_Call_GS2("B03", "M5", 30);
            break ;
            case 3:
            System_Call_GS2("B03", "M5", 40);
            Screen_WipeOut(2);
            Character_Chara_GS2(5, "NON");
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
            Screen_WipeIn(2);
            break ;
            case 4:
            System_Call_GS2("B03", "M5", 50);
            break ;
            case 5:
            System_Call_GS2("B03", "M5", 51);
            break ;
            case 6:
            System_Call_GS2("B03", "M5", 200);
            break ;
            case 7:
            System_Call_GS2("B03", "M5", 60);
            break ;
            case 8:
            System_Call_GS2("B03", "M5", 70);
            break ;
            case 9:
            System_Call_GS2("B03", "M5", 80);
            break ;
            case 10:
            System_Call_GS2("B03", "M5", 90);
            break ;
            case 11:
            System_Call_GS2("B03", "M5", 100);
            break ;
            case 12:
            System_Call_GS2("B03", "M5", 110);
            break ;
            case 13:
            System_Call_GS2("B03", "M5", 120);
            break ;
            case 14:
            System_Call_GS2("B03", "M5", 130);
            break ;
            case 15:
            System_Call_GS2("B03", "M5", 140);
            break ;
            case 16:
            System_Call_GS2("B03", "M5", 150);
            break ;
            case 17:
            System_Call_GS2("B03", "M5", 160);
            break ;
            case 18:
            System_Call_GS2("B03", "M5", 170);
            break ;
            case 19:
            System_Call_GS2("B03", "M5", 180);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(5, "NON");
            Environment_PauseME(0);
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Environment_ResumeME(0);
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
            Screen_WipeIn(2);
            break ;
            case 20:
            System_Call_GS2("B03", "M5", 190);
            break ;
            case 21:
            System_Call_GS2("B03", "M5", 210);
            break ;
            case 22:
            System_Call_GS2("B03", "M5", 220);
            break ;
            case 23:
            System_Call_GS2("B03", "M5", 230);
            break ;
            case 24:
            System_Call_GS2("B03", "M5", 250);
            break ;
            case 25:
            break ;
            }
        var1 = Date_Get_Date_Place2();
        switch (var1){
            case 0:
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_WF100_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 1:
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_WF200_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 2:
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_WF300_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 3:
            Message_CloseMsg();
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
            break ;
            case 4:
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_WF500_CO_1", #1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 5:
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_WF500_LI_2", #1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 6:
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
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
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP200_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 8:
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP000_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 9:
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP300_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 10:
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP400_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 11:
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP500_WI_1", #1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 12:
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP600_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 13:
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP700_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 14:
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_NE100_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 15:
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_NE200_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 16:
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
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
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
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
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
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
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
            break ;
            case 20:
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_TR100_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 21:
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_TR300_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 22:
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_TR400_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 23:
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
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
            Character_Chara_GS2(5, "M5_D?F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_BH150_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 25:
            break ;
            }
        System_Call_GS2("B06", "M5", 0);
        System_Call_GS2("B70", "M5", 0);
        Parameter_AddCh1Param(5, 64, 1);
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
