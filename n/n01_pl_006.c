section "n01_pl_006"{
    int var0;
    int var1 = System_Randam(0, 100);
    int var2;
    System_GlobalWork(0, 0, 0);
    Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "The exam results have been\nannounced.\nI better take a look!");
    Message_CloseMsg();
    Graphic_Test_After();
    Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_Test_Check() == 0){
        Music_PlayBGM(0, "MN_N01_001_000", 127, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "Yay, I got first place!!\nI'm glad I made it to the top!");
        System_Wait(80);
        Parameter_AddCh1Param(#2, 61, 5);
        Parameter_AddCh1Param(#2, 60, 3);
        }
    else if (Parameter_Test_Check() == 1){
        Music_PlayBGM(0, "MN_N01_002_000", 127, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah! It was worth the studying.");
        System_Wait(80);
        Parameter_AddCh1Param(#2, 61, 3);
        Parameter_AddCh1Param(#2, 60, 1);
        }
    else if (Parameter_Test_Check() == 2){
        Music_PlayBGM(0, "MN_N01_003_000", 127, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "I guess this is okay?");
        System_Wait(60);
        Parameter_AddCh1Param(#2, 61, 0);
        Parameter_AddCh1Param(#2, 60, 0);
        }
    else if (Parameter_Test_Check() == 3){
        Music_PlayBGM(0, "MN_N01_004_000", 127, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "Wow... I should have tried harder.\nI did badly...");
        System_Wait(80);
        Parameter_AddCh1Param(#2, 61, #3);
        Parameter_AddCh1Param(#2, 60, #1);
        }
    else if (Parameter_Test_Check() == 4){
        Music_PlayBGM(0, "MN_N01_005_000", 127, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ugh...\nI have to take supplementary lessons\nfor a week starting next week...");
        System_Wait(80);
        Parameter_AddCh1Param(#2, 61, #5);
        Parameter_AddCh1Param(#2, 60, #3);
        }
    Music_StopBGM(0, 80);
    if (var1 <= 85){
        var0 = Parameter_ExtChar(0, 6, 2, 1, 8);
        switch (var0){
            case 0:
            var2 = 1;
            break ;
            case 1:
            System_Call_GS2("N02", "M1", 0);
            if (Parameter_Test_Check() <= 1){
                Parameter_AddCh1Param(1, 60, 3);
                }
            break ;
            case 2:
            System_Call_GS2("N02", "M2", 0);
            if (Parameter_Test_Check() >= 3){
                Parameter_AddCh1Param(2, 60, 3);
                }
            break ;
            case 3:
            System_Call_GS2("N02", "M3", 0);
            if (Parameter_Test_Check() <= 1){
                Parameter_AddCh1Param(3, 60, 3);
                }
            break ;
            case 4:
            System_Call_GS2("N02", "M4", 0);
            if (Parameter_Test_Check() <= 3){
                Parameter_AddCh1Param(4, 60, 3);
                }
            break ;
            case 5:
            System_Call_GS2("N02", "M5", 0);
            if (Parameter_Test_Check() <= 3){
                Parameter_AddCh1Param(5, 60, 3);
                }
            break ;
            case 6:
            System_Call_GS2("N02", "M6", 0);
            break ;
            case 7:
            System_Call_GS2("N02", "M7", 0);
            break ;
            }
        }
    if ((var1 > 85) || (var2 == 1)){
        var0 = Parameter_Max_Lady1();
        switch (var0){
            case 10:
            System_Call_GS2("N02", "G1", 0);
            if ((Parameter_Test_Check() == 3) || (Parameter_Test_Check(5) == 2)){
                Parameter_AddCh1Param(10, 60, 3);
                }
            break ;
            case 11:
            System_Call_GS2("N02", "G2", 0);
            if (Parameter_Test_Check() <= 1){
                Parameter_AddCh1Param(11, 60, 3);
                }
            break ;
            case 12:
            System_Call_GS2("N02", "G3", 0);
            if (Parameter_Test_Check() <= 3){
                Parameter_AddCh1Param(12, 60, 3);
                }
            break ;
            case 13:
            System_Call_GS2("N02", "G4", 0);
            if ((Parameter_Test_Check() == 1) || (Parameter_Test_Check(5) == 2)){
                Parameter_AddCh1Param(13, 60, 3);
                }
            break ;
            }
        }
    if ((Parameter_Test_Check() == 4) && (var0 != 7)){
        System_Call_GS2("N02", "M7", 0);
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
