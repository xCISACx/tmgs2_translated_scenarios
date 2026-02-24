section "h7b_pl_000"{
    int var0 = 0;
    if (System_GlobalWork(0, 1) == 0){
        Background_Bg_GS2("BG_SC700_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "Camp starts today. I'll do my best!");
        Message_CloseMsg();
        Screen_WipeOut(21);
        System_GlobalWork(0, 2, 3);
        }
    else if (System_GlobalWork(0, 1) == 3){
        Music_StopBGM(0, 40);
        Screen_WipeOut(1);
        System_Wait(10);
        Screen_ClearScreen();
        System_Call_GS2("H9C", "S2", 0);
        System_GlobalWork(0, 2, 2);
        Music_PlayBGM(0, "MN_J_00_000_002", 127, 40);
        }
    else if (System_GlobalWork(0, 1) == 5){
        Music_StopBGM(0, 40);
        Screen_WipeOut(1);
        System_Wait(10);
        Screen_ClearScreen();
        System_Call_GS2("H7D", "PL", 0);
        System_Call_GS2("H7E", "PL", 0);
        System_GlobalWork(0, 0, 0);
        }
    }
