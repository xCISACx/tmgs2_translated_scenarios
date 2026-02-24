section "h4c_m6_000"{
    if (Parameter_GetSysParam(0) == 2){
        System_Call_GS2("H4C", "M6", 2);
        }
    else if (Parameter_GetSysParam(0) == 3){
        System_Call_GS2("H4C", "M6", 3);
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
