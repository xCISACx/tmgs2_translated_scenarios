section "h1c_m2_000"{
    if (Parameter_GetSysParam(0) == 1){
        System_Call_GS2("H1C", "M2", 1);
        }
    else if (Parameter_GetSysParam(0) == 2){
        System_Call_GS2("H1C", "M2", 2);
        }
    else if (Parameter_GetSysParam(0) == 3){
        System_Call_GS2("H1C", "M2", 3);
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
