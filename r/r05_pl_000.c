section "r05_pl_000"{
    int var0;
    int var1;
    int var2;
    System_GlobalWork(2, 0, 0);
    if (Parameter_GetSysParam(0) == 3){
        var1 = 1;
        Music_PlayBGM(0, "MN_B_SC_820_000", 127, 40);
        }
    else {
        Music_PlayBGM(0, "MN_B_SC_810_000", 127, 40);
        }
    if (System_GlobalWork(0, 1) != 0){
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetSysParam(0) < 3){
            Background_Bg_GS2("BG_SC810_WI_2", #1, #1, 0);
            }
        else {
            Background_Bg_GS2("BG_SC820_WI_2", #1, #1, 0);
            }
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "It'll be time to exchange gifts\nsoon.");
        Message_Who(0);
        Message_MsgDisp("主人公", "It's getting closer to my turn.\nMy heart is pounding...\nI'm having trouble waiting...");
        Message_Sele_Man(7);
        switch (Message_Sele_Man_Result()){
            case 1:
            System_Call_GS2("R06", "M1", 0);
            break ;
            case 2:
            System_Call_GS2("R06", "M2", 0);
            break ;
            case 3:
            System_Call_GS2("R06", "M3", 0);
            break ;
            case 4:
            System_Call_GS2("R06", "M4", 0);
            break ;
            case 5:
            System_Call_GS2("R06", "M5", 0);
            break ;
            case 6:
            System_Call_GS2("R06", "M6", 0);
            break ;
            case 7:
            System_Call_GS2("R06", "M7", 0);
            break ;
            }
        }
    else {
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        }
    Music_StopBGM(0, 40);
    if (Parameter_GetSysParam(0) == 3){
        var0 = Parameter_ExtChar(1, 6, 4, 1, 8);
        switch (var0){
            case 0:
            Parameter_InCh1Param(1, 543, 48);
            break ;
            case 1:
            if (Parameter_GetPl1Param(26) != 1){
                Parameter_InCh1Param(1, 543, 48);
                var2 = 1;
                }
            else {
                System_Call_GS2("R08", "M1", 10);
                }
            break ;
            case 2:
            System_Call_GS2("R08", "M2", 0);
            Parameter_InCh1Param(1, 543, 48);
            break ;
            case 3:
            System_Call_GS2("R08", "M3", 0);
            Parameter_InCh1Param(1, 543, 48);
            break ;
            case 4:
            System_Call_GS2("R08", "M4", 0);
            Parameter_InCh1Param(1, 543, 48);
            break ;
            case 5:
            System_Call_GS2("R08", "M5", 0);
            Parameter_InCh1Param(1, 543, 48);
            break ;
            case 6:
            System_Call_GS2("R08", "M6", 0);
            Parameter_InCh1Param(1, 543, 48);
            break ;
            case 7:
            System_Call_GS2("R08", "M7", 0);
            Parameter_InCh1Param(1, 543, 48);
            break ;
            }
        }
    else {
        }
    Music_StopBGM(0, 40);
    System_GlobalWork(0, 0, 0);
    System_GlobalWork(1, 0, 0);
    if (System_GlobalWork(2, 1) == 1){
        }
    else {
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("R07", "PL", 0);
        if (var2 == 1){
            System_Call_GS2("R08", "M1", 10);
            }
        System_GlobalWork(2, 0, 0);
        }
    Message_CloseMsg();
    }
