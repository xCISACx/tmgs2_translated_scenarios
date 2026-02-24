section "h1b_pl_000"{
    int var0 = 0;
    if (System_GlobalWork(0, 1) == 0){
        if (Parameter_GetCh1Param(2, 25) != 1){
            Background_Bg_GS2("BG_SC700_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "Summer training camp starts today.\nI'll do my best!");
            Message_CloseMsg();
            Screen_WipeOut(21);
            }
        else {
            System_Call_GS2("H1B", "M2", 0);
            }
        System_GlobalWork(0, 2, 3);
        }
    else if (System_GlobalWork(0, 1) == 3){
        Music_StopBGM(0, 40);
        Screen_WipeOut(1);
        System_Wait(10);
        Screen_ClearScreen();
        if (Parameter_GetCh1Param(2, 25) != 1){
            System_Call_GS2("H9C", "S2", 0);
            }
        else {
            System_Call_GS2("H1C", "M2", 0);
            }
        System_GlobalWork(0, 2, 2);
        Music_PlayBGM(0, "MN_J_00_000_002", 127, 40);
        }
    else if (System_GlobalWork(0, 1) == 5){
        Music_StopBGM(0, 40);
        Screen_WipeOut(1);
        System_Wait(10);
        Screen_ClearScreen();
        if (Parameter_GetCh1Param(2, 25) != 1){
            System_Call_GS2("H1D", "PL", 0);
            }
        else {
            System_Call_GS2("H1D", "M2", 0);
            }
        System_Call_GS2("H1E", "PL", 0);
        System_GlobalWork(0, 0, 0);
        }
    }
