section "h6c_g4_000"{
    if (Parameter_GetSysParam(0) == 1){
        System_Call_GS2("H6C", "G4", 1);
        }
    else if (Parameter_GetSysParam(0) == 2){
        System_Call_GS2("H6C", "G4", 2);
        }
    else if (Parameter_GetSysParam(0) == 3){
        System_Call_GS2("H6C", "G4", 3);
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Music_StopBGM(0, 40);
    Screen_ClearScreen();
    }
