section "w06_g1_000"{
    System_GlobalWork(0, 0, 0);
    System_GlobalWork(1, 0, 0);
    System_GlobalWork(2, 0, 0);
    System_GlobalWork(4, 0, 0);
    int var0;
    while (var0 < 3){
        if (var0 == 0){
            var0 = 1;
            Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
            Character_Chara_GS2(10, "G1_04F", 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("W0610000_J00000", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Is there a ride you want to get on?\nAnything is fine.");
            Message_Sele_Park2();
            System_GlobalWork(0, 0, Message_Get_Sele_Park2());
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("W0610000_J00100", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Sounds good. Well, let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            }
        else if (var0 == 1){
            var0 = 2;
            Character_Chara_GS2(10, "G1_04F", 0);
            Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("W0610000_J00200", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "What do you want to do next?");
            Message_Sele_Park2();
            System_GlobalWork(1, 0, Message_Get_Sele_Park2());
            Voice_PlayVoice("W0610000_J00300", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Oh, sounds good.\nWell then, let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            }
        else if (var0 == 2){
            var0 = 3;
            Character_Chara_GS2(10, "G1_04F", 0);
            Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("W0610000_J00400", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "One last ride.\nIt's nice that it isn't so crowded.");
            System_GlobalWork(2, 0, Message_Get_Sele_Park3());
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            }
        System_Call_GS2("W07", "G1", 0);
        System_GlobalWork(0, 0, 0);
        System_GlobalWork(1, 0, 0);
        System_GlobalWork(2, 0, 0);
        }
    System_Call_GS2("W10", "G1", 0);
    Music_StopBGM(0, 40);
    Background_Bg_GS2("BG_TR500_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    System_Call_GS2("W11", "M2", 0);
    if (Date_GetDateOption(8) == 1){
        System_Call_GS2("W11", "M1", 0);
        }
    else if (Date_GetDateOption(8) == 3){
        System_Call_GS2("W11", "M3", 0);
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
    System_Call_GS2("W12", "G1", 0);
    }
