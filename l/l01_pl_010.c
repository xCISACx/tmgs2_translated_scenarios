section "l01_pl_010"{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;
    int var6;
    int var7 = 1;
    System_GlobalWork(0, 0, 0);
    System_GlobalWork(1, 0, 0);
    if ((Parameter_GetPl1Param(36) == 1) || (Parameter_GetPl1Param(37) == 1) || (Parameter_GetPl1Param(39) >= 1)){
        Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetPl1Param(36) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh～, who should I give the\nstandard chocolate to...)");
            Message_Choco_Man(var7);
            var6 = Message_Choco_Man_Result();
            var7 = 0;
            switch (var6){
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I guess I'll give the standard\nchocolate to ｛Saeki＊＊｝.)");
                var4 = 1;
                var0 = 1;
                break ;
                case 2:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I guess I'll give the standard\nchocolate to ｛Shiba＊＊｝.)");
                var4 = 1;
                var0 = 2;
                break ;
                case 3:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I guess I'll give the standard\nchocolate to ｛Hikami＊＊｝.)");
                var4 = 1;
                var0 = 3;
                break ;
                case 4:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I guess I'll give the standard\nchocolate to ｛Hariya＊＊｝.)");
                var4 = 1;
                var0 = 4;
                break ;
                case 5:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I guess I'll give the standard\nchocolate to ｛Chris＊＊｝.)");
                var4 = 1;
                var0 = 5;
                break ;
                case 6:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I guess I'll give the standard\nchocolate to ｛Amachi＊＊｝.)");
                var4 = 1;
                var0 = 6;
                break ;
                case 7:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I guess I'll give the standard\nchocolate to ｛Wakaouji＊＊｝.)");
                var4 = 1;
                var0 = 7;
                break ;
                case 8:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I guess I'll give the standard\nchocolate to ｛Masaki＊＊｝.\nI'll give it to him after school.)");
                Parameter_InPl1Param(36, 0);
                var2 = 1;
                System_GlobalWork(0, 2, 1);
                var0 = 8;
                break ;
                default :
                Message_Who(0);
                Message_MsgDisp("主人公", "(Hmm...\nI won't give it to anyone...)");
                Parameter_InPl1Param(36, 0);
                var3 = 1;
                break ;
                }
            }
        else {
            }
        if (var4 == 1){
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            if (var0 == 1){
                if (System_GlobalWork(23, 1) != 1){
                    System_Call_GS2("L04", "M1", 0);
                    }
                else {
                    System_Call_GS2("L05", "M1", 0);
                    }
                }
            else if (var0 == 2){
                if (Parameter_GetCh1Param(10, 513) == 1){
                    System_Call_GS2("L03", "G1", 0);
                    }
                if (System_GlobalWork(23, 1) != 2){
                    System_Call_GS2("L04", "M2", 0);
                    }
                else {
                    System_Call_GS2("L05", "M2", 0);
                    }
                }
            else if (var0 == 3){
                if (Parameter_GetCh1Param(11, 513) == 1){
                    System_Call_GS2("L03", "G2", 0);
                    }
                if (System_GlobalWork(23, 1) != 3){
                    System_Call_GS2("L04", "M3", 0);
                    }
                else {
                    System_Call_GS2("L05", "M3", 0);
                    }
                }
            else if (var0 == 4){
                if (Parameter_GetCh1Param(12, 513) == 1){
                    System_Call_GS2("L03", "G3", 0);
                    }
                if (System_GlobalWork(23, 1) != 4){
                    System_Call_GS2("L04", "M4", 0);
                    }
                else {
                    System_Call_GS2("L05", "M4", 0);
                    }
                }
            else if (var0 == 5){
                if (Parameter_GetCh1Param(13, 513) == 1){
                    System_Call_GS2("L03", "G4", 0);
                    }
                if (System_GlobalWork(23, 1) != 5){
                    System_Call_GS2("L04", "M5", 0);
                    }
                else {
                    System_Call_GS2("L05", "M5", 0);
                    }
                }
            else if (var0 == 6){
                if (System_GlobalWork(23, 1) != 6){
                    System_Call_GS2("L04", "M6", 0);
                    }
                else {
                    System_Call_GS2("L05", "M6", 0);
                    }
                }
            else if (var0 == 7){
                if (System_GlobalWork(23, 1) != 7){
                    System_Call_GS2("L04", "M7", 0);
                    }
                else {
                    System_Call_GS2("L05", "M7", 0);
                    }
                }
            Parameter_InPl1Param(36, 0);
            if ((Parameter_GetPl1Param(37) == 1) || (Parameter_GetPl1Param(39) >= 1)){
                Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                }
            }
        if (Parameter_GetPl1Param(37) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Now then.\nWho should I give the high quality\nchocolate to?)");
            Message_Choco_Man(var7);
            var6 = Message_Choco_Man_Result();
            var7 = 0;
            switch (var6){
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give the high quality\nchocolate to ｛Saeki＊＊｝,\nof course!)");
                var4 = 2;
                var1 = 1;
                break ;
                case 2:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give the high quality\nchocolate to ｛Shiba＊＊｝,\nof course!)");
                var4 = 2;
                var1 = 2;
                break ;
                case 3:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give the high quality\nchocolate to ｛Hikami＊＊｝,\nof course!)");
                var4 = 2;
                var1 = 3;
                break ;
                case 4:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give the high quality\nchocolate to ｛Hariya＊＊｝,\nof course!)");
                var4 = 2;
                var1 = 4;
                break ;
                case 5:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give the high quality\nchocolate to ｛Chris＊＊｝,\nof course!)");
                var4 = 2;
                var1 = 5;
                break ;
                case 6:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give the high quality\nchocolate to ｛Amachi＊＊｝,\nof course!)");
                var4 = 2;
                var1 = 6;
                break ;
                case 7:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give the high quality\nchocolate to ｛Wakaouji＊＊｝,\nof course!)");
                var4 = 2;
                var1 = 7;
                break ;
                case 8:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give the high quality\nchocolate to ｛Masaki＊＊｝,\nof course!\nI'll give it to him after school.)");
                Parameter_InPl1Param(37, 0);
                var2 = 2;
                System_GlobalWork(0, 2, 1);
                var1 = 8;
                break ;
                default :
                Message_Who(0);
                Message_MsgDisp("主人公", "(Hmm...\nI won't give it to anyone...)");
                Parameter_InPl1Param(37, 0);
                var3 = 2;
                break ;
                }
            }
        else {
            }
        if (var4 == 2){
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            if (var1 == 1){
                if (System_GlobalWork(23, 1) != 1){
                    System_Call_GS2("L04", "M1", 0);
                    }
                else {
                    System_Call_GS2("L05", "M1", 0);
                    }
                }
            else if (var1 == 2){
                if (Parameter_GetCh1Param(10, 513) == 1){
                    System_Call_GS2("L03", "G1", 0);
                    }
                if (System_GlobalWork(23, 1) != 2){
                    System_Call_GS2("L04", "M2", 0);
                    }
                else {
                    System_Call_GS2("L05", "M2", 0);
                    }
                }
            else if (var1 == 3){
                if (Parameter_GetCh1Param(11, 513) == 1){
                    System_Call_GS2("L03", "G2", 0);
                    }
                if (System_GlobalWork(23, 1) != 3){
                    System_Call_GS2("L04", "M3", 0);
                    }
                else {
                    System_Call_GS2("L05", "M3", 0);
                    }
                }
            else if (var1 == 4){
                if (Parameter_GetCh1Param(12, 513) == 1){
                    System_Call_GS2("L03", "G3", 0);
                    }
                if (System_GlobalWork(23, 1) != 4){
                    System_Call_GS2("L04", "M4", 0);
                    }
                else {
                    System_Call_GS2("L05", "M4", 0);
                    }
                }
            else if (var1 == 5){
                if (Parameter_GetCh1Param(13, 513) == 1){
                    System_Call_GS2("L03", "G4", 0);
                    }
                if (System_GlobalWork(23, 1) != 5){
                    System_Call_GS2("L04", "M5", 0);
                    }
                else {
                    System_Call_GS2("L05", "M5", 0);
                    }
                }
            else if (var1 == 6){
                if (System_GlobalWork(23, 1) != 6){
                    System_Call_GS2("L04", "M6", 0);
                    }
                else {
                    System_Call_GS2("L05", "M6", 0);
                    }
                }
            else if (var1 == 7){
                if (System_GlobalWork(23, 1) != 7){
                    System_Call_GS2("L04", "M7", 0);
                    }
                else {
                    System_Call_GS2("L05", "M7", 0);
                    }
                }
            Parameter_InPl1Param(37, 0);
            if (Parameter_GetPl1Param(39) >= 1){
                Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                }
            }
        if (Parameter_GetPl1Param(39) >= 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'll give the hand made chocolate\nthat I enthusiastically made to that\nperson!)");
            Message_Choco_Man(var7);
            var6 = Message_Choco_Man_Result();
            var7 = 0;
            switch (var6){
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Saeki＊＊｝ might accept\nit.)");
                var4 = 3;
                var5 = 1;
                break ;
                case 2:
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Shiba＊＊｝ might accept\nit.)");
                var4 = 3;
                var5 = 2;
                break ;
                case 3:
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hikami＊＊｝ might accept\nit.)");
                var4 = 3;
                var5 = 3;
                break ;
                case 4:
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hariya＊＊｝ might accept\nit.)");
                var4 = 3;
                var5 = 4;
                break ;
                case 5:
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Chris＊＊｝ might accept\nit.)");
                var4 = 3;
                var5 = 5;
                break ;
                case 6:
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Amachi＊＊｝ might accept\nit.)");
                var4 = 3;
                var5 = 6;
                break ;
                case 7:
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Wakaouji＊＊｝ might accept\nit.)");
                var4 = 3;
                var5 = 7;
                break ;
                case 8:
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Masaki＊＊｝ might accept\nit.\nI'll give it to him after school.)");
                System_GlobalWork(0, 2, 1);
                break ;
                default :
                Message_Who(0);
                Message_MsgDisp("主人公", "(Hmm...\nAs expected, I won't give it to\nanyone...)");
                break ;
                }
            }
        if (var4 == 3){
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            if (var5 == 1){
                if (System_GlobalWork(23, 1) != 1){
                    System_Call_GS2("L04", "M1", 0);
                    }
                else {
                    System_Call_GS2("L05", "M1", 0);
                    }
                }
            else if (var5 == 2){
                if (Parameter_GetCh1Param(10, 513) == 1){
                    System_Call_GS2("L03", "G1", 0);
                    }
                if (System_GlobalWork(23, 1) != 2){
                    System_Call_GS2("L04", "M2", 0);
                    }
                else {
                    System_Call_GS2("L05", "M2", 0);
                    }
                }
            else if (var5 == 3){
                if (Parameter_GetCh1Param(11, 513) == 1){
                    System_Call_GS2("L03", "G2", 0);
                    }
                if (System_GlobalWork(23, 1) != 3){
                    System_Call_GS2("L04", "M3", 0);
                    }
                else {
                    System_Call_GS2("L05", "M3", 0);
                    }
                }
            else if (var5 == 4){
                if (Parameter_GetCh1Param(12, 513) == 1){
                    System_Call_GS2("L03", "G3", 0);
                    }
                if (System_GlobalWork(23, 1) != 4){
                    System_Call_GS2("L04", "M4", 0);
                    }
                else {
                    System_Call_GS2("L05", "M4", 0);
                    }
                }
            else if (var5 == 5){
                if (Parameter_GetCh1Param(13, 513) == 1){
                    System_Call_GS2("L03", "G4", 0);
                    }
                if (System_GlobalWork(23, 1) != 5){
                    System_Call_GS2("L04", "M5", 0);
                    }
                else {
                    System_Call_GS2("L05", "M5", 0);
                    }
                }
            else if (var5 == 6){
                if (System_GlobalWork(23, 1) != 6){
                    System_Call_GS2("L04", "M6", 0);
                    }
                else {
                    System_Call_GS2("L05", "M6", 0);
                    }
                }
            else if (var5 == 7){
                if (System_GlobalWork(23, 1) != 7){
                    System_Call_GS2("L04", "M7", 0);
                    }
                else {
                    System_Call_GS2("L05", "M7", 0);
                    }
                }
            Parameter_InPl1Param(39, 0);
            }
        if (System_GlobalWork(0, 1) == 1){
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            if (var2 == 1){
                Parameter_InPl1Param(36, 1);
                }
            else if (var2 == 2){
                Parameter_InPl1Param(37, 1);
                }
            Background_Bg_GS2("BG_SC100_WI_1", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder if ｛Masaki＊＊｝\nwill come today～?)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            if (System_GlobalWork(23, 1) != 8){
                System_Call_GS2("L04", "M8", 0);
                }
            else {
                System_Call_GS2("L05", "M8", 0);
                }
            Parameter_InPl1Param(36, 0);
            Parameter_InPl1Param(37, 0);
            Parameter_InPl1Param(39, 0);
            }
        if (var3 == 1){
            Parameter_InPl1Param(36, 1);
            }
        else if (var3 == 2){
            Parameter_InPl1Param(37, 1);
            }
        if (System_GlobalWork(1, 1) == 1){
            if (Parameter_GetCh1Param(1, 540) == 1){
                if (Parameter_GetCh1Param(16, 514) == 1){
                    System_Call_GS2("D01", "S3", 0);
                    }
                }
            }
        if ((Parameter_GetPl1Param(36) == 1) || (Parameter_GetPl1Param(37) == 1) || (Parameter_GetPl1Param(39) >= 1)){
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("L04", "S1", 0);
            }
        Message_CloseMsg();
        Screen_WipeOut(1);
        Screen_ClearScreen();
        Parameter_InPl1Param(36, 0);
        Parameter_InPl1Param(37, 0);
        Parameter_InPl1Param(39, 0);
        }
    else {
        }
    }
