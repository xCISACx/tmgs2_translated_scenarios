section "w06_g2_000"{
    System_GlobalWork(0, 0, 0);
    System_GlobalWork(1, 0, 0);
    System_GlobalWork(2, 0, 0);
    int var0;
    while (var0 < 3){
        if (var0 == 0){
            var0 = 1;
            Character_Chara_GS2(11, "G2_04F", 0);
            Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("W0611000_K00000", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Umm... What would you like to do?\nIs there something you would like to\nride?\n... Which do you think is best?");
            Message_Sele_Park2();
            System_GlobalWork(0, 0, Message_Get_Sele_Park2());
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("W0611000_K00100", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Very well.\nLet's head over there, then.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            }
        else if (var0 == 1){
            var0 = 2;
            Character_Chara_GS2(11, "G2_04F", 0);
            Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("W0611000_K00200", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "What's next...?");
            Message_Sele_Park2();
            System_GlobalWork(1, 0, Message_Get_Sele_Park2());
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("W0611000_K00300", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Very well. Let's go then.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            }
        else if (var0 == 2){
            var0 = 3;
            Character_Chara_GS2(11, "G2_04F", 0);
            Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("W0611000_K00400", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Oh...\nWell, the last one is chosen by\nprocess of elimination.");
            System_GlobalWork(0, 0, Message_Get_Sele_Park3());
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            }
        System_Call_GS2("W07", "G2", 0);
        System_GlobalWork(0, 0, 0);
        System_GlobalWork(1, 0, 0);
        System_GlobalWork(2, 0, 0);
        }
    System_Call_GS2("W10", "G2", 0);
    Music_StopBGM(0, 40);
    Background_Bg_GS2("BG_TR500_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    System_Call_GS2("W11", "M3", 0);
    if (Date_GetDateOption(8) == 1){
        System_Call_GS2("W11", "M1", 0);
        }
    else if (Date_GetDateOption(8) == 2){
        System_Call_GS2("W11", "M2", 0);
        }
    else if (Date_GetDateOption(8) == 4){
        System_Call_GS2("W11", "M4", 0);
        }
    else if (Date_GetDateOption(8) == 5){
        System_Call_GS2("W11", "M5", 0);
        }
    else if (Date_GetDateOption(8) == 6){
        System_Call_GS2("W11", "M6", 0);
        }
    System_Call_GS2("W12", "G2", 0);
    }
