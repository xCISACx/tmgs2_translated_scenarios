section "h5c_m5_000"{
    if (Parameter_GetSysParam(0) == 1){
        System_Call_GS2("H5C", "M5", 1);
        }
    else if (Parameter_GetSysParam(0) == 2){
        System_Call_GS2("H5C", "M5", 2);
        }
    else if (Parameter_GetSysParam(0) == 3){
        System_Call_GS2("H5C", "M5", 3);
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
