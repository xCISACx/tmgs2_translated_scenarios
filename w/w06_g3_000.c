section "w06_g3_000"{
    System_GlobalWork(0, 0, 0);
    System_GlobalWork(1, 0, 0);
    System_GlobalWork(2, 0, 0);
    int var0;
    while (var0 < 3){
        if (var0 == 0){
            var0 = 1;
            Character_Chara_GS2(12, "G3_04F", 0);
            Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("W0612000_L00000", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Yes, yes. It's survey time.\nWhich one should we ride first?");
            Message_Sele_Park2();
            System_GlobalWork(0, 0, Message_Get_Sele_Park2());
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("W0612000_L00100", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Got it. Well, let's go!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            }
        else if (var0 == 1){
            var0 = 2;
            Character_Chara_GS2(12, "G3_04F", 0);
            Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("W0612000_L00200", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Umm, what should we ride next?");
            Message_Sele_Park2();
            System_GlobalWork(1, 0, Message_Get_Sele_Park2());
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("W0612000_L00300", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Oh, I guess. Let's do that!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            }
        else if (var0 == 2){
            var0 = 3;
            Character_Chara_GS2(12, "G3_04F", 0);
            Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("W0612000_L00400", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "In that case, the last ride is none\nother than that!\nLet's go!!");
            System_GlobalWork(2, 0, Message_Get_Sele_Park3());
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            }
        System_Call_GS2("W07", "G3", 0);
        System_GlobalWork(0, 0, 0);
        System_GlobalWork(1, 0, 0);
        System_GlobalWork(2, 0, 0);
        }
    System_Call_GS2("W10", "G3", 0);
    Music_StopBGM(0, 40);
    Background_Bg_GS2("BG_TR500_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    System_Call_GS2("W11", "M4", 0);
    if (Date_GetDateOption(8) == 1){
        System_Call_GS2("W11", "M1", 0);
        }
    else if (Date_GetDateOption(8) == 2){
        System_Call_GS2("W11", "M2", 0);
        }
    else if (Date_GetDateOption(8) == 3){
        System_Call_GS2("W11", "M3", 0);
        }
    else if (Date_GetDateOption(8) == 5){
        System_Call_GS2("W11", "M5", 0);
        }
    else if (Date_GetDateOption(8) == 6){
        System_Call_GS2("W11", "M6", 0);
        }
    System_Call_GS2("W12", "G3", 0);
    }
