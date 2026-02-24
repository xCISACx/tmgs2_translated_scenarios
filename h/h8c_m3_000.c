section "h8c_m3_000"{
    System_GlobalWork(1, 0, 0);
    if (Parameter_GetSysParam(0) == 1){
        System_Call_GS2("H8C", "M3", 1);
        }
    else if (Parameter_GetSysParam(0) == 2){
        System_Call_GS2("H8C", "M3", 2);
        }
    else if (Parameter_GetSysParam(0) == 3){
        System_Call_GS2("H8C", "M3", 3);
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
