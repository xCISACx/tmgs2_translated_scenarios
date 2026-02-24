section "h3c_m7_000"{
    if (Parameter_ChkSpEvent("D01", "M7", 1) == 1){
        System_Call_GS2("D01", "M7", 1);
        }
    if (Parameter_GetSysParam(0) == 1){
        System_Call_GS2("H3C", "M7", 1);
        }
    else if (Parameter_GetSysParam(0) == 2){
        System_Call_GS2("H3C", "M7", 2);
        }
    else if (Parameter_GetSysParam(0) == 3){
        System_Call_GS2("H3C", "M7", 3);
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
