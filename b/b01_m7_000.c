section "b01_m7_000"{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4 = Date_Date_Trable1();
    int var5;
    int var6;
    int var7;
    int var8;
    int var9;
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
            Run_Kigae(0);
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
    if (Date_GetDateOption(5)){
        var1 = Date_Get_Date_Place2();
        var0 = System_Randam(0, 100);
        Background_Bg_GS2("待ち合わせ場所背景", #1, #1, 0, 0, Date_Date_Data(2));
        Screen_WipeIn(2);
        if (var0 <= 50){
            Message_Who(0);
            Message_MsgDisp("主人公", "Great! I was on time.");
            Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(7, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
            Voice_PlayVoice("B0107000_G00000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Good morning. Everyone has gathered.\nWell then, we're off.");
            }
        else if (var0 >= 51){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Everyone has gathered already, but\nSensei isn't here, yet...)");
            Character_Chara_GS2(7, "M7_17F", 0);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
            Voice_PlayVoice("B0107000_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Good morning.\nEveryone is pretty early, hmm?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Sensei is late.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0107000_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... Huh? I'm sorry, everyone.");
            SoundEffect_PlayStream(2, "SE_NS_AL_910_003000");
            Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0107000_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Well then, we're off.");
            }
        Message_CloseMsg();
        SoundEffect_StopStream(2, 20);
        Screen_WipeOut(2);
        Screen_ClearScreen();
        var5 = 1;
        }
    else {
        var6 = 80;
        var7 = 20;
        var9 = 0;
        if (Parameter_ChkSpEvent("B05", "M7", 2) == 1){
            System_Call_GS2("B05", "M7", 2);
            var3 = 1;
            var9 = 1;
            }
        var1 = Date_Get_Date_Place2();
        if (var1 == 6){
            if (Parameter_ChkSpEvent("B05", "M7", 1) == 1){
                System_Call_GS2("B05", "M7", 1);
                var3 = 1;
                var8 = 1;
                }
            }
        if (var9 == 0){
            if ((var4 == 1) && (var8 == 0)){
                System_GlobalWork(2, 0, 7);
                System_Call_GS2("B00", "PL", 0);
                }
            }
        if ((System_GlobalWork(7, 1) == 0 && var9 == 0)){
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
                Message_MsgDisp("主人公", "(I ran a little late.\n｛Wakaouji＊＊｝ is... Oh!\nHe's here already!)");
                Message_Who(0);
                Message_MsgDisp("主人公", "I'm sorry. I'm late!");
                Character_Chara_GS2(7, "M7_06F", 0, 1, 1);
                Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(7, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0107000_G00400", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "It's fine. Calm down.\nYou might trip.");
                }
            else if ((var0 >= var6) && (var3 == 0)){
                Message_Who(0);
                Message_MsgDisp("主人公", "(It seems like ｛Wakaouji＊＊｝\nhasn't come, yet...)");
                var2 = Date_Date_Nanpa();
                if (var2 == 1){
                    System_Call_GS2("B11", "M7", 0);
                    }
                else if (var2 == 0){
                    Character_Chara_GS2(7, "M7_06F", 0);
                    Character_ChFace(0, 2, 2);
                    Character_BlinkStart(7, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
                    Voice_PlayVoice("B0107000_G00500", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "*Pant* *Pant* ... I'm late.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Sensei, you're late, you know?");
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("B0107000_G00600", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "I'm so sorry. The cat...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Cat?");
                    Character_Chara_GS2(7, "M7_06F", 0, 1, 1);
                    Character_ChFace(1, 2, 0);
                    Character_ChFace(1, 3, 3);
                    Voice_PlayVoice("B0107000_G00700", #1, "");
                    Message_Who(7);
                    Message_MsgDisp("Wakaouji", "No, it's nothing.\nNow then, let's get going.");
                    }
                }
            }
        }
    if (System_GlobalWork(7, 1) == 0){
        if ((var2 == 0) && (var5 == 0) && (var3 == 0)){
            System_Call_GS2("B02", "M7", 0);
            }
        else {
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            }
        if (var8 == 0){
            var1 = Date_Get_Date_Place2();
            Music_StopBGM(0, 40);
            switch (var1){
                case 0:
                break ;
                case 1:
                System_Call_GS2("B03", "M7", 20);
                break ;
                case 2:
                System_Call_GS2("B03", "M7", 30);
                break ;
                case 3:
                break ;
                case 4:
                System_Call_GS2("B03", "M7", 50);
                break ;
                case 5:
                System_Call_GS2("B03", "M7", 51);
                break ;
                case 6:
                System_Call_GS2("B03", "M7", 200);
                break ;
                case 7:
                break ;
                case 8:
                System_Call_GS2("B03", "M7", 70);
                break ;
                case 9:
                System_Call_GS2("B03", "M7", 80);
                break ;
                case 10:
                System_Call_GS2("B03", "M7", 90);
                break ;
                case 11:
                break ;
                case 12:
                break ;
                case 13:
                break ;
                case 14:
                break ;
                case 15:
                break ;
                case 16:
                System_Call_GS2("B03", "M7", 150);
                break ;
                case 17:
                break ;
                case 18:
                break ;
                case 19:
                System_Call_GS2("B03", "M7", 180);
                Screen_WipeOut(2);
                Character_Chara_GS2(7, "NON");
                Environment_PauseME(0);
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Environment_ResumeME(0);
                Character_Chara_GS2(7, "M7_17F", 0);
                Screen_WipeIn(2);
                break ;
                case 20:
                System_Call_GS2("B03", "M7", 190);
                break ;
                case 21:
                break ;
                case 22:
                System_Call_GS2("B03", "M7", 220);
                break ;
                case 23:
                break ;
                case 24:
                break ;
                case 25:
                break ;
                }
            }
        var1 = Date_Get_Date_Place2();
        switch (var1){
            case 0:
            break ;
            case 1:
            if (Date_GetDateOption(5)){
                Character_Chara_GS2(7, "M7_17F", 0, 1, 1, 5);
                Background_Bg_GS2("BG_WF200_?_1", 1, #1, 0);
                Screen_WipeIn(2);
                }
            else {
                Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 5);
                Background_Bg_GS2("BG_WF200_?_1", 1, #1, 0);
                Screen_WipeIn(2);
                }
            break ;
            case 2:
            Character_Chara_GS2(7, "M7_17F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_WF300_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 3:
            break ;
            case 4:
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_WF500_CO_1", #1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 5:
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_WF500_LI_2", #1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 6:
            if (Date_GetDateOption(5)){
                Character_Chara_GS2(7, "M7_17F", 0, 1, 1, 5);
                Background_Bg_GS2("BG_WF530_SU_1", #1, #1, 0);
                Screen_WipeIn(2);
                }
            else {
                Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 5);
                if (var8 == 1){
                    Background_Bg_GS2("BG_EX180_SU_1", #1, #1, 0);
                    Screen_WipeIn(2);
                    }
                else if (Date_ChkDateOpen(16) == 1){
                    Background_Bg_GS2("BG_WF540_WI_1", #1, #1, 0);
                    Screen_WipeIn(2);
                    }
                }
            break ;
            case 7:
            break ;
            case 8:
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP000_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 9:
            Character_Chara_GS2(7, "M7_17F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP300_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 10:
            Character_Chara_GS2(7, "M7_17F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_FP400_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 11:
            break ;
            case 12:
            break ;
            case 13:
            break ;
            case 14:
            break ;
            case 15:
            break ;
            case 16:
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 5);
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
            break ;
            case 18:
            break ;
            case 19:
            break ;
            case 20:
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_TR100_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 21:
            break ;
            case 22:
            Character_Chara_GS2(7, "M7_17F", 0, 1, 1, 5);
            Background_Bg_GS2("BG_TR400_?_1", 1, #1, 0);
            Screen_WipeIn(2);
            break ;
            case 23:
            break ;
            case 24:
            break ;
            case 25:
            break ;
            }
        System_Call_GS2("B06", "M7", 0);
        System_Call_GS2("B70", "M7", 0);
        Parameter_AddCh1Param(7, 64, 1);
        if (Date_GetDateOption(5)){
            System_GlobalWork(24, 2, 1);
            }
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
