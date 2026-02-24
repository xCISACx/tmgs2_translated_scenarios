section "w06_g4_000"{
    System_GlobalWork(0, 0, 0);
    System_GlobalWork(1, 0, 0);
    System_GlobalWork(2, 0, 0);
    int var0;
    while (var0 < 3){
        if (var0 == 0){
            var0 = 1;
            Character_Chara_GS2(13, "G4_04F", 0);
            Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("", #1, "W0613000_M00000");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "｛主人公｝.\nHey, what should we ride first?");
            Message_Sele_Park2();
            System_GlobalWork(0, 0, Message_Get_Sele_Park2());
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(13, 3, (#1));
            Voice_PlayVoice("W0613000_M00100", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Nice. Let's do it!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            }
        else if (var0 == 1){
            var0 = 2;
            Character_Chara_GS2(13, "G4_04F", 0);
            Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("W0613000_M00200", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Well, what do you want to do next?");
            Message_Sele_Park2();
            System_GlobalWork(1, 0, Message_Get_Sele_Park2());
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(13, 3, (#1));
            Voice_PlayVoice("W0613000_M00300", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Okay, good! Let's do it!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            }
        else if (var0 == 2){
            var0 = 3;
            Character_Chara_GS2(13, "G4_04F", 0);
            Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("W0613000_M00400", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Well, that one is the last one,\nisn't it?\n*Giggles*");
            System_GlobalWork(0, 0, Message_Get_Sele_Park3());
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            }
        System_Call_GS2("W07", "G4", 0);
        System_GlobalWork(0, 0, 0);
        System_GlobalWork(1, 0, 0);
        System_GlobalWork(2, 0, 0);
        }
    System_Call_GS2("W10", "G4", 0);
    Music_StopBGM(0, 40);
    Background_Bg_GS2("BG_TR500_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    System_Call_GS2("W11", "M5", 0);
    if (Date_GetDateOption(8) == 1){
        System_Call_GS2("W11", "M1", 0);
        }
    else if (Date_GetDateOption(8) == 2){
        System_Call_GS2("W11", "M2", 0);
        }
    else if (Date_GetDateOption(8) == 3){
        System_Call_GS2("W11", "M3", 0);
        }
    else if (Date_GetDateOption(8) == 4){
        System_Call_GS2("W11", "M4", 0);
        }
    else if (Date_GetDateOption(8) == 6){
        System_Call_GS2("W11", "M6", 0);
        }
    System_Call_GS2("W12", "G4", 0);
    }
