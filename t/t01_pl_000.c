section "t01_pl_000"{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    System_GlobalWork(0, 0, 0);
    System_GlobalWork(2, 0, 0);
    int var5 = Parameter_GetPl1Param(12);
    switch (var5){
        case 0:
        Background_Bg_GS2("BG_HO200_?_2", 1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_?_2", 1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_?_2", 1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_?_2", 1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(...\nThis is my last day of high school.\nI am graduating tomorrow...)");
    Message_CloseMsg();
    Screen_WipeOut(2);
    System_Wait(30);
    Background_Bg_GS2("BG_SC140_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_S_00_T01_000", 127, 40);
    Message_Who(0);
    Message_MsgDisp("　　　", "Graduation Day");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Background_Bg_GS2("BG_SC602_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Voice_PlayVoice("T0100000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Principal", "...\nFinally, I will leave you with some\nfinal words before you set off on\nyour journey.");
    Voice_PlayVoice("T0100000_W00100", #1, "");
    Message_Who(0);
    Message_MsgDisp("Principal", "Go forward, full of pride and with\nyour heads held high.\nYou will clear the way for your own\npath.");
    Voice_PlayVoice("T0100000_W00200", #1, "");
    Message_Who(0);
    Message_MsgDisp("Principal", "...\nIf you can go ahead with life on\ncalm days, then surely, you can go\nahead on those rough days.");
    Voice_PlayVoice("T0100000_W00300", #1, "");
    Message_Who(0);
    Message_MsgDisp("Principal", "However, do not be afraid.\nYou should already have the courage\nto take the first step.");
    Voice_PlayVoice("T0100000_W00400", #1, "");
    Message_Who(0);
    Message_MsgDisp("Principal", "Let your time spent here be the\nlighthouse in your life, and show\nthe path that you should be taking.");
    Voice_PlayVoice("T0100000_W00500", #1, "");
    Message_Who(0);
    Message_MsgDisp("Principal", "... Students.\nIt is finally time for you to\ndepart.");
    Voice_PlayVoice("T0100000_W00600", #1, "");
    Message_Who(0);
    Message_MsgDisp("Principal", "With your dreams, set sail towards\nthe vast ocean!");
    SoundEffect_PlayStream(2, "SS_T_00_183_S00");
    System_Wait(40);
    SoundEffect_StopStream(2, 60);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Message_CloseMsg();
    Background_Bg_GS2("BG_SC303_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "I won't be coming here for classes\nanymore...");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Background_Bg_GS2("BG_SC212_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Haha, all that talking in the\nhallway was fun.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Background_Bg_GS2("BG_SC202_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "This is my last time using this shoe\nlocker...");
    if (System_GlobalWork(18, 1) == 31){
        System_Call_GS2("T02", "MA", 1);
        }
    else {
        Message_CloseMsg();
        Screen_WipeOut(2);
        Background_Bg_GS2("BG_SC420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", ".........\nWhen I look back on these three\nyears, they really did go by in the\nblink of an eye...");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Background_Bg_GS2("BG_SC411_SP_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "... Thank you, Hanegasaki Academy.\nI'm glad that I attended this\nschool.");
    Message_CloseMsg();
    Music_StopBGM(0, 120);
    Screen_WipeOut(2);
    System_Wait(60);
    var2 = Parameter_ChkPlayer(0, 2);
    var4 = Parameter_ChkPlayer(0, 0);
    var1 = 0;
    if (var2 == 0){
        if (Parameter_ChkPlayer(0, 0) == 25){
            if (System_GlobalWork(18, 1) == 26){
                System_Call_GS2("T02", "MA", 0);
                var1 = 1;
                }
            }
        }
    if (var1 == 0){
        Background_Bg_GS2("BG_EX110_SP_1", #1, #1, 0);
        Screen_WipeIn(2);
        System_Wait(60);
        if (var2 != 0){
            if ((((var4 >= 1) && (var4 <= 8)) || (var4 == 26) || (var4 == 25))){
                System_Wait(10);
                Screen_WipeOut(2);
                Background_Bg_GS2("BG_ED013_SP_1", #1, #1, 1);
                System_Wait(1);
                Screen_WipeIn(2);
                Background_Check_BGScroll();
                Message_Who(0);
                Message_MsgDisp("主人公", "(The legend of the lighthouse...\nThe two people who believed that\nthey could meet here again...)");
                Message_Who(0);
                Message_MsgDisp("主人公", "(If I believe in it, does that mean\nI can also see that person again?)");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ah, the door is open... Perhaps...\nYeah, I'll go inside.)");
                Message_TextSpeed(8);
                Message_DispMsg(1);
                switch (var2){
                    case 1:
                    System_Call_GS2("T02", "M1", 210);
                    System_Call_GS2("T02", "M1", 220);
                    break ;
                    case 2:
                    System_Call_GS2("T02", "M2", 210);
                    System_Call_GS2("T02", "M2", 220);
                    break ;
                    case 3:
                    System_Call_GS2("T02", "M3", 210);
                    System_Call_GS2("T02", "M3", 220);
                    break ;
                    case 4:
                    System_Call_GS2("T02", "M4", 210);
                    System_Call_GS2("T02", "M4", 220);
                    break ;
                    case 5:
                    System_Call_GS2("T02", "M5", 210);
                    System_Call_GS2("T02", "M5", 220);
                    break ;
                    case 6:
                    System_Call_GS2("T02", "M6", 210);
                    System_Call_GS2("T02", "M6", 220);
                    break ;
                    case 7:
                    System_Call_GS2("T02", "M7", 210);
                    System_Call_GS2("T02", "M7", 220);
                    break ;
                    case 8:
                    System_Call_GS2("T02", "M8", 210);
                    System_Call_GS2("T02", "M8", 220);
                    break ;
                    }
                Screen_ClearScreen();
                Background_Bg_GS2("BG_BK000_CO_0", #1, #1, 0);
                Screen_WipeIn(3);
                Message_CloseMsg();
                Screen_WipeOut(2);
                }
            else {
                var2 = 0;
                }
            }
        if (var2 == 0){
            if (Parameter_ChkPlayer(0, 0) == 9){
                System_Call_GS2("T02", "M9", 0);
                var0 = 1;
                }
            switch (var0){
                case 0:
                if ((((var4 >= 1) && (var4 <= 8)) || (var4 == 26) || (var4 == 25))){
                    System_Wait(10);
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Background_Bg_GS2("BG_ED013_SP_1", #1, #1, 1);
                    System_Wait(1);
                    Screen_WipeIn(2);
                    Background_Check_BGScroll();
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(The legend of the lighthouse...\nThe two people who believed that\nthey could meet here again...)");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(If I believe in it, does that mean\nI can also see that person again?)");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah, the door is open... Perhaps...\nYeah, I'll go inside.)");
                    System_Wait(40);
                    Message_CloseMsg();
                    SoundEffect_PlayStream(3, "SE_LIGHTHOUSE_DOOR_01");
                    Background_Bg_GS2("BG_ED011_SP_1", #1, #1, 1);
                    System_Wait(40);
                    Background_Bg_GS2("BG_ED012_SP_1", #1, #1, 1);
                    System_Wait(40);
                    Screen_WipeOut(2);
                    System_Wait(50);
                    if (((Parameter_ChkPlayer(0, 0) >= 2) && (Parameter_ChkPlayer(0, 0) <= 8) || (Parameter_ChkPlayer(0, 0) == 26 || Parameter_ChkPlayer(0, 0) == 25))){
                        SoundEffect_PlayStream(3, "SS_T_00_033_M00");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(Huh? The painting over there...)");
                        Background_Bg_GS2("BG_ED017_SP_1", #1, #1, 1);
                        Screen_WipeIn(2);
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(The pitiful story about the mermaid\nand the young man...\nThen this lighthouse must be...)");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        SoundEffect_PlayStream(3, "SS_T_00_033_M00");
                        Background_Bg_GS2("BG_ED015_SP_1", #1, #1, 1);
                        System_Wait(20);
                        SoundEffect_PlayStream(3, "SS_T_00_051_M00");
                        Screen_WipeIn(2);
                        System_Wait(30);
                        System_Wait(40);
                        Background_Bg_GS2("BG_ED015_SP_1", #1, #1, 1);
                        System_Wait(50);
                        Background_Bg_GS2("BG_ED016_SP_1", #1, #1, 1);
                        System_Wait(40);
                        Screen_WipeOut(3);
                        Background_Bg_GS2("BG_ED000_SP_0", #1, #1, 1);
                        Screen_WipeIn(3);
                        Environment_PlayME(1, "SN_B_ED_020_480", 127, 0);
                        Message_Who(0);
                        Message_MsgDisp("主人公", "(A beautiful sunset...)");
                        Message_CloseMsg();
                        Environment_StopME(0, 0);
                        Screen_WipeOut(3);
                        Screen_ClearScreen();
                        Background_Bg_GS2("BG_ED000_SP_0", #1, #1, 0);
                        Environment_StopME(0, 40);
                        }
                    switch (Parameter_ChkPlayer(0, 0)){
                        case 1:
                        System_GlobalWork(2, 0, 1);
                        System_Call_GS2("T02", "M1", 0);
                        break ;
                        case 2:
                        System_GlobalWork(2, 0, 2);
                        System_Call_GS2("T02", "M2", 0);
                        break ;
                        case 3:
                        System_GlobalWork(2, 0, 3);
                        System_Call_GS2("T02", "M3", 0);
                        break ;
                        case 4:
                        System_GlobalWork(2, 0, 4);
                        System_Call_GS2("T02", "M4", 0);
                        break ;
                        case 5:
                        System_GlobalWork(2, 0, 5);
                        System_Call_GS2("T02", "M5", 0);
                        break ;
                        case 6:
                        System_GlobalWork(2, 0, 6);
                        System_Call_GS2("T02", "M6", 0);
                        break ;
                        case 7:
                        System_GlobalWork(2, 0, 7);
                        System_Call_GS2("T02", "M7", 0);
                        break ;
                        case 8:
                        System_GlobalWork(2, 0, 8);
                        System_Call_GS2("T02", "M8", 0);
                        break ;
                        case 25:
                        System_Call_GS2("T02", "MA", 0);
                        break ;
                        case 26:
                        System_Call_GS2("T02", "MB", 0);
                        break ;
                        }
                    if (System_GlobalWork(0, 1) == 1){
                        var2 = Parameter_ChkPlayer(0, 1);
                        if (var2 != 0){
                            Background_Bg_GS2("BG_ED013_SP_1", #1, #1, 1);
                            System_Wait(5);
                            Screen_WipeIn(3);
                            Message_DispMsg(0);
                            Message_CloseMsg();
                            Message_MessageWindow(0);
                            Message_Text_Color(0);
                            Screen_WipeOut(2);
                            Background_Bg_GS2("BG_EX150_CO_1", #1, #1, 0);
                            Screen_WipeIn(2);
                            System_Wait(120);
                            Message_TextSpeed(8);
                            Message_DispMsg(1);
                            }
                        switch (var2){
                            case 1:
                            System_Call_GS2("T02", "M1", 211);
                            System_Call_GS2("T02", "M1", 220);
                            break ;
                            case 2:
                            System_Call_GS2("T02", "M2", 211);
                            System_Call_GS2("T02", "M2", 220);
                            break ;
                            case 3:
                            System_Call_GS2("T02", "M3", 211);
                            System_Call_GS2("T02", "M3", 220);
                            break ;
                            case 4:
                            System_Call_GS2("T02", "M4", 211);
                            System_Call_GS2("T02", "M4", 220);
                            break ;
                            case 5:
                            System_Call_GS2("T02", "M5", 211);
                            System_Call_GS2("T02", "M5", 220);
                            break ;
                            case 6:
                            System_Call_GS2("T02", "M6", 211);
                            System_Call_GS2("T02", "M6", 220);
                            break ;
                            case 7:
                            System_Call_GS2("T02", "M7", 211);
                            System_Call_GS2("T02", "M7", 220);
                            break ;
                            case 8:
                            System_Call_GS2("T02", "M8", 211);
                            System_Call_GS2("T02", "M8", 220);
                            break ;
                            }
                        if (var2 == 0){
                            Message_TextSpeed(8);
                            switch (Parameter_ChkPlayer(0, 4)){
                                case 1:
                                System_Call_GS2("T02", "M1", 10);
                                break ;
                                case 2:
                                System_Call_GS2("T02", "M2", 10);
                                break ;
                                case 3:
                                System_Call_GS2("T02", "M3", 10);
                                break ;
                                case 4:
                                System_Call_GS2("T02", "M4", 10);
                                break ;
                                case 5:
                                System_Call_GS2("T02", "M5", 10);
                                break ;
                                case 6:
                                System_Call_GS2("T02", "M6", 10);
                                break ;
                                case 7:
                                System_Call_GS2("T02", "M7", 10);
                                break ;
                                case 8:
                                System_Call_GS2("T02", "M8", 10);
                                break ;
                                }
                            }
                        Screen_ClearScreen();
                        Background_Bg_GS2("BG_BK000_CO_0", #1, #1, 0);
                        Screen_WipeIn(3);
                        Screen_WipeOut(2);
                        }
                    else {
                        Screen_ClearScreen();
                        Background_Bg_GS2("BG_BK000_CO_0", #1, #1, 0);
                        Screen_WipeIn(3);
                        Screen_WipeOut(2);
                        }
                    }
                else {
                    System_Wait(10);
                    Screen_WipeOut(2);
                    Background_Bg_GS2("BG_ED010_SP_1", #1, #1, 1);
                    System_Wait(1);
                    Screen_WipeIn(2);
                    Background_Check_BGScroll();
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(The legend of the lighthouse...\nThe two people who believed that\nthey could meet here again...)");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(But it probably has nothing to do\nwith me....\nI'll leave.)");
                    Message_CloseMsg();
                    var2 = Parameter_ChkPlayer(0, 3);
                    if (var2 == 0){
                        switch (Parameter_ChkPlayer(0, 0)){
                            case 10:
                            System_Call_GS2("T02", "G1", 0);
                            break ;
                            case 11:
                            System_Call_GS2("T02", "G2", 0);
                            break ;
                            case 12:
                            System_Call_GS2("T02", "G3", 0);
                            break ;
                            case 13:
                            System_Call_GS2("T02", "G4", 0);
                            break ;
                            case 15:
                            Screen_WipeOut(2);
                            System_Call_GS2("T02", "S2", 0);
                            break ;
                            default :
                            Screen_WipeOut(2);
                            System_Call_GS2("T02", "S1", 0);
                            break ;
                            }
                        }
                    else {
                        Screen_WipeOut(2);
                        Background_Bg_GS2("BG_EX110_SP_1", #1, #1, 0);
                        switch (var2){
                            case 1:
                            System_Call_GS2("T02", "M1", 230);
                            break ;
                            case 2:
                            System_Call_GS2("T02", "M2", 230);
                            break ;
                            case 3:
                            System_Call_GS2("T02", "M3", 230);
                            break ;
                            case 4:
                            System_Call_GS2("T02", "M4", 230);
                            break ;
                            case 5:
                            System_Call_GS2("T02", "M5", 230);
                            break ;
                            case 6:
                            System_Call_GS2("T02", "M6", 230);
                            break ;
                            case 7:
                            System_Call_GS2("T02", "M7", 230);
                            break ;
                            case 8:
                            System_Call_GS2("T02", "M8", 230);
                            break ;
                            }
                        }
                    }
                break ;
                case 1:
                break ;
                }
            }
        }
    Environment_StopME(0, 40);
    Message_TextSpeed(#1);
    System_Call_GS2("T03", "PL", 0);
    }
